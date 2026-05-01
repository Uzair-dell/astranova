#include <stdio.h>
#include <math.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double frac0 = 4.0000000000 / 3.0000000000;
    double binop1 = frac0 * 3.1415926536;
    double binop2 = pow(5.0000000000, 3.0000000000);
    double binop3 = binop1 * binop2;
    printf("%f\n", binop3);
    printf("%f\n", 3.1415926536);
    printf("result = %f\n", binop3);
    return 0;
}
