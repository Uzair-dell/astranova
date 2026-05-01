//! C code generator for Astranova.
//! Produces a .c file that can be compiled with any C compiler.
//! Supports user‑defined functions and built‑in math functions.
//! Conditions in `Cases` are inlined to avoid variable‑scope issues.

use crate::ast::{BinOp, Definition, Expr, UnOp};
use std::collections::HashMap;
use std::fmt::Write;

pub struct Codegen {
    code: String,
    counter: u64,
    locals: HashMap<String, String>,
    last_result: Option<String>,
    functions: HashMap<String, (Vec<String>, Expr)>,
}

impl Codegen {
    pub fn new() -> Self {
        Codegen {
            code: String::new(),
            counter: 0,
            locals: HashMap::new(),
            last_result: None,
            functions: HashMap::new(),
        }
    }

    fn fresh(&mut self, prefix: &str) -> String {
        let id = self.counter;
        self.counter += 1;
        format!("{}{}", prefix, id)
    }

    pub fn compile_program(&mut self, definitions: &[Definition]) -> Result<String, String> {
        self.code.push_str("#include <stdio.h>\n");
        self.code.push_str("#include <math.h>\n\n");
        self.code.push_str("void world_print(const char* msg) { printf(\"%s\\n\", msg); }\n\n");
        self.code.push_str("int main() {\n");

        for def in definitions {
            match def {
                Definition::Let { name, params, body } => {
                    if !params.is_empty() {
                        self.functions.insert(name.clone(), (params.clone(), body.clone()));
                    }
                }
                _ => {}
            }
        }

        for def in definitions {
            match def {
                Definition::Let { name, params, body } if params.is_empty() => {
                    if name != "@world" {
                        let val = self.compile_expr(body)?;
                        self.locals.insert(name.clone(), val.clone());
                        self.last_result = Some(val);
                    } else {
                        if let Expr::WorldPragma(inner) = body {
                            match &**inner {
                                Expr::StringLiteral(msg) => {
                                    writeln!(self.code, "    world_print(\"{}\");", msg).unwrap();
                                }
                                Expr::FunctionCall { name, args } if name == "Print" && args.len() == 1 => {
                                    let val = self.compile_expr(&args[0])?;
                                    writeln!(self.code, "    printf(\"%f\\n\", {});", val).unwrap();
                                }
                                _ => {}
                            }
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

        self.code.push_str("    return 0;\n");
        self.code.push_str("}\n");
        Ok(self.code.clone())
    }

    // ----------------------------------------------------------------
    //  Inline expression compiler – returns a C expression string
    //  WITHOUT emitting any code.  Used for conditions in `Cases`.
    // ----------------------------------------------------------------
    fn compile_expr_inline(&mut self, expr: &Expr) -> Result<String, String> {
        match expr {
            Expr::Number(n) => Ok(format!("{:.10}", n)),
            Expr::Variable(name) => self.locals.get(name)
                .cloned()
                .ok_or_else(|| format!("Undefined variable '{}'", name)),
            Expr::GreekLetter(g) => {
                let val = match g.as_str() {
                    "\\pi" => std::f64::consts::PI,
                    "\\tau" => 2.0 * std::f64::consts::PI,
                    "\\phi" => 1.618033988749895,
                    _ => return Err(format!("Unknown Greek constant {}", g)),
                };
                Ok(format!("{:.10}", val))
            }
            Expr::BinaryOp { op, left, right } => {
                let lhs = self.compile_expr_inline(left)?;
                let rhs = self.compile_expr_inline(right)?;
                let op_str = match op {
                    BinOp::Add => "+",
                    BinOp::Sub => "-",
                    BinOp::Mul | BinOp::Dot | BinOp::Cross => "*",
                    BinOp::Div => "/",
                    BinOp::Eq => "==",
                    BinOp::Neq => "!=",
                    BinOp::Lt => "<",
                    BinOp::Gt => ">",
                    BinOp::Le => "<=",
                    BinOp::Ge => ">=",
                    BinOp::And => "&&",
                    BinOp::Or => "||",
                    BinOp::Pow => {
                        // fall back to a regular temp + call
                        let tmp = self.fresh("powinline");
                        writeln!(self.code, "    double {} = pow({}, {});", tmp, lhs, rhs).unwrap();
                        return Ok(tmp);
                    }
                };
                Ok(format!("({} {} {})", lhs, op_str, rhs))
            }
            Expr::UnaryOp { op, operand } => {
                let val = self.compile_expr_inline(operand)?;
                match op {
                    UnOp::Neg => Ok(format!("(-{})", val)),
                    UnOp::Pos => Ok(val),
                    _ => {
                        // fall back to a temp
                        let tmp = self.fresh("unopinline");
                        self.compile_expr(expr)?; // this will emit the code
                        return Ok(tmp);
                    }
                }
            }
            _ => {
                // For any other expression, compile normally and return the fresh name.
                let tmp = self.compile_expr(expr)?;
                Ok(tmp)
            }
        }
    }

    fn compile_expr(&mut self, expr: &Expr) -> Result<String, String> {
        match expr {
            Expr::Number(n) => Ok(format!("{:.10}", n)),
            Expr::StringLiteral(s) => Ok(format!("\"{}\"", s)),
            Expr::Variable(name) => self.locals.get(name)
                .cloned()
                .ok_or_else(|| format!("Undefined variable '{}'", name)),
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
                let builtins = ["sin", "cos", "log", "sqrt", "abs", "pow",
                              "\\sin", "\\cos", "\\log", "\\sqrt", "\\abs"];
                let func_name = name.trim_start_matches('\\');
                if builtins.contains(&name.as_str()) || builtins.contains(&func_name) {
                    if args.len() != 1 {
                        return Err(format!("Built‑in '{}' expects exactly one argument", name));
                    }
                    let arg = self.compile_expr(&args[0])?;
                    let result = self.fresh("call");
                    let c_func = match func_name {
                        "sin" => "sin",
                        "cos" => "cos",
                        "log" => "log",
                        "sqrt" => "sqrt",
                        "abs" => "fabs",
                        "pow" => "pow",
                        _ => return Err(format!("Unknown built‑in '{}'", name)),
                    };
                    writeln!(self.code, "    double {} = {}({});", result, c_func, arg).unwrap();
                    return Ok(result);
                }

                if let Some((params, body)) = self.functions.get(name).cloned() {
                    if params.len() != args.len() {
                        return Err(format!("Function '{}' expects {} arguments, got {}", name, params.len(), args.len()));
                    }
                    let mut saved_locals = Vec::new();
                    for (param, arg_expr) in params.iter().zip(args.iter()) {
                        let arg_val = self.compile_expr(arg_expr)?;
                        if let Some(old) = self.locals.insert(param.clone(), arg_val.clone()) {
                            saved_locals.push((param.clone(), old));
                        } else {
                            saved_locals.push((param.clone(), String::new()));
                        }
                    }
                    let result_val = self.compile_expr(&body)?;
                    for (param, old_val) in saved_locals {
                        if old_val.is_empty() {
                            self.locals.remove(&param);
                        } else {
                            self.locals.insert(param, old_val);
                        }
                    }
                    return Ok(result_val);
                }

                Err(format!("Unknown function '{}'", name))
            }
            Expr::BinaryOp { op, left, right } => {
                let lhs = self.compile_expr(left)?;
                let rhs = self.compile_expr(right)?;
                let result = self.fresh("binop");
                let operator = match op {
                    BinOp::Add => "+",
                    BinOp::Sub => "-",
                    BinOp::Mul | BinOp::Dot | BinOp::Cross => "*",
                    BinOp::Div => "/",
                    BinOp::Pow => {
                        writeln!(self.code, "    double {} = pow({}, {});", result, lhs, rhs).unwrap();
                        return Ok(result);
                    }
                    BinOp::Eq => "==",
                    BinOp::Neq => "!=",
                    BinOp::Lt => "<",
                    BinOp::Gt => ">",
                    BinOp::Le => "<=",
                    BinOp::Ge => ">=",
                    BinOp::And => "&&",
                    BinOp::Or => "||",
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
            Expr::Sum { index, start, end, body } => {
                let start_val = self.compile_expr(start)?;
                let end_val = self.compile_expr(end)?;
                let result = self.fresh("sum");
                writeln!(self.code, "    double {} = 0.0;", result).unwrap();
                writeln!(self.code, "    for (int {} = (int){}; {} <= (int){}; {}++) {{",
                         index, start_val, index, end_val, index).unwrap();
                self.locals.insert(index.clone(), index.clone());
                let body_val = self.compile_expr(body)?;
                self.locals.remove(index);
                writeln!(self.code, "        {} += {};", result, body_val).unwrap();
                writeln!(self.code, "    }}").unwrap();
                Ok(result)
            }
            Expr::Prod { index, start, end, body } => {
                let start_val = self.compile_expr(start)?;
                let end_val = self.compile_expr(end)?;
                let result = self.fresh("prod");
                writeln!(self.code, "    double {} = 1.0;", result).unwrap();
                writeln!(self.code, "    for (int {} = (int){}; {} <= (int){}; {}++) {{",
                         index, start_val, index, end_val, index).unwrap();
                self.locals.insert(index.clone(), index.clone());
                let body_val = self.compile_expr(body)?;
                self.locals.remove(index);
                writeln!(self.code, "        {} *= {};", result, body_val).unwrap();
                writeln!(self.code, "    }}").unwrap();
                Ok(result)
            }
            Expr::Parallel(exprs) => {
                let result = self.fresh("parallel");
                writeln!(self.code, "    double {} = 0.0;", result).unwrap();
                for e in exprs {
                    let val = self.compile_expr(e)?;
                    writeln!(self.code, "    {} += {};", result, val).unwrap();
                }
                Ok(result)
            }
            Expr::Tuple(_) | Expr::List(_) => {
                let result = self.fresh("tuple_or_list");
                writeln!(self.code, "    double {} = 0.0; /* tuple/list not implemented */", result).unwrap();
                Ok(result)
            }
            Expr::Limit { .. } | Expr::Integral { .. } => {
                let result = self.fresh("limit_or_integral");
                writeln!(self.code, "    double {} = 0.0; /* limit/integral not implemented */", result).unwrap();
                Ok(result)
            }
            Expr::Cases { branches } => {
                let result = self.fresh("cases");
                writeln!(self.code, "    double {};", result).unwrap();
                for (i, (val, cond)) in branches.iter().enumerate() {
                    // Compile condition inline to avoid variable‑scope problems
                    let cond_inline = self.compile_expr_inline(cond)?;
                    if i == 0 {
                        writeln!(self.code, "    if ({}) {{", cond_inline).unwrap();
                    } else {
                        writeln!(self.code, "    }} else if ({}) {{", cond_inline).unwrap();
                    }
                    let val_val = self.compile_expr(val)?;
                    writeln!(self.code, "        {} = {};", result, val_val).unwrap();
                }
                writeln!(self.code, "    }} else {{ {} = 0.0; }}", result).unwrap();
                Ok(result)
            }
            _ => Err(format!("Codegen not implemented for {:?}", expr)),
        }
    }
}