#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double n = 0.0;
double result = 0.0;

int main() {
    n = 100.0000000000;
    double binop0 = n + 1.0000000000;
    double binop1 = n * binop0;
    double binop2 = binop1 / 2.0000000000;
    result = binop2;
    printf("%f\n", result);
    printf("result = %f\n", binop2);
    return 0;
}
