#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double total = 0.0;

int main() {
    double sum0 = 0.0;
    sum0 += 1.0000000000;
    sum0 += 1.0000000000;
    sum0 += 1.0000000000;
    sum0 += 1.0000000000;
    sum0 += 1.0000000000;
    total = sum0;
    printf("%f\n", total);
    printf("result = %f\n", sum0);
    return 0;
}
