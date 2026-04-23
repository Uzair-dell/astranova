/// Astranova Compiler - Stage 0 Bootstrap Library

pub mod ast;
pub mod lexer;
pub mod parser;

pub fn greet() -> String {
    "Astranova v0.1.0 ready.".to_string()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn project_is_alive() {
        let msg = greet();
        assert!(msg.contains("Astranova"));
    }

    #[test]
    fn unit_arithmetic_example() {
        let pi = std::f64::consts::PI;
        let r: f64 = 5.0;
        let volume = 4.0 / 3.0 * pi * r.powf(3.0);
        assert!((volume - 523.598).abs() < 0.01);
    }

    #[test]
    fn ast_sphere_volume_example() {
        use crate::ast::*;

        let ast = Definition::Let {
            name: "V".to_string(),
            params: vec![],
            body: Expr::BinaryOp {
                op: BinOp::Mul,
                left: Box::new(Expr::BinaryOp {
                    op: BinOp::Mul,
                    left: Box::new(Expr::Frac {
                        num: Box::new(Expr::Number(4.0)),
                        den: Box::new(Expr::Number(3.0)),
                    }),
                    right: Box::new(Expr::GreekLetter("\\pi".to_string())),
                }),
                right: Box::new(Expr::Pow {
                    base: Box::new(Expr::Variable("r".to_string())),
                    exp:  Box::new(Expr::Number(3.0)),
                }),
            },
        };

        let debug_string = format!("{:?}", ast);
        assert!(debug_string.contains("V"));
    }
}