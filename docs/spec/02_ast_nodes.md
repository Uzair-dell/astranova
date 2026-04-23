# Astranova AST Node Types

## Expression Nodes
| Node Type | Description | Example Source |
|-----------|-------------|----------------|
| `Number(f64)` | A numeric literal | `3.14`, `6.022e23` |
| `Variable(String)` | A named variable | `x`, `mass`, `G` |
| `GreekLetter(String)` | A Greek constant / variable | `\pi`, `\alpha` |
| `BinaryOp { op: BinOp, left: Expr, right: Expr }` | Arithmetic or logic operation | `a + b`, `x == 5` |
| `UnaryOp { op: UnOp, operand: Expr }` | Unary operation | `-x`, `\sin(\theta)` |
| `FunctionCall { name: String, args: Vec<Expr> }` | Call to a defined function | `f(2, 3)` |
| `Frac { num: Expr, den: Expr }` | Fraction | `\frac{a}{b}` |
| `Pow { base: Expr, exp: Expr }` | Exponentiation | `x^2` |
| `Sum { index: String, start: Expr, end: Expr, body: Expr }` | Summation (loop) | `\sum_{i=1}^{n} i` |
| `Prod { index: String, start: Expr, end: Expr, body: Expr }` | Product (loop) | `\prod_{i=1}^{n} i` |
| `Integral { var: String, lower: Expr, upper: Expr, integrand: Expr }` | Definite integral | `\int_{0}^{1} x dx` |
| `Limit { var: String, approach: Expr, body: Expr }` | Limit | `\lim_{x\to 0} \frac{\sin x}{x}` |
| `Cases { branches: Vec<(Expr, Expr)> }` | Piecewise function | `\begin{cases} x & x>0 \\-x & x\le0 \end{cases}` |
| `Tuple(Vec<Expr>)` | Ordered collection | `(1, 2, 3)` |
| `List(Vec<Expr>)` | Homogeneous list | `[1, 2, 3]` |
| `WorldPragma(Expr)` | Effectful `@world` expression | `@world Print("hello")` |

## Type Nodes
| Node Type | Description |
|-----------|-------------|
| `Scalar(Option<Unit>)` | Real number with optional unit |
| `Vector(usize, Option<Unit>)` | Fixed-size array |
| `Matrix(usize, usize, Option<Unit>)` | 2D array |
| `Tensor` | Multi-dimensional array |
| `Function(Box<Type>, Box<Type>)` | Arrow type |
| `Sovereign` | The un-rejectable singleton type |
| `Manifold(usize)` | Solution set of constraints |
| `State(Type)` | Linear resource type |

## Definition Nodes
| Node Type | Description |
|-----------|-------------|
| `LetDefinition { name: String, params: Vec<String>, body: Expr }` | A function/constant definition |
| `ConstDefinition { name: String, typ: Type, value: Expr }` | A typed constant |