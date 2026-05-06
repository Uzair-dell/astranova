//! Lexer for Skin B – Math‑like notation.
//! Produces the identical Token stream as the default English lexer.
//! Symbols:
//!   :=  → Token::Equal    (parsed as \let assignment by the parser)
//!   ::  → Token::Const
//!   ▷   → Token::World
//!   ∧   → Token::And
//!   ∨   → Token::Or
//!   ≥   → Token::Ge
//!   ≤   → Token::Le
//!   ≠   → Token::Neq
//!   ? … → Token::QMark     (compact cases)
//!   →   → Token::Arrow
//! All other single‑char tokens, numbers, identifiers, backslash‑commands,
//! and string literals are treated identically to the English skin.

use crate::lexer::Token;

pub fn lex_math(input: &str) -> Vec<Token> {
    let mut tokens = Vec::new();
    let chars: Vec<char> = input.chars().collect();
    let len = chars.len();
    let mut pos = 0;

    while pos < len {
        let ch = chars[pos];

        // ---- whitespace ----
        if ch.is_whitespace() {
            pos += 1;
            continue;
        }

        // ---- line comment (%) ----
        if ch == '%' {
            while pos < len && chars[pos] != '\n' {
                pos += 1;
            }
            continue;
        }

        // ---- single‑char tokens identical to Skin A ----
        match ch {
            '(' => { tokens.push(Token::LParen);   pos += 1; continue; }
            ')' => { tokens.push(Token::RParen);   pos += 1; continue; }
            '{' => { tokens.push(Token::LBrace);   pos += 1; continue; }
            '}' => { tokens.push(Token::RBrace);   pos += 1; continue; }
            '[' => { tokens.push(Token::LSquare);  pos += 1; continue; }
            ']' => { tokens.push(Token::RSquare);  pos += 1; continue; }
            ',' => { tokens.push(Token::Comma);    pos += 1; continue; }
            ';' => { tokens.push(Token::Semicolon);pos += 1; continue; }
            ':' => {
                // := → assignment (Equal), :: → Const, else Colon
                if pos + 1 < len {
                    let nxt = chars[pos + 1];
                    if nxt == '=' {
                        tokens.push(Token::Equal);
                        pos += 2;
                        continue;
                    }
                    if nxt == ':' {
                        tokens.push(Token::Const);
                        pos += 2;
                        continue;
                    }
                }
                tokens.push(Token::Colon);
                pos += 1;
                continue;
            }
            '+' => { tokens.push(Token::Plus);    pos += 1; continue; }
            '-' => { tokens.push(Token::Minus);   pos += 1; continue; }
            '*' => { tokens.push(Token::Star);    pos += 1; continue; }
            '/' => { tokens.push(Token::Slash);   pos += 1; continue; }
            '^' => { tokens.push(Token::Caret);   pos += 1; continue; }
            '=' => {
                if pos + 1 < len && chars[pos + 1] == '=' {
                    tokens.push(Token::Eq);
                    pos += 2;
                } else {
                    tokens.push(Token::Equal);
                    pos += 1;
                }
                continue;
            }
            '<' => {
                if pos + 1 < len && chars[pos + 1] == '=' {
                    tokens.push(Token::Le);
                    pos += 2;
                } else {
                    tokens.push(Token::Lt);
                    pos += 1;
                }
                continue;
            }
            '>' => {
                if pos + 1 < len && chars[pos + 1] == '=' {
                    tokens.push(Token::Ge);
                    pos += 2;
                } else {
                    tokens.push(Token::Gt);
                    pos += 1;
                }
                continue;
            }
            '!' => {
                if pos + 1 < len && chars[pos + 1] == '=' {
                    tokens.push(Token::Neq);
                    pos += 2;
                } else {
                    // skip single ! – could be an error
                    pos += 1;
                }
                continue;
            }
            '&' => {
                if pos + 1 < len && chars[pos + 1] == '&' {
                    tokens.push(Token::And);
                    pos += 2;
                } else {
                    tokens.push(Token::Amp);
                    pos += 1;
                }
                continue;
            }
            '|' => {
                if pos + 1 < len && chars[pos + 1] == '|' {
                    tokens.push(Token::Or);
                    pos += 2;
                } else {
                    pos += 1; // skip single pipe
                }
                continue;
            }
            _ => {}
        }

        // ---- Unicode math tokens ----
        if ch == '▷' {
            tokens.push(Token::World);
            pos += 1;
            continue;
        }
        if ch == '∧' {
            tokens.push(Token::And);
            pos += 1;
            continue;
        }
        if ch == '∨' {
            tokens.push(Token::Or);
            pos += 1;
            continue;
        }
        if ch == '≥' {
            tokens.push(Token::Ge);
            pos += 1;
            continue;
        }
        if ch == '≤' {
            tokens.push(Token::Le);
            pos += 1;
            continue;
        }
        if ch == '≠' {
            tokens.push(Token::Neq);
            pos += 1;
            continue;
        }
        if ch == '?' {
            tokens.push(Token::QMark);
            pos += 1;
            continue;
        }
        if ch == '→' {
            tokens.push(Token::Arrow);
            pos += 1;
            continue;
        }

        // ---- backslash commands (identical to Skin A) ----
        if ch == '\\' {
            pos += 1;
            let start = pos;
            while pos < len && chars[pos].is_alphabetic() {
                pos += 1;
            }
            let cmd: String = chars[start..pos].iter().collect();
            if cmd == "begin" || cmd == "end" {
                if pos < len && chars[pos] == '{' {
                    pos += 1;
                    let mut brace_content = String::new();
                    while pos < len && chars[pos] != '}' {
                        brace_content.push(chars[pos]);
                        pos += 1;
                    }
                    if pos < len && chars[pos] == '}' { pos += 1; }
                    let full_cmd = format!("{}{{{}}}", cmd, brace_content);
                    match full_cmd.as_str() {
                        "begin{cases}" => tokens.push(Token::CasesBegin),
                        "end{cases}"   => tokens.push(Token::CasesEnd),
                        _ => {}
                    }
                    continue;
                }
            }
            let tok = match cmd.as_str() {
                "let"      => Token::Let,
                "const"    => Token::Const,
                "frac"     => Token::Frac,
                "sum"      => Token::Sum,
                "prod"     => Token::Prod,
                "int"      => Token::Int,
                "lim"      => Token::Lim,
                "parallel" => Token::Parallel,
                "times"    => Token::Times,
                "cdot"     => Token::Cdot,
                "ge"       => Token::Ge,
                "le"       => Token::Le,
                "ne"       => Token::Neq,
                "land"     => Token::And,
                "lor"      => Token::Or,
                "where"    => Token::Where,
                ""         => { continue; }
                _          => Token::GreekLetter(format!("\\{}", cmd)),
            };
            tokens.push(tok);
            continue;
        }

        // ---- numbers ----
        if ch.is_digit(10) {
            let start = pos;
            while pos < len &&
                  (chars[pos].is_digit(10) || chars[pos] == '.' ||
                   chars[pos] == 'e' || chars[pos] == 'E' ||
                   chars[pos] == '+' || chars[pos] == '-')
            {
                pos += 1;
            }
            let num_str: String = chars[start..pos].iter().collect();
            let value: f64 = num_str.parse().unwrap_or(0.0);
            tokens.push(Token::Number(value));
            continue;
        }

        // ---- identifiers ----
        if ch.is_alphabetic() || ch == '_' {
            let start = pos;
            while pos < len && (chars[pos].is_alphanumeric() || chars[pos] == '_') {
                pos += 1;
            }
            let ident: String = chars[start..pos].iter().collect();
            tokens.push(Token::Identifier(ident));
            continue;
        }

        // ---- string literals ----
        if ch == '"' {
            pos += 1;
            let start = pos;
            while pos < len && chars[pos] != '"' {
                pos += 1;
            }
            let s = chars[start..pos].iter().collect::<String>();
            if pos < len { pos += 1; }
            tokens.push(Token::StringLiteral(s));
            continue;
        }

        // ---- fallback – skip unrecognised character ----
        pos += 1;
    }

    tokens
}