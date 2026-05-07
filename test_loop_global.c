#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double acc = 0.0;
double total = 0.0;

int main() {
    acc = 0.0000000000;
    double sum0 = 0.0;
    double binop1 = acc + 1.0000000000;
    acc = binop1;
    sum0 += 0.0000000000;
    double binop2 = acc + 1.0000000000;
    acc = binop2;
    sum0 += 0.0000000000;
    double binop3 = acc + 1.0000000000;
    acc = binop3;
    sum0 += 0.0000000000;
    double binop4 = acc + 1.0000000000;
    acc = binop4;
    sum0 += 0.0000000000;
    double binop5 = acc + 1.0000000000;
    acc = binop5;
    sum0 += 0.0000000000;
    total = sum0;
    printf("%f\n", acc);
    printf("result = %f\n", sum0);
    return 0;
}
