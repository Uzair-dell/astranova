//! Astranova Parser – final production version
//! Supports assignment, sequencing, subscripts, array allocation, and the full language.

use crate::ast::{BinOp, Definition, Expr, Type, UnOp};
use crate::lexer::Token;

pub struct Parser {
    tokens: Vec<Token>,
    pos: usize,
    function_names: Vec<String>,
}

impl Parser {
    pub fn new(tokens: Vec<Token>) -> Self {
        Parser { tokens, pos: 0, function_names: Vec::new() }
    }

    fn peek(&self) -> Option<&Token> { self.tokens.get(self.pos) }

    fn advance(&mut self) -> &Token {
        let t = &self.tokens[self.pos];
        self.pos += 1;
        t
    }

    fn expect(&mut self, expected: Token) {
        let actual = self.peek();
        match actual {
            Some(t) if *t == expected => { self.advance(); }
            _ => panic!("Parser error: expected {:?}, found {:?} at pos {}", expected, actual, self.pos),
        }
    }

    // ---------- top‑level program ----------
        pub fn parse_program(&mut self) -> Vec<Definition> {
        let mut definitions = Vec::new();
        while self.peek().is_some() {
            // Check for top‑level "identifier = expr" → \let id = expr
            if let Some(Token::Identifier(name)) = self.peek().cloned() {
                let saved_pos = self.pos;          // remember where we are
                self.advance();                     // consume identifier
                if self.peek() == Some(&Token::Equal) {
                    self.advance();                 // consume =
                    let body = self.parse_expr(0);
                    definitions.push(Definition::Let {
                        name,
                        params: vec![],
                        is_func: false,
                        body,
                    });
                    continue;                       // done with this definition
                } else {
                    // Not an assignment – reset position and fall through to the old match
                    self.pos = saved_pos;
                }
            }

            match self.peek() {
                Some(Token::Let)   => definitions.push(self.parse_let()),
                Some(Token::Const) => definitions.push(self.parse_const()),
                Some(Token::World) => definitions.push(self.parse_world()),
                _ => {
                    let mut expr = self.parse_expr(0);
                    if self.peek() == Some(&Token::Semicolon) {
                        let mut exprs = vec![expr];
                        while self.peek() == Some(&Token::Semicolon) {
                            self.advance();
                            exprs.push(self.parse_expr(0));
                        }
                        expr = Expr::Block(exprs);
                    }
                    definitions.push(Definition::Let {
                        name: String::new(),
                        params: vec![],
                        is_func: false,
                        body: expr,
                    });
                }
            }
        }
        definitions
    }

    // -------- @world --------
        fn parse_world(&mut self) -> Definition {
        self.advance(); // consume World token
        let inner = match self.peek() {
            // Skin A / classic: @world "string" or @world Print(...)
            Some(Token::StringLiteral(s)) => {
                let m = s.clone();
                self.advance();
                Expr::StringLiteral(m)
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
            // Skin B / shorthand: ▷ expr   (implicit Print)
            _ => {
                let expr = self.parse_expr(0);
                Expr::FunctionCall {
                    name: "Print".to_string(),
                    args: vec![expr],
                }
            }
        };

        Definition::Let {
            name: "@world".to_string(),
            params: vec![],
            is_func: false,
            body: Expr::WorldPragma(Box::new(inner)),
        }
    }

    // -------- \let --------
    fn parse_let(&mut self) -> Definition {
        self.expect(Token::Let);
        let name = match self.advance() {
            Token::Identifier(s) => s.clone(),
            t => panic!("Expected identifier, got {:?}", t)
        };

        let saw_paren = self.peek() == Some(&Token::LParen);
        let params = self.parse_params();
        let is_func = saw_paren;

        if is_func {
            self.function_names.push(name.clone());
        }

        self.expect(Token::Equal);
        let mut body = self.parse_expr(0);

        // Sequencing with semicolons inside a \let body
        if self.peek() == Some(&Token::Semicolon) {
            let mut exprs = vec![body];
            while self.peek() == Some(&Token::Semicolon) {
                self.advance();
                exprs.push(self.parse_expr(0));
            }
            body = Expr::Block(exprs);
        }

        // Optional where clause
        if self.peek() == Some(&Token::Where) {
            self.advance();
            let mut bindings = Vec::new();
            loop {
                let var = match self.advance() {
                    Token::Identifier(s) => s.clone(),
                    Token::GreekLetter(g) => g.clone(),
                    t => panic!("Expected variable, got {:?}", t)
                };
                self.expect(Token::Equal);
                let val = self.parse_expr(0);
                bindings.push((var, val));
                if self.peek() != Some(&Token::Comma) { break; }
                self.advance();
            }
            body = Expr::LetIn { bindings, body: Box::new(body) };
        }

        Definition::Let { name, params, body, is_func }
    }

    fn parse_params(&mut self) -> Vec<String> {
        let mut params = Vec::new();
        if let Some(Token::LParen) = self.peek() {
            self.advance();
            loop {
                match self.peek() {
                    Some(Token::RParen) => { self.advance(); break; }
                    Some(Token::Identifier(s)) => {
                        params.push(s.clone()); self.advance();
                        if let Some(Token::Comma) = self.peek() { self.advance(); }
                    }
                    _ => break,
                }
            }
        }
        params
    }

    // -------- \const --------
    fn parse_const(&mut self) -> Definition {
        self.expect(Token::Const);
        let name = match self.advance() { Token::Identifier(s) => s.clone(), t => panic!("Expected identifier, got {:?}", t) };
        self.expect(Token::Colon); let typ = self.parse_type();
        self.expect(Token::Equal); let value = self.parse_expr(0);
        Definition::Const { name, typ, value }
    }

    fn parse_type(&mut self) -> Type {
        match self.peek() {
            Some(Token::Identifier(s)) if s == "Scalar" => { self.advance(); let u = self.parse_unit_opt(); Type::Scalar(u) }
            Some(Token::Identifier(s)) if s == "Vector" => { self.advance(); let u = self.parse_unit_opt(); Type::Vector(3, u) }
            Some(Token::Identifier(s)) if s == "Sovereign" => { self.advance(); Type::Sovereign }
            other => panic!("Expected type, found {:?}", other),
        }
    }

    fn parse_unit_opt(&mut self) -> Option<crate::ast::Unit> {
    if self.peek() == Some(&Token::LSquare) {
        self.advance(); // consume '['
        let mut unit_str = String::new();
        // Read the unit content: one or more identifiers/operators inside brackets
        while let Some(tok) = self.peek() {
            match tok {
                Token::Identifier(s) | Token::GreekLetter(s) => {
                    unit_str.push_str(s);
                    self.advance();
                }
                Token::RSquare => { break; }
                Token::Star | Token::Slash | Token::Caret => {
                    // allow operators inside unit (e.g., m/s, m^2)
                    unit_str.push(match tok {
                        Token::Star => '*', Token::Slash => '/', Token::Caret => '^',
                        _ => unreachable!(),
                    });
                    self.advance();
                }
                _ => break,
            }
        }
        self.expect(Token::RSquare);
        let mut map = std::collections::HashMap::new();
        map.insert(unit_str, 1);
        Some(map)
    } else {
        None
    }
}

    // ---------- expressions ----------
    fn parse_expr(&mut self, min_prec: u8) -> Expr {
        let mut left = match self.peek() {
            Some(Token::Minus) => { self.advance(); Expr::UnaryOp { op: UnOp::Neg, operand: Box::new(self.parse_primary()) } }
            Some(Token::Plus)  => { self.advance(); Expr::UnaryOp { op: UnOp::Pos, operand: Box::new(self.parse_primary()) } }
            _ => self.parse_primary(),
        };

        // Binary operators (precedence climbing)
        while let Some(tok) = self.peek() {
            let op = match tok {
                Token::Plus => BinOp::Add, Token::Minus => BinOp::Sub, Token::Star|Token::Cdot => BinOp::Mul,
                Token::Slash => BinOp::Div, Token::Times => BinOp::Cross, Token::Caret => BinOp::Pow,
                Token::Eq => BinOp::Eq, Token::Neq => BinOp::Neq, Token::Lt => BinOp::Lt, Token::Gt => BinOp::Gt,
                Token::Le => BinOp::Le, Token::Ge => BinOp::Ge, Token::And => BinOp::And, Token::Or => BinOp::Or,
                _ => break,
            };
            let prec = precedence(&op);
            if prec < min_prec { break; }
            self.advance();
            let right = self.parse_expr(prec + 1);
            left = Expr::BinaryOp { op, left: Box::new(left), right: Box::new(right) };
        }

        // Post‑subscript: a[i]
        while self.peek() == Some(&Token::LSquare) {
            self.advance(); // consume [
            let index = self.parse_expr(0);
            self.expect(Token::RSquare);
            left = Expr::Subscript { array: Box::new(left), index: Box::new(index) };
        }

        // Assignment (right‑associative)
        if self.peek() == Some(&Token::Equal) {
            self.advance();
            let value = self.parse_expr(0);
            match left {
                Expr::Subscript { array, index } => {
                    if let Expr::Variable(var_name) = *array {
                        left = Expr::SubscriptAssign { array: var_name, index, value: Box::new(value) };
                    } else {
                        panic!("Array subscript assignment requires a named variable");
                    }
                }
                Expr::Variable(var_name) => {
                    left = Expr::Assign { var: var_name, value: Box::new(value) };
                }
                _ => panic!("Assignment target must be a variable or subscript, found {:?}", left),
            }
        }

        // Sequencing with semicolons (only at the outermost level)
        

        left
    }

    fn parse_primary(&mut self) -> Expr {
        match self.advance().clone() {
            Token::Number(n) => Expr::Number(n),

            // -------- built‑ins: get / tlen --------
            Token::Identifier(s) if s == "get" => {
                self.expect(Token::LParen); let t = self.parse_expr(0);
                self.expect(Token::Comma);  let i = self.parse_expr(0);
                self.expect(Token::RParen);
                Expr::FunctionCall { name: "get".to_string(), args: vec![t, i] }
            }
            Token::Identifier(s) if s == "tlen" => {
                self.expect(Token::LParen); let t = self.parse_expr(0);
                self.expect(Token::RParen);
                Expr::FunctionCall { name: "tlen".to_string(), args: vec![t] }
            }
            // -------- array allocation: array(n) --------
            Token::Identifier(s) if s == "array" => {
                self.expect(Token::LParen);
                let size = match self.advance() {
                    Token::Number(n) => *n as u32,
                    t => panic!("Expected array size, got {:?}", t),
                };
                self.expect(Token::RParen);
                Expr::ArrayAlloc(size)
            }

            // -------- function reference / variable / call --------
            Token::Identifier(s) => {
                if self.function_names.contains(&s) && self.peek() != Some(&Token::LParen) {
                    Expr::FunctionRef(s)
                } else if self.peek() == Some(&Token::LParen) {
                    self.advance();
                    let mut args = Vec::new();
                    if self.peek() == Some(&Token::RParen) { self.advance(); }
                    else {
                        loop {
                            args.push(self.parse_expr(0));
                            match self.peek() {
                                Some(Token::Comma) => { self.advance(); }
                                Some(Token::RParen) => { self.advance(); break; }
                                _ => break,
                            }
                        }
                    }
                    Expr::FunctionCall { name: s, args }
                } else { Expr::Variable(s) }
            }

            // -------- Greek letters (built‑ins, constants) --------
            Token::GreekLetter(g) => {
                if self.peek() == Some(&Token::LParen) {
                    self.advance();
                    let mut args = Vec::new();
                    if self.peek() == Some(&Token::RParen) { self.advance(); }
                    else {
                        loop { args.push(self.parse_expr(0)); match self.peek() { Some(Token::Comma) => { self.advance(); } Some(Token::RParen) => { self.advance(); break; } _ => break, } }
                    }
                    Expr::FunctionCall { name: g, args }
                } else { Expr::GreekLetter(g) }
            }

            Token::StringLiteral(s) => Expr::StringLiteral(s),

            // -------- parentheses / tuple --------
            Token::LParen => {
                let first = self.parse_expr(0);
                if self.peek() == Some(&Token::Comma) {
                    let mut elts = vec![first];
                    while self.peek() == Some(&Token::Comma) { self.advance(); elts.push(self.parse_expr(0)); }
                    self.expect(Token::RParen);
                    Expr::Tuple(elts)
                } else { self.expect(Token::RParen); first }
            }

            // -------- \frac --------
            Token::Frac => {
                self.expect(Token::LBrace); let n = self.parse_expr(0); self.expect(Token::RBrace);
                self.expect(Token::LBrace); let d = self.parse_expr(0); self.expect(Token::RBrace);
                Expr::Frac { num: Box::new(n), den: Box::new(d) }
            }

            // -------- \sum / \prod (optional superscript) --------
            Token::Sum | Token::Prod => self.parse_sum_prod(),
            // -------- compact cases (Skin B) --------
            Token::QMark => self.parse_compact_cases(),

            // -------- \begin{cases} ... \end{cases} --------
            Token::CasesBegin => self.parse_cases(),

            // -------- \parallel{ ... } --------
            Token::Parallel => {
                self.expect(Token::LBrace); let mut exprs = Vec::new();
                loop { exprs.push(self.parse_expr(0)); match self.peek() { Some(Token::Comma) => { self.advance(); } Some(Token::RBrace) => { self.advance(); break; } _ => break, } }
                Expr::Parallel(exprs)
            }

            // -------- @world inside expressions --------
            Token::World => {
                let inner = match self.peek() {
                    Some(Token::StringLiteral(s)) => { let m = s.clone(); self.advance(); Expr::StringLiteral(m) }
                    Some(Token::Identifier(id)) if id == "Print" => {
                        self.advance(); self.expect(Token::LParen);
                        let expr = self.parse_expr(0); self.expect(Token::RParen);
                        Expr::FunctionCall { name: "Print".to_string(), args: vec![expr] }
                    }
                    _ => panic!("Expected string or Print after @world in expression"),
                };
                Expr::WorldPragma(Box::new(inner))
            }

            _ => panic!("Unexpected token in primary: {:?}", self.tokens.get(self.pos-1)),
        }
    }

    // -------- \sum & \prod (with semicolon sequencing) --------
    fn parse_sum_prod(&mut self) -> Expr {
        let is_sum = matches!(self.tokens[self.pos-1], Token::Sum);
        self.expect(Token::Underscore); self.expect(Token::LBrace);
        let idx = match self.advance() { Token::Identifier(s) => s.clone(), _ => panic!("Expected identifier") };
        self.expect(Token::Equal); let st = self.parse_expr(0); self.expect(Token::RBrace);
        let en = if self.peek() == Some(&Token::Caret) {
            self.advance(); self.expect(Token::LBrace); let e = self.parse_expr(0); self.expect(Token::RBrace); e
        } else { st.clone() };
        let mut body = self.parse_expr(0);

        // Handle semicolon sequencing inside sum/prod bodies
        if self.peek() == Some(&Token::Semicolon) {
            let mut exprs = vec![body];
            while self.peek() == Some(&Token::Semicolon) {
                self.advance();
                exprs.push(self.parse_expr(0));
            }
            body = Expr::Block(exprs);
        }

        if is_sum { Expr::Sum { index: idx, start: Box::new(st), end: Box::new(en), body: Box::new(body) } }
        else { Expr::Prod { index: idx, start: Box::new(st), end: Box::new(en), body: Box::new(body) } }
    }

       fn parse_cases(&mut self) -> Expr {
        let mut branches = Vec::new();
        loop {
            if self.peek() == Some(&Token::CasesEnd) { self.advance(); break; }
            // Parse value expression (possibly multiple statements separated by ;)
            let mut value = self.parse_expr(0);
            if self.peek() == Some(&Token::Semicolon) {
                let mut exprs = vec![value];
                while self.peek() == Some(&Token::Semicolon) {
                    self.advance();
                    exprs.push(self.parse_expr(0));
                }
                value = Expr::Block(exprs);
            }
            self.expect(Token::Amp);
            let cond = self.parse_expr(0);
            branches.push((value, cond));
            match self.peek() {
                Some(Token::Backslash) => { self.advance(); }
                Some(Token::CasesEnd)  => { self.advance(); break; }
                _ => break,
            }
        }
        Expr::Cases { branches }
    }
        // -------- compact cases:  ? ( cond → val , cond → val , 1 → default ) --------
    fn parse_compact_cases(&mut self) -> Expr {
        self.expect(Token::LParen);    // consume '('
        let mut branches = Vec::new();

        loop {
            // condition
            let cond = self.parse_expr(0);
            self.expect(Token::Arrow);   // consume '→'
            // value
            let value = self.parse_expr(0);
            branches.push((value, cond));

            match self.peek() {
                Some(Token::Comma) => { self.advance(); }   // next branch
                Some(Token::RParen) => { self.advance(); break; }
                _ => panic!("Expected ',' or ')' inside compact cases"),
            }
        }

        Expr::Cases { branches }
    }
}

// ---------- operator precedence table ----------
fn precedence(op: &BinOp) -> u8 {
    match op {
        BinOp::Or => 1, BinOp::And => 2,
        BinOp::Eq | BinOp::Neq | BinOp::Lt | BinOp::Gt | BinOp::Le | BinOp::Ge => 3,
        BinOp::Add | BinOp::Sub => 4,
        BinOp::Mul | BinOp::Div | BinOp::Dot | BinOp::Cross => 5,
        BinOp::Pow => 6,
    }
}