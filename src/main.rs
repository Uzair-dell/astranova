use std::collections::HashMap;
use astranovac::lexer::lex;
use astranovac::parser::Parser;
use astranovac::eval::eval;
use astranovac::runtime::context::RuntimeContext;

fn main() {
    // Example Astranova program
    let source = r"\let V = \frac{4}{3} \cdot \pi \cdot r ^ 3";
    let tokens = lex(source);
    let mut parser = Parser::new(tokens);
    let program = parser.parse_program();

    let mut env = HashMap::new();
    env.insert("r".to_string(), 5.0);

    let mut ctx = RuntimeContext {
        world: None,
        console: None,
        fs: None,
        mem: None,
        sovereign: None,
        unsafe_token: None,
        enclave: None,
        actor_rx: None,
    };

    for def in &program {
        if let astranovac::ast::Definition::Let { name, body, .. } = def {
            match eval(body, &env, &mut ctx) {
                Ok((value, _)) => println!("{} = {}", name, value),
                Err(e) => println!("Error: {}", e),
            }
        }
    }
}