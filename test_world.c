#include <stdio.h>
#include <math.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    world_print("Hello, World!");
    printf("%f\n", 42.0000000000);
    printf("result = %f\n", 42.0000000000);
    return 0;
}
