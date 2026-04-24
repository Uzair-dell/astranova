fn main() {
    cc::Build::new()
        .file("runtime/world.c")
        .compile("world");
}