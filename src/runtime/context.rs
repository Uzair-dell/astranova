use crate::runtime::{
    WorldToken, ConsoleToken, FSToken, MemToken, SovereignToken, UnsafeToken, EnclaveToken,
};

#[derive(Debug, Clone)]
pub struct RuntimeContext {
    pub world: Option<WorldToken>,
    pub console: Option<ConsoleToken>,
    pub fs: Option<FSToken>,
    pub mem: Option<MemToken>,
    pub sovereign: Option<SovereignToken>,
    pub unsafe_token: Option<UnsafeToken>,
    pub enclave: Option<EnclaveToken>,   // new
}