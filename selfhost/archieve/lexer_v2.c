#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double TOK_LET = 0.0;
double TOK_EQUAL = 0.0;
double pos = 0.0;
double TOK_PLUS = 0.0;
double TOK_MUL = 0.0;
double start = 0.0;
double TOK_IDENT = 0.0;
double length = 0.0;
double type = 0.0;
double TOK_NUMBER = 0.0;
double end = 0.0;
double dummy = 0.0;
double src_len = 0.0;

int main() {
    double len0 = (double)strlen("\let x = 12 + 34 * 2");
    src_len = len0;
    TOK_LET = 1.0000000000;
    TOK_IDENT = 8.0000000000;
    TOK_EQUAL = 3.0000000000;
    TOK_NUMBER = 2.0000000000;
    TOK_PLUS = 4.0000000000;
    TOK_MUL = 5.0000000000;
    double tokens[30] = {0};
    pos = 0.0000000000;
    type = 0.0000000000;
    start = 0.0000000000;
    length = 0.0000000000;
    end = 0.0000000000;
    double sum1 = 0.0;
    for (int step = (int)(1.0000000000); step <= (int)(20.0000000000); step++) {
    double cases2;
    double charat3 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop4 = charat3 == 92.0000000000;
    double binop5 = pos + 1.0000000000;
    double charat6 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop5];
    double binop7 = charat6 == 108.0000000000;
    double binop8 = binop4 && binop7;
    double binop9 = pos + 2.0000000000;
    double charat10 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop9];
    double binop11 = charat10 == 101.0000000000;
    double binop12 = binop8 && binop11;
    double binop13 = pos + 3.0000000000;
    double charat14 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop13];
    double binop15 = charat14 == 116.0000000000;
    double binop16 = binop12 && binop15;
    double binop17 = pos < src_len;
    double binop18 = binop16 && binop17;
    double charat19 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop20 = charat19 >= 65.0000000000;
    double charat21 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop22 = charat21 <= 90.0000000000;
    double binop23 = binop20 && binop22;
    double charat24 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop25 = charat24 >= 97.0000000000;
    double charat26 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop27 = charat26 <= 122.0000000000;
    double binop28 = binop25 && binop27;
    double binop29 = binop23 || binop28;
    double binop30 = pos < src_len;
    double binop31 = binop29 && binop30;
    double charat32 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop33 = charat32 == 61.0000000000;
    double binop34 = pos < src_len;
    double binop35 = binop33 && binop34;
    double charat36 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop37 = charat36 >= 48.0000000000;
    double charat38 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop39 = charat38 <= 57.0000000000;
    double binop40 = binop37 && binop39;
    double binop41 = pos < src_len;
    double binop42 = binop40 && binop41;
    double charat43 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop44 = charat43 == 43.0000000000;
    double binop45 = pos < src_len;
    double binop46 = binop44 && binop45;
    double charat47 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop48 = charat47 == 42.0000000000;
    double binop49 = pos < src_len;
    double binop50 = binop48 && binop49;
    if (binop18) {
        cases2 = TOK_LET;
    } else if (binop31) {
        cases2 = TOK_IDENT;
    } else if (binop35) {
        cases2 = TOK_EQUAL;
    } else if (binop42) {
        cases2 = TOK_NUMBER;
    } else if (binop46) {
        cases2 = TOK_PLUS;
    } else if (binop50) {
        cases2 = TOK_MUL;
    } else if (1.0000000000) {
        cases2 = 0.0000000000;
    } else { cases2 = 0.0; }
    type = cases2;
    double cases51;
    double binop52 = pos < src_len;
    if (binop52) {
        cases51 = pos;
    } else if (1.0000000000) {
        cases51 = 0.0000000000;
    } else { cases51 = 0.0; }
    start = cases51;
    double cases53;
    double charat54 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop55 = charat54 == 92.0000000000;
    double binop56 = pos + 1.0000000000;
    double charat57 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop56];
    double binop58 = charat57 == 108.0000000000;
    double binop59 = binop55 && binop58;
    double binop60 = pos + 2.0000000000;
    double charat61 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop60];
    double binop62 = charat61 == 101.0000000000;
    double binop63 = binop59 && binop62;
    double binop64 = pos + 3.0000000000;
    double charat65 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop64];
    double binop66 = charat65 == 116.0000000000;
    double binop67 = binop63 && binop66;
    double charat68 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop69 = charat68 >= 48.0000000000;
    double charat70 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop71 = charat70 <= 57.0000000000;
    double binop72 = binop69 && binop71;
    if (binop67) {
        cases53 = 4.0000000000;
    } else if (binop72) {
    double cases73;
    double charat74 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)start];
    double binop75 = charat74 >= 48.0000000000;
    double charat76 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)start];
    double binop77 = charat76 <= 57.0000000000;
    double binop78 = binop75 && binop77;
    double binop79 = start + 1.0000000000;
    double charat80 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop79];
    double binop81 = charat80 >= 48.0000000000;
    double charat82 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop79];
    double binop83 = charat82 <= 57.0000000000;
    double binop84 = binop81 && binop83;
    double binop85 = binop78 && binop84;
    double binop86 = start + 2.0000000000;
    double charat87 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop86];
    double binop88 = charat87 >= 48.0000000000;
    double charat89 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop86];
    double binop90 = charat89 <= 57.0000000000;
    double binop91 = binop88 && binop90;
    double binop92 = binop85 && binop91;
    double binop93 = start + 3.0000000000;
    double charat94 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop93];
    double binop95 = charat94 >= 48.0000000000;
    double charat96 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop93];
    double binop97 = charat96 <= 57.0000000000;
    double binop98 = binop95 && binop97;
    double binop99 = binop92 && binop98;
    double charat100 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)start];
    double binop101 = charat100 >= 48.0000000000;
    double charat102 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)start];
    double binop103 = charat102 <= 57.0000000000;
    double binop104 = binop101 && binop103;
    double binop105 = start + 1.0000000000;
    double charat106 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop105];
    double binop107 = charat106 >= 48.0000000000;
    double charat108 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop105];
    double binop109 = charat108 <= 57.0000000000;
    double binop110 = binop107 && binop109;
    double binop111 = binop104 && binop110;
    double binop112 = start + 2.0000000000;
    double charat113 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop112];
    double binop114 = charat113 >= 48.0000000000;
    double charat115 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop112];
    double binop116 = charat115 <= 57.0000000000;
    double binop117 = binop114 && binop116;
    double binop118 = binop111 && binop117;
    double charat119 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)start];
    double binop120 = charat119 >= 48.0000000000;
    double charat121 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)start];
    double binop122 = charat121 <= 57.0000000000;
    double binop123 = binop120 && binop122;
    double binop124 = start + 1.0000000000;
    double charat125 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop124];
    double binop126 = charat125 >= 48.0000000000;
    double charat127 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)binop124];
    double binop128 = charat127 <= 57.0000000000;
    double binop129 = binop126 && binop128;
    double binop130 = binop123 && binop129;
    double charat131 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)start];
    double binop132 = charat131 >= 48.0000000000;
    double charat133 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)start];
    double binop134 = charat133 <= 57.0000000000;
    double binop135 = binop132 && binop134;
    if (binop99) {
        cases73 = 4.0000000000;
    } else if (binop118) {
        cases73 = 3.0000000000;
    } else if (binop130) {
        cases73 = 2.0000000000;
    } else if (binop135) {
        cases73 = 1.0000000000;
    } else if (1.0000000000) {
        cases73 = 0.0000000000;
    } else { cases73 = 0.0; }
        cases53 = cases73;
    } else if (1.0000000000) {
        cases53 = 1.0000000000;
    } else { cases53 = 0.0; }
    length = cases53;
    double binop136 = start + length;
    end = binop136;
    double binop137 = step - 1.0000000000;
    double binop138 = binop137 * 3.0000000000;
    tokens[(int)binop138] = type;
    double binop139 = step - 1.0000000000;
    double binop140 = binop139 * 0.0000000000;
    tokens[(int)binop140] = start;
    double binop141 = step - 1.0000000000;
    double binop142 = binop141 * 0.0000000000;
    tokens[(int)binop142] = end;
    pos = end;
    double cases143;
    double charat144 = (double)(unsigned char)"\let x = 12 + 34 * 2"[(int)pos];
    double binop145 = charat144 == 32.0000000000;
    if (binop145) {
        cases143 = 1.0000000000;
    } else if (1.0000000000) {
        cases143 = 0.0000000000;
    } else { cases143 = 0.0; }
    double binop146 = pos + cases143;
    pos = binop146;
        sum1 += 0.0000000000;
    }
    dummy = sum1;
    double arr147 = tokens[(int)0.0000000000];
    printf("%f\n", arr147);
    double arr148 = tokens[(int)1.0000000000];
    printf("%f\n", arr148);
    double arr149 = tokens[(int)2.0000000000];
    printf("%f\n", arr149);
    double arr150 = tokens[(int)3.0000000000];
    printf("%f\n", arr150);
    double arr151 = tokens[(int)4.0000000000];
    printf("%f\n", arr151);
    double arr152 = tokens[(int)5.0000000000];
    printf("%f\n", arr152);
    double arr153 = tokens[(int)6.0000000000];
    printf("%f\n", arr153);
    double arr154 = tokens[(int)7.0000000000];
    printf("%f\n", arr154);
    double arr155 = tokens[(int)8.0000000000];
    printf("%f\n", arr155);
    printf("result = %f\n", sum1);
    return 0;
}
