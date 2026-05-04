#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double x = 0.0;

int main() {
    x = 1.0000000000;
    printf("%f\n", x);
    printf("result = %f\n", 1.0000000000);
    return 0;
}
