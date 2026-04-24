//! Runtime world interface – links to the C world library.

pub mod context;

/// Token for the outside world (required for any side effect).
#[derive(Debug, Clone)]
pub struct WorldToken;

/// Token for console I/O.
#[derive(Debug, Clone)]
pub struct ConsoleToken;

/// Token for file system operations.
#[derive(Debug, Clone)]
pub struct FSToken;

// ========== C function declarations ==========
extern "C" {
    fn world_print(msg: *const std::os::raw::c_char);
    fn world_open_file(path: *const std::os::raw::c_char, mode: *const std::os::raw::c_char) -> *mut std::ffi::c_void;
    fn world_close_file(handle: *mut std::ffi::c_void);
    fn world_read_file(handle: *mut std::ffi::c_void, size: usize) -> *mut std::os::raw::c_char;
    fn world_write_file(handle: *mut std::ffi::c_void, data: *const std::os::raw::c_char);
}

// ========== Console ==========
pub fn print(world: WorldToken, _console: &ConsoleToken, msg: &str) -> WorldToken {
    let c_msg = std::ffi::CString::new(msg).expect("CString failed");
    unsafe { world_print(c_msg.as_ptr()); }
    world
}

// ========== File system ==========
use std::ffi::CString;

/// A handle to an open file.
#[derive(Debug)]
pub struct FileHandle(pub *mut std::ffi::c_void);

// We only use it on the calling thread, so this is safe.
unsafe impl Send for FileHandle {}
unsafe impl Sync for FileHandle {}

/// Open a file. Requires WorldToken + FSToken. Returns a new WorldToken and the file handle.
pub fn open_file(world: WorldToken, _fs: &FSToken, path: &str, mode: &str)
    -> Result<(WorldToken, FileHandle), String>
{
    let c_path = CString::new(path).unwrap();
    let c_mode = CString::new(mode).unwrap();
    let handle = unsafe { world_open_file(c_path.as_ptr(), c_mode.as_ptr()) };
    if handle.is_null() {
        Err(format!("Cannot open file: {}", path))
    } else {
        Ok((world, FileHandle(handle)))
    }
}

/// Close a file. Consumes the file handle, returns the WorldToken.
pub fn close_file(world: WorldToken, handle: FileHandle) -> WorldToken {
    unsafe { world_close_file(handle.0); }
    world
}

/// Read up to `size` bytes from a file. Returns WorldToken and an optional String.
pub fn read_file(world: WorldToken, handle: &FileHandle, size: usize)
    -> (WorldToken, Option<String>)
{
    let buf = unsafe { world_read_file(handle.0, size) };
    if buf.is_null() {
        (world, None)
    } else {
        let cstr = unsafe { std::ffi::CStr::from_ptr(buf) };
        let s = cstr.to_string_lossy().into_owned();
        unsafe { libc::free(buf as *mut std::os::raw::c_void); }
        (world, Some(s))
    }
}

/// Write a string to a file. Returns WorldToken.
pub fn write_file(world: WorldToken, handle: &FileHandle, data: &str) -> WorldToken {
    let c_data = CString::new(data).unwrap();
    unsafe { world_write_file(handle.0, c_data.as_ptr()); }
    world
}