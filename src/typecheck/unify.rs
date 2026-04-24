//! Unit unification for Astranova's physical type system.
//! Implements the rules in docs/spec/03_type_theory.md

use std::collections::HashMap;

/// The physical unit representation: a map from base unit symbol to exponent.
/// Example: `{"m": 1, "s": -2}` for m / s².
pub type Unit = HashMap<String, i32>;

/// Unify two unit maps, returning the merged unit.
///
/// Rules:
/// - If both are `None` → `Ok(None)` (dimensionless).
/// - If one is `None` → `Ok(Some(other))` (dimensionless unifies with anything).
/// - If both are `Some`, then for every key present in **both** maps, the exponents
///   must be equal; otherwise it's a type error. Keys that appear in only one map
///   are kept in the merged result.
pub fn unify(a: Option<&Unit>, b: Option<&Unit>) -> Result<Option<Unit>, String> {
    match (a, b) {
        (None, None) => Ok(None),
        (None, Some(u)) | (Some(u), None) => Ok(Some(u.clone())),
        (Some(a_map), Some(b_map)) => {
            let mut merged = a_map.clone();

            for (key, &b_exp) in b_map {
                if let Some(&a_exp) = a_map.get(key) {
                    if a_exp != b_exp {
                        return Err(format!(
                            "Unit conflict for '{}': exponent {} vs {}",
                            key, a_exp, b_exp
                        ));
                    }
                } else {
                    merged.insert(key.clone(), b_exp);
                }
            }

            Ok(Some(merged))
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn unit(pairs: &[(&str, i32)]) -> Unit {
        pairs.iter().map(|(k, v)| (k.to_string(), *v)).collect()
    }

    #[test]
    fn both_none() {
        assert_eq!(unify(None, None), Ok(None));
    }

    #[test]
    fn one_none() {
        let u = unit(&[("m", 1)]);
        assert_eq!(unify(None, Some(&u)), Ok(Some(u.clone())));
        assert_eq!(unify(Some(&u), None), Ok(Some(u)));
    }

    #[test]
    fn same_units_merge() {
        let a = unit(&[("m", 1)]);
        let b = unit(&[("m", 1)]);
        assert_eq!(unify(Some(&a), Some(&b)), Ok(Some(a)));
    }

    #[test]
    fn disjoint_keys_merge() {
        let a = unit(&[("m", 1)]);
        let b = unit(&[("s", -2)]);
        let expected = unit(&[("m", 1), ("s", -2)]);
        assert_eq!(unify(Some(&a), Some(&b)), Ok(Some(expected)));
    }

    #[test]
    fn conflict_is_error() {
        let a = unit(&[("m", 1)]);
        let b = unit(&[("m", 2)]);
        assert!(unify(Some(&a), Some(&b)).is_err());
    }

    #[test]
    fn meters_per_second_example() {
        let a = unit(&[("m", 1), ("s", -1)]);
        let b = unit(&[("m", 1), ("s", -1)]);
        assert_eq!(unify(Some(&a), Some(&b)), Ok(Some(a)));
    }
}