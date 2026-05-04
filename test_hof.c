#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double funcref0 = 0.0; /* funcref to f */
    double binop1 = 3.0000000000 + 0.0000001000;
    double binop2 = binop1 * binop1;
    double binop3 = 3.0000000000 - 0.0000001000;
    double binop4 = binop3 * binop3;
    double binop5 = binop2 - binop4;
    double binop6 = binop5 / 0.0000002000;
    printf("%f\n", binop6);
    printf("result = %f\n", binop6);
    return 0;
}
