//! Nuclear pattern database.
//! Loads closed‑form rewrite rules from the JSON spec and converts them
//! into the `Expr`‑based `Pattern` structs used by the rewrite engine.

use crate::ast::{BinOp, Expr, UnOp};
use serde::{Deserialize, Serialize};


// ---------- intermediate JSON representation ----------

#[derive(Debug, Serialize, Deserialize, Clone)]
#[serde(tag = "node")]
pub enum PatternNode {
    Number {
        value: f64,
    },
    Variable {
        name: String,
    },
    BinaryOp {
        op: String,
        left: Box<PatternNode>,
        right: Box<PatternNode>,
    },
    Sum {
        index: String,
        start: Box<PatternNode>,
        end: Box<PatternNode>,
        body: Box<PatternNode>,
    },
    Prod {
        index: String,
        start: Box<PatternNode>,
        end: Box<PatternNode>,
        body: Box<PatternNode>,
    },
    Pow {
        base: Box<PatternNode>,
        exp: Box<PatternNode>,
    },
    UnaryOp {
        op: String,
        operand: Box<PatternNode>,
    },
    GreekLetter {
        name: String,
    },
}

// ---------- Final pattern type (now uses Expr) ----------

#[derive(Debug, Clone)]
pub struct Pattern {
    pub template: Expr,
    pub rewrite: Expr,
}

/// Convert an intermediate `PatternNode` into a real `Expr`.
fn from_pattern_node(node: &PatternNode) -> Expr {
    match node {
        PatternNode::Number { value } => Expr::Number(*value),
        PatternNode::Variable { name } => Expr::Variable(name.clone()),
        PatternNode::GreekLetter { name } => Expr::GreekLetter(name.clone()),
        PatternNode::BinaryOp { op, left, right } => {
            let binop = match op.as_str() {
                "+" | "Add" => BinOp::Add,
                "-" | "Sub" => BinOp::Sub,
                "*" | "Mul" => BinOp::Mul,
                "/" | "Div" => BinOp::Div,
                "^" | "Pow" => BinOp::Pow,
                _ => panic!("Unknown binary operator in pattern: {}", op),
            };
            Expr::BinaryOp {
                op: binop,
                left: Box::new(from_pattern_node(left)),
                right: Box::new(from_pattern_node(right)),
            }
        }
        PatternNode::Sum { index, start, end, body } => Expr::Sum {
            index: index.clone(),
            start: Box::new(from_pattern_node(start)),
            end: Box::new(from_pattern_node(end)),
            body: Box::new(from_pattern_node(body)),
        },
        PatternNode::Prod { index, start, end, body } => Expr::Prod {
            index: index.clone(),
            start: Box::new(from_pattern_node(start)),
            end: Box::new(from_pattern_node(end)),
            body: Box::new(from_pattern_node(body)),
        },
        PatternNode::Pow { base, exp } => Expr::Pow {
            base: Box::new(from_pattern_node(base)),
            exp: Box::new(from_pattern_node(exp)),
        },
        PatternNode::UnaryOp { op, operand } => {
            let unop = match op.as_str() {
                "-" | "Neg" => UnOp::Neg,
                "+" | "Pos" => UnOp::Pos,
                "sin" | "Sin" => UnOp::Sin,
                "cos" | "Cos" => UnOp::Cos,
                "log" | "Log" => UnOp::Log,
                "sqrt" | "Sqrt" => UnOp::Sqrt,
                "abs" | "Abs" => UnOp::Abs,
                _ => panic!("Unknown unary operator in pattern: {}", op),
            };
            Expr::UnaryOp {
                op: unop,
                operand: Box::new(from_pattern_node(operand)),
            }
        }
    }
}

// ---------- JSON file loading ----------

#[derive(Debug, Deserialize)]
struct PatternFile {
    patterns: Vec<PatternEntry>,
}

#[derive(Debug, Deserialize)]
#[allow(dead_code)]
struct PatternEntry {
    name: String,
    template: PatternNode,
    rewrite: PatternNode,
}

/// Load all nuclear patterns from the JSON specification.
pub fn load_patterns() -> Vec<Pattern> {
    let json_str = include_str!("../../docs/spec/04_nuclear_patterns.json");
    let spec: PatternFile = serde_json::from_str(json_str)
        .expect("Failed to parse nuclear patterns JSON");

    spec.patterns
        .into_iter()
        .map(|entry| Pattern {
            template: from_pattern_node(&entry.template),
            rewrite: from_pattern_node(&entry.rewrite),
        })
        .collect()
}