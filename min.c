#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double binop0 = 3.1415926536 * 5.0000000000;
    double binop1 = binop0 * 5.0000000000;
    printf("%f\n", binop1);
    return 0;
}
