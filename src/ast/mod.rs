//! Astranova Abstract Syntax Tree (AST) definitions.
//!
//! These types are the compiler's internal representation of every
//! mathematical expression and definition in an Astranova source file.
//!
//! Reference: docs/spec/02_ast_nodes.md

/// Binary operators (arithmetic, comparison, logic)
#[derive(Debug, Clone, Copy, PartialEq)]
 pub enum BinOp {
    Add,
    Sub,
    Mul,
    Div,
    Dot,   // \cdot
    Cross, // \times
    Pow,
    Eq,
    Neq,
    Lt,
    Gt,
    Le,
    Ge,
    And,
    Or,
 }

/// Unary operators (negation, trig, etc.)
#[derive(Debug, Clone, Copy, PartialEq)]
pub enum UnOp {
    Neg,
    Pos,
    Sin,
    Cos,
    Log,
    Sqrt,
    Abs,
}

// ---------- Expression nodes ----------

#[derive(Debug, Clone, PartialEq)]
pub enum Expr {
    /// A numeric literal, e.g., 3.14, 6.022e23
    Number(f64),

    /// A string literal, e.g., "hello"
    StringLiteral(String),   // <-- NEW

    /// A named variable, e.g., x, mass, gravitational_constant
    Variable(String),

    /// A Greek letter constant, e.g., \pi, \alpha
    GreekLetter(String),

    /// A binary operation between two sub-expressions
    BinaryOp {
        op: BinOp,
        left:  Box<Expr>,
        right: Box<Expr>,
    },

    /// A unary operation on one sub-expression
    UnaryOp {
        op: UnOp,
        operand: Box<Expr>,
    },

    /// A function call, e.g., f(2, 3) or sin(x)
    FunctionCall {
        name: String,
        args: Vec<Expr>,
    },

    /// A fraction: \frac{numerator}{denominator}
    Frac {
        num: Box<Expr>,
        den: Box<Expr>,
    },

    /// Exponentiation: base ^ exp
    Pow {
        base: Box<Expr>,
        exp:  Box<Expr>,
    },

    /// Summation (loop): \sum_{index = start}^{end} body
    Sum {
        index: String,
        start: Box<Expr>,
        end:   Box<Expr>,
        body:  Box<Expr>,
    },

    /// Product (loop): \prod_{index = start}^{end} body
    Prod {
        index: String,
        start: Box<Expr>,
        end:   Box<Expr>,
        body:  Box<Expr>,
    },

    /// Definite integral: \int_{lower}^{upper} integrand \, d(var)
    Integral {
        var:       String,
        lower:     Box<Expr>,
        upper:     Box<Expr>,
        integrand: Box<Expr>,
    },

    /// Limit: \lim_{var \to approach} body
    Limit {
        var:      String,
        approach: Box<Expr>,
        body:     Box<Expr>,
    },

    /// Piecewise function
    Cases {
        branches: Vec<(Expr, Expr)>,
    },

    /// Ordered collection
    Tuple(Vec<Expr>),

    /// Homogeneous list
    List(Vec<Expr>),

        /// Parallel evaluation: each sub‑expression is computed concurrently.
    Parallel(Vec<Expr>),

    /// A side‑effecting world interaction, @world expr
    WorldPragma(Box<Expr>),
}

// ---------- Type nodes ----------

#[derive(Debug, Clone, PartialEq)]
pub enum Type {
    Scalar(Option<Unit>),
    Vector(usize, Option<Unit>),
    Matrix(usize, usize, Option<Unit>),
    Tensor,
    Function(Box<Type>, Box<Type>),
    Sovereign,
    Manifold(usize),
    State(Box<Type>),
}

/// Physical unit: a symbolic map like { m:1, s:-2 } for m/s²
pub type Unit = std::collections::HashMap<String, i32>;

// ---------- Definition / top‑level nodes ----------

#[derive(Debug, Clone, PartialEq)]
pub enum Definition {
    Let {
        name:   String,
        params: Vec<String>,
        body:   Expr,
    },
    Const {
        name:  String,
        typ:   Type,
        value: Expr,
    },
}