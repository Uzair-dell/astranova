//! C code generator for Astranova.
//! Produces a .c file that can be compiled with any C compiler.
//! Handles user‑defined functions, built‑ins, Cases, Assign, Block, and all primitives.
//! Fixes: global variables, dynamic loop index substitution, string/tuple globals.

use crate::ast::{BinOp, Definition, Expr, UnOp};
use std::collections::{HashMap, HashSet};
use std::fmt::Write;

pub struct Codegen {
    code: String,
    counter: u64,
    locals: HashMap<String, String>,
    last_result: Option<String>,
    functions: HashMap<String, (Vec<String>, Expr)>,
    funcrefs: HashMap<String, String>,
    globals: HashSet<String>,   // names of C global variables
}

impl Codegen {
    pub fn new() -> Self {
        Codegen {
            code: String::new(),
            counter: 0,
            locals: HashMap::new(),
            last_result: None,
            functions: HashMap::new(),
            funcrefs: HashMap::new(),
            globals: HashSet::new(),
        }
    }

    fn fresh(&mut self, prefix: &str) -> String {
        let id = self.counter;
        self.counter += 1;
        format!("{}{}", prefix, id)
    }

    pub fn compile_program(&mut self, definitions: &[Definition]) -> Result<String, String> {
        self.code.push_str("#include <stdio.h>\n#include <math.h>\n#include <string.h>\n\n");
        self.code.push_str("void world_print(const char* msg) { printf(\"%s\\n\", msg); }\n\n");

        // First pass: collect function metadata and global variable names
        for def in definitions {
            if let Definition::Let { name, params, body, is_func } = def {
                if *is_func {
                    self.functions.insert(name.clone(), (params.clone(), body.clone()));
                } else if !params.is_empty() {
                    // zero‑parameter functions are already handled above
                } else if !name.is_empty() && name != "@world" {
                    // Only make it a global if the body is NOT a string literal AND NOT a tuple
                    if !matches!(body, Expr::StringLiteral(_) | Expr::Tuple(_)) {
                        self.globals.insert(name.clone());
                    }
                }
            }
        }

        // Emit global variable declarations
        for global in &self.globals {
            writeln!(self.code, "double {} = 0.0;", global).unwrap();
        }
        self.code.push_str("\nint main() {\n");

        // Second pass: evaluate definitions
        for def in definitions {
            match def {
                Definition::Let { name, params, body, is_func } if *is_func => {
                    // function definitions are stored, nothing to emit here
                }
                Definition::Let { name, params, body, is_func } if params.is_empty() && !*is_func => {
                    if name.is_empty() {
                        // top‑level expression statement
                        self.compile_expr(body)?;
                    } else if name != "@world" {
                        // NEW: treat string literals specially
                        if let Expr::StringLiteral(s) = body {
                            let escaped = format!("\"{}\"", s);
                            self.locals.insert(name.clone(), escaped.clone());
                            self.last_result = Some(escaped);
                        } else {
                            let val = self.compile_expr(body)?;
                            if self.globals.contains(name.as_str()) {
                                writeln!(self.code, "    {} = {};", name, val).unwrap();
                            } else {
                                self.locals.insert(name.clone(), val.clone());
                            }
                            self.last_result = Some(val);
                        }
                    } else if let Expr::WorldPragma(inner) = body {
                        match &**inner {
                            Expr::StringLiteral(msg) => writeln!(self.code, "    world_print(\"{}\");", msg).unwrap(),
                            Expr::FunctionCall { name: pname, args } if pname == "Print" && args.len() == 1 => {
                                let val = self.compile_expr(&args[0])?;
                                writeln!(self.code, "    printf(\"%f\\n\", {});", val).unwrap();
                            }
                            _ => {}
                        }
                    }
                }
                Definition::Const { name, value, .. } => {
                    let val = self.compile_expr(value)?;
                    self.locals.insert(name.clone(), val.clone());
                    self.last_result = Some(val);
                }
                _ => {}
            }
        }

        if let Some(ref last) = self.last_result {
            writeln!(self.code, "    printf(\"result = %f\\n\", {});", last).unwrap();
        }

        self.code.push_str("    return 0;\n}\n");
        Ok(self.code.clone())
    }

    fn compile_expr(&mut self, expr: &Expr) -> Result<String, String> {
        match expr {
            Expr::Number(n) => Ok(format!("{:.10}", n)),
            Expr::StringLiteral(s) => Ok(format!("\"{}\"", s)),

            // ---------- Variable ----------
            Expr::Variable(name) => {
                if self.globals.contains(name) {
                    Ok(name.clone())   // use the C global variable directly
                } else {
                    self.locals.get(name).cloned()
                        .ok_or_else(|| format!("Undefined variable '{}'", name))
                }
            }

            Expr::GreekLetter(g) => {
                let val = match g.as_str() {
                    "\\pi" => std::f64::consts::PI,
                    "\\tau" => 2.0 * std::f64::consts::PI,
                    "\\phi" => 1.618033988749895,
                    _ => return Err(format!("Unknown Greek constant {}", g)),
                };
                Ok(format!("{:.10}", val))
            }

            Expr::FunctionCall { name, args } => {
                // string built‑ins
                if name == "length" && args.len() == 1 {
                    let s = self.compile_expr(&args[0])?;
                    let result = self.fresh("len");
                    writeln!(self.code, "    double {} = (double)strlen({});", result, s).unwrap();
                    return Ok(result);
                }
                if name == "char_at" && args.len() == 2 {
                    let s = self.compile_expr(&args[0])?;
                    let pos = self.compile_expr(&args[1])?;
                    let result = self.fresh("charat");
                    writeln!(self.code, "    double {} = (double)(unsigned char){}[(int){}];",
                             result, s, pos).unwrap();
                    return Ok(result);
                }
                if name == "tlen" && args.len() == 1 {
                    if let Expr::Tuple(elements) = &args[0] {
                        let len = elements.len();
                        return Ok(format!("{}", len));
                    } else {
                        return Err("tlen: argument must be a tuple literal".to_string());
                    }
                }
                if name == "get" && args.len() == 2 {
                    let tuple = self.compile_expr(&args[0])?;
                    let idx = self.compile_expr(&args[1])?;
                    return Ok(format!("({})[(int)({})]", tuple, idx));
                }

                // built‑in math functions
                let builtins = ["sin","cos","log","sqrt","abs","pow","\\sin","\\cos","\\log","\\sqrt","\\abs"];
                let func_name = name.trim_start_matches('\\');
                if builtins.contains(&name.as_str()) || builtins.contains(&func_name) {
                    if args.len() != 1 {
                        return Err(format!("Built‑in '{}' expects exactly one argument", name));
                    }
                    let arg = self.compile_expr(&args[0])?;
                    let result = self.fresh("call");
                    let c_func = match func_name {
                        "sin" => "sin", "cos" => "cos", "log" => "log",
                        "sqrt" => "sqrt", "abs" => "fabs", "pow" => "pow",
                        _ => return Err(format!("Unknown built‑in '{}'", name)),
                    };
                    writeln!(self.code, "    double {} = {}({});", result, c_func, arg).unwrap();
                    return Ok(result);
                }

                // user‑defined functions
                if let Some((params, body)) = self.functions.get(name).cloned() {
                    if params.len() != args.len() {
                        return Err(format!("Function '{}' expects {} arguments, got {}", name, params.len(), args.len()));
                    }
                    let mut saved = Vec::new();
                    for (p, a) in params.iter().zip(args.iter()) {
                        let av = self.compile_expr(a)?;
                        if let Some(fn_name) = self.funcrefs.get(&av).cloned() {
                            self.funcrefs.insert(p.clone(), fn_name);
                        }
                        if let Some(old) = self.locals.insert(p.clone(), av.clone()) {
                            saved.push((p.clone(), old));
                        } else {
                            saved.push((p.clone(), String::new()));
                        }
                    }
                    let res = self.compile_expr(&body)?;
                    for (p, old) in saved {
                        if old.is_empty() { self.locals.remove(&p); }
                        else { self.locals.insert(p, old); }
                    }
                    return Ok(res);
                }

                // function reference call
                if let Some(actual_name) = self.funcrefs.get(name).cloned() {
                    return self.compile_expr(&Expr::FunctionCall {
                        name: actual_name,
                        args: args.clone(),
                    });
                }

                Err(format!("Unknown function '{}'", name))
            }

            // ---------- Assignment ----------
            Expr::Assign { var, value } => {
                let val = self.compile_expr(value)?;
                if self.globals.contains(var.as_str()) {
                    // Direct C assignment to global
                    writeln!(self.code, "    {} = {};", var, val).unwrap();
                } else {
                    self.locals.insert(var.clone(), val.clone());
                }
                Ok(val)
            }

            Expr::Block(exprs) => {
                let mut last = String::new();
                for expr in exprs {
                    last = self.compile_expr(expr)?;
                }
                Ok(last)
            }

            Expr::BinaryOp { op, left, right } => {
                let lhs = self.compile_expr(left)?;
                let rhs = self.compile_expr(right)?;
                let result = self.fresh("binop");
                let operator = match op {
                    BinOp::Add => "+", BinOp::Sub => "-",
                    BinOp::Mul | BinOp::Dot | BinOp::Cross => "*",
                    BinOp::Div => "/",
                    BinOp::Pow => {
                        writeln!(self.code, "    double {} = pow({}, {});", result, lhs, rhs).unwrap();
                        return Ok(result);
                    }
                    BinOp::Eq => "==", BinOp::Neq => "!=",
                    BinOp::Lt => "<", BinOp::Gt => ">",
                    BinOp::Le => "<=", BinOp::Ge => ">=",
                    BinOp::And => "&&", BinOp::Or => "||",
                };
                writeln!(self.code, "    double {} = {} {} {};", result, lhs, operator, rhs).unwrap();
                Ok(result)
            }

            Expr::UnaryOp { op, operand } => {
                let val = self.compile_expr(operand)?;
                let result = self.fresh("unop");
                match op {
                    UnOp::Neg => writeln!(self.code, "    double {} = -{};", result, val).unwrap(),
                    UnOp::Pos => return Ok(val),
                    UnOp::Sin => writeln!(self.code, "    double {} = sin({});", result, val).unwrap(),
                    UnOp::Cos => writeln!(self.code, "    double {} = cos({});", result, val).unwrap(),
                    UnOp::Log => writeln!(self.code, "    double {} = log({});", result, val).unwrap(),
                    UnOp::Sqrt => writeln!(self.code, "    double {} = sqrt({});", result, val).unwrap(),
                    UnOp::Abs => writeln!(self.code, "    double {} = fabs({});", result, val).unwrap(),
                }
                Ok(result)
            }

            Expr::Frac { num, den } => {
                let n = self.compile_expr(num)?;
                let d = self.compile_expr(den)?;
                let result = self.fresh("frac");
                writeln!(self.code, "    double {} = {} / {};", result, n, d).unwrap();
                Ok(result)
            }

            // ---------- Sum (dynamic loop) ----------
            // ---------- Sum (with constant‑unrolling) ----------
Expr::Sum { index, start, end, body } => {
    let start_val = self.compile_expr(start)?;
    let end_val = self.compile_expr(end)?;

    // Constant‑unrolling branch
    if let (Expr::Number(start_n), Expr::Number(end_n)) = (start.as_ref(), end.as_ref()) {
        let result = self.fresh("sum");
        writeln!(self.code, "    double {} = 0.0;", result).unwrap();
        let mut i_val = *start_n;
        let n_iter = (*end_n - *start_n) as i64 + 1;
        for _ in 0..n_iter {
            // insert loop index as a temporary double constant
            let idx = self.fresh("i");
            self.locals.insert(index.clone(), format!("{:.10}", i_val));
            let body_val = self.compile_expr(body)?;
            writeln!(self.code, "    {} += {};", result, body_val).unwrap();
            i_val += 1.0;
        }
        self.locals.remove(index);
        return Ok(result);
    }

    // Dynamic loop branch (unchanged from your current code)
    let result = self.fresh("sum");
    self.locals.insert(index.clone(), index.clone());
    writeln!(self.code, "    double {} = 0.0;", result).unwrap();
    writeln!(self.code, "    for (int {} = (int)({}); {} <= (int)({}); {}++) {{",
             index, start_val, index, end_val, index).unwrap();
    for g in self.globals.clone() {
        if !self.locals.contains_key(&g) {
            self.locals.insert(g.clone(), g.clone());
        }
    }
    let body_val = self.compile_expr(body)?;
    writeln!(self.code, "        {} += {};", result, body_val).unwrap();
    writeln!(self.code, "    }}").unwrap();
    self.locals.remove(index);
    Ok(result)
}

            Expr::Prod { index, start, end, body } => {
                let start_val = self.compile_expr(start)?;
                let end_val = self.compile_expr(end)?;
                let result = self.fresh("prod");
                self.locals.insert(index.clone(), index.clone());
                writeln!(self.code, "    double {} = 1.0;", result).unwrap();
                writeln!(self.code, "    for (int {} = (int)({}); {} <= (int)({}); {}++) {{",
                         index, start_val, index, end_val, index).unwrap();
                // Make all globals visible inside the loop body
                for g in self.globals.clone() {
                    if !self.locals.contains_key(&g) {
                        self.locals.insert(g.clone(), g.clone());
                    }
                }
                let body_val = self.compile_expr(body)?;
                writeln!(self.code, "        {} *= {};", result, body_val).unwrap();
                writeln!(self.code, "    }}").unwrap();
                self.locals.remove(index);
                Ok(result)
            }

            Expr::Parallel(exprs) => {
                let result = self.fresh("parallel");
                writeln!(self.code, "    double {} = 0.0;", result).unwrap();
                for e in exprs {
                    let v = self.compile_expr(e)?;
                    writeln!(self.code, "    {} += {};", result, v).unwrap();
                }
                Ok(result)
            }

            Expr::Cases { branches } => {
                let result = self.fresh("cases");
                writeln!(self.code, "    double {};", result).unwrap();
                let mut cond_vars = Vec::new();
                for (_val, cond) in branches.iter() {
                    let cv = self.compile_expr(cond)?;
                    cond_vars.push(cv);
                }
                for (i, (val, _cond)) in branches.iter().enumerate() {
                    let cond_var = &cond_vars[i];
                    if i == 0 {
                        writeln!(self.code, "    if ({}) {{", cond_var).unwrap();
                    } else {
                        writeln!(self.code, "    }} else if ({}) {{", cond_var).unwrap();
                    }
                    let vv = self.compile_expr(val)?;
                    writeln!(self.code, "        {} = {};", result, vv).unwrap();
                }
                writeln!(self.code, "    }} else {{ {} = 0.0; }}", result).unwrap();
                Ok(result)
            }

            Expr::Tuple(elements) => {
                let result = self.fresh("tuple");
                let mut names = Vec::new();
                for e in elements.iter() {
                    let val = self.compile_expr(e)?;
                    names.push(val);
                }
                write!(self.code, "    double {}[] = {{", result).unwrap();
                for (i, name) in names.iter().enumerate() {
                    if i > 0 { write!(self.code, ", ").unwrap(); }
                    write!(self.code, "{}", name).unwrap();
                }
                writeln!(self.code, "}};").unwrap();
                Ok(result)
            }

            Expr::LetIn { bindings, body } => {
                let mut saved = Vec::new();
                for (var_name, value_expr) in bindings {
                    let val = self.compile_expr(value_expr)?;
                    let old = self.locals.insert(var_name.clone(), val.clone());
                    saved.push((var_name.clone(), old));
                }
                let result = self.compile_expr(body)?;
                for (var_name, old) in saved {
                    match old {
                        Some(old_val) => { self.locals.insert(var_name, old_val); }
                        None => { self.locals.remove(&var_name); }
                    }
                }
                Ok(result)
            }

            Expr::FunctionRef(name) => {
                let result = self.fresh("funcref");
                self.funcrefs.insert(result.clone(), name.clone());
                writeln!(self.code, "    double {} = 0.0; /* funcref to {} */", result, name).unwrap();
                Ok(result)
            }

            _ => Err(format!("Codegen not implemented for {:?}", expr)),
        }
    }
}