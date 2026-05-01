#include <stdio.h>
#include <math.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double call0 = sin(0.5000000000);
    double call1 = cos(0.3000000000);
    double call2 = log(2.7182800000);
    double call3 = sqrt(2.0000000000);
    double unop4 = -3.1400000000;
    double call5 = fabs(unop4);
    printf("%f\n", call0);
    printf("%f\n", call1);
    printf("%f\n", call2);
    printf("%f\n", call3);
    printf("%f\n", call5);
    printf("result = %f\n", call5);
    return 0;
}
