use crate::runtime::{WorldToken, ConsoleToken, FSToken, MemToken, SovereignToken, UnsafeToken, EnclaveToken};
use std::sync::mpsc;

#[derive(Debug)]
pub struct RuntimeContext {
    pub world: Option<WorldToken>,
    pub console: Option<ConsoleToken>,
    pub fs: Option<FSToken>,
    pub mem: Option<MemToken>,
    pub sovereign: Option<SovereignToken>,
    pub unsafe_token: Option<UnsafeToken>,
    pub enclave: Option<EnclaveToken>,
    pub actor_rx: Option<mpsc::Receiver<f64>>,
}

// Manually implement Clone because mpsc::Receiver doesn't implement Clone.
// A cloned context gets a fresh `actor_rx: None`.
impl Clone for RuntimeContext {
    fn clone(&self) -> Self {
        RuntimeContext {
            world: self.world.clone(),
            console: self.console.clone(),
            fs: self.fs.clone(),
            mem: self.mem.clone(),
            sovereign: self.sovereign.clone(),
            unsafe_token: self.unsafe_token.clone(),
            enclave: self.enclave.clone(),
            actor_rx: None,
        }
    }
}