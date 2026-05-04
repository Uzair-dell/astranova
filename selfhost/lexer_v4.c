#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double dummy = 0.0;
double TOK_PLUS = 0.0;
double TOK_NUMBER = 0.0;
double pos = 0.0;
double src_len = 0.0;
double length = 0.0;
double type = 0.0;
double end = 0.0;
double TOK_MUL = 0.0;
double start = 0.0;
double idx = 0.0;

int main() {
    double len0 = (double)strlen("12 + 34 * 2");
    src_len = len0;
    TOK_NUMBER = 2.0000000000;
    TOK_PLUS = 4.0000000000;
    TOK_MUL = 5.0000000000;
    double tokens[30] = {0};
    pos = 0.0000000000;
    idx = 0.0000000000;
    type = 0.0000000000;
    start = 0.0000000000;
    length = 0.0000000000;
    end = 0.0000000000;
    double sum1 = 0.0;
    for (int step = (int)(1.0000000000); step <= (int)(20.0000000000); step++) {
    double cases2;
    double charat3 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4 = charat3 >= 48.0000000000;
    double charat5 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6 = charat5 <= 57.0000000000;
    double binop7 = binop4 && binop6;
    double binop8 = pos < src_len;
    double binop9 = binop7 && binop8;
    double charat10 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11 = charat10 == 43.0000000000;
    double binop12 = pos < src_len;
    double binop13 = binop11 && binop12;
    double charat14 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop15 = charat14 == 42.0000000000;
    double binop16 = pos < src_len;
    double binop17 = binop15 && binop16;
    if (binop9) {
        cases2 = TOK_NUMBER;
    } else if (binop13) {
        cases2 = TOK_PLUS;
    } else if (binop17) {
        cases2 = TOK_MUL;
    } else if (1.0000000000) {
        cases2 = 0.0000000000;
    } else { cases2 = 0.0; }
    type = cases2;
    double cases18;
    double binop19 = pos < src_len;
    if (binop19) {
        cases18 = pos;
    } else if (1.0000000000) {
        cases18 = 0.0000000000;
    } else { cases18 = 0.0; }
    start = cases18;
    double cases20;
    double charat21 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop22 = charat21 >= 48.0000000000;
    double charat23 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop24 = charat23 <= 57.0000000000;
    double binop25 = binop22 && binop24;
    if (binop25) {
    double cases26;
    double charat27 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop28 = charat27 >= 48.0000000000;
    double charat29 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop30 = charat29 <= 57.0000000000;
    double binop31 = binop28 && binop30;
    double binop32 = start + 1.0000000000;
    double charat33 = (double)(unsigned char)"12 + 34 * 2"[(int)binop32];
    double binop34 = charat33 >= 48.0000000000;
    double charat35 = (double)(unsigned char)"12 + 34 * 2"[(int)binop32];
    double binop36 = charat35 <= 57.0000000000;
    double binop37 = binop34 && binop36;
    double binop38 = binop31 && binop37;
    double binop39 = start + 2.0000000000;
    double charat40 = (double)(unsigned char)"12 + 34 * 2"[(int)binop39];
    double binop41 = charat40 >= 48.0000000000;
    double charat42 = (double)(unsigned char)"12 + 34 * 2"[(int)binop39];
    double binop43 = charat42 <= 57.0000000000;
    double binop44 = binop41 && binop43;
    double binop45 = binop38 && binop44;
    double binop46 = start + 3.0000000000;
    double charat47 = (double)(unsigned char)"12 + 34 * 2"[(int)binop46];
    double binop48 = charat47 >= 48.0000000000;
    double charat49 = (double)(unsigned char)"12 + 34 * 2"[(int)binop46];
    double binop50 = charat49 <= 57.0000000000;
    double binop51 = binop48 && binop50;
    double binop52 = binop45 && binop51;
    double charat53 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop54 = charat53 >= 48.0000000000;
    double charat55 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop56 = charat55 <= 57.0000000000;
    double binop57 = binop54 && binop56;
    double binop58 = start + 1.0000000000;
    double charat59 = (double)(unsigned char)"12 + 34 * 2"[(int)binop58];
    double binop60 = charat59 >= 48.0000000000;
    double charat61 = (double)(unsigned char)"12 + 34 * 2"[(int)binop58];
    double binop62 = charat61 <= 57.0000000000;
    double binop63 = binop60 && binop62;
    double binop64 = binop57 && binop63;
    double binop65 = start + 2.0000000000;
    double charat66 = (double)(unsigned char)"12 + 34 * 2"[(int)binop65];
    double binop67 = charat66 >= 48.0000000000;
    double charat68 = (double)(unsigned char)"12 + 34 * 2"[(int)binop65];
    double binop69 = charat68 <= 57.0000000000;
    double binop70 = binop67 && binop69;
    double binop71 = binop64 && binop70;
    double charat72 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop73 = charat72 >= 48.0000000000;
    double charat74 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop75 = charat74 <= 57.0000000000;
    double binop76 = binop73 && binop75;
    double binop77 = start + 1.0000000000;
    double charat78 = (double)(unsigned char)"12 + 34 * 2"[(int)binop77];
    double binop79 = charat78 >= 48.0000000000;
    double charat80 = (double)(unsigned char)"12 + 34 * 2"[(int)binop77];
    double binop81 = charat80 <= 57.0000000000;
    double binop82 = binop79 && binop81;
    double binop83 = binop76 && binop82;
    double charat84 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop85 = charat84 >= 48.0000000000;
    double charat86 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop87 = charat86 <= 57.0000000000;
    double binop88 = binop85 && binop87;
    if (binop52) {
        cases26 = 4.0000000000;
    } else if (binop71) {
        cases26 = 3.0000000000;
    } else if (binop83) {
        cases26 = 2.0000000000;
    } else if (binop88) {
        cases26 = 1.0000000000;
    } else if (1.0000000000) {
        cases26 = 0.0000000000;
    } else { cases26 = 0.0; }
        cases20 = cases26;
    } else if (1.0000000000) {
        cases20 = 1.0000000000;
    } else { cases20 = 0.0; }
    length = cases20;
    double binop89 = start + length;
    end = binop89;
    double binop90 = step - 1.0000000000;
    double binop91 = binop90 * 3.0000000000;
    idx = binop91;
    tokens[(int)idx] = type;
    double binop92 = idx + 1.0000000000;
    tokens[(int)binop92] = start;
    double binop93 = idx + 2.0000000000;
    tokens[(int)binop93] = end;
    pos = end;
    double cases94;
    double charat95 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop96 = charat95 == 32.0000000000;
    if (binop96) {
        cases94 = 1.0000000000;
    } else if (1.0000000000) {
        cases94 = 0.0000000000;
    } else { cases94 = 0.0; }
    double binop97 = pos + cases94;
    pos = binop97;
        sum1 += 0.0000000000;
    }
    dummy = sum1;
    double arr98 = tokens[(int)0.0000000000];
    printf("%f\n", arr98);
    double arr99 = tokens[(int)1.0000000000];
    printf("%f\n", arr99);
    double arr100 = tokens[(int)2.0000000000];
    printf("%f\n", arr100);
    double arr101 = tokens[(int)3.0000000000];
    printf("%f\n", arr101);
    double arr102 = tokens[(int)4.0000000000];
    printf("%f\n", arr102);
    double arr103 = tokens[(int)5.0000000000];
    printf("%f\n", arr103);
    double arr104 = tokens[(int)6.0000000000];
    printf("%f\n", arr104);
    double arr105 = tokens[(int)7.0000000000];
    printf("%f\n", arr105);
    double arr106 = tokens[(int)8.0000000000];
    printf("%f\n", arr106);
    printf("result = %f\n", sum1);
    return 0;
}
