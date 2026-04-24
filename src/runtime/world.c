// Astranova World Runtime - Layer 1 (World Monad)
// This file implements the real-world actions: printing, file I/O, etc.
// It is called from Rust via FFI.

#include <stdio.h>
#include <stdlib.h>

void world_print(const char* message) {
    printf("%s\n", message);
}