//! C code generator for Astranova.
//! Produces a .c file that can be compiled with any C compiler.
//! Handles user‑defined functions, built‑ins, Cases, Assign, Block, and all primitives.
//! Fixes: global variables, dynamic loop index substitution, string/tuple globals,
//!        constant‑unrolling with full global visibility, array support,
//!        proper C‑string escaping, concat built‑in, string‑variable tracking,
//!        and a line‑buffer for programmatic code generation.

use crate::ast::{BinOp, Definition, Expr, UnOp};
use std::collections::{HashMap, HashSet};
use std::fmt::Write;

/// Escape a string so it can be placed inside a C‑style `"…"` literal.
fn c_escape(s: &str) -> String {
    s.replace('\\', "\\\\")
        .replace('"', "\\\"")
        .replace('\n', "\\n")
        .replace('\r', "\\r")
        .replace('\t', "\\t")
}

pub struct Codegen {
    code: String,
    counter: u64,
    locals: HashMap<String, String>,
    last_result: Option<String>,
    functions: HashMap<String, (Vec<String>, Expr)>,
    funcrefs: HashMap<String, String>,
    globals: HashSet<String>,       // numeric globals (double)
    arrays: HashSet<String>,        // array variables (double[])
    string_vars: HashSet<String>,   // string variables (char[512])
    line_buffer: Vec<String>,       // stores lines of C source code
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
            arrays: HashSet::new(),
            string_vars: HashSet::new(),
            line_buffer: Vec::new(),
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
                } else if !name.is_empty() && name != "@world" {
                    // Only numeric globals are inserted here.
                    // String/tuple/array alloc bodies are excluded.
                    // Also exclude concat calls and string‑returning built‑ins.
                    let is_string_call = if let Expr::FunctionCall { name: fname, .. } = body {
                        fname == "concat" || fname == "emit_line" || fname == "flush_lines"
                    } else {
                        false
                    };
                    if !matches!(body, Expr::StringLiteral(_) | Expr::Tuple(_) | Expr::ArrayAlloc(_)) && !is_string_call {
                        self.globals.insert(name.clone());
                    }
                }
            }
        }

        // Emit numeric global declarations
        for global in &self.globals {
            writeln!(self.code, "double {} = 0.0;", global).unwrap();
        }
        self.code.push_str("\nint main() {\n");

        // Second pass: evaluate definitions
        for def in definitions {
            match def {
                Definition::Let { name, params, body, is_func } if *is_func => {}
                Definition::Let { name, params, body, is_func } if params.is_empty() && !*is_func => {
                    if name.is_empty() {
                        self.compile_expr(body)?;
                    } else if name != "@world" {
                        // ----- Array allocation -----
                        if let Expr::ArrayAlloc(size) = body {
                            writeln!(self.code, "    double {}[{}] = {{0}};", name, size).unwrap();
                            self.arrays.insert(name.clone());
                        }
                        // ----- String literal assignment -----
                        else if let Expr::StringLiteral(s) = body {
                            writeln!(self.code, "    char {}[512] = \"{}\";", name, c_escape(s)).unwrap();
                            self.string_vars.insert(name.clone());
                            self.locals.insert(name.clone(), name.clone());
                            self.last_result = Some(format!("\"{}\"", c_escape(s)));
                        }
                        // ----- concat, emit_line, flush_lines or other function calls -----
                        else if let Expr::FunctionCall { name: fname, args } = body {
                            if fname == "concat" && args.len() == 2 {
                                let s1 = self.compile_expr(&args[0])?;
                                let s2 = self.compile_expr(&args[1])?;
                                writeln!(self.code, "    char {}[512] = {{0}};", name).unwrap();
                                writeln!(self.code, "    strcpy({}, {});", name, s1).unwrap();
                                writeln!(self.code, "    strcat({}, {});", name, s2).unwrap();
                                self.string_vars.insert(name.clone());
                                self.locals.insert(name.clone(), name.clone());
                                self.last_result = Some(format!("\"{}\"", ""));
                            } else if fname == "emit_line" && args.len() == 2 {
                                // emit_line is a void‑returning built‑in; handle it in compile_expr
                                let _ = self.compile_expr(body)?;
                            } else if fname == "flush_lines" && args.len() == 1 {
                                let _ = self.compile_expr(body)?;
                            } else {
                                let val = self.compile_expr(body)?;
                                if self.globals.contains(name.as_str()) {
                                    writeln!(self.code, "    {} = {};", name, val).unwrap();
                                } else {
                                    self.locals.insert(name.clone(), val.clone());
                                }
                                self.last_result = Some(val);
                            }
                        }
                        // ----- Numeric or other expression -----
                        else {
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
                            Expr::StringLiteral(msg) => {
                                writeln!(self.code, "    world_print(\"{}\");", c_escape(msg)).unwrap();
                            }
                            Expr::FunctionCall { name: pname, args } if pname == "Print" && args.len() == 1 => {
                                match &args[0] {
                                    Expr::StringLiteral(msg) => {
                                        writeln!(self.code, "    printf(\"%s\\n\", \"{}\");", c_escape(msg)).unwrap();
                                    }
                                    Expr::Variable(vname) => {
                                        if self.string_vars.contains(vname) {
                                            writeln!(self.code, "    printf(\"%s\\n\", {});", vname).unwrap();
                                        } else if let Some(_) = self.locals.get(vname) {
                                            let val = self.compile_expr(&args[0])?;
                                            writeln!(self.code, "    printf(\"%f\\n\", {});", val).unwrap();
                                        } else {
                                            let val = self.compile_expr(&args[0])?;
                                            writeln!(self.code, "    printf(\"%f\\n\", {});", val).unwrap();
                                        }
                                    }
                                    _ => {
                                        let val = self.compile_expr(&args[0])?;
                                        writeln!(self.code, "    printf(\"%f\\n\", {});", val).unwrap();
                                    }
                                }
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

        // Print final result only for numeric values
        if let Some(ref last) = self.last_result {
            if !last.starts_with('"') {
                writeln!(self.code, "    printf(\"result = %f\\n\", {});", last).unwrap();
            }
        }

        self.code.push_str("    return 0;\n}\n");
        Ok(self.code.clone())
    }

    fn compile_expr(&mut self, expr: &Expr) -> Result<String, String> {
        match expr {
            Expr::Number(n) => Ok(format!("{:.10}", n)),
            Expr::StringLiteral(s) => Ok(format!("\"{}\"", c_escape(s))),

            // ---------- Variable ----------
            Expr::Variable(name) => {
                if self.globals.contains(name) {
                    Ok(name.clone())
                } else if self.arrays.contains(name) {
                    Ok(name.clone())
                } else if self.string_vars.contains(name) {
                    Ok(name.clone())
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
                // concat(s1, s2)
                if name == "concat" && args.len() == 2 {
                    let s1 = self.compile_expr(&args[0])?;
                    let s2 = self.compile_expr(&args[1])?;
                    let result = self.fresh("concat");
                    writeln!(self.code, "    char {}[512] = {{0}};", result).unwrap();
                    writeln!(self.code, "    strcpy({}, {});", result, s1).unwrap();
                    writeln!(self.code, "    strcat({}, {});", result, s2).unwrap();
                    return Ok(result);
                }
                // emit_line(index, text) – store a C source line in the buffer
                if name == "emit_line" && args.len() == 2 {
                    let idx_str = self.compile_expr(&args[0])?;
                    let txt = self.compile_expr(&args[1])?;
                    let raw = txt.trim_matches('"').to_string();
                    let idx: usize = idx_str.parse().unwrap_or(0);
                    if idx >= self.line_buffer.len() {
                        self.line_buffer.resize(idx + 1, String::new());
                    }
                    self.line_buffer[idx] = raw;
                    return Ok("0".to_string());
                }
                // flush_lines(count) – emit all stored lines into the C file
                if name == "flush_lines" && args.len() == 1 {
                    let count_str = self.compile_expr(&args[0])?;
                    let count: usize = count_str.parse().unwrap_or(0);
                    for i in 0..count {
                        if let Some(line) = self.line_buffer.get(i) {
                            writeln!(self.code, "    printf(\"%s\\n\", \"{}\");", line).unwrap();
                        }
                    }
                    return Ok("0".to_string());
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
                    writeln!(self.code, "    {} = {};", var, val).unwrap();
                } else {
                    self.locals.insert(var.clone(), val.clone());
                }
                Ok(val)
            }

            // ---------- Subscript Assign ----------
            Expr::SubscriptAssign { array, index, value } => {
                let idx = self.compile_expr(index)?;
                let val = self.compile_expr(value)?;
                writeln!(self.code, "    {}[(int){}] = {};", array, idx, val).unwrap();
                Ok(val)
            }

            // ---------- Subscript ----------
            Expr::Subscript { array, index } => {
                let arr_name = self.compile_expr(array)?;
                let idx = self.compile_expr(index)?;
                let result = self.fresh("arr");
                writeln!(self.code, "    double {} = {}[(int){}];", result, arr_name, idx).unwrap();
                Ok(result)
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

            // ---------- Sum (with limited constant‑unrolling) ----------
            Expr::Sum { index, start, end, body } => {
                let start_val = self.compile_expr(start)?;
                let end_val = self.compile_expr(end)?;

                if let (Expr::Number(start_n), Expr::Number(end_n)) = (start.as_ref(), end.as_ref()) {
                    let n_iter = (*end_n - *start_n) as i64 + 1;
                    if n_iter <= 8 {
                        let result = self.fresh("sum");
                        writeln!(self.code, "    double {} = 0.0;", result).unwrap();
                        let mut i_val = *start_n;

                        self.locals.insert(index.clone(), format!("{:.10}", i_val));
                        for g in self.globals.clone() {
                            if !self.locals.contains_key(&g) {
                                self.locals.insert(g.clone(), g.clone());
                            }
                        }

                        for _ in 0..n_iter {
                            let body_val = self.compile_expr(body)?;
                            writeln!(self.code, "    {} += {};", result, body_val).unwrap();
                            i_val += 1.0;
                            self.locals.insert(index.clone(), format!("{:.10}", i_val));
                        }
                        self.locals.remove(index);
                        return Ok(result);
                    }
                }

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

            // ---------- Prod (with limited constant‑unrolling) ----------
            Expr::Prod { index, start, end, body } => {
                let start_val = self.compile_expr(start)?;
                let end_val = self.compile_expr(end)?;

                if let (Expr::Number(start_n), Expr::Number(end_n)) = (start.as_ref(), end.as_ref()) {
                    let n_iter = (*end_n - *start_n) as i64 + 1;
                    if n_iter <= 8 {
                        let result = self.fresh("prod");
                        writeln!(self.code, "    double {} = 1.0;", result).unwrap();
                        let mut i_val = *start_n;

                        self.locals.insert(index.clone(), format!("{:.10}", i_val));
                        for g in self.globals.clone() {
                            if !self.locals.contains_key(&g) {
                                self.locals.insert(g.clone(), g.clone());
                            }
                        }

                        for _ in 0..n_iter {
                            let body_val = self.compile_expr(body)?;
                            writeln!(self.code, "    {} *= {};", result, body_val).unwrap();
                            i_val += 1.0;
                            self.locals.insert(index.clone(), format!("{:.10}", i_val));
                        }
                        self.locals.remove(index);
                        return Ok(result);
                    }
                }

                let result = self.fresh("prod");
                self.locals.insert(index.clone(), index.clone());
                writeln!(self.code, "    double {} = 1.0;", result).unwrap();
                writeln!(self.code, "    for (int {} = (int)({}); {} <= (int)({}); {}++) {{",
                         index, start_val, index, end_val, index).unwrap();
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