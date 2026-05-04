#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double binop0 = 0.0000000001 * 100.0000000000;
    double binop1 = binop0 * 200.0000000000;
    double binop2 = 10.0000000000 * 10.0000000000;
    double binop3 = binop1 / binop2;
    printf("%f\n", binop3);
    double binop4 = 3.1415926536 * 5.0000000000;
    double binop5 = binop4 * 5.0000000000;
    printf("%f\n", binop5);
    double binop6 = 4.0000000000 + 7.0000000000;
    double binop7 = binop6 + 10.0000000000;
    double binop8 = binop7 / 3.0000000000;
    printf("%f\n", binop8);
    printf("result = %f\n", binop8);
    return 0;
}
