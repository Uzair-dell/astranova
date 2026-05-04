//! Type inference for Astranova expressions.
//! Walks the AST and returns the type of every node, performing unit unification.
//! Phase 6: Sovereign constant (𝕌) typing – Reject(𝕌) is a type error.

use std::collections::HashMap;
use crate::ast::{Expr, BinOp, UnOp};
use crate::typecheck::{Type, Unit};
use crate::typecheck::unify::unify;

/// Infer the type of an expression given a variable environment.
pub fn infer(expr: &Expr, env: &HashMap<String, Type>) -> Result<Type, String> {
    match expr {
        Expr::Number(_) => Ok(Type::Scalar(None)),

        Expr::StringLiteral(_) => Ok(Type::Scalar(None)),

        Expr::Variable(name) => env.get(name)
            .cloned()
            .ok_or_else(|| format!("Undefined variable: {}", name)),

        Expr::GreekLetter(g) => match g.as_str() {
            "\\pi" | "\\tau" | "\\phi" => Ok(Type::Scalar(None)),
            _ => Ok(Type::Scalar(None)),
        },

        Expr::BinaryOp { op, left, right } => {
            let t_left = infer(left, env)?;
            let t_right = infer(right, env)?;
            infer_binary(op, &t_left, &t_right)
        }

        Expr::UnaryOp { op, operand } => {
            let t_operand = infer(operand, env)?;
            infer_unary(op, &t_operand)
        }

        Expr::Frac { num, den } => {
            let t_num = infer(num, env)?;
            let t_den = infer(den, env)?;
            divide_types(&t_num, &t_den)
        }

        Expr::Pow { base, exp } => {
            let t_base = infer(base, env)?;
            let t_exp = infer(exp, env)?;
            ensure_dimensionless(&t_exp)?;
            Ok(t_base)
        }

        Expr::Sum { body, .. } | Expr::Prod { body, .. } => {
            let t_body = infer(body, env)?;
            ensure_scalar(t_body)
        }

        Expr::Integral { integrand, .. } => infer(integrand, env),

        Expr::Limit { body, .. } => infer(body, env),

        Expr::Cases { branches } => {
            let mut iter = branches.iter().map(|(val, _)| infer(val, env));
            let first = iter.next().ok_or("Empty cases expression")??;
            for next in iter {
                let next = next?;
                unify_types(&first, &next)?;
            }
            Ok(first)
        }

        Expr::Tuple(_) => Err("Tuples are not yet fully typed".to_string()),
        Expr::List(_) => Err("Lists are not yet fully typed".to_string()),
        Expr::Assign { .. } => Err("Assignment not supported in pure expressions".to_string()),
        Expr::Block(_) => Err("Block expressions not supported in pure expressions".to_string()),

        Expr::WorldPragma(_) => Ok(Type::Scalar(None)),
                Expr::Parallel(exprs) => {
            // For now, we don't type‑check parallel expressions deeply.
            // In the future they will produce a product type.
            if exprs.is_empty() {
                Ok(Type::Scalar(None))
            } else {
                infer(&exprs[0], env)
            }
        },
        Expr::LetIn { bindings, body } => {
            // Temporarily add bindings to the environment
            let mut extended_env = env.clone();
            for (name, expr) in bindings {
                let t = infer(expr, env)?;
                extended_env.insert(name.clone(), t);
            }
            infer(body, &extended_env)
        },
        Expr::FunctionRef(_) => Ok(Type::Scalar(None)),
        Expr::FunctionCall { name, args } => {
            if name == "Reject" {
                if args.is_empty() {
                    return Err("Reject expects exactly one argument".to_string());
                }
                let arg_type = infer(&args[0], env)?;
                if let Type::Sovereign = arg_type {
                    return Err("Type error: cannot reject the Sovereign (𝕌)".to_string());
                }
                return Ok(Type::Scalar(None));
            }
            Err(format!("Function calls not yet supported: {}", name))
        }
    }
}

// ---------- Helpers ----------

fn ensure_scalar(t: Type) -> Result<Type, String> {
    if let Type::Scalar(_) = t {
        Ok(t)
    } else {
        Err(format!("Expected scalar type, got {:?}", t))
    }
}

fn ensure_dimensionless(t: &Type) -> Result<(), String> {
    match t {
        Type::Scalar(Some(unit)) if !unit.is_empty() => {
            Err(format!("Expected dimensionless, got unit {:?}", unit))
        }
        Type::Scalar(_) => Ok(()),
        _ => Err(format!("Expected Scalar, got {:?}", t)),
    }
}

fn unify_types(a: &Type, b: &Type) -> Result<Type, String> {
    match (a, b) {
        (Type::Scalar(ua), Type::Scalar(ub)) => {
            let merged = unify(ua.as_ref(), ub.as_ref())?;
            Ok(Type::Scalar(merged))
        }
        _ => Err(format!("Type mismatch: {:?} vs {:?}", a, b)),
    }
}

fn multiply_types(a: &Type, b: &Type) -> Result<Type, String> {
    match (a, b) {
        (Type::Scalar(ua), Type::Scalar(ub)) => {
            let merged = combine_units(ua, ub, |ea, eb| ea + eb);
            Ok(Type::Scalar(merged))
        }
        _ => Err(format!("Multiplication not supported for {:?} * {:?}", a, b)),
    }
}

fn divide_types(a: &Type, b: &Type) -> Result<Type, String> {
    match (a, b) {
        (Type::Scalar(ua), Type::Scalar(ub)) => {
            let merged = combine_units(ua, ub, |ea, eb| ea - eb);
            Ok(Type::Scalar(merged))
        }
        _ => Err(format!("Division not supported for {:?} / {:?}", a, b)),
    }
}

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
            merged.retain(|_, v| *v != 0);
            if merged.is_empty() { None } else { Some(merged) }
        }
    }
}

fn infer_binary(op: &BinOp, left: &Type, right: &Type) -> Result<Type, String> {
    match op {
        BinOp::Add | BinOp::Sub => unify_types(left, right),
        BinOp::Mul | BinOp::Dot | BinOp::Cross => multiply_types(left, right),
        BinOp::Div => divide_types(left, right),
        BinOp::Pow => {
            ensure_dimensionless(right)?;
            Ok(left.clone())
        }
        BinOp::Eq | BinOp::Neq | BinOp::Lt | BinOp::Gt | BinOp::Le | BinOp::Ge => {
            unify_types(left, right)?;
            Ok(Type::Scalar(None))
        }
        BinOp::And | BinOp::Or => {
            ensure_dimensionless(left)?;
            ensure_dimensionless(right)?;
            Ok(Type::Scalar(None))
        }
    }
}

fn infer_unary(op: &UnOp, operand: &Type) -> Result<Type, String> {
    match op {
        UnOp::Neg | UnOp::Pos => Ok(operand.clone()),
        UnOp::Sin | UnOp::Cos => {
            ensure_dimensionless(operand)?;
            Ok(Type::Scalar(None))
        }
        UnOp::Log | UnOp::Sqrt => {
            ensure_dimensionless(operand)?;
            Ok(Type::Scalar(None))
        }
        UnOp::Abs => Ok(operand.clone()),
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
        use crate::ast::UnOp;
        let expr = Expr::UnaryOp {
            op: UnOp::Sin,
            operand: Box::new(Expr::Number(0.0)),
        };
        let result = infer(&expr, &empty_env());
        assert_eq!(result, Ok(Type::Scalar(None)));
    }

    #[test]
    fn reject_sovereign_fails() {
        let mut env = HashMap::new();
        env.insert("𝕌".to_string(), Type::Sovereign);

        let call = Expr::FunctionCall {
            name: "Reject".to_string(),
            args: vec![Expr::Variable("𝕌".to_string())],
        };
        let result = infer(&call, &env);
        assert!(result.is_err());
        assert!(result.unwrap_err().contains("cannot reject the Sovereign"));
    }

    #[test]
    fn reject_non_sovereign_passes() {
        let mut env = HashMap::new();
        env.insert("user".to_string(), Type::Scalar(None));

        let call = Expr::FunctionCall {
            name: "Reject".to_string(),
            args: vec![Expr::Variable("user".to_string())],
        };
        let result = infer(&call, &env);
        assert!(result.is_ok());
    }
}