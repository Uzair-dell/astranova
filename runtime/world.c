#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void world_print(const char* message) {
    printf("%s\n", message);
}

FILE* world_open_file(const char* path, const char* mode) {
    return fopen(path, mode);
}

void world_close_file(FILE* handle) {
    if (handle) fclose(handle);
}

char* world_read_file(FILE* handle, size_t size) {
    if (!handle) return NULL;
    char* buf = (char*)malloc(size + 1);
    if (!buf) return NULL;
    size_t n = fread(buf, 1, size, handle);
    buf[n] = '\0';
    return buf;
}

void world_write_file(FILE* handle, const char* data) {
    if (handle) fputs(data, handle);
}

// ---------- Memory operations ----------

void* world_alloc(size_t size) {
    return malloc(size);
}

void world_free(void* ptr) {
    free(ptr);
}