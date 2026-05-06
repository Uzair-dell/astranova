#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }


int main() {
    printf("%s\n", "int main() { printf(\\\"%f\\\\n\\\", 10.0); return 0; }");
    return 0;
}
