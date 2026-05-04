#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }


int main() {
    double tokens[5] = {0};
    tokens[(int)0.0000000000] = 10.0000000000;
    tokens[(int)1.0000000000] = 20.0000000000;
    double arr0 = tokens[(int)0.0000000000];
    printf("%f\n", arr0);
    double arr1 = tokens[(int)1.0000000000];
    printf("%f\n", arr1);
    return 0;
}
