#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double binop0 = pow(5.0000000000, 2.0000000000);
    double binop1 = 3.1415926536 * binop0;
    printf("%f\n", binop1);
    return 0;
}
