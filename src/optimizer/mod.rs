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

    #[test]
    fn sum_of_squares_closed_form() {
        let sum = Expr::Sum {
            index: "i".to_string(),
            start: Box::new(Expr::Number(1.0)),
            end:   Box::new(Expr::Variable("n".to_string())),
            body:  Box::new(Expr::BinaryOp {
                op: BinOp::Pow,
                left: Box::new(Expr::Variable("i".to_string())),
                right: Box::new(Expr::Number(2.0)),
            }),
        };
        let result = optimize(&sum);
        // Expected: n * (n+1) * (2*n+1) / 6
        match result {
            Expr::BinaryOp { op, ref left, ref right } => {
                assert_eq!(op, BinOp::Div);
                assert_eq!(**right, Expr::Number(6.0));
                match left.as_ref() {
                    Expr::BinaryOp { op: op2, .. } => {
                        assert_eq!(*op2, BinOp::Mul);
                    },
                    _ => panic!("Expected Mul on left"),
                }
            },
            _ => panic!("Expected Div"),
        }
    }
    #[test]
fn sum_of_squares_direct_pattern() {
    // Build the same AST as the other sum-of-squares test
    let sum = Expr::Sum {
        index: "i".to_string(),
        start: Box::new(Expr::Number(1.0)),
        end:   Box::new(Expr::Variable("n".to_string())),
        body:  Box::new(Expr::Pow {
            base: Box::new(Expr::Variable("i".to_string())),
            exp:  Box::new(Expr::Number(2.0)),
        }),
    };

    // Construct the sum-of-squares pattern WITHOUT using the JSON file
    let template = Expr::Sum {
        index: "i".to_string(),
        start: Box::new(Expr::Number(1.0)),
        end:   Box::new(Expr::Variable("__n".to_string())),
        body:  Box::new(Expr::Pow {
            base: Box::new(Expr::Variable("i".to_string())),
            exp:  Box::new(Expr::Number(2.0)),
        }),
    };
    let rewrite = Expr::BinaryOp {
        op: BinOp::Div,
        left: Box::new(Expr::BinaryOp {
            op: BinOp::Mul,
            left: Box::new(Expr::BinaryOp {
                op: BinOp::Mul,
                left:  Box::new(Expr::Variable("__n".to_string())),
                right: Box::new(Expr::BinaryOp {
                    op: BinOp::Add,
                    left:  Box::new(Expr::Variable("__n".to_string())),
                    right: Box::new(Expr::Number(1.0)),
                }),
            }),
            right: Box::new(Expr::BinaryOp {
                op: BinOp::Add,
                left: Box::new(Expr::BinaryOp {
                    op: BinOp::Mul,
                    left:  Box::new(Expr::Number(2.0)),
                    right: Box::new(Expr::Variable("__n".to_string())),
                }),
                right: Box::new(Expr::Number(1.0)),
            }),
        }),
        right: Box::new(Expr::Number(6.0)),
    };
    let pattern = crate::optimizer::patterns::Pattern { template, rewrite };

    // Apply the pattern directly
    let mut patterns = vec![pattern];
    let result = super::rewrite_expr(&sum, &patterns);

    // Verify it's a division
    match result {
        Expr::BinaryOp { op, .. } => {
            assert_eq!(op, BinOp::Div, "Expected Div, got {:?}", op);
        }
        _ => panic!("Expected a BinaryOp, got {:?}", result),
    }
}   
#[test]
fn debug_loaded_patterns() {
    let patterns = crate::optimizer::patterns::load_patterns();
    for (i, p) in patterns.iter().enumerate() {
        println!("Pattern {}: template = {:#?}", i, p.template);
        println!("Pattern {}: rewrite  = {:#?}", i, p.rewrite);
    }
    // force a failure so we see the output
    panic!("Debug output – check the test log");
}


}
