// Astranova World Runtime ABI
// These functions are implemented in C and called via FFI from the compiler output.

#ifndef WORLD_ABI_H
#define WORLD_ABI_H

#include <stdint.h>

// Opaque handle types to enforce linearity in Rust/C.
typedef struct WorldHandle WorldHandle;
typedef struct FileHandle FileHandle;
typedef struct MemArena MemArena;

// World lifecycle
WorldHandle* world_init(void);
void world_exit(WorldHandle* world);

// Console output
WorldHandle* world_print(WorldHandle* world, const char* message);

// File operations
FileHandle* world_open_file(WorldHandle* world, const char* path, const char* mode);
WorldHandle* world_close_file(WorldHandle* world, FileHandle* file);
char* world_read_file(WorldHandle* world, FileHandle* file, size_t size);
WorldHandle* world_write_file(WorldHandle* world, FileHandle* file, const char* data);

// Memory management
MemArena* world_alloc(WorldHandle* world, size_t size);
WorldHandle* world_free(WorldHandle* world, MemArena* arena, void* ptr);

// Time
double world_get_time(WorldHandle* world);

// Pixel drawing (for graphics / OS)
WorldHandle* world_draw_pixel(WorldHandle* world, int x, int y, uint32_t color);

// Process management
int world_spawn(WorldHandle* world, const char* command);
WorldHandle* world_sleep(WorldHandle* world, double seconds);

// Sovereign constant value (read‑only)
uint8_t world_is_sovereign(void* identity);

#endif