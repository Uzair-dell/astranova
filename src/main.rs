use std::env;
use std::fs;
use std::process::Command;
use astranovac::lexer::lex;
use astranovac::parser::Parser;
use astranovac::codegen::Codegen;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() < 3 {
        eprintln!("Usage: astranovac <command> <file.astr>");
        eprintln!("Commands: build, run, check");
        return;
    }
    let command = &args[1];
    let filename = &args[2];
    let source = fs::read_to_string(filename).expect("Failed to read file");

    let tokens = lex(&source);
    let mut parser = Parser::new(tokens);
    let program = parser.parse_program();

    match command.as_str() {
        "build" | "run" => {
            let mut codegen = Codegen::new();
            let c_code = match codegen.compile_program(&program) {
                Ok(c) => c,
                Err(e) => { eprintln!("Error generating C: {}", e); return; }
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

            if command == "run" {
                let run_status = Command::new(&exe_path)
                    .status()
                    .expect("Failed to run executable.");
                if !run_status.success() {
                    eprintln!("Program exited with error.");
                }
            }
        }
        "check" => {
            eprintln!("Type checking not yet integrated. Assuming valid.");
        }
        _ => eprintln!("Unknown command: {}", command),
    }
}