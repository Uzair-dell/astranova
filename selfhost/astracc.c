#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double second = 0.0;
double third = 0.0;
double mul_result = 0.0;
double expr_val = 0.0;
double src_len = 0.0;
double first = 0.0;

int main() {
    double len0 = (double)strlen("\let x = 12 + 34 * 2");
    src_len = len0;
    double binop1 = 11.0000000000 - 1.0000000000;
    double sum2 = 0.0;
    for (int i = (int)(9.0000000000); i <= (int)(binop1); i++) {
    double charat3 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)i];
    double binop4 = charat3 - 48.0000000000;
    double binop5 = 11.0000000000 - i;
    double binop6 = binop5 - 1.0000000000;
    double cases7;
    double binop8 = binop6 == 0.0000000000;
    double binop9 = binop6 == 1.0000000000;
    double binop10 = binop6 == 2.0000000000;
    if (binop8) {
        cases7 = 1.0000000000;
    } else if (binop9) {
        cases7 = 10.0000000000;
    } else if (binop10) {
        cases7 = 100.0000000000;
    } else if (1.0000000000) {
        cases7 = 1000.0000000000;
    } else { cases7 = 0.0; }
    double binop11 = binop4 * cases7;
        sum2 += binop11;
    }
    first = sum2;
    double binop12 = 16.0000000000 - 1.0000000000;
    double sum13 = 0.0;
    for (int i = (int)(14.0000000000); i <= (int)(binop12); i++) {
    double charat14 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)i];
    double binop15 = charat14 - 48.0000000000;
    double binop16 = 16.0000000000 - i;
    double binop17 = binop16 - 1.0000000000;
    double cases18;
    double binop19 = binop17 == 0.0000000000;
    double binop20 = binop17 == 1.0000000000;
    double binop21 = binop17 == 2.0000000000;
    if (binop19) {
        cases18 = 1.0000000000;
    } else if (binop20) {
        cases18 = 10.0000000000;
    } else if (binop21) {
        cases18 = 100.0000000000;
    } else if (1.0000000000) {
        cases18 = 1000.0000000000;
    } else { cases18 = 0.0; }
    double binop22 = binop15 * cases18;
        sum13 += binop22;
    }
    second = sum13;
    double binop23 = 20.0000000000 - 1.0000000000;
    double sum24 = 0.0;
    for (int i = (int)(19.0000000000); i <= (int)(binop23); i++) {
    double charat25 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)i];
    double binop26 = charat25 - 48.0000000000;
    double binop27 = 20.0000000000 - i;
    double binop28 = binop27 - 1.0000000000;
    double cases29;
    double binop30 = binop28 == 0.0000000000;
    double binop31 = binop28 == 1.0000000000;
    double binop32 = binop28 == 2.0000000000;
    if (binop30) {
        cases29 = 1.0000000000;
    } else if (binop31) {
        cases29 = 10.0000000000;
    } else if (binop32) {
        cases29 = 100.0000000000;
    } else if (1.0000000000) {
        cases29 = 1000.0000000000;
    } else { cases29 = 0.0; }
    double binop33 = binop26 * cases29;
        sum24 += binop33;
    }
    third = sum24;
    double binop34 = second * third;
    mul_result = binop34;
    double binop35 = first + mul_result;
    expr_val = binop35;
    double tuple36[] = {120.0000000000, expr_val};
    printf("%f\n", (tuple36)[(int)(1.0000000000)]);
    printf("result = %f\n", tuple36);
    return 0;
}
