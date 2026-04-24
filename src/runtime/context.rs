use crate::runtime::{WorldToken, ConsoleToken, FSToken, MemToken};

#[derive(Debug, Clone)]
pub struct RuntimeContext {
    pub world: Option<WorldToken>,
    pub console: Option<ConsoleToken>,
    pub fs: Option<FSToken>,
    pub mem: Option<MemToken>,   
}