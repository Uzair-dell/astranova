#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double acc = 0.0;
double total = 0.0;

int main() {
    acc = 0.0000000000;
    double sum0 = 0.0;
    double binop2 = acc + 0.0000000000;
    acc = binop2;
    sum0 += binop2;
    double binop4 = acc + 0.0000000000;
    acc = binop4;
    sum0 += binop4;
    double binop6 = acc + 0.0000000000;
    acc = binop6;
    sum0 += binop6;
    double binop8 = acc + 0.0000000000;
    acc = binop8;
    sum0 += binop8;
    double binop10 = acc + 0.0000000000;
    acc = binop10;
    sum0 += binop10;
    total = sum0;
    printf("%f\n", acc);
    printf("result = %f\n", sum0);
    return 0;
}
