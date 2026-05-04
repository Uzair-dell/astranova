//! Pattern matching and substitution engine.

use std::collections::HashMap;
use crate::ast::{Expr, BinOp};
use super::patterns::PatternNode;   // removed Pattern

pub fn match_pattern(template: &PatternNode, expr: &Expr) -> Option<HashMap<String, Expr>> {
    let mut env = HashMap::new();
    if match_rec(template, expr, &mut env) {
        Some(env)
    } else {
        None
    }
}

fn match_rec(template: &PatternNode, expr: &Expr, env: &mut HashMap<String, Expr>) -> bool {
    match (template, expr) {
        (PatternNode::Number { value: tv }, Expr::Number(n)) => (tv - n).abs() < f64::EPSILON,

        (PatternNode::Variable { name }, Expr::Variable(actual_name)) => {
            if name.starts_with("__") {
                if let Some(existing) = env.get(name) {
                    *existing == Expr::Variable(actual_name.clone())
                } else {
                    env.insert(name.clone(), Expr::Variable(actual_name.clone()));
                    true
                }
            } else {
                name == actual_name
            }
        }

        (PatternNode::Sum { index: ti, start: ts, end: te, body: tb }, Expr::Sum { index: ai, start: a_start, end: a_end, body: a_body }) => {
            if let Some(existing) = env.get(ti) {
                if *existing != Expr::Variable(ai.clone()) { return false; }
            } else {
                env.insert(ti.clone(), Expr::Variable(ai.clone()));
            }
            match_rec(ts, a_start, env) && match_rec(te, a_end, env) && match_rec(tb, a_body, env)
        }

        (PatternNode::BinaryOp { op: top, left: tl, right: tr }, Expr::BinaryOp { op: aop, left: al, right: ar }) => {
            let op_str = binop_to_str(aop);
            if top != &op_str { return false; }
            match_rec(tl, al, env) && match_rec(tr, ar, env)
        }

        (PatternNode::Pow { base: tb, exp: te }, Expr::Pow { base: ab, exp: ae }) => {
            match_rec(tb, ab, env) && match_rec(te, ae, env)
        }

        (PatternNode::Variable { name }, other) if name.starts_with("__") => {
            if let Some(existing) = env.get(name) {
                *existing == other.clone()
            } else {
                env.insert(name.clone(), other.clone());
                true
            }
        }

        _ => false,
    }
}

pub fn instantiate(node: &PatternNode, env: &HashMap<String, Expr>) -> Expr {
    match node {
        PatternNode::Number { value } => Expr::Number(*value),
        PatternNode::Variable { name } => {
            if let Some(expr) = env.get(name) {
                expr.clone()
            } else {
                Expr::Variable(name.clone())
            }
        }
        PatternNode::BinaryOp { op, left, right } => {
            let left = Box::new(instantiate(left, env));
            let right = Box::new(instantiate(right, env));
            let op = str_to_binop(op);
            Expr::BinaryOp { op, left, right }
        }
        PatternNode::Frac { num, den } => {
            let num = Box::new(instantiate(num, env));
            let den = Box::new(instantiate(den, env));
            Expr::Frac { num, den }
        }
        PatternNode::Pow { base, exp } => {
            let base = Box::new(instantiate(base, env));
            let exp = Box::new(instantiate(exp, env));
            Expr::Pow { base, exp }
        }
        _ => panic!("Unsupported pattern node in rewrite: {:?}", node),
    }
}

fn binop_to_str(op: &BinOp) -> String {
    match op {
        BinOp::Add => "+".into(),
        BinOp::Sub => "-".into(),
        BinOp::Mul => "*".into(),
        BinOp::Div => "/".into(),
        BinOp::Pow => "^".into(),
        _ => panic!("Unsupported binary operator in pattern: {:?}", op),
    }
}

fn str_to_binop(s: &str) -> BinOp {
    match s {
        "+" | "Add" => BinOp::Add,
        "-" | "Sub" => BinOp::Sub,
        "*" | "Mul" => BinOp::Mul,
        "/" | "Div" => BinOp::Div,
        "^" | "Pow" => BinOp::Pow,
        _ => panic!("Unknown binary operator in rewrite: {}", s),
    }
}