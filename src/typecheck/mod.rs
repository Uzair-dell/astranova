//! Astranova Type Checker – Physics Hat, Security Tokens, and 𝕌.
//! Extended: \let, \sum, \cases, Assignment, Subscript, concat, emit_line, flush_lines.

use crate::ast::{Expr, BinOp, Type, Definition};
use std::collections::{HashMap, HashSet};

pub type TypeEnv = HashMap<String, Type>;
pub type TokenEnv = HashSet<String>;
pub type FnEnv = HashMap<String, (Vec<String>, Expr)>;   // name → (params, body)

#[derive(Debug, Clone)]
pub enum TypeError {
    UnboundVariable(String),
    UnitMismatch { expected: Type, found: Type },
    MissingToken { needed: String },
    UnsupportedOperation(String),
    TypeMismatch { expected: Type, found: Type },
    NotScalar { found: Type },
    IllegalSovereignRejection,
    NotAnArray(String),
    ArrayIndexNotScalar,
    FunctionArity { expected: usize, found: usize },
    UndefinedFunction(String),
}

pub fn infer(
    expr: &Expr,
    env: &TypeEnv,
    tokens: &TokenEnv,
    fns: &FnEnv,
) -> Result<Type, TypeError> {
    match expr {
        Expr::Number(_) => Ok(Type::Scalar(None)),
        Expr::StringLiteral(_) => Ok(Type::String),

        Expr::Variable(name) => env.get(name).cloned()
            .ok_or_else(|| TypeError::UnboundVariable(name.clone())),

        Expr::GreekLetter(g) if g == "\\mathbb{U}" => Ok(Type::Sovereign),
        Expr::GreekLetter(_) => Ok(Type::Scalar(None)),

        Expr::BinaryOp { op, left, right } => match op {
            BinOp::Add | BinOp::Sub => {
                let lt = infer(left, env, tokens, fns)?;
                let rt = infer(right, env, tokens, fns)?;
                match (&lt, &rt) {
                    (Type::Scalar(u1), Type::Scalar(u2)) => {
                        if u1 != u2 {
                            Err(TypeError::UnitMismatch { expected: lt, found: rt })
                        } else {
                            Ok(lt)
                        }
                    }
                    _ => Err(TypeError::NotScalar { found: lt }),
                }
            }
            BinOp::Mul => {
                let lt = infer(left, env, tokens, fns)?;
                let rt = infer(right, env, tokens, fns)?;
                match (&lt, &rt) {
                    (Type::Scalar(u1), Type::Scalar(u2)) => {
                        let combined = merge_units(u1, u2, true);
                        Ok(Type::Scalar(combined))
                    }
                    _ => Err(TypeError::NotScalar { found: lt }),
                }
            }
            BinOp::Div => {
                let lt = infer(left, env, tokens, fns)?;
                let rt = infer(right, env, tokens, fns)?;
                match (&lt, &rt) {
                    (Type::Scalar(u1), Type::Scalar(u2)) => {
                        let combined = merge_units(u1, u2, false);
                        Ok(Type::Scalar(combined))
                    }
                    _ => Err(TypeError::NotScalar { found: lt }),
                }
            }
            BinOp::And | BinOp::Or => {
                let lt = infer(left, env, tokens, fns)?;
                let rt = infer(right, env, tokens, fns)?;
                if lt != Type::Scalar(None) || rt != Type::Scalar(None) {
                    return Err(TypeError::NotScalar { found: lt });
                }
                Ok(Type::Scalar(None))
            }
            BinOp::Eq | BinOp::Neq | BinOp::Lt | BinOp::Gt | BinOp::Le | BinOp::Ge => {
                let lt = infer(left, env, tokens, fns)?;
                let rt = infer(right, env, tokens, fns)?;
                if lt != rt {
                    Err(TypeError::TypeMismatch { expected: lt, found: rt })
                } else {
                    Ok(Type::Scalar(None))
                }
            }
            _ => Err(TypeError::UnsupportedOperation(format!("{op:?} not yet type‑checked"))),
        },

        Expr::WorldPragma(inner) => {
            if !tokens.contains("ConsoleToken") {
                return Err(TypeError::MissingToken { needed: "ConsoleToken".to_string() });
            }
            match &**inner {
                Expr::StringLiteral(_) => Ok(Type::Scalar(None)),
                Expr::FunctionCall { name, args } if name == "Print" && args.len() == 1 => {
                    let arg_ty = infer(&args[0], env, tokens, fns)?;
                    match arg_ty {
                        Type::Scalar(_) | Type::String => Ok(Type::Scalar(None)),
                        _ => Err(TypeError::NotScalar { found: arg_ty }),
                    }
                }
                _ => Err(TypeError::UnsupportedOperation(
                    "Only Print(...) or a string literal is allowed inside @world".to_string(),
                )),
            }
        }

        Expr::FunctionCall { name, args } => {
            // Built‑in string functions
            if name == "length" && args.len() == 1 {
                let s_ty = infer(&args[0], env, tokens, fns)?;
                if s_ty != Type::String {
                    return Err(TypeError::TypeMismatch { expected: Type::String, found: s_ty });
                }
                return Ok(Type::Scalar(None));
            }
            if name == "char_at" && args.len() == 2 {
                let s_ty = infer(&args[0], env, tokens, fns)?;
                if s_ty != Type::String {
                    return Err(TypeError::TypeMismatch { expected: Type::String, found: s_ty });
                }
                let idx_ty = infer(&args[1], env, tokens, fns)?;
                if idx_ty != Type::Scalar(None) {
                    return Err(TypeError::NotScalar { found: idx_ty });
                }
                return Ok(Type::Scalar(None));
            }
            // Built‑in tuple functions
            if (name == "tlen" || name == "get") && args.len() == 2 {
                for a in args { let _ = infer(a, env, tokens, fns)?; }
                return Ok(Type::Scalar(None));
            }
            // concat(s1, s2) – returns a string
            if name == "concat" && args.len() == 2 {
                let t1 = infer(&args[0], env, tokens, fns)?;
                let t2 = infer(&args[1], env, tokens, fns)?;
                if t1 != Type::String || t2 != Type::String {
                    return Err(TypeError::TypeMismatch {
                        expected: Type::String,
                        found: if t1 != Type::String { t1 } else { t2 },
                    });
                }
                return Ok(Type::String);
            }
            // emit_line(index, text) – void function, returns Scalar(None)
            if name == "emit_line" && args.len() == 2 {
                let t1 = infer(&args[0], env, tokens, fns)?;
                let t2 = infer(&args[1], env, tokens, fns)?;
                if t1 != Type::Scalar(None) || t2 != Type::String {
                    return Err(TypeError::TypeMismatch {
                        expected: Type::Scalar(None),
                        found: if t1 != Type::Scalar(None) { t1 } else { t2 },
                    });
                }
                return Ok(Type::Scalar(None));
            }
            // flush_lines(count) – void function, returns Scalar(None)
            if name == "flush_lines" && args.len() == 1 {
                let t = infer(&args[0], env, tokens, fns)?;
                if t != Type::Scalar(None) {
                    return Err(TypeError::NotScalar { found: t });
                }
                return Ok(Type::Scalar(None));
            }
            // Built‑in math
            let builtins = ["sin","cos","log","sqrt","abs","pow","\\sin","\\cos","\\log","\\sqrt","\\abs"];
            let func_name = name.trim_start_matches('\\');
            if builtins.contains(&name.as_str()) || builtins.contains(&func_name) {
                if args.len() != 1 {
                    return Err(TypeError::FunctionArity { expected: 1, found: args.len() });
                }
                let arg_ty = infer(&args[0], env, tokens, fns)?;
                if !matches!(arg_ty, Type::Scalar(_)) {
                    return Err(TypeError::NotScalar { found: arg_ty });
                }
                return Ok(Type::Scalar(None));
            }

            // User‑defined function
            if let Some((params, body)) = fns.get(name).cloned() {
                if params.len() != args.len() {
                    return Err(TypeError::FunctionArity { expected: params.len(), found: args.len() });
                }
                let mut body_env = env.clone();
                for (p, a) in params.iter().zip(args.iter()) {
                    let a_ty = infer(a, env, tokens, fns)?;
                    body_env.insert(p.clone(), a_ty);
                }
                return infer(&body, &body_env, tokens, fns);
            }

            Err(TypeError::UndefinedFunction(name.clone()))
        }

        Expr::Sum { index, start, end, body } => {
            let _ = infer(start, env, tokens, fns)?;
            let _ = infer(end, env, tokens, fns)?;
            let mut body_env = env.clone();
            body_env.insert(index.clone(), Type::Scalar(None));
            let body_ty = infer(body, &body_env, tokens, fns)?;
            match body_ty {
                Type::Scalar(_) => Ok(Type::Scalar(None)),
                _ => Err(TypeError::NotScalar { found: body_ty }),
            }
        }
        Expr::Prod { index, start, end, body } => {
            let _ = infer(start, env, tokens, fns)?;
            let _ = infer(end, env, tokens, fns)?;
            let mut body_env = env.clone();
            body_env.insert(index.clone(), Type::Scalar(None));
            let body_ty = infer(body, &body_env, tokens, fns)?;
            match body_ty {
                Type::Scalar(_) => Ok(Type::Scalar(None)),
                _ => Err(TypeError::NotScalar { found: body_ty }),
            }
        }

        Expr::Cases { branches } => {
            if branches.is_empty() {
                return Err(TypeError::UnsupportedOperation("Empty cases".to_string()));
            }
            let mut first_val_ty: Option<Type> = None;
            for (val, cond) in branches {
                let cond_ty = infer(cond, env, tokens, fns)?;
                if !matches!(cond_ty, Type::Scalar(_)) {
                    return Err(TypeError::NotScalar { found: cond_ty });
                }
                let val_ty = infer(val, env, tokens, fns)?;
                match &first_val_ty {
                    None => first_val_ty = Some(val_ty.clone()),
                    Some(expected) => {
                        if &val_ty != expected {
                            return Err(TypeError::TypeMismatch {
                                expected: expected.clone(),
                                found: val_ty,
                            });
                        }
                    }
                }
            }
            Ok(first_val_ty.unwrap())
        }

        Expr::Block(exprs) => {
            if exprs.is_empty() {
                return Err(TypeError::UnsupportedOperation("Empty block".to_string()));
            }
            let mut last_ty = Type::Scalar(None);
            for e in exprs {
                last_ty = infer(e, env, tokens, fns)?;
            }
            Ok(last_ty)
        }

        Expr::Tuple(elements) => {
            for e in elements { let _ = infer(e, env, tokens, fns)?; }
            Ok(Type::Scalar(None))
        }

        Expr::Assign { var, value } => {
            let var_ty = env.get(var.as_str())
                .cloned()
                .ok_or_else(|| TypeError::UnboundVariable(var.clone()))?;
            let value_ty = infer(value, env, tokens, fns)?;
            let compatible = match (&value_ty, &var_ty) {
                (Type::Scalar(None), Type::Scalar(_)) => true,
                _ => value_ty == var_ty,
            };
            if !compatible {
                return Err(TypeError::TypeMismatch { expected: var_ty, found: value_ty });
            }
            Ok(var_ty)
        }

        Expr::Subscript { array, index } => {
            let idx_ty = infer(index, env, tokens, fns)?;
            if !matches!(idx_ty, Type::Scalar(_)) {
                return Err(TypeError::ArrayIndexNotScalar);
            }
            let arr_name = match array.as_ref() {
                Expr::Variable(name) => name.clone(),
                _ => return Err(TypeError::NotAnArray("complex expression".to_string())),
            };
            let _ = env.get(&arr_name).ok_or_else(|| TypeError::UnboundVariable(arr_name.clone()))?;
            Ok(Type::Scalar(None))
        }

        Expr::SubscriptAssign { array, index, value } => {
            let _ = env.get(array.as_str()).ok_or_else(|| TypeError::UnboundVariable(array.clone()))?;
            let idx_ty = infer(index, env, tokens, fns)?;
            if !matches!(idx_ty, Type::Scalar(_)) {
                return Err(TypeError::ArrayIndexNotScalar);
            }
            let value_ty = infer(value, env, tokens, fns)?;
            match value_ty {
                Type::Scalar(_) => Ok(Type::Scalar(None)),
                _ => Err(TypeError::NotScalar { found: value_ty }),
            }
        }

        Expr::ArrayAlloc(_) => Ok(Type::Scalar(None)),

        _ => Err(TypeError::UnsupportedOperation(
            format!("Type checking not yet implemented for {:?}", expr),
        )),
    }
}

fn merge_units(a: &Option<crate::ast::Unit>, b: &Option<crate::ast::Unit>, is_mul: bool) -> Option<crate::ast::Unit> {
    let mut result = HashMap::new();
    if let Some(a_map) = a {
        for (k, &v) in a_map { *result.entry(k.clone()).or_insert(0) += v; }
    }
    if let Some(b_map) = b {
        for (k, &v) in b_map {
            if is_mul { *result.entry(k.clone()).or_insert(0) += v; }
            else { *result.entry(k.clone()).or_insert(0) -= v; }
        }
    }
    result.retain(|_, v| *v != 0);
    if result.is_empty() { None } else { Some(result) }
}

pub fn infer_definition(
    def: &Definition,
    env: &mut TypeEnv,
    tokens: &TokenEnv,
    fns: &mut FnEnv,
) -> Result<Type, TypeError> {
    match def {
        Definition::Let { name, params, body, is_func: _, .. } => {
            if !params.is_empty() {
                fns.insert(name.clone(), (params.clone(), body.clone()));
                Ok(Type::Function(Box::new(Type::Scalar(None)), Box::new(Type::Scalar(None))))
            } else {
                let body_ty = infer(body, env, tokens, fns)?;
                env.insert(name.clone(), body_ty.clone());
                Ok(body_ty)
            }
        }
        Definition::Const { name, typ, value } => {
            let value_ty = infer(value, env, tokens, fns)?;
            let compatible = match (&value_ty, typ) {
                (Type::Scalar(None), Type::Scalar(_)) => true,
                _ => &value_ty == typ,
            };
            if !compatible {
                return Err(TypeError::TypeMismatch { expected: typ.clone(), found: value_ty });
            }
            env.insert(name.clone(), typ.clone());
            Ok(typ.clone())
        }
    }
}