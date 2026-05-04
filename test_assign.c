#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double one = 0.0;
double acc = 0.0;

int main() {
    one = 1.0000000000;
    acc = 0.0000000000;
    double binop0 = acc + one;
    acc = binop0;
    printf("%f\n", acc);
    printf("result = %f\n", 0.0000000000);
    return 0;
}
