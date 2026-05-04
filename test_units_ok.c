#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double area = 0.0;

int main() {
    double binop0 = 5.0000000000 * 3.0000000000;
    area = binop0;
    printf("%f\n", area);
    printf("result = %f\n", binop0);
    return 0;
}
