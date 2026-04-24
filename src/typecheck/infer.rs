//! Type inference for Astranova expressions.
//! Walks the AST and returns the type of every node, performing unit unification.

use std::collections::HashMap;
use crate::ast::{Expr, BinOp, UnOp};
use crate::typecheck::{Type, Unit};                     // corrected import
use crate::typecheck::unify::unify;

/// Infer the type of an expression given a variable environment.
pub fn infer(expr: &Expr, env: &HashMap<String, Type>) -> Result<Type, String> {
    match expr {
        // Literals
        Expr::Number(_) => Ok(Type::Scalar(None)),       // dimensionless by default

        // Variable lookup
        Expr::Variable(name) => env.get(name)
            .cloned()
            .ok_or_else(|| format!("Undefined variable: {}", name)),

        // Greek letters (built‑in constants)
        Expr::GreekLetter(g) => match g.as_str() {
            "\\pi" | "\\tau" | "\\phi" => Ok(Type::Scalar(None)), // pure numbers
            _ => Ok(Type::Scalar(None)), // treat others as dimensionless for now
        },

        // Binary operations
        Expr::BinaryOp { op, left, right } => {
            let t_left = infer(left, env)?;
            let t_right = infer(right, env)?;
            infer_binary(op, &t_left, &t_right)
        }

        // Unary operations
        Expr::UnaryOp { op, operand } => {
            let t_operand = infer(operand, env)?;
            infer_unary(op, &t_operand)
        }

        // Fraction: both numerator and denominator must have the same type, result is that type
        Expr::Frac { num, den } => {
            let t_num = infer(num, env)?;
            let t_den = infer(den, env)?;
            // Division: units subtract
            divide_types(&t_num, &t_den)
        }

        // Summation / Product: body must be Scalar, index is dimensionless
        Expr::Sum { body, .. } | Expr::Prod { body, .. } => {
            let t_body = infer(body, env)?;
            ensure_scalar(t_body)
        }

        // Integral: integrand must be a function of the integration variable,
        // but for now just return the type of the integrand
        Expr::Integral { integrand, .. } => infer(integrand, env),

        // Cases: all branches must have the same type
        Expr::Cases { branches } => {
            let mut iter = branches.iter().map(|(val, _)| infer(val, env));
            let first = iter.next().ok_or("Empty cases expression")??;
            for next in iter {
                let next = next?;
                unify_types(&first, &next)?;
            }
            Ok(first)
        }

        // Tuples / Lists: not implemented yet
        Expr::Tuple(_) => Ok(Type::Scalar(None)),
        Expr::List(_) => Ok(Type::Scalar(None)),

        // World pragma: not type‑checked here
        Expr::WorldPragma(_) => Ok(Type::Scalar(None)),

        // These should have been desugared or not appear here
        Expr::FunctionCall { .. } => Err("Function calls not yet supported".to_string()),
        _ => Err(format!("Type inference not implemented for {:?}", expr)),
    }
}

/// Infer type of binary operation.
fn infer_binary(op: &BinOp, left: &Type, right: &Type) -> Result<Type, String> {
    match op {
        BinOp::Add | BinOp::Sub => {
            // Both sides must be the same type (including units)
            unify_types(left, right)
        }
        BinOp::Mul | BinOp::Dot | BinOp::Cross => {
            // Units add
            multiply_types(left, right)
        }
        BinOp::Div => {
            divide_types(left, right)
        }
        BinOp::Pow => {
            // Exponent must be dimensionless
            ensure_dimensionless(right)?;
            // Base can be any scalar? For now, just return base type.
            Ok(left.clone())
        }
        BinOp::Eq | BinOp::Neq | BinOp::Lt | BinOp::Gt | BinOp::Le | BinOp::Ge => {
            // Comparison: both sides same type, result is dimensionless Scalar
            unify_types(left, right)?;
            Ok(Type::Scalar(None))
        }
        BinOp::And | BinOp::Or => {
            // Both must be dimensionless scalars
            ensure_dimensionless(left)?;
            ensure_dimensionless(right)?;
            Ok(Type::Scalar(None))
        }
    }
}

/// Infer type of unary operation.
fn infer_unary(op: &UnOp, operand: &Type) -> Result<Type, String> {
    match op {
        UnOp::Neg | UnOp::Pos => {
            // Sign does not change type
            Ok(operand.clone())
        }
        UnOp::Sin | UnOp::Cos => {
            // Trigonometric functions: argument must be dimensionless, result dimensionless
            ensure_dimensionless(operand)?;
            Ok(Type::Scalar(None))
        }
        UnOp::Log | UnOp::Sqrt => {
            // Argument must be dimensionless? Actually sqrt of an area? For now require dimensionless.
            // Thus the result is also dimensionless.
            ensure_dimensionless(operand)?;
            Ok(Type::Scalar(None))
        }
        UnOp::Abs => {
            // Absolute value: same type as operand
            Ok(operand.clone())
        }
    }
}

// ---------- Helper functions for unit arithmetic ----------

/// Ensure a type is a Scalar (with any unit), returning the scalar type.
fn ensure_scalar(t: Type) -> Result<Type, String> {
    if let Type::Scalar(_) = t {
        Ok(t)
    } else {
        Err(format!("Expected scalar type, got {:?}", t))
    }
}

/// Ensure a type is dimensionless Scalar.
fn ensure_dimensionless(t: &Type) -> Result<(), String> {
    match t {
        Type::Scalar(Some(unit)) if !unit.is_empty() => {
            Err(format!("Expected dimensionless, got unit {:?}", unit))
        }
        Type::Scalar(_) => Ok(()),
        _ => Err(format!("Expected Scalar, got {:?}", t)),
    }
}

/// Unify two types (used for addition/subtraction/comparison).
fn unify_types(a: &Type, b: &Type) -> Result<Type, String> {
    match (a, b) {
        (Type::Scalar(ua), Type::Scalar(ub)) => {
            let merged = unify(ua.as_ref(), ub.as_ref())?;
            Ok(Type::Scalar(merged))
        }
        // Other combinations are errors for now
        _ => Err(format!("Type mismatch: {:?} vs {:?}", a, b)),
    }
}

/// Multiply two types: for scalars, unit maps are merged (exponents added).
fn multiply_types(a: &Type, b: &Type) -> Result<Type, String> {
    match (a, b) {
        (Type::Scalar(ua), Type::Scalar(ub)) => {
            let merged = combine_units(ua, ub, |ea, eb| ea + eb);
            Ok(Type::Scalar(merged))
        }
        _ => Err(format!("Multiplication not supported for {:?} * {:?}", a, b)),
    }
}

/// Divide two types: for scalars, unit exponents are subtracted.
fn divide_types(a: &Type, b: &Type) -> Result<Type, String> {
    match (a, b) {
        (Type::Scalar(ua), Type::Scalar(ub)) => {
            let merged = combine_units(ua, ub, |ea, eb| ea - eb);
            Ok(Type::Scalar(merged))
        }
        _ => Err(format!("Division not supported for {:?} / {:?}", a, b)),
    }
}

/// Combine two optional unit maps using a function on exponents for keys present in both.
/// Keys unique to one map are kept as‑is (with exponent from that map).
fn combine_units(
    a: &Option<Unit>,
    b: &Option<Unit>,
    combine_fn: fn(i32, i32) -> i32,
) -> Option<Unit> {
    match (a, b) {
        (None, None) => None,
        (Some(u), None) => Some(u.clone()),
        (None, Some(u)) => Some(u.clone()),
        (Some(au), Some(bu)) => {
            let mut merged = au.clone();
            for (key, &b_exp) in bu {
                merged
                    .entry(key.clone())
                    .and_modify(|e| *e = combine_fn(*e, b_exp))
                    .or_insert(b_exp);
            }
            // Remove entries with exponent zero
            merged.retain(|_, v| *v != 0);
            if merged.is_empty() { None } else { Some(merged) }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn empty_env() -> HashMap<String, Type> {
        HashMap::new()
    }

    fn infer_expr(src: &str) -> Result<Type, String> {
        let tokens = crate::lexer::lex(src);
        let mut parser = crate::parser::Parser::new(tokens);
        let prog = parser.parse_program();
        // Take the body of the first definition
        match &prog[0] {
            crate::ast::Definition::Let { body, .. } => infer(body, &empty_env()),
            _ => panic!("Expected Let"),
        }
    }

    #[test]
    fn number_is_dimensionless() {
        let t = infer_expr(r"\let x = 5");
        assert_eq!(t, Ok(Type::Scalar(None)));
    }

    #[test]
    fn addition_dimensionless() {
        let t = infer_expr(r"\let x = 1 + 2");
        assert_eq!(t, Ok(Type::Scalar(None)));
    }

        #[test]
    fn sin_dimensionless() {
        // Build UnaryOp::Sin( Number(0) ) directly
        let expr = Expr::UnaryOp {
            op: UnOp::Sin,
            operand: Box::new(Expr::Number(0.0)),
        };
        let result = infer(&expr, &empty_env());
        assert_eq!(result, Ok(Type::Scalar(None)));
    }
}