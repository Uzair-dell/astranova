#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double length = 0.0;
double mul_result = 0.0;
double result = 0.0;
double TOK_MUL = 0.0;
double TOK_MINUS = 0.0;
double TOK_NUMBER = 0.0;
double val1 = 0.0;
double num_end0 = 0.0;
double val2 = 0.0;
double num_start0 = 0.0;
double type = 0.0;
double num_tokens = 0.0;
double num_start2 = 0.0;
double val3 = 0.0;
double pos = 0.0;
double start = 0.0;
double TOK_DIV = 0.0;
double dummy1 = 0.0;
double num_end2 = 0.0;
double TOK_PLUS = 0.0;
double src_len = 0.0;
double end = 0.0;
double num_start4 = 0.0;
double num_end4 = 0.0;

int main() {
    double len0 = (double)strlen("12 + 34 * 2");
    src_len = len0;
    TOK_NUMBER = 2.0000000000;
    TOK_PLUS = 4.0000000000;
    TOK_MINUS = 4.0000000000;
    TOK_MUL = 5.0000000000;
    TOK_DIV = 5.0000000000;
    double tokens[60] = {0};
    num_tokens = 0.0000000000;
    pos = 0.0000000000;
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
    double binop15 = charat14 == 45.0000000000;
    double binop16 = pos < src_len;
    double binop17 = binop15 && binop16;
    double charat18 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop19 = charat18 == 42.0000000000;
    double binop20 = pos < src_len;
    double binop21 = binop19 && binop20;
    double charat22 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop23 = charat22 == 47.0000000000;
    double binop24 = pos < src_len;
    double binop25 = binop23 && binop24;
    if (binop9) {
        cases2 = TOK_NUMBER;
    } else if (binop13) {
        cases2 = TOK_PLUS;
    } else if (binop17) {
        cases2 = TOK_MINUS;
    } else if (binop21) {
        cases2 = TOK_MUL;
    } else if (binop25) {
        cases2 = TOK_DIV;
    } else if (1.0000000000) {
        cases2 = 0.0000000000;
    } else { cases2 = 0.0; }
    type = cases2;
    double cases26;
    double binop27 = pos < src_len;
    if (binop27) {
        cases26 = pos;
    } else if (1.0000000000) {
        cases26 = 0.0000000000;
    } else { cases26 = 0.0; }
    start = cases26;
    double cases28;
    double charat29 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop30 = charat29 >= 48.0000000000;
    double charat31 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop32 = charat31 <= 57.0000000000;
    double binop33 = binop30 && binop32;
    if (binop33) {
    double cases34;
    double charat35 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop36 = charat35 >= 48.0000000000;
    double charat37 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop38 = charat37 <= 57.0000000000;
    double binop39 = binop36 && binop38;
    double binop40 = start + 1.0000000000;
    double charat41 = (double)(unsigned char)"12 + 34 * 2"[(int)binop40];
    double binop42 = charat41 >= 48.0000000000;
    double charat43 = (double)(unsigned char)"12 + 34 * 2"[(int)binop40];
    double binop44 = charat43 <= 57.0000000000;
    double binop45 = binop42 && binop44;
    double binop46 = binop39 && binop45;
    double binop47 = start + 2.0000000000;
    double charat48 = (double)(unsigned char)"12 + 34 * 2"[(int)binop47];
    double binop49 = charat48 >= 48.0000000000;
    double charat50 = (double)(unsigned char)"12 + 34 * 2"[(int)binop47];
    double binop51 = charat50 <= 57.0000000000;
    double binop52 = binop49 && binop51;
    double binop53 = binop46 && binop52;
    double binop54 = start + 3.0000000000;
    double charat55 = (double)(unsigned char)"12 + 34 * 2"[(int)binop54];
    double binop56 = charat55 >= 48.0000000000;
    double charat57 = (double)(unsigned char)"12 + 34 * 2"[(int)binop54];
    double binop58 = charat57 <= 57.0000000000;
    double binop59 = binop56 && binop58;
    double binop60 = binop53 && binop59;
    double charat61 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop62 = charat61 >= 48.0000000000;
    double charat63 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop64 = charat63 <= 57.0000000000;
    double binop65 = binop62 && binop64;
    double binop66 = start + 1.0000000000;
    double charat67 = (double)(unsigned char)"12 + 34 * 2"[(int)binop66];
    double binop68 = charat67 >= 48.0000000000;
    double charat69 = (double)(unsigned char)"12 + 34 * 2"[(int)binop66];
    double binop70 = charat69 <= 57.0000000000;
    double binop71 = binop68 && binop70;
    double binop72 = binop65 && binop71;
    double binop73 = start + 2.0000000000;
    double charat74 = (double)(unsigned char)"12 + 34 * 2"[(int)binop73];
    double binop75 = charat74 >= 48.0000000000;
    double charat76 = (double)(unsigned char)"12 + 34 * 2"[(int)binop73];
    double binop77 = charat76 <= 57.0000000000;
    double binop78 = binop75 && binop77;
    double binop79 = binop72 && binop78;
    double charat80 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop81 = charat80 >= 48.0000000000;
    double charat82 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop83 = charat82 <= 57.0000000000;
    double binop84 = binop81 && binop83;
    double binop85 = start + 1.0000000000;
    double charat86 = (double)(unsigned char)"12 + 34 * 2"[(int)binop85];
    double binop87 = charat86 >= 48.0000000000;
    double charat88 = (double)(unsigned char)"12 + 34 * 2"[(int)binop85];
    double binop89 = charat88 <= 57.0000000000;
    double binop90 = binop87 && binop89;
    double binop91 = binop84 && binop90;
    double charat92 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop93 = charat92 >= 48.0000000000;
    double charat94 = (double)(unsigned char)"12 + 34 * 2"[(int)start];
    double binop95 = charat94 <= 57.0000000000;
    double binop96 = binop93 && binop95;
    if (binop60) {
        cases34 = 4.0000000000;
    } else if (binop79) {
        cases34 = 3.0000000000;
    } else if (binop91) {
        cases34 = 2.0000000000;
    } else if (binop96) {
        cases34 = 1.0000000000;
    } else if (1.0000000000) {
        cases34 = 0.0000000000;
    } else { cases34 = 0.0; }
        cases28 = cases34;
    } else if (1.0000000000) {
        cases28 = 1.0000000000;
    } else { cases28 = 0.0; }
    length = cases28;
    double binop97 = start + length;
    end = binop97;
    double binop98 = num_tokens * 3.0000000000;
    tokens[(int)binop98] = type;
    double binop99 = num_tokens * 3.0000000000;
    double binop100 = binop99 + 1.0000000000;
    tokens[(int)binop100] = start;
    double binop101 = num_tokens * 3.0000000000;
    double binop102 = binop101 + 2.0000000000;
    tokens[(int)binop102] = end;
    double binop103 = num_tokens + 1.0000000000;
    num_tokens = binop103;
    pos = end;
    double cases104;
    double charat105 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop106 = charat105 == 32.0000000000;
    if (binop106) {
        cases104 = 1.0000000000;
    } else if (1.0000000000) {
        cases104 = 0.0000000000;
    } else { cases104 = 0.0; }
    double binop107 = pos + cases104;
    pos = binop107;
        sum1 += 0.0000000000;
    }
    dummy1 = sum1;
    double num_values[20] = {0};
    double arr108 = tokens[(int)1.0000000000];
    num_start0 = arr108;
    double arr109 = tokens[(int)2.0000000000];
    num_end0 = arr109;
    double arr110 = tokens[(int)7.0000000000];
    num_start2 = arr110;
    double arr111 = tokens[(int)8.0000000000];
    num_end2 = arr111;
    double arr112 = tokens[(int)13.0000000000];
    num_start4 = arr112;
    double arr113 = tokens[(int)14.0000000000];
    num_end4 = arr113;
    double binop114 = num_end0 - 1.0000000000;
    double sum115 = 0.0;
    for (int i = (int)(num_start0); i <= (int)(binop114); i++) {
    double charat116 = (double)(unsigned char)"12 + 34 * 2"[(int)i];
    double binop117 = charat116 - 48.0000000000;
    double binop118 = num_end0 - i;
    double binop119 = binop118 - 1.0000000000;
    double cases120;
    double binop121 = binop119 == 0.0000000000;
    double binop122 = binop119 == 1.0000000000;
    double binop123 = binop119 == 2.0000000000;
    if (binop121) {
        cases120 = 1.0000000000;
    } else if (binop122) {
        cases120 = 10.0000000000;
    } else if (binop123) {
        cases120 = 100.0000000000;
    } else if (1.0000000000) {
        cases120 = 1000.0000000000;
    } else { cases120 = 0.0; }
    double binop124 = binop117 * cases120;
        sum115 += binop124;
    }
    num_values[(int)0.0000000000] = sum115;
    double binop125 = num_end2 - 1.0000000000;
    double sum126 = 0.0;
    for (int i = (int)(num_start2); i <= (int)(binop125); i++) {
    double charat127 = (double)(unsigned char)"12 + 34 * 2"[(int)i];
    double binop128 = charat127 - 48.0000000000;
    double binop129 = num_end2 - i;
    double binop130 = binop129 - 1.0000000000;
    double cases131;
    double binop132 = binop130 == 0.0000000000;
    double binop133 = binop130 == 1.0000000000;
    double binop134 = binop130 == 2.0000000000;
    if (binop132) {
        cases131 = 1.0000000000;
    } else if (binop133) {
        cases131 = 10.0000000000;
    } else if (binop134) {
        cases131 = 100.0000000000;
    } else if (1.0000000000) {
        cases131 = 1000.0000000000;
    } else { cases131 = 0.0; }
    double binop135 = binop128 * cases131;
        sum126 += binop135;
    }
    num_values[(int)2.0000000000] = sum126;
    double binop136 = num_end4 - 1.0000000000;
    double sum137 = 0.0;
    for (int i = (int)(num_start4); i <= (int)(binop136); i++) {
    double charat138 = (double)(unsigned char)"12 + 34 * 2"[(int)i];
    double binop139 = charat138 - 48.0000000000;
    double binop140 = num_end4 - i;
    double binop141 = binop140 - 1.0000000000;
    double cases142;
    double binop143 = binop141 == 0.0000000000;
    double binop144 = binop141 == 1.0000000000;
    double binop145 = binop141 == 2.0000000000;
    if (binop143) {
        cases142 = 1.0000000000;
    } else if (binop144) {
        cases142 = 10.0000000000;
    } else if (binop145) {
        cases142 = 100.0000000000;
    } else if (1.0000000000) {
        cases142 = 1000.0000000000;
    } else { cases142 = 0.0; }
    double binop146 = binop139 * cases142;
        sum137 += binop146;
    }
    num_values[(int)4.0000000000] = sum137;
    double arr147 = tokens[(int)0.0000000000];
    printf("%f\n", arr147);
    double arr148 = tokens[(int)3.0000000000];
    printf("%f\n", arr148);
    double arr149 = tokens[(int)6.0000000000];
    printf("%f\n", arr149);
    double arr150 = tokens[(int)9.0000000000];
    printf("%f\n", arr150);
    double arr151 = tokens[(int)12.0000000000];
    printf("%f\n", arr151);
    double arr152 = num_values[(int)0.0000000000];
    printf("%f\n", arr152);
    double arr153 = num_values[(int)2.0000000000];
    printf("%f\n", arr153);
    double arr154 = num_values[(int)0.0000000000];
    val1 = arr154;
    double arr155 = num_values[(int)2.0000000000];
    val2 = arr155;
    double arr156 = num_values[(int)4.0000000000];
    val3 = arr156;
    double binop157 = val2 * val3;
    mul_result = binop157;
    double binop158 = val1 + mul_result;
    result = binop158;
    printf("%f\n", result);
    printf("result = %f\n", binop158);
    return 0;
}
