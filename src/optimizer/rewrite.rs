//! Rewrite engine – pattern matching and instantiation.
//! Matches AST nodes against pattern templates and replaces
//! placeholder variables (`__name`) with the captured sub‑expressions.

use crate::ast::{BinOp, Expr};
use std::collections::HashMap;

pub type Env = HashMap<String, Expr>;

/// Try to match a `template` expression against the actual `target` expression.
/// Returns a map of placeholder names to matched sub‑expressions, or `None`
/// if the pattern does not fit.
pub fn match_pattern(template: &Expr, target: &Expr) -> Option<Env> {
    match (template, target) {
        // ---------- Placeholder ----------
        // Any variable whose name starts with "__" captures whatever appears at that position.
        (Expr::Variable(name), sub_expr) if name.starts_with("__") => {
            let mut env = HashMap::new();
            env.insert(name.clone(), sub_expr.clone());
            Some(env)
        }

        // ---------- Literals ----------
        (Expr::Number(a), Expr::Number(b)) if (a - b).abs() < f64::EPSILON => {
            Some(HashMap::new())
        }
        (Expr::StringLiteral(a), Expr::StringLiteral(b)) if a == b => Some(HashMap::new()),
        (Expr::Variable(a), Expr::Variable(b)) if a == b => Some(HashMap::new()),
        (Expr::GreekLetter(a), Expr::GreekLetter(b)) if a == b => Some(HashMap::new()),

        // ---------- BinaryOp ----------
        (
            Expr::BinaryOp { op: op_t, left: l_t, right: r_t },
            Expr::BinaryOp { op: op_a, left: l_a, right: r_a },
        ) if op_t == op_a => {
            let env_left = match_pattern(l_t, l_a)?;
            let env_right = match_pattern(r_t, r_a)?;
            merge_envs(env_left, env_right)
        }

        // ---------- Sum ----------
        (
            Expr::Sum {
                index: idx_t,
                start: s_t,
                end: e_t,
                body: b_t,
            },
            Expr::Sum {
                index: idx_a,
                start: s_a,
                end: e_a,
                body: b_a,
            },
        ) if idx_t == idx_a => {
            let env_start = match_pattern(s_t, s_a)?;
            let env_end = match_pattern(e_t, e_a)?;
            let env_body = match_pattern(b_t, b_a)?;
            let env = merge_envs(env_start, env_end)?;
            merge_envs(env, env_body)
        }

        // ---------- Pow (e.g. i^2) ----------
        (Expr::Pow { base: b_t, exp: e_t }, Expr::Pow { base: b_a, exp: e_a }) => {
            let env_base = match_pattern(b_t, b_a)?;
            let env_exp = match_pattern(e_t, e_a)?;
            merge_envs(env_base, env_exp)
        }

        // ---------- UnaryOp (so future patterns can use it) ----------
        (
            Expr::UnaryOp {
                op: op_t,
                operand: o_t,
            },
            Expr::UnaryOp {
                op: op_a,
                operand: o_a,
            },
        ) if op_t == op_a => match_pattern(o_t, o_a),

        // Everything else fails to match
        _ => None,
    }
}

/// Replace every placeholder variable in `expr` with the corresponding
/// sub‑expression from the environment `env`.
pub fn instantiate(expr: &Expr, env: &Env) -> Expr {
    match expr {
        Expr::Variable(name) if name.starts_with("__") => {
            env.get(name)
                .cloned()
                .unwrap_or_else(|| Expr::Number(0.0))
        }

        Expr::BinaryOp { op, left, right } => Expr::BinaryOp {
            op: *op,
            left: Box::new(instantiate(left, env)),
            right: Box::new(instantiate(right, env)),
        },

        Expr::Sum {
            index,
            start,
            end,
            body,
        } => Expr::Sum {
            index: index.clone(),
            start: Box::new(instantiate(start, env)),
            end: Box::new(instantiate(end, env)),
            body: Box::new(instantiate(body, env)),
        },

        Expr::Pow { base, exp } => Expr::Pow {
            base: Box::new(instantiate(base, env)),
            exp: Box::new(instantiate(exp, env)),
        },

        Expr::UnaryOp { op, operand } => Expr::UnaryOp {
            op: *op,
            operand: Box::new(instantiate(operand, env)),
        },

        // For all other variants there is nothing to substitute
        other => other.clone(),
    }
}

/// Merge two environments. If a placeholder appears in both, the captured
/// expressions must be identical – otherwise the match fails.
fn merge_envs(mut a: Env, b: Env) -> Option<Env> {
    for (k, v) in b {
        if let Some(existing) = a.get(&k) {
            if existing != &v {
                return None;
            }
        } else {
            a.insert(k, v);
        }
    }
    Some(a)
}

// ---------------------------------------------------------------------------
// Helper routines for the JSON ↔ AST path (used by patterns.rs).
// These convert between the string representations stored in the JSON file
// and the Rust BinOp / UnOp enums.
// ---------------------------------------------------------------------------

pub fn binop_to_str(op: &BinOp) -> String {
    match op {
        BinOp::Add => "+".into(),
        BinOp::Sub => "-".into(),
        BinOp::Mul => "*".into(),
        BinOp::Div => "/".into(),
        BinOp::Pow => "^".into(),
        _ => panic!("Unsupported binary operator in pattern: {:?}", op),
    }
}

pub fn str_to_binop(s: &str) -> BinOp {
    match s {
        "+" | "Add" => BinOp::Add,
        "-" | "Sub" => BinOp::Sub,
        "*" | "Mul" => BinOp::Mul,
        "/" | "Div" => BinOp::Div,
        "^" | "Pow" => BinOp::Pow,
        _ => panic!("Unknown binary operator in rewrite: {}", s),
    }
}