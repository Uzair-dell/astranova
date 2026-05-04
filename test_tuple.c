#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double tuple0[] = {1.0000000000, 2.0000000000, 3.0000000000};
    double get1 = tuple0[(int)0.0000000000];
    double get2 = tuple0[(int)1.0000000000];
    double get3 = tuple0[(int)2.0000000000];
    printf("%f\n", get1);
    printf("%f\n", get2);
    printf("%f\n", get3);
    printf("result = %f\n", get3);
    return 0;
}
