//! Runtime world interface – links to the C world library.

/// A token that represents the outside world.
/// Cannot be cloned.
#[derive(Debug, Clone)]
pub struct WorldToken;

/// A token that gives permission to print to the console.
#[derive(Debug)]
pub struct ConsoleToken;

// C function signature (low‑level)
extern "C" {
    fn world_print(msg: *const std::os::raw::c_char);
}

/// Print a string to the console.
/// This consumes a WorldToken and returns a new one, enforcing linearity.
/// It also requires a reference to a ConsoleToken (permission check at compile time).
pub fn print(world: WorldToken, _console: &ConsoleToken, msg: &str) -> WorldToken {
    let c_msg = std::ffi::CString::new(msg).expect("CString failed");
    unsafe {
        world_print(c_msg.as_ptr());
    }
    world
}