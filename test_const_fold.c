#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double result = 0.0;

int main() {
    result = 11.0000000000;
    printf("%f\n", result);
    printf("result = %f\n", 11.0000000000);
    return 0;
}
