#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double a = 0.0;
double sum = 0.0;
double b = 0.0;
double c = 0.0;
double prod = 0.0;

int main() {
    a = 3.0000000000;
    b = 5.0000000000;
    c = 2.0000000000;
    double binop0 = a * b;
    prod = binop0;
    double binop1 = prod + c;
    sum = binop1;
    printf("%f\n", sum);
    printf("result = %f\n", binop1);
    return 0;
}
