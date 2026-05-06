//! Nuclear optimizer – replaces loop expressions with closed forms.
//! Uses the pattern database in docs/spec/04_nuclear_patterns.json,
//! performs constant‑folding, and includes whole‑program dead‑code elimination.

pub mod patterns;
pub mod rewrite;

use crate::ast::{BinOp, Definition, Expr};
use std::collections::HashSet;

// ----------------------------------------------------------------------
//  Whole‑program dead‑code elimination
// ----------------------------------------------------------------------

/// Remove top‑level `\let` definitions that have no side effects
/// and whose name is never used elsewhere in the program.
pub fn dead_code_eliminate(defs: &mut Vec<Definition>) {
    let mut used = HashSet::new();
    for def in defs.iter() {
        match def {
            Definition::Let { body, .. } => collect_used_vars(body, &mut used),
            Definition::Const { value, .. } => collect_used_vars(value, &mut used),
        }
    }

    defs.retain(|def| {
        if let Definition::Let { name, body, params, .. } = def {
            if params.is_empty() && !name.is_empty() && name != "@world" {
                if !used.contains(name.as_str()) && is_pure_expr(body) {
                    return false;
                }
            }
        }
        true
    });
}

/// Recursively collect all variable names that appear in an expression.
fn collect_used_vars(expr: &Expr, used: &mut HashSet<String>) {
    match expr {
        Expr::Variable(name) => {
            used.insert(name.clone());
        }
        Expr::BinaryOp { left, right, .. } => {
            collect_used_vars(left, used);
            collect_used_vars(right, used);
        }
        Expr::UnaryOp { operand, .. } => collect_used_vars(operand, used),
        Expr::Sum { start, end, body, .. } => {
            collect_used_vars(start, used);
            collect_used_vars(end, used);
            collect_used_vars(body, used);
        }
        Expr::Prod { start, end, body, .. } => {
            collect_used_vars(start, used);
            collect_used_vars(end, used);
            collect_used_vars(body, used);
        }
        Expr::Cases { branches } => {
            for (val, cond) in branches {
                collect_used_vars(val, used);
                collect_used_vars(cond, used);
            }
        }
        Expr::Block(exprs) => {
            for e in exprs {
                collect_used_vars(e, used);
            }
        }
        Expr::Tuple(elements) => {
            for e in elements {
                collect_used_vars(e, used);
            }
        }
        Expr::FunctionCall { args, .. } => {
            for a in args {
                collect_used_vars(a, used);
            }
        }
        Expr::Assign { var, value } => {
            used.insert(var.clone());
            collect_used_vars(value, used);
        }
        Expr::SubscriptAssign { array, index, value } => {
            used.insert(array.clone());
            collect_used_vars(index, used);
            collect_used_vars(value, used);
        }
        Expr::Subscript { array, index } => {
            collect_used_vars(array, used);
            collect_used_vars(index, used);
        }
        Expr::LetIn { bindings, body } => {
            for (_, v) in bindings {
                collect_used_vars(v, used);
            }
            collect_used_vars(body, used);
        }
        Expr::Pow { base, exp } => {
            collect_used_vars(base, used);
            collect_used_vars(exp, used);
        }
        // Walk inside @world pragmas (e.g. @world Print(final_result))
        Expr::WorldPragma(inner) => {
            collect_used_vars(inner, used);
        }
        _ => {}
    }
}

/// Return `true` if the expression has **no** side effects.
fn is_pure_expr(expr: &Expr) -> bool {
    match expr {
        Expr::Assign { .. } | Expr::SubscriptAssign { .. } => false,
        Expr::WorldPragma(_) => false,
        Expr::FunctionCall { .. } => false, // conservative: assume any call may have effects
        Expr::BinaryOp { left, right, .. } => is_pure_expr(left) && is_pure_expr(right),
        Expr::UnaryOp { operand, .. } => is_pure_expr(operand),
        Expr::Sum { start, end, body, .. } => {
            is_pure_expr(start) && is_pure_expr(end) && is_pure_expr(body)
        }
        Expr::Prod { start, end, body, .. } => {
            is_pure_expr(start) && is_pure_expr(end) && is_pure_expr(body)
        }
        Expr::Cases { branches } => branches.iter().all(|(v, c)| is_pure_expr(v) && is_pure_expr(c)),
        Expr::Block(exprs) => exprs.iter().all(is_pure_expr),
        Expr::Tuple(elements) => elements.iter().all(is_pure_expr),
        Expr::LetIn { bindings, body } => {
            bindings.iter().all(|(_, v)| is_pure_expr(v)) && is_pure_expr(body)
        }
        Expr::Pow { base, exp } => is_pure_expr(base) && is_pure_expr(exp),
        _ => true,
    }
}

// ----------------------------------------------------------------------
//  Expression‑level optimizations
// ----------------------------------------------------------------------

/// Apply all nuclear optimizations to an expression.
pub fn optimize(expr: &Expr) -> Expr {
    let patterns = patterns::load_patterns();
    let mut result = rewrite_expr(expr, &patterns);
    result = fold_constants(&result);
    result
}

fn rewrite_expr(expr: &Expr, patterns: &[patterns::Pattern]) -> Expr {
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
        other => other.clone(),
    };

    for pattern in patterns {
        if let Some(env) = rewrite::match_pattern(&pattern.template, &expr) {
            return rewrite::instantiate(&pattern.rewrite, &env);
        }
    }
    expr
}

pub fn fold_constants(expr: &Expr) -> Expr {
    match expr {
        Expr::Number(_) => expr.clone(),
        Expr::BinaryOp { op, left, right } => {
            let left_folded = fold_constants(left);
            let right_folded = fold_constants(right);
            match (&left_folded, &right_folded) {
                (Expr::Number(l), Expr::Number(r)) => {
                    let result = match op {
                        BinOp::Add => l + r,
                        BinOp::Sub => l - r,
                        BinOp::Mul => l * r,
                        BinOp::Div => l / r,
                        BinOp::Pow => l.powf(*r),
                        _ => return Expr::BinaryOp {
                            op: *op,
                            left: Box::new(left_folded),
                            right: Box::new(right_folded),
                        },
                    };
                    Expr::Number(result)
                }
                _ => Expr::BinaryOp {
                    op: *op,
                    left: Box::new(left_folded),
                    right: Box::new(right_folded),
                },
            }
        }
        Expr::Sum { index, start, end, body } => {
            let start_folded = fold_constants(start);
            let end_folded = fold_constants(end);
            let body_folded = fold_constants(body);
            if let (Expr::Number(a), Expr::Number(b), Expr::Number(c)) =
                (&start_folded, &end_folded, &body_folded)
            {
                let n = (*b - *a) as i64 + 1;
                Expr::Number(n as f64 * c)
            } else {
                Expr::Sum {
                    index: index.clone(),
                    start: Box::new(start_folded),
                    end: Box::new(end_folded),
                    body: Box::new(body_folded),
                }
            }
        }
        other => other.clone(),
    }
}

// ----------------------------------------------------------------------
//  Tests
// ----------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use crate::ast::{Expr, BinOp};

    #[test]
    fn sum_of_i_closed_form() {
        let sum = Expr::Sum {
            index: "i".to_string(),
            start: Box::new(Expr::Number(1.0)),
            end: Box::new(Expr::Variable("n".to_string())),
            body: Box::new(Expr::Variable("i".to_string())),
        };
        let result = optimize(&sum);
        match result {
            Expr::BinaryOp { op, ref left, ref right } => {
                assert_eq!(op, BinOp::Div);
                match left.as_ref() {
                    Expr::BinaryOp { op: op2, left: l2, right: r2 } => {
                        assert_eq!(*op2, BinOp::Mul);
                        assert_eq!(**l2, Expr::Variable("n".to_string()));
                        match r2.as_ref() {
                            Expr::BinaryOp { op, left, right } => {
                                assert_eq!(*op, BinOp::Add);
                                assert_eq!(**left, Expr::Variable("n".to_string()));
                                assert_eq!(**right, Expr::Number(1.0));
                            }
                            _ => panic!("Expected Add"),
                        }
                    }
                    _ => panic!("Expected Mul"),
                }
                assert_eq!(**right, Expr::Number(2.0));
            }
            _ => panic!("Expected Div"),
        }
    }

    #[test]
    fn sum_of_squares_closed_form() {
        let sum = Expr::Sum {
            index: "i".to_string(),
            start: Box::new(Expr::Number(1.0)),
            end: Box::new(Expr::Variable("n".to_string())),
            body: Box::new(Expr::Pow {
                base: Box::new(Expr::Variable("i".to_string())),
                exp: Box::new(Expr::Number(2.0)),
            }),
        };
        let result = optimize(&sum);
        match result {
            Expr::BinaryOp { op, ref left, ref right } => {
                assert_eq!(op, BinOp::Div);
                assert_eq!(**right, Expr::Number(6.0));
                match left.as_ref() {
                    Expr::BinaryOp { op: op2, .. } => {
                        assert_eq!(*op2, BinOp::Mul);
                    }
                    _ => panic!("Expected Mul on left"),
                }
            }
            _ => panic!("Expected Div"),
        }
    }

    #[test]
    fn constant_folding_simple() {
        let expr = Expr::BinaryOp {
            op: BinOp::Add,
            left: Box::new(Expr::Number(3.0)),
            right: Box::new(Expr::BinaryOp {
                op: BinOp::Mul,
                left: Box::new(Expr::Number(4.0)),
                right: Box::new(Expr::Number(2.0)),
            }),
        };
        assert_eq!(optimize(&expr), Expr::Number(11.0));
    }

    #[test]
    fn constant_folding_sum_of_constants() {
        let sum = Expr::Sum {
            index: "i".to_string(),
            start: Box::new(Expr::Number(3.0)),
            end: Box::new(Expr::Number(7.0)),
            body: Box::new(Expr::Number(4.0)),
        };
        assert_eq!(optimize(&sum), Expr::Number(20.0));
    }
}