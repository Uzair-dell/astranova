use std::env;
use std::fs;
use std::process::Command;
use astranovac::lexer::lex;
use astranovac::parser::Parser;
use astranovac::codegen::Codegen;
use astranovac::typecheck::{TypeEnv, TokenEnv, FnEnv, infer_definition};

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() < 3 {
        eprintln!("Usage: astranovac <command> <file.astr> [input.astr]");
        eprintln!("Commands: build, run, check");
        return;
    }
    let _command = &args[1];
    let filename = &args[2];
    let input_filename = if args.len() >= 4 { Some(&args[3]) } else { None };

    let mut source = fs::read_to_string(filename).expect("Failed to read compiler source");

    // ---------- \require pre‑processing ----------
    let mut processed = String::new();
    for line in source.lines() {
        let trimmed = line.trim();
        if trimmed.starts_with("\\require") {
            let lib_path = trimmed
                .strip_prefix("\\require")
                .unwrap()
                .trim()
                .to_string();
            let full_path = if lib_path.ends_with(".astr") {
                lib_path
            } else {
                format!("{}.astr", lib_path)
            };
            let lib_content = fs::read_to_string(&full_path)
                .unwrap_or_else(|_| panic!("Cannot find required library: {}", full_path));
            processed.push_str(&lib_content);
            processed.push('\n');
        } else {
            processed.push_str(line);
            processed.push('\n');
        }
    }
    source = processed;
    // ------------------------------------------

    // Source injection (for self‑hosted compiler)
    if let Some(input_path) = input_filename {
        let input_content = fs::read_to_string(input_path).expect("Failed to read input file");
        let escaped = input_content
            .replace('\\', "\\\\")
            .replace('"', "\\\"")
            .replace('\n', "\\n")
            .replace('\r', "");
        source = source.replace("__INPUT__", &format!("\"{}\"", escaped));
    } else {
        source = source.replace("__INPUT__", "\"\"");
    }

    let tokens = lex(&source);
    let mut parser = Parser::new(tokens);
    let mut program = parser.parse_program();
    // --- Single type‑check pass (shared between build and run) ---
    let mut env = TypeEnv::new();
    let mut tokens = TokenEnv::new();
    let mut fns = FnEnv::new();
    tokens.insert("ConsoleToken".to_string());

    for def in &program {
        if let Err(e) = infer_definition(def, &mut env, &tokens, &mut fns) {
            panic!("Type error: {:?}", e);
        }
    }
        // Nuclear Optimizer pass
    use astranovac::optimizer;
    use astranovac::ast::Definition;
    for def in &mut program {
        match def {
            Definition::Let { body, .. } => *body = optimizer::optimize(body),
            Definition::Const { value, .. } => *value = optimizer::optimize(value),
        }
    }
        // --- Nuclear Optimizer pass ---
    for def in &mut program {
        match def {
            astranovac::ast::Definition::Let { body, .. } => {
                *body = astranovac::optimizer::optimize(body);
            }
            astranovac::ast::Definition::Const { value, .. } => {
                *value = astranovac::optimizer::optimize(value);
            }
           
        }
    }

    match _command.as_str() {
        "build" | "run" => {
            let mut codegen = Codegen::new();
            let c_code = match codegen.compile_program(&program) {
                Ok(c) => c,
                Err(e) => {
                    eprintln!("Error generating C: {}", e);
                    return;
                }
            };

            let c_path = format!("{}.c", filename.trim_end_matches(".astr"));
            fs::write(&c_path, &c_code).expect("Failed to write .c file");
            println!("C code written to {}", c_path);

            let exe_path = format!("{}.exe", filename.trim_end_matches(".astr"));
            let status = Command::new("gcc")
                .args(&[&c_path, "-o", &exe_path, "-lm"])
                .status()
                .expect("Failed to execute gcc. Make sure gcc is in your PATH.");
            if !status.success() {
                eprintln!("GCC compilation failed.");
                return;
            }
            println!("Native executable: {}", exe_path);

            if _command == "run" {
                let run_status = Command::new(&exe_path)
                    .status()
                    .expect("Failed to run executable.");
                if !run_status.success() {
                    eprintln!("Program exited with error.");
                }
            }
        }
        "check" => {
            let mut env = TypeEnv::new();
            let mut tokens = TokenEnv::new();
            let mut fns = FnEnv::new();
            tokens.insert("ConsoleToken".to_string());
            for def in &program {
                match infer_definition(def, &mut env, &tokens, &mut fns) {
                    Ok(ty) => eprintln!("✓ {:?} → {:?}",
                                      match def { Definition::Let{name,..} => name, _ => "const" }, ty),
                    Err(e) => eprintln!("Type error: {:?}", e),
                }
            }
        }
        _ => eprintln!("Unknown command: {}", _command),
    }
}