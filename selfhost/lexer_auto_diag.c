#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double pos = 0.0;
double tok_count = 0.0;
double src_len = 0.0;
double tp = 0.0;
double ln = 0.0;
double should = 0.0;
double dummy = 0.0;

int main() {
    char source[512] = "12 + 34 * 2";
    double len0 = (double)strlen(source);
    src_len = len0;
    pos = 0.0000000000;
    tok_count = 0.0000000000;
    tp = 0.0000000000;
    ln = 0.0000000000;
    should = 0.0000000000;
    double sum1 = 0.0;
    for (int i = (int)(1.0000000000); i <= (int)(src_len); i++) {
    double charat2 = (double)(unsigned char)source[(int)pos];
    double binop3 = charat2 == 32.0000000000;
    double binop4 = pos < src_len;
    double binop5 = binop3 && binop4;
    double binop6 = pos + binop5;
    pos = binop6;
    double charat7 = (double)(unsigned char)source[(int)pos];
    double binop8 = charat7 == 32.0000000000;
    double binop9 = 1.0000000000 - binop8;
    double binop10 = pos < src_len;
    double binop11 = binop9 * binop10;
    should = binop11;
    double cases12;
    double charat13 = (double)(unsigned char)source[(int)pos];
    double binop14 = charat13 >= 48.0000000000;
    double charat15 = (double)(unsigned char)source[(int)pos];
    double binop16 = charat15 <= 57.0000000000;
    double binop17 = binop14 && binop16;
    double charat18 = (double)(unsigned char)source[(int)pos];
    double binop19 = charat18 == 43.0000000000;
    double charat20 = (double)(unsigned char)source[(int)pos];
    double binop21 = charat20 == 42.0000000000;
    if (binop17) {
        cases12 = 2.0000000000;
    } else if (binop19) {
        cases12 = 4.0000000000;
    } else if (binop21) {
        cases12 = 5.0000000000;
    } else if (1.0000000000) {
        cases12 = 0.0000000000;
    } else { cases12 = 0.0; }
    tp = cases12;
    double cases22;
    double charat23 = (double)(unsigned char)source[(int)pos];
    double binop24 = charat23 >= 48.0000000000;
    double charat25 = (double)(unsigned char)source[(int)pos];
    double binop26 = charat25 <= 57.0000000000;
    double binop27 = binop24 && binop26;
    double binop28 = pos + 1.0000000000;
    double charat29 = (double)(unsigned char)source[(int)binop28];
    double binop30 = charat29 >= 48.0000000000;
    double charat31 = (double)(unsigned char)source[(int)binop28];
    double binop32 = charat31 <= 57.0000000000;
    double binop33 = binop30 && binop32;
    double binop34 = binop27 && binop33;
    double charat35 = (double)(unsigned char)source[(int)pos];
    double binop36 = charat35 >= 48.0000000000;
    double charat37 = (double)(unsigned char)source[(int)pos];
    double binop38 = charat37 <= 57.0000000000;
    double binop39 = binop36 && binop38;
    double charat40 = (double)(unsigned char)source[(int)pos];
    double binop41 = charat40 == 43.0000000000;
    double charat42 = (double)(unsigned char)source[(int)pos];
    double binop43 = charat42 == 42.0000000000;
    if (binop34) {
        cases22 = 2.0000000000;
    } else if (binop39) {
        cases22 = 1.0000000000;
    } else if (binop41) {
        cases22 = 1.0000000000;
    } else if (binop43) {
        cases22 = 1.0000000000;
    } else if (1.0000000000) {
        cases22 = 0.0000000000;
    } else { cases22 = 0.0; }
    ln = cases22;
    printf("%s\n", "Token:");
    printf("%f\n", tp);
    printf("%f\n", pos);
    double binop44 = pos + ln;
    printf("%f\n", binop44);
    double binop45 = ln * should;
    double binop46 = pos + binop45;
    pos = binop46;
    double binop47 = tok_count + should;
    tok_count = binop47;
        sum1 += 0.0000000000;
    }
    dummy = sum1;
    printf("%s\n", "Total tokens:");
    printf("%f\n", tok_count);
    printf("result = %f\n", sum1);
    return 0;
}
