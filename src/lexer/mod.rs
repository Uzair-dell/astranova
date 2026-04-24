//! Astranova Lexer – converts raw source text into tokens.
//! Extended with Colon, And, Or, Underscore, Backslash.

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

    fn read_identifier_or_greek(&mut self) -> String {
        let start = self.pos;
        while let Some(c) = self.current_char() {
            if c.is_alphanumeric() || c == '_' {
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
            } else {
                break;
            }
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
        self.skip_whitespace();

        if self.pos >= self.input.len() {
            return None;
        }

        let c = self.current_char().unwrap();

        // LaTeX commands (backslash)
        if c == '\\' {
            self.advance();
            // Check for double backslash (\\) which is line separator in cases
            if self.current_char() == Some('\\') {
                self.advance();
                return Some(Token::Backslash);
            }
            let cmd = self.read_identifier_or_greek();
            match cmd.as_str() {
                "let" => return Some(Token::Let),
                "const" => return Some(Token::Const),
                "frac" => return Some(Token::Frac),
                "sum" => return Some(Token::Sum),
                "prod" => return Some(Token::Prod),
                "int" => return Some(Token::Int),
                "lim" => return Some(Token::Lim),
                "times" => return Some(Token::Times),
                "cdot" => return Some(Token::Cdot),
                "begin{cases}" => return Some(Token::CasesBegin),
                "end{cases}" => return Some(Token::CasesEnd),
                _ => return Some(Token::GreekLetter(format!("\\{}", cmd))),
            }
        }

        // @world
        if c == '@' {
            self.advance();
            let word = self.read_identifier_or_greek();
            if word == "world" {
                return Some(Token::World);
            } else {
                return Some(Token::Identifier(format!("@{}", word)));
            }
        }

        // Numbers
        if c.is_digit(10) {
            return Some(Token::Number(self.read_number()));
        }

        // String literal
        if c == '"' {
            return Some(Token::StringLiteral(self.read_string_literal()));
        }

        // Unit annotation
        if c == '[' {
            return Some(Token::UnitAnnotation(self.read_unit_annotation()));
        }

        // Single-char and multi-char operators
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
                    // Single | not used; skip it
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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn lex_sphere_volume() {
        let src = r"V = \frac{4}{3} \cdot \pi \cdot r^3";
        let tokens = lex(src);
        assert_eq!(tokens.len(), 15);
        assert_eq!(tokens[0], Token::Identifier("V".to_string()));
        assert_eq!(tokens[1], Token::Equal);
        assert_eq!(tokens[2], Token::Frac);
        assert_eq!(tokens[3], Token::LBrace);
        assert_eq!(tokens[4], Token::Number(4.0));
        assert_eq!(tokens[5], Token::RBrace);
        assert_eq!(tokens[6], Token::LBrace);
        assert_eq!(tokens[7], Token::Number(3.0));
        assert_eq!(tokens[8], Token::RBrace);
        assert_eq!(tokens[9], Token::Cdot);
        assert_eq!(tokens[10], Token::GreekLetter("\\pi".to_string()));
        assert_eq!(tokens[11], Token::Cdot);
        assert_eq!(tokens[12], Token::Identifier("r".to_string()));
        assert_eq!(tokens[13], Token::Caret);
        assert_eq!(tokens[14], Token::Number(3.0));
    }

    #[test]
    fn lex_world_pragma() {
        let src = "@world Print(\"hello\")";
        let tokens = lex(src);
        assert_eq!(tokens[0], Token::World);
        assert_eq!(tokens[1], Token::Identifier("Print".to_string()));
    }
}