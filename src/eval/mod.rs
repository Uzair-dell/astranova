//! Evaluator – walks the AST and computes numeric results.
//! Uses RuntimeContext for capability tokens (World, Console, FS, Memory).

use std::collections::HashMap;
use crate::ast::{Expr, BinOp, UnOp};
use crate::runtime::context::RuntimeContext;
use crate::runtime::{WorldToken, print,MemToken, alloc, free, MemPtr};
use std::f64::consts::PI;

pub type EvalResult = Result<(f64, Option<WorldToken>), String>;

pub fn eval(
    expr: &Expr,
    env: &HashMap<String, f64>,
    ctx: &mut RuntimeContext,
) -> EvalResult {
    match expr {
        Expr::Number(n) => Ok((*n, ctx.world.take())),

        Expr::StringLiteral(_) => Err("String literals cannot be evaluated numerically".to_string()),

        Expr::Variable(name) => {
            let val = env.get(name)
                .copied()
                .ok_or_else(|| format!("Undefined variable: {}", name))?;
            Ok((val, ctx.world.take()))
        }

        Expr::GreekLetter(g) => {
            let val = match g.as_str() {
                "\\pi" => PI,
                "\\tau" => 2.0 * PI,
                "\\phi" => 1.618033988749895,
                _ => return Err(format!("Unknown Greek constant: {}", g)),
            };
            Ok((val, ctx.world.take()))
        }

        Expr::BinaryOp { op, left, right } => {
            let (l, _) = eval(left, env, ctx)?;
            let w = ctx.world.take();
            let (r, _) = eval(right, env, ctx)?;
            ctx.world = ctx.world.take().or(w);
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
            Ok((result, ctx.world.take()))
        }

        Expr::UnaryOp { op, operand } => {
            let (x, _) = eval(operand, env, ctx)?;
            let result = match op {
                UnOp::Neg => -x,
                UnOp::Pos => x,
                UnOp::Sin => x.sin(),
                UnOp::Cos => x.cos(),
                UnOp::Log => x.ln(),
                UnOp::Sqrt => x.sqrt(),
                UnOp::Abs => x.abs(),
            };
            Ok((result, ctx.world.take()))
        }

        Expr::Frac { num, den } => {
            let (n, _) = eval(num, env, ctx)?;
            let w = ctx.world.take();
            let (d, _) = eval(den, env, ctx)?;
            ctx.world = ctx.world.take().or(w);
            Ok((n / d, ctx.world.take()))
        }

        Expr::Sum { index, start, end, body } => {
            let (start_val, _) = eval(start, env, ctx)?;
            let w = ctx.world.take();
            let (end_val, _) = eval(end, env, ctx)?;
            ctx.world = ctx.world.take().or(w);
            let mut sum = 0.0;
            let mut local_env = env.clone();
            for i in (start_val as i64)..=(end_val as i64) {
                local_env.insert(index.clone(), i as f64);
                let (val, _) = eval(body, &local_env, ctx)?;
                sum += val;
            }
            Ok((sum, ctx.world.take()))
        }

        Expr::Prod { index, start, end, body } => {
            let (start_val, _) = eval(start, env, ctx)?;
            let w = ctx.world.take();
            let (end_val, _) = eval(end, env, ctx)?;
            ctx.world = ctx.world.take().or(w);
            let mut prod = 1.0;
            let mut local_env = env.clone();
            for i in (start_val as i64)..=(end_val as i64) {
                local_env.insert(index.clone(), i as f64);
                let (val, _) = eval(body, &local_env, ctx)?;
                prod *= val;
            }
            Ok((prod, ctx.world.take()))
        }

        Expr::Integral { .. } => Err("Integration not supported yet".to_string()),

        Expr::Cases { branches } => {
            for (value, cond) in branches {
                let (c, _) = eval(cond, env, ctx)?;
                if c != 0.0 {
                    return eval(value, env, ctx);
                }
            }
            Err("No case matched".to_string())
        }

        Expr::WorldPragma(inner) => {
            let world = ctx.world.take().ok_or("Missing WorldToken for @world")?;
            match &**inner {
                // ----- Print -----
                Expr::StringLiteral(msg) => {
                    let console = ctx.console.as_ref().ok_or("Missing ConsoleToken for Print")?;
                    let new_world = print(world, console, msg);
                    ctx.world = Some(new_world);
                    return Ok((0.0, None));
                }
                // ----- Alloc -----
                Expr::FunctionCall { name, args } if name == "Alloc" => {
                    if args.len() != 1 {
                        return Err("Alloc expects one argument (size)".to_string());
                    }
                    let (size_val, _) = eval(&args[0], env, ctx)?;
                    let mem_token = ctx.mem.as_ref().ok_or("Missing MemToken for Alloc")?;
                    let (new_world, ptr) = alloc(world, mem_token, size_val as usize);
                    // Store the pointer somewhere? For now we can't, because we only return an f64.
                    // We'll return the raw pointer value as a hacky f64 for testing.
                    ctx.world = Some(new_world);
                    return Ok((ptr.0 as usize as f64, None));
                }
                // ----- Free -----
                Expr::FunctionCall { name, args } if name == "Free" => {
                    if args.len() != 1 {
                        return Err("Free expects one argument (ptr)".to_string());
                    }
                    let (ptr_val, _) = eval(&args[0], env, ctx)?;
                    let ptr = MemPtr(ptr_val as usize as *mut std::ffi::c_void);
                    let new_world = free(world, ptr);
                    ctx.world = Some(new_world);
                    return Ok((0.0, None));
                }
                _ => {}
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
    use crate::ast::Definition;

    fn default_ctx() -> RuntimeContext {
        RuntimeContext {
            world: None,
            console: None,
            fs: None,
            mem: None,
        }
    }

    fn eval_def(src: &str, env: &HashMap<String, f64>) -> Result<f64, String> {
        let tokens = lex(src);
        let mut parser = Parser::new(tokens);
        let prog = parser.parse_program();
        match &prog[0] {
            Definition::Let { body, .. } => {
                let mut ctx = default_ctx();
                let (val, _) = eval(body, env, &mut ctx)?;
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
        let expr = Expr::Sum {
            index: "i".to_string(),
            start: Box::new(Expr::Number(1.0)),
            end: Box::new(Expr::Number(5.0)),
            body: Box::new(Expr::Variable("i".to_string())),
        };
        let mut ctx = default_ctx();
        let (result, _) = eval(&expr, &HashMap::new(), &mut ctx).unwrap();
        assert_eq!(result, 15.0);
    }

    #[test]
    fn world_print_with_tokens() {
        let expr = Expr::WorldPragma(Box::new(Expr::StringLiteral("Hello, Astranova!".to_string())));
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: Some(crate::runtime::ConsoleToken),
            fs: None,
            mem: None,
        };
        let (val, _) = eval(&expr, &HashMap::new(), &mut ctx).unwrap();
        assert_eq!(val, 0.0);
    }

    #[test]
    fn memory_alloc_and_free() {
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: None,
            mem: Some(MemToken),
        };

        // Build AST for @world Alloc(100)
        let alloc_expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Alloc".to_string(),
            args: vec![Expr::Number(100.0)],
        }));
        let (ptr_val, _) = eval(&alloc_expr, &HashMap::new(), &mut ctx).unwrap();
        assert!(ptr_val > 0.0); // a valid pointer (not zero)

        // Build AST for @world Free(ptr_val)
        let free_expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Free".to_string(),
            args: vec![Expr::Number(ptr_val)],
        }));
        eval(&free_expr, &HashMap::new(), &mut ctx).unwrap();
        // No crash means success.
    }
}