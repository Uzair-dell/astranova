#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

int main() {
    double tuple0[] = {1.0000000000, 2.0000000000, 3.0000000000};
    double tuple1[] = {4.0000000000, 5.0000000000, 6.0000000000};
    double binop3 = (tuple0)[(int)(0)] * (tuple1)[(int)(0)];
    double sum_part4 = 0.0 + binop3;
    double binop5 = (tuple0)[(int)(1)] * (tuple1)[(int)(1)];
    double sum_part6 = sum_part4 + binop5;
    double binop7 = (tuple0)[(int)(2)] * (tuple1)[(int)(2)];
    double sum_part8 = sum_part6 + binop7;
    printf("%f\n", sum_part8);
    printf("result = %f\n", sum_part8);
    return 0;
}
