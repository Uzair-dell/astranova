use astranovac::parser::Parser;
use astranovac::lexer::lex;
use astranovac::ast::{Definition, Expr, BinOp};

#[test]
fn parse_simple_let() {
    let tokens = lex("\\let x = 5");
    let mut parser = Parser::new(tokens);
    let program = parser.parse_program();
    assert_eq!(program.len(), 1);
    match &program[0] {
        Definition::Let { name, params, body, .. } => {
            assert_eq!(name, "x");
            assert!(params.is_empty());
            match body {
                Expr::Number(n) => assert_eq!(*n, 5.0),
                _ => panic!("Expected number"),
            }
        }
        _ => panic!("Expected Let definition"),
    }
}

#[test]
fn parse_binary_plus() {
    let tokens = lex("\\let x = 2 + 3");
    let mut parser = Parser::new(tokens);
    let program = parser.parse_program();
    match &program[0] {
        Definition::Let { name, body, .. } => {
            assert_eq!(name, "x");
            match body {
                Expr::BinaryOp { op, left, right } => {
                    assert_eq!(*op, BinOp::Add);
                    assert_eq!(**left, Expr::Number(2.0));
                    assert_eq!(**right, Expr::Number(3.0));
                }
                _ => panic!("Expected binary op"),
            }
        }
        _ => panic!("Expected Let definition"),
    }
}