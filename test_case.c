#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double cases0;
    double binop1 = 2.0000000000 == 2.0000000000;
    if (binop1) {
        cases0 = 1.0000000000;
    } else if (1.0000000000) {
        cases0 = 0.0000000000;
    } else { cases0 = 0.0; }
    printf("%f\n", cases0);
    return 0;
}
