//! Evaluator – walks the AST and computes numeric results.
//! Uses a simple environment (HashMap) for variable lookup.

use std::collections::HashMap;
use crate::ast::{Expr, BinOp, UnOp};
use std::f64::consts::PI;

/// Evaluation result: either a number (for now) or an error message.
pub type EvalResult = Result<f64, String>;

/// Evaluate an expression given an environment mapping variable names to values.
pub fn eval(expr: &Expr, env: &HashMap<String, f64>) -> EvalResult {
    match expr {
        Expr::Number(n) => Ok(*n),

        Expr::Variable(name) => {
            env.get(name)
                .copied()
                .ok_or_else(|| format!("Undefined variable: {}", name))
        }

        Expr::GreekLetter(g) => {
            match g.as_str() {
                "\\pi" => Ok(PI),
                "\\tau" => Ok(2.0 * PI),
                "\\phi" => Ok(1.618033988749895), // golden ratio
                _ => Err(format!("Unknown Greek constant: {}", g)),
            }
        }

        Expr::BinaryOp { op, left, right } => {
            let l = eval(left, env)?;
            let r = eval(right, env)?;
            match op {
                BinOp::Add => Ok(l + r),
                BinOp::Sub => Ok(l - r),
                BinOp::Mul | BinOp::Dot | BinOp::Cross => Ok(l * r),
                BinOp::Div => Ok(l / r),
                BinOp::Pow => Ok(l.powf(r)),
                BinOp::Eq => Ok(if (l - r).abs() < f64::EPSILON { 1.0 } else { 0.0 }),
                BinOp::Neq => Ok(if (l - r).abs() >= f64::EPSILON { 1.0 } else { 0.0 }),
                BinOp::Lt => Ok(if l < r { 1.0 } else { 0.0 }),
                BinOp::Gt => Ok(if l > r { 1.0 } else { 0.0 }),
                BinOp::Le => Ok(if l <= r { 1.0 } else { 0.0 }),
                BinOp::Ge => Ok(if l >= r { 1.0 } else { 0.0 }),
                BinOp::And => Ok(if l != 0.0 && r != 0.0 { 1.0 } else { 0.0 }),
                BinOp::Or => Ok(if l != 0.0 || r != 0.0 { 1.0 } else { 0.0 }),
            }
        }

        Expr::UnaryOp { op, operand } => {
            let x = eval(operand, env)?;
            match op {
                UnOp::Neg => Ok(-x),
                UnOp::Pos => Ok(x),
                UnOp::Sin => Ok(x.sin()),
                UnOp::Cos => Ok(x.cos()),
                UnOp::Log => Ok(x.ln()),
                UnOp::Sqrt => Ok(x.sqrt()),
                UnOp::Abs => Ok(x.abs()),
            }
        }

        Expr::Frac { num, den } => {
            let n = eval(num, env)?;
            let d = eval(den, env)?;
            Ok(n / d)
        }

        // Sum / Prod – for a given environment we can't loop if end is variable.
        // For now, if end is a constant, we can compute the loop; otherwise error.
        Expr::Sum { index, start, end, body } => {
            let start_val = eval(start, env)? as i64;
            let end_val = eval(end, env)? as i64;
            let mut sum = 0.0;
            let mut local_env = env.clone();
            for i in start_val..=end_val {
                local_env.insert(index.clone(), i as f64);
                sum += eval(body, &local_env)?;
            }
            Ok(sum)
        }

        Expr::Prod { index, start, end, body } => {
            let start_val = eval(start, env)? as i64;
            let end_val = eval(end, env)? as i64;
            let mut prod = 1.0;
            let mut local_env = env.clone();
            for i in start_val..=end_val {
                local_env.insert(index.clone(), i as f64);
                prod *= eval(body, &local_env)?;
            }
            Ok(prod)
        }

        Expr::Integral { .. } => {
            Err("Integration not yet supported in evaluator".to_string())
        }

        Expr::Cases { branches } => {
            for (value, cond) in branches {
                let c = eval(cond, env)?;
                if c != 0.0 {
                    return eval(value, env);
                }
            }
            Err("No case matched".to_string())
        }

        Expr::WorldPragma(_) => {
            Err("World pragma cannot be evaluated directly".to_string())
        }

        _ => Err(format!("Evaluation not supported for {:?}", expr)),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::lexer::lex;
    use crate::parser::Parser;

    fn eval_def(src: &str, env: &HashMap<String, f64>) -> Result<f64, String> {
        let tokens = lex(src);
        let mut parser = Parser::new(tokens);
        let prog = parser.parse_program();
        match &prog[0] {
            crate::ast::Definition::Let { body, .. } => eval(body, env),
            _ => panic!("Expected let"),
        }
    }

    #[test]
    fn constant() {
        assert_eq!(eval_def(r"\let x = 5", &HashMap::new()), Ok(5.0));
    }

    #[test]
    fn sphere_volume_r5() {
        let mut env = HashMap::new();
        env.insert("r".to_string(), 5.0);
        let src = r"\let V = \frac{4}{3} \cdot \pi \cdot r ^ 3";
        let result = eval_def(src, &env).unwrap();
        assert!((result - 523.598).abs() < 0.01);
    }

       #[test]
    fn sum_loop() {
        // \sum_{i=1}^{5} i  = 15
        let expr = Expr::Sum {
            index: "i".to_string(),
            start: Box::new(Expr::Number(1.0)),
            end: Box::new(Expr::Number(5.0)),
            body: Box::new(Expr::Variable("i".to_string())),
        };
        let result = eval(&expr, &HashMap::new()).unwrap();
        assert_eq!(result, 15.0);
    }
}