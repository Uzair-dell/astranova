//! Evaluator – walks the AST and computes numeric results.
//! Layers 1‑7: World monad, Console, FS, Memory, Sovereign, Sandbox, Enclave.
//! Phase 7.3: simple actor model using channels.

use std::collections::HashMap;
use std::thread;
use std::sync::mpsc;
use crate::ast::{Expr, BinOp, UnOp};
use crate::runtime::context::RuntimeContext;
use crate::runtime::{
    WorldToken,
    ConsoleToken,
    MemToken,
    print,
    alloc, free, MemPtr,
};
use std::f64::consts::PI;

pub type EvalResult = Result<(f64, Option<WorldToken>), String>;

/// Returns `true` if the expression contains no `WorldPragma` anywhere.
fn is_pure(expr: &Expr) -> bool {
    match expr {
        Expr::Number(_) | Expr::StringLiteral(_) | Expr::Variable(_) | Expr::GreekLetter(_) => true,
        Expr::BinaryOp { left, right, .. } => is_pure(left) && is_pure(right),
        Expr::UnaryOp { operand, .. } => is_pure(operand),
        Expr::Frac { num, den } => is_pure(num) && is_pure(den),
        Expr::Pow { base, exp } => is_pure(base) && is_pure(exp),
        Expr::Sum { start, end, body, .. } | Expr::Prod { start, end, body, .. } => {
            is_pure(start) && is_pure(end) && is_pure(body)
        }
        Expr::Integral { integrand, .. } => is_pure(integrand),
        Expr::Limit { body, .. } => is_pure(body),
        Expr::Cases { branches } => {
            branches.iter().all(|(val, cond)| is_pure(val) && is_pure(cond))
        }
        Expr::Tuple(exprs) | Expr::List(exprs) | Expr::Parallel(exprs) => {
            exprs.iter().all(|e| is_pure(e))
        }
        Expr::FunctionCall { .. } => false,
        Expr::WorldPragma(_) => false,
    }
}

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
        Expr::Limit { .. } => Err("Limits not supported in evaluator".to_string()),

        Expr::Cases { branches } => {
            for (value, cond) in branches {
                let (c, _) = eval(cond, env, ctx)?;
                if c != 0.0 {
                    return eval(value, env, ctx);
                }
            }
            Err("No case matched".to_string())
        }

        // ---- Parallel evaluation (Phase 7.2) ----
        Expr::Parallel(exprs) => {
            if !exprs.iter().all(|e| is_pure(e)) {
                return Err("@world actions are not allowed inside \\parallel blocks".to_string());
            }

            let world_token = ctx.world.take();
            let base_ctx = RuntimeContext {
                world: None,
                console: ctx.console.clone(),
                fs: ctx.fs.clone(),
                mem: ctx.mem.clone(),
                sovereign: ctx.sovereign.clone(),
                unsafe_token: ctx.unsafe_token.clone(),
                enclave: ctx.enclave.clone(),
                actor_rx: None,   // no actor channel in parallel workers
            };
            let env = env.clone();

            let results: Vec<f64> = thread::scope(|s| {
                let mut handles = Vec::new();
                for expr in exprs {
                    let mut thread_ctx = base_ctx.clone();
                    let thread_env = env.clone();
                    handles.push(s.spawn(move || {
                        eval(expr, &thread_env, &mut thread_ctx).map(|(val, _)| val)
                    }));
                }
                handles.into_iter()
                    .map(|h| h.join().unwrap())
                    .collect::<Result<Vec<_>, String>>()
            })?;

            ctx.world = world_token;
            Ok((results.iter().sum(), ctx.world.take()))
        }

        // ---- World actions (all layers) ----
        Expr::WorldPragma(inner) => {
            let world = ctx.world.take().ok_or("Missing WorldToken for @world")?;
            let sovereign = ctx.sovereign.is_some();

            match &**inner {
                // ---- Print ----
                Expr::StringLiteral(msg) => {
                    let console = if sovereign { ConsoleToken }
                                  else { ctx.console.take().ok_or("Missing ConsoleToken for Print")? };
                    let new_world = print(world, &console, msg);
                    ctx.world = Some(new_world);
                    if !sovereign { ctx.console = Some(console); }
                    return Ok((0.0, None));
                }

                // ---- Alloc ----
                Expr::FunctionCall { name, args } if name == "Alloc" => {
                    if args.len() != 1 { return Err("Alloc expects one argument (size)".to_string()); }
                    let (size_val, _) = eval(&args[0], env, ctx)?;
                    let mem = if sovereign { MemToken }
                              else { ctx.mem.take().ok_or("Missing MemToken for Alloc")? };
                    let (new_world, ptr) = alloc(world, &mem, size_val as usize);
                    ctx.world = Some(new_world);
                    if !sovereign { ctx.mem = Some(mem); }
                    return Ok((ptr.0 as usize as f64, None));
                }

                // ---- Free ----
                Expr::FunctionCall { name, args } if name == "Free" => {
                    if args.len() != 1 { return Err("Free expects one argument (ptr)".to_string()); }
                    let (ptr_val, _) = eval(&args[0], env, ctx)?;
                    let ptr = MemPtr(ptr_val as usize as *mut std::ffi::c_void);
                    let new_world = free(world, ptr);
                    ctx.world = Some(new_world);
                    return Ok((0.0, None));
                }

                // ---- Eval ----
                Expr::FunctionCall { name, args: _ } if name == "Eval" => {
                    if !sovereign {
                        let _ = ctx.unsafe_token.as_ref().ok_or("Missing UnsafeToken for @world Eval")?;
                    }
                    return Err("@world Eval is not yet implemented".to_string());
                }

                // ---- Compile ----
                Expr::FunctionCall { name, args: _ } if name == "Compile" => {
                    if !sovereign {
                        let _ = ctx.unsafe_token.as_ref().ok_or("Missing UnsafeToken for @world Compile")?;
                    }
                    return Err("@world Compile is not yet implemented".to_string());
                }

                // ---- Actor Spawn (Phase 7.3) ----
                Expr::FunctionCall { name, args } if name == "Spawn" => {
                    if !sovereign {
                        let _ = ctx.unsafe_token.as_ref().ok_or("Missing UnsafeToken for @world Spawn")?;
                    }
                    if args.len() < 2 {
                        return Err("Spawn expects a name (string) and an expression".to_string());
                    }
                    let body = args[1].clone();
                    let (tx, rx) = mpsc::channel();
                    let world_for_actor = world;
                    thread::spawn(move || {
                        let mut actor_ctx = RuntimeContext {
                            world: None,
                            console: None,
                            fs: None,
                            mem: None,
                            sovereign: None,
                            unsafe_token: None,
                            enclave: None,
                            actor_rx: None,
                        };
                        let env = HashMap::new();
                        if let Ok((val, _)) = eval(&body, &env, &mut actor_ctx) {
                            let _ = tx.send(val);
                        }
                    });
                    ctx.actor_rx = Some(rx);
                    ctx.world = Some(world_for_actor);
                    return Ok((0.0, None));
                }

                // ---- Actor Receive ----
                Expr::FunctionCall { name, args: _ } if name == "Receive" => {
                    if !sovereign {
                        let _ = ctx.unsafe_token.as_ref().ok_or("Missing UnsafeToken for @world Receive")?;
                    }
                    let rx = ctx.actor_rx.take().ok_or("No actor messages to receive")?;
                    match rx.recv() {
                        Ok(val) => {
                            ctx.world = Some(world);
                            return Ok((val, None));
                        }
                        Err(_) => return Err("Actor channel closed".to_string()),
                    }
                }

                _ => return Err("Invalid @world usage".to_string()),
            }
        }

        other => Err(format!("Evaluation not supported for {:?}", other)),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::lexer::lex;
    use crate::parser::Parser;
    use crate::ast::Definition;
    use crate::runtime::{SovereignToken, UnsafeToken, FSToken, open_file, write_file, close_file, read_file};

    fn default_ctx() -> RuntimeContext {
        RuntimeContext {
            world: None,
            console: None,
            fs: None,
            mem: None,
            sovereign: None,
            unsafe_token: None,
            enclave: None,
            actor_rx: None,
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

    // ---------- Original tests (all with actor_rx: None) ----------
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
            console: Some(ConsoleToken),
            fs: None,
            mem: None,
            sovereign: None,
            unsafe_token: None,
            enclave: None,
            actor_rx: None,
        };
        let (val, _) = eval(&expr, &HashMap::new(), &mut ctx).unwrap();
        assert_eq!(val, 0.0);
    }

    #[test]
    fn file_write_and_read() {
        let path = "test_layer2.txt";
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: Some(FSToken),
            mem: None,
            sovereign: None,
            unsafe_token: None,
            enclave: None,
            actor_rx: None,
        };

        let (world, handle) = open_file(ctx.world.take().unwrap(), &FSToken, path, "w").unwrap();
        ctx.world = Some(world);

        let world = write_file(ctx.world.take().unwrap(), &handle, "hello");
        ctx.world = Some(world);

        let world = close_file(ctx.world.take().unwrap(), handle);
        ctx.world = Some(world);

        let (world, handle2) = open_file(ctx.world.take().unwrap(), &FSToken, path, "r").unwrap();
        ctx.world = Some(world);

        let (world, _data) = read_file(ctx.world.take().unwrap(), &handle2, 10);
        ctx.world = Some(world);

        let _world = close_file(ctx.world.take().unwrap(), handle2);
    }

    #[test]
    fn memory_alloc_and_free() {
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: None,
            mem: Some(MemToken),
            sovereign: None,
            unsafe_token: None,
            enclave: None,
            actor_rx: None,
        };
        let alloc_expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Alloc".to_string(),
            args: vec![Expr::Number(100.0)],
        }));
        let (ptr_val, _) = eval(&alloc_expr, &HashMap::new(), &mut ctx).unwrap();
        assert!(ptr_val > 0.0);
        let free_expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Free".to_string(),
            args: vec![Expr::Number(ptr_val)],
        }));
        eval(&free_expr, &HashMap::new(), &mut ctx).unwrap();
    }

    #[test]
    fn sovereign_can_print_without_console_token() {
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: None,
            mem: None,
            sovereign: Some(SovereignToken),
            unsafe_token: None,
            enclave: None,
            actor_rx: None,
        };
        let expr = Expr::WorldPragma(Box::new(Expr::StringLiteral("Hello from sovereign!".to_string())));
        let (val, _) = eval(&expr, &HashMap::new(), &mut ctx).unwrap();
        assert_eq!(val, 0.0);
    }

    #[test]
    fn sovereign_can_alloc_without_mem_token() {
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: None,
            mem: None,
            sovereign: Some(SovereignToken),
            unsafe_token: None,
            enclave: None,
            actor_rx: None,
        };
        let alloc_expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Alloc".to_string(),
            args: vec![Expr::Number(50.0)],
        }));
        let (ptr_val, _) = eval(&alloc_expr, &HashMap::new(), &mut ctx).unwrap();
        assert!(ptr_val > 0.0);
        let free_expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Free".to_string(),
            args: vec![Expr::Number(ptr_val)],
        }));
        eval(&free_expr, &HashMap::new(), &mut ctx).unwrap();
    }

    #[test]
    fn eval_without_unsafe_token_fails() {
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: None,
            mem: None,
            sovereign: None,
            unsafe_token: None,
            enclave: None,
            actor_rx: None,
        };
        let expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Eval".to_string(),
            args: vec![Expr::StringLiteral("1 + 1".to_string())],
        }));
        let result = eval(&expr, &HashMap::new(), &mut ctx);
        assert!(result.is_err());
        assert!(result.unwrap_err().contains("Missing UnsafeToken"));
    }

    #[test]
    fn eval_with_unsafe_token_gets_not_implemented() {
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: None,
            mem: None,
            sovereign: None,
            unsafe_token: Some(UnsafeToken),
            enclave: None,
            actor_rx: None,
        };
        let expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Eval".to_string(),
            args: vec![Expr::StringLiteral("1 + 1".to_string())],
        }));
        let result = eval(&expr, &HashMap::new(), &mut ctx);
        assert!(result.is_err());
        assert!(result.unwrap_err().contains("not yet implemented"));
    }

    #[test]
    fn compile_without_unsafe_token_fails() {
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: None,
            mem: None,
            sovereign: None,
            unsafe_token: None,
            enclave: None,
            actor_rx: None,
        };
        let expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Compile".to_string(),
            args: vec![Expr::StringLiteral("module".to_string())],
        }));
        let result = eval(&expr, &HashMap::new(), &mut ctx);
        assert!(result.is_err());
        assert!(result.unwrap_err().contains("Missing UnsafeToken"));
    }

    #[test]
    fn compile_with_unsafe_token_gets_not_implemented() {
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: None,
            mem: None,
            sovereign: None,
            unsafe_token: Some(UnsafeToken),
            enclave: None,
            actor_rx: None,
        };
        let expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Compile".to_string(),
            args: vec![Expr::StringLiteral("module".to_string())],
        }));
        let result = eval(&expr, &HashMap::new(), &mut ctx);
        assert!(result.is_err());
        assert!(result.unwrap_err().contains("not yet implemented"));
    }

    #[test]
    fn parallel_evaluation() {
        let expr = Expr::Parallel(vec![
            Expr::BinaryOp {
                op: BinOp::Add,
                left: Box::new(Expr::Number(1.0)),
                right: Box::new(Expr::Number(2.0)),
            },
            Expr::BinaryOp {
                op: BinOp::Mul,
                left: Box::new(Expr::Number(3.0)),
                right: Box::new(Expr::Number(4.0)),
            },
            Expr::Number(5.0),
        ]);
        let mut ctx = default_ctx();
        let (result, _) = eval(&expr, &HashMap::new(), &mut ctx).unwrap();
        assert_eq!(result, 1.0+2.0 + 3.0*4.0 + 5.0);
    }

    #[test]
    fn parallel_rejects_world_pragma() {
        let expr = Expr::Parallel(vec![
            Expr::Number(1.0),
            Expr::WorldPragma(Box::new(Expr::StringLiteral("hi".to_string()))),
        ]);
        let mut ctx = default_ctx();
        let result = eval(&expr, &HashMap::new(), &mut ctx);
        assert!(result.is_err());
        assert!(result.unwrap_err().contains("@world"));
    }

    // ---------- Phase 7.3: Actor model test ----------
    #[test]
    fn actor_spawn_and_receive() {
        let mut ctx = RuntimeContext {
            world: Some(WorldToken),
            console: None,
            fs: None,
            mem: None,
            sovereign: None,
            unsafe_token: Some(UnsafeToken),
            enclave: None,
            actor_rx: None,
        };
        let spawn_expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Spawn".to_string(),
            args: vec![
                Expr::StringLiteral("calc".to_string()),
                Expr::BinaryOp {
                    op: BinOp::Mul,
                    left: Box::new(Expr::Number(3.0)),
                    right: Box::new(Expr::Number(4.0)),
                },
            ],
        }));
        let (val, _) = eval(&spawn_expr, &HashMap::new(), &mut ctx).unwrap();
        assert_eq!(val, 0.0);

        let recv_expr = Expr::WorldPragma(Box::new(Expr::FunctionCall {
            name: "Receive".to_string(),
            args: vec![],
        }));
        let (val, _) = eval(&recv_expr, &HashMap::new(), &mut ctx).unwrap();
        assert_eq!(val, 12.0);
    }
}