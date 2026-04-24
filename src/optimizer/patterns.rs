//! Load static nuclear pattern database.
//! Parses the JSON file described in docs/spec/04_nuclear_patterns.json.

use serde::Deserialize;

/// A single rewrite pattern.
#[derive(Debug, Clone, Deserialize)]
pub struct Pattern {
    #[allow(dead_code)]
    pub name: String,
    pub template: PatternNode,
    pub rewrite: PatternNode,
}

/// Simplified AST node used inside pattern definitions.
#[derive(Debug, Clone, Deserialize)]
#[serde(tag = "node")]
pub enum PatternNode {
    Number { value: f64 },
    Variable {
        name: String,
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
    BinaryOp {
        op: String,
        left: Box<PatternNode>,
        right: Box<PatternNode>,
    },
    UnaryOp {
        op: String,
        operand: Box<PatternNode>,
    },
    Pow {
        base: Box<PatternNode>,
        exp: Box<PatternNode>,
    },
    Frac {
        num: Box<PatternNode>,
        den: Box<PatternNode>,
    },
}

/// Top-level wrapper matching the JSON structure.
#[derive(Debug, Clone, Deserialize)]
struct PatternDatabase {
    patterns: Vec<Pattern>,
}

/// Load the pattern database from the JSON file included at compile time.
pub fn load_patterns() -> Vec<Pattern> {
    let json_str = include_str!("../../docs/spec/04_nuclear_patterns.json");
    let db: PatternDatabase = serde_json::from_str(json_str)
        .expect("Failed to parse nuclear patterns JSON");
    db.patterns
}