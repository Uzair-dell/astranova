//! Astranova Lexer – converts raw source text into tokens.
//! Supports % line comments, all LaTeX commands, and separates _ from command names.

#[derive(Debug, Clone, PartialEq)]
pub enum Token {
    Identifier(String),
    Number(f64),
    StringLiteral(String),
    GreekLetter(String),

    Let,
    Const,
    World,

    LBrace,
    RBrace,
    LParen,
    RParen,
    LSquare,
    RSquare,
    Comma,
    Semicolon,
    Colon,
    Underscore,
    Backslash,

    Plus,
    Minus,
    Star,
    Slash,
    Caret,
    Times,
    Cdot,

    Eq,
    Neq,
    Lt,
    Gt,
    Le,
    Ge,
    And,
    Or,

    Equal,

    Frac,
    Sum,
    Prod,
    Int,
    Lim,
    Parallel,
    CasesBegin,
    CasesEnd,
    Amp,

    UnitAnnotation(String),
}

struct Lexer<'a> {
    input: &'a str,
    pos: usize,
}

impl<'a> Lexer<'a> {
    fn new(input: &'a str) -> Self {
        Lexer { input, pos: 0 }
    }

    fn current_char(&self) -> Option<char> {
        self.input[self.pos..].chars().next()
    }

    fn advance(&mut self) {
        if self.pos < self.input.len() {
            self.pos += self.current_char().unwrap().len_utf8();
        }
    }

    fn skip_whitespace(&mut self) {
        while let Some(c) = self.current_char() {
            if c.is_whitespace() {
                self.advance();
            } else {
                break;
            }
        }
    }

    fn skip_comment(&mut self) {
        while let Some(c) = self.current_char() {
            if c == '\n' { break; }
            self.advance();
        }
    }

    fn read_identifier_or_greek(&mut self) -> String {
        let start = self.pos;
        while let Some(c) = self.current_char() {
            if c.is_alphanumeric() || c == '_' {
                self.advance();
            } else { break; }
        }
        self.input[start..self.pos].to_string()
    }

    fn read_command_name(&mut self) -> String {
        let start = self.pos;
        while let Some(c) = self.current_char() {
            if c.is_alphabetic() {   // only letters, not digits or underscores
                self.advance();
            } else {
                break;
            }
        }
        self.input[start..self.pos].to_string()
    }

    fn read_number(&mut self) -> f64 {
        let start = self.pos;
        while let Some(c) = self.current_char() {
            if c.is_digit(10) || c == '.' || c == 'e' || c == 'E' || c == '+' || c == '-' {
                self.advance();
            } else { break; }
        }
        self.input[start..self.pos].parse::<f64>().unwrap_or(0.0)
    }

    fn read_string_literal(&mut self) -> String {
        self.advance(); // skip opening quote
        let start = self.pos;
        while let Some(c) = self.current_char() {
            if c == '"' {
                let s = self.input[start..self.pos].to_string();
                self.advance(); // skip closing quote
                return s;
            }
            self.advance();
        }
        "".to_string()
    }

    fn read_unit_annotation(&mut self) -> String {
        self.advance(); // skip opening '['
        let start = self.pos;
        while let Some(c) = self.current_char() {
            if c == ']' {
                let s = self.input[start..self.pos].to_string();
                self.advance(); // skip closing ']'
                return s;
            }
            self.advance();
        }
        "".to_string()
    }

    fn next_token(&mut self) -> Option<Token> {
        loop {
            self.skip_whitespace();
            if self.pos >= self.input.len() { return None; }
            let c = self.current_char().unwrap();
            if c == '%' {
                self.skip_comment();
                continue;
            }
            break;
        }

        let c = self.current_char().unwrap();

        if c == '\\' {
            self.advance();
            if self.current_char() == Some('\\') {
                self.advance();
                return Some(Token::Backslash);
            }
            let mut cmd = self.read_command_name();
            // special handling for \begin{...} and \end{...}
            if cmd == "begin" || cmd == "end" {
                if self.current_char() == Some('{') {
                    self.advance(); // skip '{'
                    let mut brace_content = String::new();
                    while let Some(c2) = self.current_char() {
                        if c2 == '}' { break; }
                        brace_content.push(c2);
                        self.advance();
                    }
                    if self.current_char() == Some('}') {
                        self.advance(); // skip '}'
                    }
                    cmd = format!("{}{{{}}}", cmd, brace_content);
                }
            }
            match cmd.as_str() {
                "let" => return Some(Token::Let),
                "const" => return Some(Token::Const),
                "frac" => return Some(Token::Frac),
                "sum" => return Some(Token::Sum),
                "prod" => return Some(Token::Prod),
                "int" => return Some(Token::Int),
                "lim" => return Some(Token::Lim),
                "parallel" => return Some(Token::Parallel),
                "times" => return Some(Token::Times),
                "cdot" => return Some(Token::Cdot),
                "begin{cases}" => return Some(Token::CasesBegin),
                "end{cases}" => return Some(Token::CasesEnd),
                "ge" => return Some(Token::Ge),
                "le" => return Some(Token::Le),
                "ne" => return Some(Token::Neq),
                _ => return Some(Token::GreekLetter(format!("\\{}", cmd))),
            }
        }

        if c == '@' {
            self.advance();
            let word = self.read_identifier_or_greek();
            if word == "world" {
                return Some(Token::World);
            } else {
                return Some(Token::Identifier(format!("@{}", word)));
            }
        }

        if c.is_digit(10) {
            return Some(Token::Number(self.read_number()));
        }

        if c == '"' {
            return Some(Token::StringLiteral(self.read_string_literal()));
        }

        if c == '[' {
            return Some(Token::UnitAnnotation(self.read_unit_annotation()));
        }

        match c {
            '{' => { self.advance(); return Some(Token::LBrace); }
            '}' => { self.advance(); return Some(Token::RBrace); }
            '(' => { self.advance(); return Some(Token::LParen); }
            ')' => { self.advance(); return Some(Token::RParen); }
            '[' => unreachable!(),
            ']' => { self.advance(); return Some(Token::RSquare); }
            ',' => { self.advance(); return Some(Token::Comma); }
            ';' => { self.advance(); return Some(Token::Semicolon); }
            ':' => { self.advance(); return Some(Token::Colon); }
            '_' => { self.advance(); return Some(Token::Underscore); }
            '+' => { self.advance(); return Some(Token::Plus); }
            '-' => { self.advance(); return Some(Token::Minus); }
            '*' => { self.advance(); return Some(Token::Star); }
            '/' => { self.advance(); return Some(Token::Slash); }
            '^' => { self.advance(); return Some(Token::Caret); }
            '&' => {
                self.advance();
                if self.current_char() == Some('&') {
                    self.advance();
                    return Some(Token::And);
                } else {
                    return Some(Token::Amp);
                }
            }
            '|' => {
                self.advance();
                if self.current_char() == Some('|') {
                    self.advance();
                    return Some(Token::Or);
                } else {
                    return self.next_token();
                }
            }
            '=' => {
                self.advance();
                if self.current_char() == Some('=') {
                    self.advance();
                    return Some(Token::Eq);
                } else {
                    return Some(Token::Equal);
                }
            }
            '!' => {
                self.advance();
                if self.current_char() == Some('=') {
                    self.advance();
                    return Some(Token::Neq);
                } else {
                    return self.next_token();
                }
            }
            '<' => {
                self.advance();
                if self.current_char() == Some('=') {
                    self.advance();
                    return Some(Token::Le);
                } else {
                    return Some(Token::Lt);
                }
            }
            '>' => {
                self.advance();
                if self.current_char() == Some('=') {
                    self.advance();
                    return Some(Token::Ge);
                } else {
                    return Some(Token::Gt);
                }
            }
            '"' => unreachable!(),
            _ => {
                if c.is_alphabetic() || c == '_' {
                    let ident = self.read_identifier_or_greek();
                    return Some(Token::Identifier(ident));
                }
                self.advance();
                return self.next_token();
            }
        }
    }
}

pub fn lex(input: &str) -> Vec<Token> {
    let mut lexer = Lexer::new(input);
    let mut tokens = Vec::new();
    while let Some(tok) = lexer.next_token() {
        tokens.push(tok);
    }
    tokens
}