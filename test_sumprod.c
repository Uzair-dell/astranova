#include <stdio.h>
#include <math.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double sum0 = 0.0;
    for (int i = (int)1.0000000000; i <= (int)10.0000000000; i++) {
        sum0 += i;
    }
    double prod1 = 1.0;
    for (int i = (int)1.0000000000; i <= (int)5.0000000000; i++) {
        prod1 *= i;
    }
    printf("%f\n", sum0);
    printf("%f\n", prod1);
    printf("result = %f\n", prod1);
    return 0;
}
