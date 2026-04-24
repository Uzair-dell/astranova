//! Astranova type representation and operations.
//! Based on docs/spec/03_type_theory.md

use std::collections::HashMap;
pub mod unify;
pub mod infer;

/// The possible types in Astranova.
#[derive(Debug, Clone, PartialEq)]
pub enum Type {
    /// Scalar with optional unit (e.g., Scalar[m/s])
    Scalar(Option<Unit>),
    /// Fixed-size vector with optional unit
    Vector(usize, Option<Unit>),
    /// Matrix with dimensions and optional unit
    Matrix(usize, usize, Option<Unit>),
    /// Multi-dimensional array
    Tensor,
    /// Function type: argument -> result
    Function(Box<Type>, Box<Type>),
    /// The singleton sovereign type (cannot be constructed in user code)
    Sovereign,
    /// A solution set of constraints (more general than a concrete value)
    Manifold(usize),
    /// Linear resource type (must be used exactly once)
    State(Box<Type>),
}

/// A physical unit expressed as a map from base unit symbol to integer exponent.
/// Example: `{ m: 1, s: -2 }` for m/s².
pub type Unit = HashMap<String, i32>;