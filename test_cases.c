#include <stdio.h>
#include <math.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double cases0;
    if ((20.0000000000 >= 18.0000000000)) {
        cases0 = 1.0000000000;
    } else if ((20.0000000000 < 18.0000000000)) {
        cases0 = 0.0000000000;
    } else { cases0 = 0.0; }
    double cases1;
    if ((10.0000000000 >= 18.0000000000)) {
        cases1 = 1.0000000000;
    } else if ((10.0000000000 < 18.0000000000)) {
        cases1 = 0.0000000000;
    } else { cases1 = 0.0; }
    printf("%f\n", cases0);
    printf("%f\n", cases1);
    printf("result = %f\n", cases1);
    return 0;
}
