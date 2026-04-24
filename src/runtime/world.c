// Astranova World Runtime – Layer 2: File system support

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void world_print(const char* message) {
    printf("%s\n", message);
}

// ---------- File operations ----------

// A handle to an open file. In C we just keep the FILE* pointer.
FILE* world_open_file(const char* path, const char* mode) {
    return fopen(path, mode);
}

void world_close_file(FILE* handle) {
    if (handle) fclose(handle);
}

// Reads up to `size` bytes from the file, returns a null‑terminated malloc‑ed string.
char* world_read_file(FILE* handle, size_t size) {
    if (!handle) return NULL;
    char* buf = (char*)malloc(size + 1);
    if (!buf) return NULL;
    size_t n = fread(buf, 1, size, handle);
    buf[n] = '\0';
    return buf;
}

// Writes a string to the file.
void world_write_file(FILE* handle, const char* data) {
    if (handle) fputs(data, handle);
}