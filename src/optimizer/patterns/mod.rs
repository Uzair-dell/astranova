//! Nuclear pattern database.
//! Loads the closed‑form rewrite rules.

use crate::ast::Expr;

/// A single rewrite rule.
#[derive(Debug, Clone)]
pub struct Pattern {
    pub template: Expr,
    pub rewrite:  Expr,
}

/// Load the statically known patterns.
pub fn load_patterns() -> Vec<Pattern> {
    vec![
        // Sum of consecutive integers: \sum_{i=1}^{n} i  →  n*(n+1)/2
        Pattern {
            template: Expr::Sum {
                index: "i".to_string(),
                start: Box::new(Expr::Number(1.0)),
                end:   Box::new(Expr::Variable("?n".to_string())),
                body:  Box::new(Expr::Variable("?i".to_string())),
            },
            rewrite: Expr::BinaryOp {
                op:   crate::ast::BinOp::Div,
                left: Box::new(Expr::BinaryOp {
                    op:   crate::ast::BinOp::Mul,
                    left: Box::new(Expr::Variable("?n".to_string())),
                    right: Box::new(Expr::BinaryOp {
                        op:   crate::ast::BinOp::Add,
                        left: Box::new(Expr::Variable("?n".to_string())),
                        right: Box::new(Expr::Number(1.0)),
                    }),
                }),
                right: Box::new(Expr::Number(2.0)),
            },
        },
    ]
}