//! Astranova Parser – converts a token stream into an AST.
//! Full support for function calls, parallel, and all primitive types.
//! Added: unary minus/plus prefix, optional superscript for Sum/Prod.

use crate::ast::{BinOp, Definition, Expr, Type, UnOp};
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
                self.advance(); // consume '@world'
                let inner = match self.peek() {
                    Some(Token::StringLiteral(s)) => {
                        let msg = s.clone();
                        self.advance();
                        Expr::StringLiteral(msg)
                    }
                    Some(Token::Identifier(id)) if id == "Print" => {
                        self.advance();
                        self.expect(Token::LParen);
                        let expr = self.parse_expr(0);
                        self.expect(Token::RParen);
                        Expr::FunctionCall {
                            name: "Print".to_string(),
                            args: vec![expr],
                        }
                    }
                    _ => panic!("Expected a string or Print(expr) after @world"),
                };
                Definition::Let {
                    name: "@world".to_string(),
                    params: vec![],
                    body: Expr::WorldPragma(Box::new(inner)),
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
        if let Some(Token::UnitAnnotation(content)) = self.peek() {
            let content = content.clone();
            self.advance();
            let mut map = std::collections::HashMap::new();
            map.insert(content, 1);
            Some(map)
        } else {
            None
        }
    }

    // ---------- Expressions (precedence climbing) ----------

    fn parse_expr(&mut self, min_prec: u8) -> Expr {
        // Handle prefix unary operators
        let mut left = match self.peek() {
            Some(Token::Minus) => {
                self.advance();
                Expr::UnaryOp { op: UnOp::Neg, operand: Box::new(self.parse_primary()) }
            }
            Some(Token::Plus) => {
                self.advance();
                Expr::UnaryOp { op: UnOp::Pos, operand: Box::new(self.parse_primary()) }
            }
            _ => self.parse_primary(),
        };

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
            self.advance();
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
                        Token::Identifier(s) => {
                if self.peek() == Some(&Token::LParen) {
                    self.advance(); // consume '('
                    let mut args = Vec::new();
                    loop {
                        args.push(self.parse_expr(0));
                        match self.peek() {
                            Some(Token::Comma) => { self.advance(); }
                            Some(Token::RParen) => { self.advance(); break; }
                            _ => { self.advance(); } // lenient
                        }
                    }
                    Expr::FunctionCall { name: s, args }
                } else {
                    Expr::Variable(s)
                }
            }
                       Token::GreekLetter(g) => {
                if self.peek() == Some(&Token::LParen) {
                    self.advance(); // consume '('
                    let mut args = Vec::new();
                    loop {
                        args.push(self.parse_expr(0));
                        match self.peek() {
                            Some(Token::Comma) => { self.advance(); }
                            Some(Token::RParen) => { self.advance(); break; }
                            _ => { self.advance(); }
                        }
                    }
                    Expr::FunctionCall { name: g, args }
                } else {
                    Expr::GreekLetter(g)
                }
            }
            Token::StringLiteral(s) => Expr::StringLiteral(s),
            Token::LParen => {
                let expr = self.parse_expr(0);
                self.expect(Token::RParen);
                expr
            }
            Token::LBrace => {
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
                self.expect(Token::RBrace);
                // superscript is optional; default to start (single iteration)
                let end = if self.peek() == Some(&Token::Caret) {
                    self.advance();
                    self.expect(Token::LBrace);
                    let e = self.parse_expr(0);
                    self.expect(Token::RBrace);
                    e
                } else {
                    start.clone()
                };
                let body = self.parse_expr(0);
                Expr::Sum {
                    index,
                    start: Box::new(start),
                    end:   Box::new(end),
                    body:  Box::new(body),
                }
            }
            Token::Prod => {
                self.expect(Token::Underscore);
                self.expect(Token::LBrace);
                let index = match self.advance() {
                    Token::Identifier(s) => s.clone(),
                    _ => panic!("Expected identifier after prod_"),
                };
                self.expect(Token::Equal);
                let start = self.parse_expr(0);
                self.expect(Token::RBrace);
                let end = if self.peek() == Some(&Token::Caret) {
                    self.advance();
                    self.expect(Token::LBrace);
                    let e = self.parse_expr(0);
                    self.expect(Token::RBrace);
                    e
                } else {
                    start.clone()
                };
                let body = self.parse_expr(0);
                Expr::Prod {
                    index,
                    start: Box::new(start),
                    end:   Box::new(end),
                    body:  Box::new(body),
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
            Token::Parallel => {
                self.expect(Token::LBrace);
                let mut exprs = Vec::new();
                loop {
                    exprs.push(self.parse_expr(0));
                    match self.peek() {
                        Some(Token::Comma) => { self.advance(); }
                        Some(Token::RBrace) => { self.advance(); break; }
                        _ => { self.advance(); }
                    }
                }
                Expr::Parallel(exprs)
            }
            _ => panic!("Unexpected token: {:?}", self.tokens.get(self.pos - 1)),
        }
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