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
    sum0 += binop1;
    double binop2 = acc + 2.0000000000;
    acc = binop2;
    sum0 += binop2;
    double binop3 = acc + 3.0000000000;
    acc = binop3;
    sum0 += binop3;
    double binop4 = acc + 4.0000000000;
    acc = binop4;
    sum0 += binop4;
    double binop5 = acc + 5.0000000000;
    acc = binop5;
    sum0 += binop5;
    total = sum0;
    printf("%f\n", acc);
    printf("result = %f\n", sum0);
    return 0;
}
