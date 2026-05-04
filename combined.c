#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double tuple0[] = {3.0000000000, 4.0000000000};
    double binop1 = (tuple0)[(int)(0.0000000000)] * (tuple0)[(int)(0.0000000000)];
    double binop2 = (tuple0)[(int)(1.0000000000)] * (tuple0)[(int)(1.0000000000)];
    double binop3 = binop1 + binop2;
    double call4 = sqrt(binop3);
    printf("%f\n", call4);
    double tuple5[] = {1.0000000000, 2.0000000000, 3.0000000000};
    double tuple6[] = {4.0000000000, 5.0000000000, 6.0000000000};
    double binop8 = (tuple5)[(int)(1.0000000000)] * (tuple6)[(int)(2.0000000000)];
    double binop9 = (tuple5)[(int)(2.0000000000)] * (tuple6)[(int)(1.0000000000)];
    double binop10 = binop8 - binop9;
    double binop11 = (tuple5)[(int)(2.0000000000)] * (tuple6)[(int)(0.0000000000)];
    double binop12 = (tuple5)[(int)(0.0000000000)] * (tuple6)[(int)(2.0000000000)];
    double binop13 = binop11 - binop12;
    double binop14 = (tuple5)[(int)(0.0000000000)] * (tuple6)[(int)(1.0000000000)];
    double binop15 = (tuple5)[(int)(1.0000000000)] * (tuple6)[(int)(0.0000000000)];
    double binop16 = binop14 - binop15;
    double tuple7[] = {binop10, binop13, binop16};
    printf("%f\n", (tuple7)[(int)(0.0000000000)]);
    printf("%f\n", (tuple7)[(int)(1.0000000000)]);
    printf("%f\n", (tuple7)[(int)(2.0000000000)]);
    double tuple17[] = {1.0000000000, 2.0000000000, 3.0000000000, 4.0000000000};
    double binop18 = (tuple17)[(int)(0.0000000000)] * (tuple17)[(int)(3.0000000000)];
    double binop19 = (tuple17)[(int)(1.0000000000)] * (tuple17)[(int)(2.0000000000)];
    double binop20 = binop18 - binop19;
    printf("%f\n", binop20);
    double binop21 = pow(5.0000000000, 2.0000000000);
    double binop22 = 3.1415926536 * binop21;
    printf("%f\n", binop22);
    double cases23;
    double binop24 = 17.0000000000 < 2.0000000000;
    double binop25 = 17.0000000000 == 2.0000000000;
    double binop26 = 17.0000000000 == 3.0000000000;
    double binop27 = 17.0000000000 == 5.0000000000;
    double binop28 = 17.0000000000 == 7.0000000000;
    double binop29 = 17.0000000000 == 11.0000000000;
    double binop30 = 17.0000000000 == 13.0000000000;
    double binop31 = 17.0000000000 == 17.0000000000;
    if (binop24) {
        cases23 = 0.0000000000;
    } else if (binop25) {
        cases23 = 1.0000000000;
    } else if (binop26) {
        cases23 = 1.0000000000;
    } else if (binop27) {
        cases23 = 1.0000000000;
    } else if (binop28) {
        cases23 = 1.0000000000;
    } else if (binop29) {
        cases23 = 1.0000000000;
    } else if (binop30) {
        cases23 = 1.0000000000;
    } else if (binop31) {
        cases23 = 1.0000000000;
    } else if (1.0000000000) {
        cases23 = 0.0000000000;
    } else { cases23 = 0.0; }
    printf("%f\n", cases23);
    printf("result = %f\n", binop20);
    return 0;
}
