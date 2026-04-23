/// Astranova Compiler - Stage 0 Bootstrap Library
/// Phase 0.3: Sanity check that the crate builds and tests pass.

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
        // Simulate what the parser would produce:
        // V = 4 / 3 * pi * r^3
        // This test doesn't parse yet; it just checks our thinking.
        let pi = std::f64::consts::PI;
        let r: f64 = 5.0;
        let volume = 4.0 / 3.0 * pi * r.powf(3.0);
        assert!((volume - 523.598).abs() < 0.01);
    }
}