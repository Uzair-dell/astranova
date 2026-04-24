use crate::runtime::{WorldToken, ConsoleToken, FSToken};

/// All capability tokens that an Astranova computation may hold.
#[derive(Debug, Clone)]
pub struct RuntimeContext {
    pub world: Option<WorldToken>,
    pub console: Option<ConsoleToken>,
    pub fs: Option<FSToken>,
    // Layers 3,4,5,6,7 will add more fields here.
}