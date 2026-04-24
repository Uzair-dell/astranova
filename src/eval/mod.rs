//! Evaluator – walks the AST and computes numeric results.
//! Now carries WorldToken and ConsoleToken for side effects.

use std::collections::HashMap;
use crate::ast::{Expr, BinOp, UnOp};
use crate::runtime::{WorldToken, ConsoleToken, print};
use std::f64::consts::PI;

pub type EvalResult = Result<(f64, Option<WorldToken>), String>;

pub fn eval(
    expr: &Expr,
    env: &HashMap<String, f64>,
    world: Option<WorldToken>,
    console: Option<&ConsoleToken>,
) -> EvalResult {
    match expr {
        Expr::Number(n) => Ok((*n, world)),

        Expr::StringLiteral(_) => Err("String literals cannot be evaluated numerically".to_string()),

        Expr::Variable(name) => {
            let val = env.get(name)
                .copied()
                .ok_or_else(|| format!("Undefined variable: {}", name))?;
            Ok((val, world))
        }

        Expr::GreekLetter(g) => {
            let val = match g.as_str() {
                "\\pi" => PI,
                "\\tau" => 2.0 * PI,
                "\\phi" => 1.618033988749895,
                _ => return Err(format!("Unknown Greek constant: {}", g)),
            };
            Ok((val, world))
        }

        Expr::BinaryOp { op, left, right } => {
            let (l, world) = eval(left, env, world, console)?;
            let (r, world) = eval(right, env, world, console)?;
            let result = match op {
                BinOp::Add => l + r,
                BinOp::Sub => l - r,
                BinOp::Mul | BinOp::Dot | BinOp::Cross => l * r,
                BinOp::Div => l / r,
                BinOp::Pow => l.powf(r),
                BinOp::Eq => if (l - r).abs() < f64::EPSILON { 1.0 } else { 0.0 },
                BinOp::Neq => if (l - r).abs() >= f64::EPSILON { 1.0 } else { 0.0 },
                BinOp::Lt => if l < r { 1.0 } else { 0.0 },
                BinOp::Gt => if l > r { 1.0 } else { 0.0 },
                BinOp::Le => if l <= r { 1.0 } else { 0.0 },
                BinOp::Ge => if l >= r { 1.0 } else { 0.0 },
                BinOp::And => if l != 0.0 && r != 0.0 { 1.0 } else { 0.0 },
                BinOp::Or => if l != 0.0 || r != 0.0 { 1.0 } else { 0.0 },
            };
            Ok((result, world))
        }

        Expr::UnaryOp { op, operand } => {
            let (x, world) = eval(operand, env, world, console)?;
            let result = match op {
                UnOp::Neg => -x,
                UnOp::Pos => x,
                UnOp::Sin => x.sin(),
                UnOp::Cos => x.cos(),
                UnOp::Log => x.ln(),
                UnOp::Sqrt => x.sqrt(),
                UnOp::Abs => x.abs(),
            };
            Ok((result, world))
        }

        Expr::Frac { num, den } => {
            let (n, world) = eval(num, env, world, console)?;
            let (d, world) = eval(den, env, world, console)?;
            Ok((n / d, world))
        }

        Expr::Sum { index, start, end, body } => {
            let (start_val, world) = eval(start, env, world, console)?;
            let (end_val, world) = eval(end, env, world, console)?;
            let mut sum = 0.0;
            let mut current_world = world;
            let mut local_env = env.clone();
            for i in (start_val as i64)..=(end_val as i64) {
                local_env.insert(index.clone(), i as f64);
                let (val, w) = eval(body, &local_env, current_world, console)?;
                sum += val;
                current_world = w;
            }
            Ok((sum, current_world))
        }

        Expr::Prod { index, start, end, body } => {
            let (start_val, world) = eval(start, env, world, console)?;
            let (end_val, world) = eval(end, env, world, console)?;
            let mut prod = 1.0;
            let mut current_world = world;
            let mut local_env = env.clone();
            for i in (start_val as i64)..=(end_val as i64) {
                local_env.insert(index.clone(), i as f64);
                let (val, w) = eval(body, &local_env, current_world, console)?;
                prod *= val;
                current_world = w;
            }
            Ok((prod, current_world))
        }

        Expr::Integral { .. } => Err("Integration not supported yet".to_string()),

                Expr::Cases { branches } => {
            let mut current_world = world.clone();
            for (value, cond) in branches {
                let (c, w) = eval(cond, env, current_world, console)?;
                current_world = w;
                if c != 0.0 {
                    return eval(value, env, current_world, console);
                }
            }
            Err("No case matched".to_string())
        }

        Expr::WorldPragma(inner) => {
            let world = world.ok_or("Missing WorldToken for @world")?;
            let console = console.ok_or("Missing ConsoleToken for @world")?;

            if let Expr::StringLiteral(msg) = &**inner {
                let new_world = print(world, console, msg);
                return Ok((0.0, Some(new_world)));
            }

            Err("Invalid @world usage".to_string())
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
            crate::ast::Definition::Let { body, .. } => {
                let (val, _) = eval(body, env, None, None)?; // no tokens for pure math
                Ok(val)
            }
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
        let (result, _) = eval(&expr, &HashMap::new(), None, None).unwrap();
        assert_eq!(result, 15.0);
    }

    #[test]
    fn world_print_with_tokens() {
        // Build AST equivalent to: @world "Hello, Astranova!"
        let expr = Expr::WorldPragma(Box::new(Expr::StringLiteral("Hello, Astranova!".to_string())));
        let world = Some(WorldToken);
        let console = ConsoleToken;

        let (val, new_world) = eval(&expr, &HashMap::new(), world, Some(&console)).unwrap();
        // val is dummy (0.0)
        assert_eq!(val, 0.0);
        // new_world should be Some(...) – token returned
        assert!(new_world.is_some());
    }
}