//! Astranova Parser – converts a token stream into an AST.
//!
//! Recursive descent implementation following the grammar in
//! `docs/spec/01_syntax.ebnf`.

use crate::ast::{BinOp, Definition, Expr, Type};
use crate::lexer::Token;

pub struct Parser {
    tokens: Vec<Token>,
    pos: usize,
}

impl Parser {
    pub fn new(tokens: Vec<Token>) -> Self {
        Parser { tokens, pos: 0 }
    }

    fn peek(&self) -> Option<&Token> {
        self.tokens.get(self.pos)
    }

    fn advance(&mut self) -> &Token {
        let token = &self.tokens[self.pos];
        self.pos += 1;
        token
    }

    fn expect(&mut self, expected: Token) {
        let actual = self.peek();
        match actual {
            Some(t) if *t == expected => {
                self.advance();
            }
            _ => {
                panic!(
                    "Parser error: expected {:?}, found {:?} at position {}",
                    expected,
                    actual,
                    self.pos
                );
            }
        }
    }

    // ---------- Top‑level definitions ----------

    pub fn parse_program(&mut self) -> Vec<Definition> {
        let mut definitions = Vec::new();
        while self.peek().is_some() {
            definitions.push(self.parse_definition());
        }
        definitions
    }

    fn parse_definition(&mut self) -> Definition {
        match self.peek() {
            Some(Token::Let) => self.parse_let(),
            Some(Token::Const) => self.parse_const(),
            Some(Token::World) => {
                let expr = self.parse_world();
                Definition::Let {
                    name: "@world".to_string(),
                    params: vec![],
                    body: expr,
                }
            }
            other => panic!("Expected a definition, found {:?}", other),
        }
    }

    fn parse_let(&mut self) -> Definition {
        self.expect(Token::Let);
        let name = match self.advance() {
            Token::Identifier(s) => s.clone(),
            t => panic!("Expected identifier after \\let, found {:?}", t),
        };
        let params = self.parse_params();
        self.expect(Token::Equal);
        let body = self.parse_expr(0);
        Definition::Let {
            name,
            params,
            body,
        }
    }

    fn parse_const(&mut self) -> Definition {
        self.expect(Token::Const);
        let name = match self.advance() {
            Token::Identifier(s) => s.clone(),
            t => panic!("Expected identifier after \\const, found {:?}", t),
        };
        self.expect(Token::Colon);
        let typ = self.parse_type();
        self.expect(Token::Equal);
        let value = self.parse_expr(0);
        Definition::Const { name, typ, value }
    }

    fn parse_params(&mut self) -> Vec<String> {
        let mut params = Vec::new();
        if let Some(Token::LParen) = self.peek() {
            self.advance();
            loop {
                match self.peek() {
                    Some(Token::RParen) => {
                        self.advance();
                        break;
                    }
                    Some(Token::Identifier(s)) => {
                        params.push(s.clone());
                        self.advance();
                        if let Some(Token::Comma) = self.peek() {
                            self.advance();
                        }
                    }
                    _ => break,
                }
            }
        }
        params
    }

    fn parse_type(&mut self) -> Type {
        match self.peek() {
            Some(Token::Identifier(s)) if s == "Scalar" => {
                self.advance();
                let unit = self.parse_unit_opt();
                Type::Scalar(unit)
            }
            Some(Token::Identifier(s)) if s == "Vector" => {
                self.advance();
                // TODO: parse number inside brackets
                let dim = 3;
                let unit = self.parse_unit_opt();
                Type::Vector(dim, unit)
            }
            Some(Token::Identifier(s)) if s == "Sovereign" => {
                self.advance();
                Type::Sovereign
            }
            other => panic!("Expected type, found {:?}", other),
        }
    }

    fn parse_unit_opt(&mut self) -> Option<crate::ast::Unit> {
        if let Some(Token::LSquare) = self.peek() {
            self.advance(); // consume '['
            let content = match self.advance() {
                Token::UnitAnnotation(s) => s.clone(),
                other => panic!("Expected unit annotation, found {:?}", other),
            };
            let mut map = std::collections::HashMap::new();
            map.insert(content, 1);
            self.expect(Token::RSquare);
            Some(map)
        } else {
            None
        }
    }

    // ---------- Expressions (precedence climbing) ----------

    fn parse_expr(&mut self, min_prec: u8) -> Expr {
        let mut left = self.parse_primary();

        while let Some(token) = self.peek() {
            let op = match token {
                Token::Plus => BinOp::Add,
                Token::Minus => BinOp::Sub,
                Token::Star | Token::Cdot => BinOp::Mul,
                Token::Slash => BinOp::Div,
                Token::Times => BinOp::Cross,
                Token::Caret => BinOp::Pow,
                Token::Eq => BinOp::Eq,
                Token::Neq => BinOp::Neq,
                Token::Lt => BinOp::Lt,
                Token::Gt => BinOp::Gt,
                Token::Le => BinOp::Le,
                Token::Ge => BinOp::Ge,
                Token::And => BinOp::And,
                Token::Or => BinOp::Or,
                _ => break,
            };

            let prec = precedence(&op);
            if prec < min_prec {
                break;
            }
            self.advance(); // consume operator
            let right = self.parse_expr(prec + 1);
            left = Expr::BinaryOp {
                op,
                left: Box::new(left),
                right: Box::new(right),
            };
        }

        left
    }

    fn parse_primary(&mut self) -> Expr {
        match self.advance().clone() {
            Token::Number(n) => Expr::Number(n),
            Token::Identifier(s) => Expr::Variable(s),
            Token::GreekLetter(g) => Expr::GreekLetter(g),
            Token::StringLiteral(s) => Expr::Variable(s),
            Token::LParen => {
                let expr = self.parse_expr(0);
                self.expect(Token::RParen);
                expr
            }
            Token::LBrace => {
                // This shouldn't happen in normal expressions; for now, treat as error
                panic!("Unexpected '{{'");
            }
            Token::Frac => {
                self.expect(Token::LBrace);
                let num = self.parse_expr(0);
                self.expect(Token::RBrace);
                self.expect(Token::LBrace);
                let den = self.parse_expr(0);
                self.expect(Token::RBrace);
                Expr::Frac {
                    num: Box::new(num),
                    den: Box::new(den),
                }
            }
            Token::Sum => {
                self.expect(Token::Underscore);
                self.expect(Token::LBrace);
                let index = match self.advance() {
                    Token::Identifier(s) => s.clone(),
                    _ => panic!("Expected identifier after sum_"),
                };
                self.expect(Token::Equal);
                let start = self.parse_expr(0);
                self.expect(Token::Caret);
                self.expect(Token::LBrace);
                let end = self.parse_expr(0);
                self.expect(Token::RBrace);
                self.expect(Token::RBrace); // close outer brace after _ {...}
                let body = self.parse_expr(0);
                Expr::Sum {
                    index,
                    start: Box::new(start),
                    end: Box::new(end),
                    body: Box::new(body),
                }
            }
            Token::Prod => {
                panic!("Product not yet supported");
            }
            Token::Int => {
                self.expect(Token::Underscore);
                self.expect(Token::LBrace);
                let lower = self.parse_expr(0);
                self.expect(Token::Caret);
                self.expect(Token::LBrace);
                let upper = self.parse_expr(0);
                self.expect(Token::RBrace);
                self.expect(Token::RBrace);
                let integrand = self.parse_expr(0);
                // Skip \, d and var – we haven't tokenized \, d, but for now skip manually
                // Expect a comma maybe? We'll skip requiring it for now.
                let var = "x".to_string(); // dummy
                Expr::Integral {
                    var,
                    lower: Box::new(lower),
                    upper: Box::new(upper),
                    integrand: Box::new(integrand),
                }
            }
            Token::Lim => {
                panic!("Limit not yet supported");
            }
            Token::CasesBegin => {
                let mut branches = Vec::new();
                loop {
                    let value = self.parse_expr(0);
                    self.expect(Token::Amp);
                    let cond = self.parse_expr(0);
                    branches.push((value, cond));
                    match self.peek() {
                        Some(Token::Backslash) => {
                            self.advance();
                        }
                        Some(Token::CasesEnd) => {
                            self.advance();
                            break;
                        }
                        _ => break,
                    }
                }
                Expr::Cases { branches }
            }
            Token::World => {
                let expr = self.parse_expr(0);
                Expr::WorldPragma(Box::new(expr))
            }
            _ => panic!("Unexpected token: {:?}", self.tokens.get(self.pos - 1)),
        }
    }

    fn parse_world(&mut self) -> Expr {
        self.expect(Token::World);
        self.parse_expr(0)
    }
}

/// Operator precedence table.
fn precedence(op: &BinOp) -> u8 {
    match op {
        BinOp::Or => 1,
        BinOp::And => 2,
        BinOp::Eq | BinOp::Neq | BinOp::Lt | BinOp::Gt | BinOp::Le | BinOp::Ge => 3,
        BinOp::Add | BinOp::Sub => 4,
        BinOp::Mul | BinOp::Div | BinOp::Dot | BinOp::Cross => 5,
        BinOp::Pow => 6,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::lexer::lex;

    #[test]
    fn parse_let_definition() {
        let src = r"\let V = \frac{4}{3} \cdot \pi \cdot r^3";
        let tokens = lex(src);
        let mut parser = Parser::new(tokens);
        let prog = parser.parse_program();
        assert_eq!(prog.len(), 1);
        if let Definition::Let { name, .. } = &prog[0] {
            assert_eq!(name, "V");
        } else {
            panic!("Expected Let definition");
        }
    }
}