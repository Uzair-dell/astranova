#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double len0 = (double)strlen("Hello");
    double charat1 = (double)(unsigned char)"Hello"[(int)0.0000000000];
    printf("%f\n", len0);
    printf("%f\n", charat1);
    printf("result = %f\n", charat1);
    return 0;
}
