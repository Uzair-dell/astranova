//! Integration tests for the Astranova parser.
//! Each test takes a source string, lexes it, parses it, and checks the resulting AST.

use astranovac::lexer::lex;
use astranovac::parser::Parser;
use astranovac::ast::{Definition, Expr, BinOp};

/// Helper to parse a single definition from source code.
fn parse_single_def(src: &str) -> Definition {
    let tokens = lex(src);
    let mut parser = Parser::new(tokens);
    let mut prog = parser.parse_program();
    assert_eq!(prog.len(), 1, "Expected exactly one definition");
    prog.remove(0)
}

#[test]
fn parse_simple_assignment() {
    // \let E = m * c^2
    let def = parse_single_def(r"\let E = m * c^2");
    match def {
         Definition::Let { name, params, body, .. }
            assert_eq!(name, "E");
            assert!(params.is_empty());
            // body should be: m * (c ^ 2)
            match body {
                Expr::BinaryOp { op, left, right } => {
                    assert_eq!(op, BinOp::Mul);
                    assert_eq!(*left, Expr::Variable("m".to_string()));
                    // right side should be c ^ 2
                           match *right {
                                 Expr::BinaryOp { op, left, right } => {
                                    assert_eq!(op, BinOp::Pow);
                                    assert_eq!(*left, Expr::Variable("c".to_string()));
                                    assert_eq!(*right, Expr::Number(2.0));
    }
    other => panic!("Expected Pow (BinaryOp), got {:?}", other),
}                }
                other => panic!("Expected BinaryOp, got {:?}", other),
            }
        }
        other => panic!("Expected Let definition, got {:?}", other),
    }
}

#[test]
fn parse_sphere_volume() {
    // \let V = \frac{4}{3} \cdot \pi \cdot r^3
    let def = parse_single_def(r"\let V = \frac{4}{3} \cdot \pi \cdot r^3");
    match def {
        Definition::Let { name, .. } => {
            assert_eq!(name, "V");
            // The exact AST is complex, but we can at least verify it doesn't crash.
            // (The earlier `ast_sphere_volume_example` test already checks a similar tree.)
        }
        other => panic!("Expected Let, got {:?}", other),
    }
}

#[test]
fn parse_const_definition() {
    // \const c : Scalar[m/s] = 299792458
    let def = parse_single_def(r"\const c : Scalar[m/s] = 299792458");
    match def {
            Definition::Const { name, typ: _typ, value } => {
            assert_eq!(name, "c");
            // We can't check the full type yet, but the value should be a number.
            assert_eq!(value, Expr::Number(299792458.0));
            // Type should be Scalar with some unit map (we'll improve later)
        }
        other => panic!("Expected Const, got {:?}", other),
    }
}