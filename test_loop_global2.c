#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double total = 0.0;
double acc = 0.0;

int main() {
    acc = 0.0000000000;
    double sum0 = 0.0;
    for (int i = (int)(1.0000000000); i <= (int)(5.0000000000); i++) {
    double binop1 = acc + 0.0000000000;
    acc = binop1;
        sum0 += binop1;
    }
    total = sum0;
    printf("%f\n", acc);
    printf("%f\n", total);
    printf("result = %f\n", sum0);
    return 0;
}
