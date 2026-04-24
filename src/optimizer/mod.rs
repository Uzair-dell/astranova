//! Nuclear optimizer – replaces loop expressions with closed forms.
//! Uses the pattern database in docs/spec/04_nuclear_patterns.json.

pub mod patterns;
pub mod rewrite;

use crate::ast::Expr;

/// Apply all nuclear optimizations to an expression (destructively).
pub fn optimize(expr: &Expr) -> Expr {
    let patterns = patterns::load_patterns();
    rewrite_expr(expr, &patterns)
}

/// Recursively apply rewrite patterns to an expression.
fn rewrite_expr(expr: &Expr, patterns: &[patterns::Pattern]) -> Expr {
    // First, recursively rewrite subexpressions
    let expr = match expr {
        Expr::BinaryOp { op, left, right } => {
            let left = Box::new(rewrite_expr(left, patterns));
            let right = Box::new(rewrite_expr(right, patterns));
            Expr::BinaryOp { op: *op, left, right }
        }
        Expr::Sum { index, start, end, body } => {
            let start = Box::new(rewrite_expr(start, patterns));
            let end = Box::new(rewrite_expr(end, patterns));
            let body = Box::new(rewrite_expr(body, patterns));
            Expr::Sum { index: index.clone(), start, end, body }
        }
        // other cases pass through unchanged
        other => other.clone(),
    };

    // Then try to match a pattern at this node
    for pattern in patterns {
        if let Some(env) = rewrite::match_pattern(&pattern.template, &expr) {
            return rewrite::instantiate(&pattern.rewrite, &env);
        }
    }

    expr
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ast::{Expr, BinOp};

    #[test]
    fn sum_of_i_closed_form() {
        // Build AST for \sum_{i=1}^{n} i
        let sum = Expr::Sum {
            index: "i".to_string(),
            start: Box::new(Expr::Number(1.0)),
            end: Box::new(Expr::Variable("n".to_string())),
            body: Box::new(Expr::Variable("i".to_string())),
        };
        let result = optimize(&sum);
        // Expected: n * (n + 1) / 2
        match result {
            Expr::BinaryOp { op, ref left, ref right } => {
                assert_eq!(op, BinOp::Div);
                // left should be n * (n+1)
                match left.as_ref() {
                    Expr::BinaryOp { op: op2, left: l2, right: r2 } => {
                        assert_eq!(*op2, BinOp::Mul);
                        assert_eq!(**l2, Expr::Variable("n".to_string()));
                        // right should be (n+1)
                        match r2.as_ref() {
                            Expr::BinaryOp { op, left, right } => {
                                assert_eq!(*op, BinOp::Add);
                                assert_eq!(**left, Expr::Variable("n".to_string()));
                                assert_eq!(**right, Expr::Number(1.0));
                            },
                            _ => panic!("Expected Add"),
                        }
                    },
                    _ => panic!("Expected Mul"),
                }
                // right should be Number(2)
                assert_eq!(**right, Expr::Number(2.0));
            },
            _ => panic!("Expected Div"),
        }
    }
}