#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }

double TOK_PLUS = 0.0;
double TOK_MUL = 0.0;
double pos = 0.0;
double src_len = 0.0;
double dummy = 0.0;
double TOK_NUMBER = 0.0;

int main() {
    double len0 = (double)strlen("12 + 34 * 2");
    src_len = len0;
    TOK_NUMBER = 2.0000000000;
    TOK_PLUS = 4.0000000000;
    TOK_MUL = 5.0000000000;
    double tokens[30] = {0};
    pos = 0.0000000000;
    double sum1 = 0.0;
    double binop2 = 1.0000000000 - 1.0000000000;
    double binop3 = binop2 * 3.0000000000;
    double cases4;
    double binop5 = pos < src_len;
    double charat6 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7 = charat6 >= 48.0000000000;
    double charat8 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9 = charat8 <= 57.0000000000;
    double binop10 = binop7 && binop9;
    double binop11 = binop5 && binop10;
    double binop12 = pos < src_len;
    double charat13 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop14 = charat13 == 43.0000000000;
    double binop15 = binop12 && binop14;
    double binop16 = pos < src_len;
    double charat17 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop18 = charat17 == 42.0000000000;
    double binop19 = binop16 && binop18;
    if (binop11) {
        cases4 = TOK_NUMBER;
    } else if (binop15) {
        cases4 = TOK_PLUS;
    } else if (binop19) {
        cases4 = TOK_MUL;
    } else if (1.0000000000) {
        cases4 = 0.0000000000;
    } else { cases4 = 0.0; }
    double binop20 = 1.0000000000 - 1.0000000000;
    double binop21 = binop20 * 0.0000000000;
    double cases22;
    double binop23 = pos < src_len;
    if (binop23) {
        cases22 = pos;
    } else if (1.0000000000) {
        cases22 = 0.0000000000;
    } else { cases22 = 0.0; }
    double binop24 = 1.0000000000 - 1.0000000000;
    double binop25 = binop24 * 0.0000000000;
    double cases26;
    double binop27 = pos < src_len;
    double charat28 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop29 = charat28 >= 48.0000000000;
    double charat30 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop31 = charat30 <= 57.0000000000;
    double binop32 = binop29 && binop31;
    double binop33 = binop27 && binop32;
    double binop34 = pos < src_len;
    double charat35 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop36 = charat35 == 43.0000000000;
    double charat37 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop38 = charat37 == 42.0000000000;
    double binop39 = binop36 || binop38;
    double binop40 = binop34 && binop39;
    if (binop33) {
    double binop41 = pos + 2.0000000000;
        cases26 = binop41;
    } else if (binop40) {
    double binop42 = pos + 1.0000000000;
        cases26 = binop42;
    } else if (1.0000000000) {
        cases26 = 0.0000000000;
    } else { cases26 = 0.0; }
    double cases43;
    double binop44 = pos < src_len;
    double charat45 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop46 = charat45 >= 48.0000000000;
    double charat47 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop48 = charat47 <= 57.0000000000;
    double binop49 = binop46 && binop48;
    double binop50 = binop44 && binop49;
    double binop51 = pos < src_len;
    double charat52 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop53 = charat52 == 43.0000000000;
    double charat54 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop55 = charat54 == 42.0000000000;
    double binop56 = binop53 || binop55;
    double binop57 = binop51 && binop56;
    if (binop50) {
    double binop58 = pos + 3.0000000000;
        cases43 = binop58;
    } else if (binop57) {
    double binop59 = pos + 2.0000000000;
        cases43 = binop59;
    } else if (1.0000000000) {
    double binop60 = src_len + 1.0000000000;
        cases43 = binop60;
    } else { cases43 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop25] = 0.0000000000;
    tokens[(int)binop21] = 0.0000000000;
    tokens[(int)binop3] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop61 = 2.0000000000 - 1.0000000000;
    double binop62 = binop61 * 3.0000000000;
    double cases63;
    double binop64 = pos < src_len;
    double charat65 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop66 = charat65 >= 48.0000000000;
    double charat67 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop68 = charat67 <= 57.0000000000;
    double binop69 = binop66 && binop68;
    double binop70 = binop64 && binop69;
    double binop71 = pos < src_len;
    double charat72 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop73 = charat72 == 43.0000000000;
    double binop74 = binop71 && binop73;
    double binop75 = pos < src_len;
    double charat76 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop77 = charat76 == 42.0000000000;
    double binop78 = binop75 && binop77;
    if (binop70) {
        cases63 = TOK_NUMBER;
    } else if (binop74) {
        cases63 = TOK_PLUS;
    } else if (binop78) {
        cases63 = TOK_MUL;
    } else if (1.0000000000) {
        cases63 = 0.0000000000;
    } else { cases63 = 0.0; }
    double binop79 = 2.0000000000 - 1.0000000000;
    double binop80 = binop79 * 0.0000000000;
    double cases81;
    double binop82 = pos < src_len;
    if (binop82) {
        cases81 = pos;
    } else if (1.0000000000) {
        cases81 = 0.0000000000;
    } else { cases81 = 0.0; }
    double binop83 = 2.0000000000 - 1.0000000000;
    double binop84 = binop83 * 0.0000000000;
    double cases85;
    double binop86 = pos < src_len;
    double charat87 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop88 = charat87 >= 48.0000000000;
    double charat89 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop90 = charat89 <= 57.0000000000;
    double binop91 = binop88 && binop90;
    double binop92 = binop86 && binop91;
    double binop93 = pos < src_len;
    double charat94 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop95 = charat94 == 43.0000000000;
    double charat96 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop97 = charat96 == 42.0000000000;
    double binop98 = binop95 || binop97;
    double binop99 = binop93 && binop98;
    if (binop92) {
    double binop100 = pos + 2.0000000000;
        cases85 = binop100;
    } else if (binop99) {
    double binop101 = pos + 1.0000000000;
        cases85 = binop101;
    } else if (1.0000000000) {
        cases85 = 0.0000000000;
    } else { cases85 = 0.0; }
    double cases102;
    double binop103 = pos < src_len;
    double charat104 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop105 = charat104 >= 48.0000000000;
    double charat106 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop107 = charat106 <= 57.0000000000;
    double binop108 = binop105 && binop107;
    double binop109 = binop103 && binop108;
    double binop110 = pos < src_len;
    double charat111 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop112 = charat111 == 43.0000000000;
    double charat113 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop114 = charat113 == 42.0000000000;
    double binop115 = binop112 || binop114;
    double binop116 = binop110 && binop115;
    if (binop109) {
    double binop117 = pos + 3.0000000000;
        cases102 = binop117;
    } else if (binop116) {
    double binop118 = pos + 2.0000000000;
        cases102 = binop118;
    } else if (1.0000000000) {
    double binop119 = src_len + 1.0000000000;
        cases102 = binop119;
    } else { cases102 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop84] = 0.0000000000;
    tokens[(int)binop80] = 0.0000000000;
    tokens[(int)binop62] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop120 = 3.0000000000 - 1.0000000000;
    double binop121 = binop120 * 3.0000000000;
    double cases122;
    double binop123 = pos < src_len;
    double charat124 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop125 = charat124 >= 48.0000000000;
    double charat126 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop127 = charat126 <= 57.0000000000;
    double binop128 = binop125 && binop127;
    double binop129 = binop123 && binop128;
    double binop130 = pos < src_len;
    double charat131 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop132 = charat131 == 43.0000000000;
    double binop133 = binop130 && binop132;
    double binop134 = pos < src_len;
    double charat135 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop136 = charat135 == 42.0000000000;
    double binop137 = binop134 && binop136;
    if (binop129) {
        cases122 = TOK_NUMBER;
    } else if (binop133) {
        cases122 = TOK_PLUS;
    } else if (binop137) {
        cases122 = TOK_MUL;
    } else if (1.0000000000) {
        cases122 = 0.0000000000;
    } else { cases122 = 0.0; }
    double binop138 = 3.0000000000 - 1.0000000000;
    double binop139 = binop138 * 0.0000000000;
    double cases140;
    double binop141 = pos < src_len;
    if (binop141) {
        cases140 = pos;
    } else if (1.0000000000) {
        cases140 = 0.0000000000;
    } else { cases140 = 0.0; }
    double binop142 = 3.0000000000 - 1.0000000000;
    double binop143 = binop142 * 0.0000000000;
    double cases144;
    double binop145 = pos < src_len;
    double charat146 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop147 = charat146 >= 48.0000000000;
    double charat148 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop149 = charat148 <= 57.0000000000;
    double binop150 = binop147 && binop149;
    double binop151 = binop145 && binop150;
    double binop152 = pos < src_len;
    double charat153 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop154 = charat153 == 43.0000000000;
    double charat155 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop156 = charat155 == 42.0000000000;
    double binop157 = binop154 || binop156;
    double binop158 = binop152 && binop157;
    if (binop151) {
    double binop159 = pos + 2.0000000000;
        cases144 = binop159;
    } else if (binop158) {
    double binop160 = pos + 1.0000000000;
        cases144 = binop160;
    } else if (1.0000000000) {
        cases144 = 0.0000000000;
    } else { cases144 = 0.0; }
    double cases161;
    double binop162 = pos < src_len;
    double charat163 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop164 = charat163 >= 48.0000000000;
    double charat165 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop166 = charat165 <= 57.0000000000;
    double binop167 = binop164 && binop166;
    double binop168 = binop162 && binop167;
    double binop169 = pos < src_len;
    double charat170 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop171 = charat170 == 43.0000000000;
    double charat172 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop173 = charat172 == 42.0000000000;
    double binop174 = binop171 || binop173;
    double binop175 = binop169 && binop174;
    if (binop168) {
    double binop176 = pos + 3.0000000000;
        cases161 = binop176;
    } else if (binop175) {
    double binop177 = pos + 2.0000000000;
        cases161 = binop177;
    } else if (1.0000000000) {
    double binop178 = src_len + 1.0000000000;
        cases161 = binop178;
    } else { cases161 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop143] = 0.0000000000;
    tokens[(int)binop139] = 0.0000000000;
    tokens[(int)binop121] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop179 = 4.0000000000 - 1.0000000000;
    double binop180 = binop179 * 3.0000000000;
    double cases181;
    double binop182 = pos < src_len;
    double charat183 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop184 = charat183 >= 48.0000000000;
    double charat185 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop186 = charat185 <= 57.0000000000;
    double binop187 = binop184 && binop186;
    double binop188 = binop182 && binop187;
    double binop189 = pos < src_len;
    double charat190 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop191 = charat190 == 43.0000000000;
    double binop192 = binop189 && binop191;
    double binop193 = pos < src_len;
    double charat194 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop195 = charat194 == 42.0000000000;
    double binop196 = binop193 && binop195;
    if (binop188) {
        cases181 = TOK_NUMBER;
    } else if (binop192) {
        cases181 = TOK_PLUS;
    } else if (binop196) {
        cases181 = TOK_MUL;
    } else if (1.0000000000) {
        cases181 = 0.0000000000;
    } else { cases181 = 0.0; }
    double binop197 = 4.0000000000 - 1.0000000000;
    double binop198 = binop197 * 0.0000000000;
    double cases199;
    double binop200 = pos < src_len;
    if (binop200) {
        cases199 = pos;
    } else if (1.0000000000) {
        cases199 = 0.0000000000;
    } else { cases199 = 0.0; }
    double binop201 = 4.0000000000 - 1.0000000000;
    double binop202 = binop201 * 0.0000000000;
    double cases203;
    double binop204 = pos < src_len;
    double charat205 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop206 = charat205 >= 48.0000000000;
    double charat207 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop208 = charat207 <= 57.0000000000;
    double binop209 = binop206 && binop208;
    double binop210 = binop204 && binop209;
    double binop211 = pos < src_len;
    double charat212 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop213 = charat212 == 43.0000000000;
    double charat214 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop215 = charat214 == 42.0000000000;
    double binop216 = binop213 || binop215;
    double binop217 = binop211 && binop216;
    if (binop210) {
    double binop218 = pos + 2.0000000000;
        cases203 = binop218;
    } else if (binop217) {
    double binop219 = pos + 1.0000000000;
        cases203 = binop219;
    } else if (1.0000000000) {
        cases203 = 0.0000000000;
    } else { cases203 = 0.0; }
    double cases220;
    double binop221 = pos < src_len;
    double charat222 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop223 = charat222 >= 48.0000000000;
    double charat224 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop225 = charat224 <= 57.0000000000;
    double binop226 = binop223 && binop225;
    double binop227 = binop221 && binop226;
    double binop228 = pos < src_len;
    double charat229 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop230 = charat229 == 43.0000000000;
    double charat231 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop232 = charat231 == 42.0000000000;
    double binop233 = binop230 || binop232;
    double binop234 = binop228 && binop233;
    if (binop227) {
    double binop235 = pos + 3.0000000000;
        cases220 = binop235;
    } else if (binop234) {
    double binop236 = pos + 2.0000000000;
        cases220 = binop236;
    } else if (1.0000000000) {
    double binop237 = src_len + 1.0000000000;
        cases220 = binop237;
    } else { cases220 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop202] = 0.0000000000;
    tokens[(int)binop198] = 0.0000000000;
    tokens[(int)binop180] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop238 = 5.0000000000 - 1.0000000000;
    double binop239 = binop238 * 3.0000000000;
    double cases240;
    double binop241 = pos < src_len;
    double charat242 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop243 = charat242 >= 48.0000000000;
    double charat244 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop245 = charat244 <= 57.0000000000;
    double binop246 = binop243 && binop245;
    double binop247 = binop241 && binop246;
    double binop248 = pos < src_len;
    double charat249 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop250 = charat249 == 43.0000000000;
    double binop251 = binop248 && binop250;
    double binop252 = pos < src_len;
    double charat253 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop254 = charat253 == 42.0000000000;
    double binop255 = binop252 && binop254;
    if (binop247) {
        cases240 = TOK_NUMBER;
    } else if (binop251) {
        cases240 = TOK_PLUS;
    } else if (binop255) {
        cases240 = TOK_MUL;
    } else if (1.0000000000) {
        cases240 = 0.0000000000;
    } else { cases240 = 0.0; }
    double binop256 = 5.0000000000 - 1.0000000000;
    double binop257 = binop256 * 0.0000000000;
    double cases258;
    double binop259 = pos < src_len;
    if (binop259) {
        cases258 = pos;
    } else if (1.0000000000) {
        cases258 = 0.0000000000;
    } else { cases258 = 0.0; }
    double binop260 = 5.0000000000 - 1.0000000000;
    double binop261 = binop260 * 0.0000000000;
    double cases262;
    double binop263 = pos < src_len;
    double charat264 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop265 = charat264 >= 48.0000000000;
    double charat266 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop267 = charat266 <= 57.0000000000;
    double binop268 = binop265 && binop267;
    double binop269 = binop263 && binop268;
    double binop270 = pos < src_len;
    double charat271 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop272 = charat271 == 43.0000000000;
    double charat273 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop274 = charat273 == 42.0000000000;
    double binop275 = binop272 || binop274;
    double binop276 = binop270 && binop275;
    if (binop269) {
    double binop277 = pos + 2.0000000000;
        cases262 = binop277;
    } else if (binop276) {
    double binop278 = pos + 1.0000000000;
        cases262 = binop278;
    } else if (1.0000000000) {
        cases262 = 0.0000000000;
    } else { cases262 = 0.0; }
    double cases279;
    double binop280 = pos < src_len;
    double charat281 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop282 = charat281 >= 48.0000000000;
    double charat283 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop284 = charat283 <= 57.0000000000;
    double binop285 = binop282 && binop284;
    double binop286 = binop280 && binop285;
    double binop287 = pos < src_len;
    double charat288 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop289 = charat288 == 43.0000000000;
    double charat290 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop291 = charat290 == 42.0000000000;
    double binop292 = binop289 || binop291;
    double binop293 = binop287 && binop292;
    if (binop286) {
    double binop294 = pos + 3.0000000000;
        cases279 = binop294;
    } else if (binop293) {
    double binop295 = pos + 2.0000000000;
        cases279 = binop295;
    } else if (1.0000000000) {
    double binop296 = src_len + 1.0000000000;
        cases279 = binop296;
    } else { cases279 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop261] = 0.0000000000;
    tokens[(int)binop257] = 0.0000000000;
    tokens[(int)binop239] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop297 = 6.0000000000 - 1.0000000000;
    double binop298 = binop297 * 3.0000000000;
    double cases299;
    double binop300 = pos < src_len;
    double charat301 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop302 = charat301 >= 48.0000000000;
    double charat303 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop304 = charat303 <= 57.0000000000;
    double binop305 = binop302 && binop304;
    double binop306 = binop300 && binop305;
    double binop307 = pos < src_len;
    double charat308 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop309 = charat308 == 43.0000000000;
    double binop310 = binop307 && binop309;
    double binop311 = pos < src_len;
    double charat312 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop313 = charat312 == 42.0000000000;
    double binop314 = binop311 && binop313;
    if (binop306) {
        cases299 = TOK_NUMBER;
    } else if (binop310) {
        cases299 = TOK_PLUS;
    } else if (binop314) {
        cases299 = TOK_MUL;
    } else if (1.0000000000) {
        cases299 = 0.0000000000;
    } else { cases299 = 0.0; }
    double binop315 = 6.0000000000 - 1.0000000000;
    double binop316 = binop315 * 0.0000000000;
    double cases317;
    double binop318 = pos < src_len;
    if (binop318) {
        cases317 = pos;
    } else if (1.0000000000) {
        cases317 = 0.0000000000;
    } else { cases317 = 0.0; }
    double binop319 = 6.0000000000 - 1.0000000000;
    double binop320 = binop319 * 0.0000000000;
    double cases321;
    double binop322 = pos < src_len;
    double charat323 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop324 = charat323 >= 48.0000000000;
    double charat325 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop326 = charat325 <= 57.0000000000;
    double binop327 = binop324 && binop326;
    double binop328 = binop322 && binop327;
    double binop329 = pos < src_len;
    double charat330 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop331 = charat330 == 43.0000000000;
    double charat332 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop333 = charat332 == 42.0000000000;
    double binop334 = binop331 || binop333;
    double binop335 = binop329 && binop334;
    if (binop328) {
    double binop336 = pos + 2.0000000000;
        cases321 = binop336;
    } else if (binop335) {
    double binop337 = pos + 1.0000000000;
        cases321 = binop337;
    } else if (1.0000000000) {
        cases321 = 0.0000000000;
    } else { cases321 = 0.0; }
    double cases338;
    double binop339 = pos < src_len;
    double charat340 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop341 = charat340 >= 48.0000000000;
    double charat342 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop343 = charat342 <= 57.0000000000;
    double binop344 = binop341 && binop343;
    double binop345 = binop339 && binop344;
    double binop346 = pos < src_len;
    double charat347 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop348 = charat347 == 43.0000000000;
    double charat349 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop350 = charat349 == 42.0000000000;
    double binop351 = binop348 || binop350;
    double binop352 = binop346 && binop351;
    if (binop345) {
    double binop353 = pos + 3.0000000000;
        cases338 = binop353;
    } else if (binop352) {
    double binop354 = pos + 2.0000000000;
        cases338 = binop354;
    } else if (1.0000000000) {
    double binop355 = src_len + 1.0000000000;
        cases338 = binop355;
    } else { cases338 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop320] = 0.0000000000;
    tokens[(int)binop316] = 0.0000000000;
    tokens[(int)binop298] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop356 = 7.0000000000 - 1.0000000000;
    double binop357 = binop356 * 3.0000000000;
    double cases358;
    double binop359 = pos < src_len;
    double charat360 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop361 = charat360 >= 48.0000000000;
    double charat362 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop363 = charat362 <= 57.0000000000;
    double binop364 = binop361 && binop363;
    double binop365 = binop359 && binop364;
    double binop366 = pos < src_len;
    double charat367 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop368 = charat367 == 43.0000000000;
    double binop369 = binop366 && binop368;
    double binop370 = pos < src_len;
    double charat371 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop372 = charat371 == 42.0000000000;
    double binop373 = binop370 && binop372;
    if (binop365) {
        cases358 = TOK_NUMBER;
    } else if (binop369) {
        cases358 = TOK_PLUS;
    } else if (binop373) {
        cases358 = TOK_MUL;
    } else if (1.0000000000) {
        cases358 = 0.0000000000;
    } else { cases358 = 0.0; }
    double binop374 = 7.0000000000 - 1.0000000000;
    double binop375 = binop374 * 0.0000000000;
    double cases376;
    double binop377 = pos < src_len;
    if (binop377) {
        cases376 = pos;
    } else if (1.0000000000) {
        cases376 = 0.0000000000;
    } else { cases376 = 0.0; }
    double binop378 = 7.0000000000 - 1.0000000000;
    double binop379 = binop378 * 0.0000000000;
    double cases380;
    double binop381 = pos < src_len;
    double charat382 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop383 = charat382 >= 48.0000000000;
    double charat384 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop385 = charat384 <= 57.0000000000;
    double binop386 = binop383 && binop385;
    double binop387 = binop381 && binop386;
    double binop388 = pos < src_len;
    double charat389 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop390 = charat389 == 43.0000000000;
    double charat391 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop392 = charat391 == 42.0000000000;
    double binop393 = binop390 || binop392;
    double binop394 = binop388 && binop393;
    if (binop387) {
    double binop395 = pos + 2.0000000000;
        cases380 = binop395;
    } else if (binop394) {
    double binop396 = pos + 1.0000000000;
        cases380 = binop396;
    } else if (1.0000000000) {
        cases380 = 0.0000000000;
    } else { cases380 = 0.0; }
    double cases397;
    double binop398 = pos < src_len;
    double charat399 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop400 = charat399 >= 48.0000000000;
    double charat401 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop402 = charat401 <= 57.0000000000;
    double binop403 = binop400 && binop402;
    double binop404 = binop398 && binop403;
    double binop405 = pos < src_len;
    double charat406 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop407 = charat406 == 43.0000000000;
    double charat408 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop409 = charat408 == 42.0000000000;
    double binop410 = binop407 || binop409;
    double binop411 = binop405 && binop410;
    if (binop404) {
    double binop412 = pos + 3.0000000000;
        cases397 = binop412;
    } else if (binop411) {
    double binop413 = pos + 2.0000000000;
        cases397 = binop413;
    } else if (1.0000000000) {
    double binop414 = src_len + 1.0000000000;
        cases397 = binop414;
    } else { cases397 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop379] = 0.0000000000;
    tokens[(int)binop375] = 0.0000000000;
    tokens[(int)binop357] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop415 = 8.0000000000 - 1.0000000000;
    double binop416 = binop415 * 3.0000000000;
    double cases417;
    double binop418 = pos < src_len;
    double charat419 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop420 = charat419 >= 48.0000000000;
    double charat421 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop422 = charat421 <= 57.0000000000;
    double binop423 = binop420 && binop422;
    double binop424 = binop418 && binop423;
    double binop425 = pos < src_len;
    double charat426 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop427 = charat426 == 43.0000000000;
    double binop428 = binop425 && binop427;
    double binop429 = pos < src_len;
    double charat430 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop431 = charat430 == 42.0000000000;
    double binop432 = binop429 && binop431;
    if (binop424) {
        cases417 = TOK_NUMBER;
    } else if (binop428) {
        cases417 = TOK_PLUS;
    } else if (binop432) {
        cases417 = TOK_MUL;
    } else if (1.0000000000) {
        cases417 = 0.0000000000;
    } else { cases417 = 0.0; }
    double binop433 = 8.0000000000 - 1.0000000000;
    double binop434 = binop433 * 0.0000000000;
    double cases435;
    double binop436 = pos < src_len;
    if (binop436) {
        cases435 = pos;
    } else if (1.0000000000) {
        cases435 = 0.0000000000;
    } else { cases435 = 0.0; }
    double binop437 = 8.0000000000 - 1.0000000000;
    double binop438 = binop437 * 0.0000000000;
    double cases439;
    double binop440 = pos < src_len;
    double charat441 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop442 = charat441 >= 48.0000000000;
    double charat443 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop444 = charat443 <= 57.0000000000;
    double binop445 = binop442 && binop444;
    double binop446 = binop440 && binop445;
    double binop447 = pos < src_len;
    double charat448 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop449 = charat448 == 43.0000000000;
    double charat450 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop451 = charat450 == 42.0000000000;
    double binop452 = binop449 || binop451;
    double binop453 = binop447 && binop452;
    if (binop446) {
    double binop454 = pos + 2.0000000000;
        cases439 = binop454;
    } else if (binop453) {
    double binop455 = pos + 1.0000000000;
        cases439 = binop455;
    } else if (1.0000000000) {
        cases439 = 0.0000000000;
    } else { cases439 = 0.0; }
    double cases456;
    double binop457 = pos < src_len;
    double charat458 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop459 = charat458 >= 48.0000000000;
    double charat460 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop461 = charat460 <= 57.0000000000;
    double binop462 = binop459 && binop461;
    double binop463 = binop457 && binop462;
    double binop464 = pos < src_len;
    double charat465 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop466 = charat465 == 43.0000000000;
    double charat467 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop468 = charat467 == 42.0000000000;
    double binop469 = binop466 || binop468;
    double binop470 = binop464 && binop469;
    if (binop463) {
    double binop471 = pos + 3.0000000000;
        cases456 = binop471;
    } else if (binop470) {
    double binop472 = pos + 2.0000000000;
        cases456 = binop472;
    } else if (1.0000000000) {
    double binop473 = src_len + 1.0000000000;
        cases456 = binop473;
    } else { cases456 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop438] = 0.0000000000;
    tokens[(int)binop434] = 0.0000000000;
    tokens[(int)binop416] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop474 = 9.0000000000 - 1.0000000000;
    double binop475 = binop474 * 3.0000000000;
    double cases476;
    double binop477 = pos < src_len;
    double charat478 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop479 = charat478 >= 48.0000000000;
    double charat480 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop481 = charat480 <= 57.0000000000;
    double binop482 = binop479 && binop481;
    double binop483 = binop477 && binop482;
    double binop484 = pos < src_len;
    double charat485 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop486 = charat485 == 43.0000000000;
    double binop487 = binop484 && binop486;
    double binop488 = pos < src_len;
    double charat489 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop490 = charat489 == 42.0000000000;
    double binop491 = binop488 && binop490;
    if (binop483) {
        cases476 = TOK_NUMBER;
    } else if (binop487) {
        cases476 = TOK_PLUS;
    } else if (binop491) {
        cases476 = TOK_MUL;
    } else if (1.0000000000) {
        cases476 = 0.0000000000;
    } else { cases476 = 0.0; }
    double binop492 = 9.0000000000 - 1.0000000000;
    double binop493 = binop492 * 0.0000000000;
    double cases494;
    double binop495 = pos < src_len;
    if (binop495) {
        cases494 = pos;
    } else if (1.0000000000) {
        cases494 = 0.0000000000;
    } else { cases494 = 0.0; }
    double binop496 = 9.0000000000 - 1.0000000000;
    double binop497 = binop496 * 0.0000000000;
    double cases498;
    double binop499 = pos < src_len;
    double charat500 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop501 = charat500 >= 48.0000000000;
    double charat502 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop503 = charat502 <= 57.0000000000;
    double binop504 = binop501 && binop503;
    double binop505 = binop499 && binop504;
    double binop506 = pos < src_len;
    double charat507 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop508 = charat507 == 43.0000000000;
    double charat509 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop510 = charat509 == 42.0000000000;
    double binop511 = binop508 || binop510;
    double binop512 = binop506 && binop511;
    if (binop505) {
    double binop513 = pos + 2.0000000000;
        cases498 = binop513;
    } else if (binop512) {
    double binop514 = pos + 1.0000000000;
        cases498 = binop514;
    } else if (1.0000000000) {
        cases498 = 0.0000000000;
    } else { cases498 = 0.0; }
    double cases515;
    double binop516 = pos < src_len;
    double charat517 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop518 = charat517 >= 48.0000000000;
    double charat519 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop520 = charat519 <= 57.0000000000;
    double binop521 = binop518 && binop520;
    double binop522 = binop516 && binop521;
    double binop523 = pos < src_len;
    double charat524 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop525 = charat524 == 43.0000000000;
    double charat526 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop527 = charat526 == 42.0000000000;
    double binop528 = binop525 || binop527;
    double binop529 = binop523 && binop528;
    if (binop522) {
    double binop530 = pos + 3.0000000000;
        cases515 = binop530;
    } else if (binop529) {
    double binop531 = pos + 2.0000000000;
        cases515 = binop531;
    } else if (1.0000000000) {
    double binop532 = src_len + 1.0000000000;
        cases515 = binop532;
    } else { cases515 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop497] = 0.0000000000;
    tokens[(int)binop493] = 0.0000000000;
    tokens[(int)binop475] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop533 = 10.0000000000 - 1.0000000000;
    double binop534 = binop533 * 3.0000000000;
    double cases535;
    double binop536 = pos < src_len;
    double charat537 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop538 = charat537 >= 48.0000000000;
    double charat539 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop540 = charat539 <= 57.0000000000;
    double binop541 = binop538 && binop540;
    double binop542 = binop536 && binop541;
    double binop543 = pos < src_len;
    double charat544 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop545 = charat544 == 43.0000000000;
    double binop546 = binop543 && binop545;
    double binop547 = pos < src_len;
    double charat548 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop549 = charat548 == 42.0000000000;
    double binop550 = binop547 && binop549;
    if (binop542) {
        cases535 = TOK_NUMBER;
    } else if (binop546) {
        cases535 = TOK_PLUS;
    } else if (binop550) {
        cases535 = TOK_MUL;
    } else if (1.0000000000) {
        cases535 = 0.0000000000;
    } else { cases535 = 0.0; }
    double binop551 = 10.0000000000 - 1.0000000000;
    double binop552 = binop551 * 0.0000000000;
    double cases553;
    double binop554 = pos < src_len;
    if (binop554) {
        cases553 = pos;
    } else if (1.0000000000) {
        cases553 = 0.0000000000;
    } else { cases553 = 0.0; }
    double binop555 = 10.0000000000 - 1.0000000000;
    double binop556 = binop555 * 0.0000000000;
    double cases557;
    double binop558 = pos < src_len;
    double charat559 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop560 = charat559 >= 48.0000000000;
    double charat561 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop562 = charat561 <= 57.0000000000;
    double binop563 = binop560 && binop562;
    double binop564 = binop558 && binop563;
    double binop565 = pos < src_len;
    double charat566 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop567 = charat566 == 43.0000000000;
    double charat568 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop569 = charat568 == 42.0000000000;
    double binop570 = binop567 || binop569;
    double binop571 = binop565 && binop570;
    if (binop564) {
    double binop572 = pos + 2.0000000000;
        cases557 = binop572;
    } else if (binop571) {
    double binop573 = pos + 1.0000000000;
        cases557 = binop573;
    } else if (1.0000000000) {
        cases557 = 0.0000000000;
    } else { cases557 = 0.0; }
    double cases574;
    double binop575 = pos < src_len;
    double charat576 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop577 = charat576 >= 48.0000000000;
    double charat578 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop579 = charat578 <= 57.0000000000;
    double binop580 = binop577 && binop579;
    double binop581 = binop575 && binop580;
    double binop582 = pos < src_len;
    double charat583 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop584 = charat583 == 43.0000000000;
    double charat585 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop586 = charat585 == 42.0000000000;
    double binop587 = binop584 || binop586;
    double binop588 = binop582 && binop587;
    if (binop581) {
    double binop589 = pos + 3.0000000000;
        cases574 = binop589;
    } else if (binop588) {
    double binop590 = pos + 2.0000000000;
        cases574 = binop590;
    } else if (1.0000000000) {
    double binop591 = src_len + 1.0000000000;
        cases574 = binop591;
    } else { cases574 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop556] = 0.0000000000;
    tokens[(int)binop552] = 0.0000000000;
    tokens[(int)binop534] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop592 = 11.0000000000 - 1.0000000000;
    double binop593 = binop592 * 3.0000000000;
    double cases594;
    double binop595 = pos < src_len;
    double charat596 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop597 = charat596 >= 48.0000000000;
    double charat598 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop599 = charat598 <= 57.0000000000;
    double binop600 = binop597 && binop599;
    double binop601 = binop595 && binop600;
    double binop602 = pos < src_len;
    double charat603 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop604 = charat603 == 43.0000000000;
    double binop605 = binop602 && binop604;
    double binop606 = pos < src_len;
    double charat607 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop608 = charat607 == 42.0000000000;
    double binop609 = binop606 && binop608;
    if (binop601) {
        cases594 = TOK_NUMBER;
    } else if (binop605) {
        cases594 = TOK_PLUS;
    } else if (binop609) {
        cases594 = TOK_MUL;
    } else if (1.0000000000) {
        cases594 = 0.0000000000;
    } else { cases594 = 0.0; }
    double binop610 = 11.0000000000 - 1.0000000000;
    double binop611 = binop610 * 0.0000000000;
    double cases612;
    double binop613 = pos < src_len;
    if (binop613) {
        cases612 = pos;
    } else if (1.0000000000) {
        cases612 = 0.0000000000;
    } else { cases612 = 0.0; }
    double binop614 = 11.0000000000 - 1.0000000000;
    double binop615 = binop614 * 0.0000000000;
    double cases616;
    double binop617 = pos < src_len;
    double charat618 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop619 = charat618 >= 48.0000000000;
    double charat620 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop621 = charat620 <= 57.0000000000;
    double binop622 = binop619 && binop621;
    double binop623 = binop617 && binop622;
    double binop624 = pos < src_len;
    double charat625 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop626 = charat625 == 43.0000000000;
    double charat627 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop628 = charat627 == 42.0000000000;
    double binop629 = binop626 || binop628;
    double binop630 = binop624 && binop629;
    if (binop623) {
    double binop631 = pos + 2.0000000000;
        cases616 = binop631;
    } else if (binop630) {
    double binop632 = pos + 1.0000000000;
        cases616 = binop632;
    } else if (1.0000000000) {
        cases616 = 0.0000000000;
    } else { cases616 = 0.0; }
    double cases633;
    double binop634 = pos < src_len;
    double charat635 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop636 = charat635 >= 48.0000000000;
    double charat637 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop638 = charat637 <= 57.0000000000;
    double binop639 = binop636 && binop638;
    double binop640 = binop634 && binop639;
    double binop641 = pos < src_len;
    double charat642 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop643 = charat642 == 43.0000000000;
    double charat644 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop645 = charat644 == 42.0000000000;
    double binop646 = binop643 || binop645;
    double binop647 = binop641 && binop646;
    if (binop640) {
    double binop648 = pos + 3.0000000000;
        cases633 = binop648;
    } else if (binop647) {
    double binop649 = pos + 2.0000000000;
        cases633 = binop649;
    } else if (1.0000000000) {
    double binop650 = src_len + 1.0000000000;
        cases633 = binop650;
    } else { cases633 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop615] = 0.0000000000;
    tokens[(int)binop611] = 0.0000000000;
    tokens[(int)binop593] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop651 = 12.0000000000 - 1.0000000000;
    double binop652 = binop651 * 3.0000000000;
    double cases653;
    double binop654 = pos < src_len;
    double charat655 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop656 = charat655 >= 48.0000000000;
    double charat657 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop658 = charat657 <= 57.0000000000;
    double binop659 = binop656 && binop658;
    double binop660 = binop654 && binop659;
    double binop661 = pos < src_len;
    double charat662 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop663 = charat662 == 43.0000000000;
    double binop664 = binop661 && binop663;
    double binop665 = pos < src_len;
    double charat666 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop667 = charat666 == 42.0000000000;
    double binop668 = binop665 && binop667;
    if (binop660) {
        cases653 = TOK_NUMBER;
    } else if (binop664) {
        cases653 = TOK_PLUS;
    } else if (binop668) {
        cases653 = TOK_MUL;
    } else if (1.0000000000) {
        cases653 = 0.0000000000;
    } else { cases653 = 0.0; }
    double binop669 = 12.0000000000 - 1.0000000000;
    double binop670 = binop669 * 0.0000000000;
    double cases671;
    double binop672 = pos < src_len;
    if (binop672) {
        cases671 = pos;
    } else if (1.0000000000) {
        cases671 = 0.0000000000;
    } else { cases671 = 0.0; }
    double binop673 = 12.0000000000 - 1.0000000000;
    double binop674 = binop673 * 0.0000000000;
    double cases675;
    double binop676 = pos < src_len;
    double charat677 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop678 = charat677 >= 48.0000000000;
    double charat679 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop680 = charat679 <= 57.0000000000;
    double binop681 = binop678 && binop680;
    double binop682 = binop676 && binop681;
    double binop683 = pos < src_len;
    double charat684 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop685 = charat684 == 43.0000000000;
    double charat686 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop687 = charat686 == 42.0000000000;
    double binop688 = binop685 || binop687;
    double binop689 = binop683 && binop688;
    if (binop682) {
    double binop690 = pos + 2.0000000000;
        cases675 = binop690;
    } else if (binop689) {
    double binop691 = pos + 1.0000000000;
        cases675 = binop691;
    } else if (1.0000000000) {
        cases675 = 0.0000000000;
    } else { cases675 = 0.0; }
    double cases692;
    double binop693 = pos < src_len;
    double charat694 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop695 = charat694 >= 48.0000000000;
    double charat696 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop697 = charat696 <= 57.0000000000;
    double binop698 = binop695 && binop697;
    double binop699 = binop693 && binop698;
    double binop700 = pos < src_len;
    double charat701 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop702 = charat701 == 43.0000000000;
    double charat703 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop704 = charat703 == 42.0000000000;
    double binop705 = binop702 || binop704;
    double binop706 = binop700 && binop705;
    if (binop699) {
    double binop707 = pos + 3.0000000000;
        cases692 = binop707;
    } else if (binop706) {
    double binop708 = pos + 2.0000000000;
        cases692 = binop708;
    } else if (1.0000000000) {
    double binop709 = src_len + 1.0000000000;
        cases692 = binop709;
    } else { cases692 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop674] = 0.0000000000;
    tokens[(int)binop670] = 0.0000000000;
    tokens[(int)binop652] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop710 = 13.0000000000 - 1.0000000000;
    double binop711 = binop710 * 3.0000000000;
    double cases712;
    double binop713 = pos < src_len;
    double charat714 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop715 = charat714 >= 48.0000000000;
    double charat716 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop717 = charat716 <= 57.0000000000;
    double binop718 = binop715 && binop717;
    double binop719 = binop713 && binop718;
    double binop720 = pos < src_len;
    double charat721 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop722 = charat721 == 43.0000000000;
    double binop723 = binop720 && binop722;
    double binop724 = pos < src_len;
    double charat725 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop726 = charat725 == 42.0000000000;
    double binop727 = binop724 && binop726;
    if (binop719) {
        cases712 = TOK_NUMBER;
    } else if (binop723) {
        cases712 = TOK_PLUS;
    } else if (binop727) {
        cases712 = TOK_MUL;
    } else if (1.0000000000) {
        cases712 = 0.0000000000;
    } else { cases712 = 0.0; }
    double binop728 = 13.0000000000 - 1.0000000000;
    double binop729 = binop728 * 0.0000000000;
    double cases730;
    double binop731 = pos < src_len;
    if (binop731) {
        cases730 = pos;
    } else if (1.0000000000) {
        cases730 = 0.0000000000;
    } else { cases730 = 0.0; }
    double binop732 = 13.0000000000 - 1.0000000000;
    double binop733 = binop732 * 0.0000000000;
    double cases734;
    double binop735 = pos < src_len;
    double charat736 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop737 = charat736 >= 48.0000000000;
    double charat738 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop739 = charat738 <= 57.0000000000;
    double binop740 = binop737 && binop739;
    double binop741 = binop735 && binop740;
    double binop742 = pos < src_len;
    double charat743 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop744 = charat743 == 43.0000000000;
    double charat745 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop746 = charat745 == 42.0000000000;
    double binop747 = binop744 || binop746;
    double binop748 = binop742 && binop747;
    if (binop741) {
    double binop749 = pos + 2.0000000000;
        cases734 = binop749;
    } else if (binop748) {
    double binop750 = pos + 1.0000000000;
        cases734 = binop750;
    } else if (1.0000000000) {
        cases734 = 0.0000000000;
    } else { cases734 = 0.0; }
    double cases751;
    double binop752 = pos < src_len;
    double charat753 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop754 = charat753 >= 48.0000000000;
    double charat755 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop756 = charat755 <= 57.0000000000;
    double binop757 = binop754 && binop756;
    double binop758 = binop752 && binop757;
    double binop759 = pos < src_len;
    double charat760 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop761 = charat760 == 43.0000000000;
    double charat762 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop763 = charat762 == 42.0000000000;
    double binop764 = binop761 || binop763;
    double binop765 = binop759 && binop764;
    if (binop758) {
    double binop766 = pos + 3.0000000000;
        cases751 = binop766;
    } else if (binop765) {
    double binop767 = pos + 2.0000000000;
        cases751 = binop767;
    } else if (1.0000000000) {
    double binop768 = src_len + 1.0000000000;
        cases751 = binop768;
    } else { cases751 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop733] = 0.0000000000;
    tokens[(int)binop729] = 0.0000000000;
    tokens[(int)binop711] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop769 = 14.0000000000 - 1.0000000000;
    double binop770 = binop769 * 3.0000000000;
    double cases771;
    double binop772 = pos < src_len;
    double charat773 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop774 = charat773 >= 48.0000000000;
    double charat775 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop776 = charat775 <= 57.0000000000;
    double binop777 = binop774 && binop776;
    double binop778 = binop772 && binop777;
    double binop779 = pos < src_len;
    double charat780 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop781 = charat780 == 43.0000000000;
    double binop782 = binop779 && binop781;
    double binop783 = pos < src_len;
    double charat784 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop785 = charat784 == 42.0000000000;
    double binop786 = binop783 && binop785;
    if (binop778) {
        cases771 = TOK_NUMBER;
    } else if (binop782) {
        cases771 = TOK_PLUS;
    } else if (binop786) {
        cases771 = TOK_MUL;
    } else if (1.0000000000) {
        cases771 = 0.0000000000;
    } else { cases771 = 0.0; }
    double binop787 = 14.0000000000 - 1.0000000000;
    double binop788 = binop787 * 0.0000000000;
    double cases789;
    double binop790 = pos < src_len;
    if (binop790) {
        cases789 = pos;
    } else if (1.0000000000) {
        cases789 = 0.0000000000;
    } else { cases789 = 0.0; }
    double binop791 = 14.0000000000 - 1.0000000000;
    double binop792 = binop791 * 0.0000000000;
    double cases793;
    double binop794 = pos < src_len;
    double charat795 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop796 = charat795 >= 48.0000000000;
    double charat797 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop798 = charat797 <= 57.0000000000;
    double binop799 = binop796 && binop798;
    double binop800 = binop794 && binop799;
    double binop801 = pos < src_len;
    double charat802 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop803 = charat802 == 43.0000000000;
    double charat804 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop805 = charat804 == 42.0000000000;
    double binop806 = binop803 || binop805;
    double binop807 = binop801 && binop806;
    if (binop800) {
    double binop808 = pos + 2.0000000000;
        cases793 = binop808;
    } else if (binop807) {
    double binop809 = pos + 1.0000000000;
        cases793 = binop809;
    } else if (1.0000000000) {
        cases793 = 0.0000000000;
    } else { cases793 = 0.0; }
    double cases810;
    double binop811 = pos < src_len;
    double charat812 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop813 = charat812 >= 48.0000000000;
    double charat814 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop815 = charat814 <= 57.0000000000;
    double binop816 = binop813 && binop815;
    double binop817 = binop811 && binop816;
    double binop818 = pos < src_len;
    double charat819 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop820 = charat819 == 43.0000000000;
    double charat821 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop822 = charat821 == 42.0000000000;
    double binop823 = binop820 || binop822;
    double binop824 = binop818 && binop823;
    if (binop817) {
    double binop825 = pos + 3.0000000000;
        cases810 = binop825;
    } else if (binop824) {
    double binop826 = pos + 2.0000000000;
        cases810 = binop826;
    } else if (1.0000000000) {
    double binop827 = src_len + 1.0000000000;
        cases810 = binop827;
    } else { cases810 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop792] = 0.0000000000;
    tokens[(int)binop788] = 0.0000000000;
    tokens[(int)binop770] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop828 = 15.0000000000 - 1.0000000000;
    double binop829 = binop828 * 3.0000000000;
    double cases830;
    double binop831 = pos < src_len;
    double charat832 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop833 = charat832 >= 48.0000000000;
    double charat834 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop835 = charat834 <= 57.0000000000;
    double binop836 = binop833 && binop835;
    double binop837 = binop831 && binop836;
    double binop838 = pos < src_len;
    double charat839 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop840 = charat839 == 43.0000000000;
    double binop841 = binop838 && binop840;
    double binop842 = pos < src_len;
    double charat843 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop844 = charat843 == 42.0000000000;
    double binop845 = binop842 && binop844;
    if (binop837) {
        cases830 = TOK_NUMBER;
    } else if (binop841) {
        cases830 = TOK_PLUS;
    } else if (binop845) {
        cases830 = TOK_MUL;
    } else if (1.0000000000) {
        cases830 = 0.0000000000;
    } else { cases830 = 0.0; }
    double binop846 = 15.0000000000 - 1.0000000000;
    double binop847 = binop846 * 0.0000000000;
    double cases848;
    double binop849 = pos < src_len;
    if (binop849) {
        cases848 = pos;
    } else if (1.0000000000) {
        cases848 = 0.0000000000;
    } else { cases848 = 0.0; }
    double binop850 = 15.0000000000 - 1.0000000000;
    double binop851 = binop850 * 0.0000000000;
    double cases852;
    double binop853 = pos < src_len;
    double charat854 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop855 = charat854 >= 48.0000000000;
    double charat856 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop857 = charat856 <= 57.0000000000;
    double binop858 = binop855 && binop857;
    double binop859 = binop853 && binop858;
    double binop860 = pos < src_len;
    double charat861 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop862 = charat861 == 43.0000000000;
    double charat863 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop864 = charat863 == 42.0000000000;
    double binop865 = binop862 || binop864;
    double binop866 = binop860 && binop865;
    if (binop859) {
    double binop867 = pos + 2.0000000000;
        cases852 = binop867;
    } else if (binop866) {
    double binop868 = pos + 1.0000000000;
        cases852 = binop868;
    } else if (1.0000000000) {
        cases852 = 0.0000000000;
    } else { cases852 = 0.0; }
    double cases869;
    double binop870 = pos < src_len;
    double charat871 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop872 = charat871 >= 48.0000000000;
    double charat873 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop874 = charat873 <= 57.0000000000;
    double binop875 = binop872 && binop874;
    double binop876 = binop870 && binop875;
    double binop877 = pos < src_len;
    double charat878 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop879 = charat878 == 43.0000000000;
    double charat880 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop881 = charat880 == 42.0000000000;
    double binop882 = binop879 || binop881;
    double binop883 = binop877 && binop882;
    if (binop876) {
    double binop884 = pos + 3.0000000000;
        cases869 = binop884;
    } else if (binop883) {
    double binop885 = pos + 2.0000000000;
        cases869 = binop885;
    } else if (1.0000000000) {
    double binop886 = src_len + 1.0000000000;
        cases869 = binop886;
    } else { cases869 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop851] = 0.0000000000;
    tokens[(int)binop847] = 0.0000000000;
    tokens[(int)binop829] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop887 = 16.0000000000 - 1.0000000000;
    double binop888 = binop887 * 3.0000000000;
    double cases889;
    double binop890 = pos < src_len;
    double charat891 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop892 = charat891 >= 48.0000000000;
    double charat893 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop894 = charat893 <= 57.0000000000;
    double binop895 = binop892 && binop894;
    double binop896 = binop890 && binop895;
    double binop897 = pos < src_len;
    double charat898 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop899 = charat898 == 43.0000000000;
    double binop900 = binop897 && binop899;
    double binop901 = pos < src_len;
    double charat902 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop903 = charat902 == 42.0000000000;
    double binop904 = binop901 && binop903;
    if (binop896) {
        cases889 = TOK_NUMBER;
    } else if (binop900) {
        cases889 = TOK_PLUS;
    } else if (binop904) {
        cases889 = TOK_MUL;
    } else if (1.0000000000) {
        cases889 = 0.0000000000;
    } else { cases889 = 0.0; }
    double binop905 = 16.0000000000 - 1.0000000000;
    double binop906 = binop905 * 0.0000000000;
    double cases907;
    double binop908 = pos < src_len;
    if (binop908) {
        cases907 = pos;
    } else if (1.0000000000) {
        cases907 = 0.0000000000;
    } else { cases907 = 0.0; }
    double binop909 = 16.0000000000 - 1.0000000000;
    double binop910 = binop909 * 0.0000000000;
    double cases911;
    double binop912 = pos < src_len;
    double charat913 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop914 = charat913 >= 48.0000000000;
    double charat915 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop916 = charat915 <= 57.0000000000;
    double binop917 = binop914 && binop916;
    double binop918 = binop912 && binop917;
    double binop919 = pos < src_len;
    double charat920 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop921 = charat920 == 43.0000000000;
    double charat922 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop923 = charat922 == 42.0000000000;
    double binop924 = binop921 || binop923;
    double binop925 = binop919 && binop924;
    if (binop918) {
    double binop926 = pos + 2.0000000000;
        cases911 = binop926;
    } else if (binop925) {
    double binop927 = pos + 1.0000000000;
        cases911 = binop927;
    } else if (1.0000000000) {
        cases911 = 0.0000000000;
    } else { cases911 = 0.0; }
    double cases928;
    double binop929 = pos < src_len;
    double charat930 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop931 = charat930 >= 48.0000000000;
    double charat932 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop933 = charat932 <= 57.0000000000;
    double binop934 = binop931 && binop933;
    double binop935 = binop929 && binop934;
    double binop936 = pos < src_len;
    double charat937 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop938 = charat937 == 43.0000000000;
    double charat939 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop940 = charat939 == 42.0000000000;
    double binop941 = binop938 || binop940;
    double binop942 = binop936 && binop941;
    if (binop935) {
    double binop943 = pos + 3.0000000000;
        cases928 = binop943;
    } else if (binop942) {
    double binop944 = pos + 2.0000000000;
        cases928 = binop944;
    } else if (1.0000000000) {
    double binop945 = src_len + 1.0000000000;
        cases928 = binop945;
    } else { cases928 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop910] = 0.0000000000;
    tokens[(int)binop906] = 0.0000000000;
    tokens[(int)binop888] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop946 = 17.0000000000 - 1.0000000000;
    double binop947 = binop946 * 3.0000000000;
    double cases948;
    double binop949 = pos < src_len;
    double charat950 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop951 = charat950 >= 48.0000000000;
    double charat952 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop953 = charat952 <= 57.0000000000;
    double binop954 = binop951 && binop953;
    double binop955 = binop949 && binop954;
    double binop956 = pos < src_len;
    double charat957 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop958 = charat957 == 43.0000000000;
    double binop959 = binop956 && binop958;
    double binop960 = pos < src_len;
    double charat961 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop962 = charat961 == 42.0000000000;
    double binop963 = binop960 && binop962;
    if (binop955) {
        cases948 = TOK_NUMBER;
    } else if (binop959) {
        cases948 = TOK_PLUS;
    } else if (binop963) {
        cases948 = TOK_MUL;
    } else if (1.0000000000) {
        cases948 = 0.0000000000;
    } else { cases948 = 0.0; }
    double binop964 = 17.0000000000 - 1.0000000000;
    double binop965 = binop964 * 0.0000000000;
    double cases966;
    double binop967 = pos < src_len;
    if (binop967) {
        cases966 = pos;
    } else if (1.0000000000) {
        cases966 = 0.0000000000;
    } else { cases966 = 0.0; }
    double binop968 = 17.0000000000 - 1.0000000000;
    double binop969 = binop968 * 0.0000000000;
    double cases970;
    double binop971 = pos < src_len;
    double charat972 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop973 = charat972 >= 48.0000000000;
    double charat974 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop975 = charat974 <= 57.0000000000;
    double binop976 = binop973 && binop975;
    double binop977 = binop971 && binop976;
    double binop978 = pos < src_len;
    double charat979 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop980 = charat979 == 43.0000000000;
    double charat981 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop982 = charat981 == 42.0000000000;
    double binop983 = binop980 || binop982;
    double binop984 = binop978 && binop983;
    if (binop977) {
    double binop985 = pos + 2.0000000000;
        cases970 = binop985;
    } else if (binop984) {
    double binop986 = pos + 1.0000000000;
        cases970 = binop986;
    } else if (1.0000000000) {
        cases970 = 0.0000000000;
    } else { cases970 = 0.0; }
    double cases987;
    double binop988 = pos < src_len;
    double charat989 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop990 = charat989 >= 48.0000000000;
    double charat991 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop992 = charat991 <= 57.0000000000;
    double binop993 = binop990 && binop992;
    double binop994 = binop988 && binop993;
    double binop995 = pos < src_len;
    double charat996 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop997 = charat996 == 43.0000000000;
    double charat998 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop999 = charat998 == 42.0000000000;
    double binop1000 = binop997 || binop999;
    double binop1001 = binop995 && binop1000;
    if (binop994) {
    double binop1002 = pos + 3.0000000000;
        cases987 = binop1002;
    } else if (binop1001) {
    double binop1003 = pos + 2.0000000000;
        cases987 = binop1003;
    } else if (1.0000000000) {
    double binop1004 = src_len + 1.0000000000;
        cases987 = binop1004;
    } else { cases987 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop969] = 0.0000000000;
    tokens[(int)binop965] = 0.0000000000;
    tokens[(int)binop947] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1005 = 18.0000000000 - 1.0000000000;
    double binop1006 = binop1005 * 3.0000000000;
    double cases1007;
    double binop1008 = pos < src_len;
    double charat1009 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1010 = charat1009 >= 48.0000000000;
    double charat1011 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1012 = charat1011 <= 57.0000000000;
    double binop1013 = binop1010 && binop1012;
    double binop1014 = binop1008 && binop1013;
    double binop1015 = pos < src_len;
    double charat1016 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1017 = charat1016 == 43.0000000000;
    double binop1018 = binop1015 && binop1017;
    double binop1019 = pos < src_len;
    double charat1020 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1021 = charat1020 == 42.0000000000;
    double binop1022 = binop1019 && binop1021;
    if (binop1014) {
        cases1007 = TOK_NUMBER;
    } else if (binop1018) {
        cases1007 = TOK_PLUS;
    } else if (binop1022) {
        cases1007 = TOK_MUL;
    } else if (1.0000000000) {
        cases1007 = 0.0000000000;
    } else { cases1007 = 0.0; }
    double binop1023 = 18.0000000000 - 1.0000000000;
    double binop1024 = binop1023 * 0.0000000000;
    double cases1025;
    double binop1026 = pos < src_len;
    if (binop1026) {
        cases1025 = pos;
    } else if (1.0000000000) {
        cases1025 = 0.0000000000;
    } else { cases1025 = 0.0; }
    double binop1027 = 18.0000000000 - 1.0000000000;
    double binop1028 = binop1027 * 0.0000000000;
    double cases1029;
    double binop1030 = pos < src_len;
    double charat1031 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1032 = charat1031 >= 48.0000000000;
    double charat1033 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1034 = charat1033 <= 57.0000000000;
    double binop1035 = binop1032 && binop1034;
    double binop1036 = binop1030 && binop1035;
    double binop1037 = pos < src_len;
    double charat1038 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1039 = charat1038 == 43.0000000000;
    double charat1040 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1041 = charat1040 == 42.0000000000;
    double binop1042 = binop1039 || binop1041;
    double binop1043 = binop1037 && binop1042;
    if (binop1036) {
    double binop1044 = pos + 2.0000000000;
        cases1029 = binop1044;
    } else if (binop1043) {
    double binop1045 = pos + 1.0000000000;
        cases1029 = binop1045;
    } else if (1.0000000000) {
        cases1029 = 0.0000000000;
    } else { cases1029 = 0.0; }
    double cases1046;
    double binop1047 = pos < src_len;
    double charat1048 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1049 = charat1048 >= 48.0000000000;
    double charat1050 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1051 = charat1050 <= 57.0000000000;
    double binop1052 = binop1049 && binop1051;
    double binop1053 = binop1047 && binop1052;
    double binop1054 = pos < src_len;
    double charat1055 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1056 = charat1055 == 43.0000000000;
    double charat1057 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1058 = charat1057 == 42.0000000000;
    double binop1059 = binop1056 || binop1058;
    double binop1060 = binop1054 && binop1059;
    if (binop1053) {
    double binop1061 = pos + 3.0000000000;
        cases1046 = binop1061;
    } else if (binop1060) {
    double binop1062 = pos + 2.0000000000;
        cases1046 = binop1062;
    } else if (1.0000000000) {
    double binop1063 = src_len + 1.0000000000;
        cases1046 = binop1063;
    } else { cases1046 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1028] = 0.0000000000;
    tokens[(int)binop1024] = 0.0000000000;
    tokens[(int)binop1006] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1064 = 19.0000000000 - 1.0000000000;
    double binop1065 = binop1064 * 3.0000000000;
    double cases1066;
    double binop1067 = pos < src_len;
    double charat1068 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1069 = charat1068 >= 48.0000000000;
    double charat1070 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1071 = charat1070 <= 57.0000000000;
    double binop1072 = binop1069 && binop1071;
    double binop1073 = binop1067 && binop1072;
    double binop1074 = pos < src_len;
    double charat1075 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1076 = charat1075 == 43.0000000000;
    double binop1077 = binop1074 && binop1076;
    double binop1078 = pos < src_len;
    double charat1079 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1080 = charat1079 == 42.0000000000;
    double binop1081 = binop1078 && binop1080;
    if (binop1073) {
        cases1066 = TOK_NUMBER;
    } else if (binop1077) {
        cases1066 = TOK_PLUS;
    } else if (binop1081) {
        cases1066 = TOK_MUL;
    } else if (1.0000000000) {
        cases1066 = 0.0000000000;
    } else { cases1066 = 0.0; }
    double binop1082 = 19.0000000000 - 1.0000000000;
    double binop1083 = binop1082 * 0.0000000000;
    double cases1084;
    double binop1085 = pos < src_len;
    if (binop1085) {
        cases1084 = pos;
    } else if (1.0000000000) {
        cases1084 = 0.0000000000;
    } else { cases1084 = 0.0; }
    double binop1086 = 19.0000000000 - 1.0000000000;
    double binop1087 = binop1086 * 0.0000000000;
    double cases1088;
    double binop1089 = pos < src_len;
    double charat1090 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1091 = charat1090 >= 48.0000000000;
    double charat1092 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1093 = charat1092 <= 57.0000000000;
    double binop1094 = binop1091 && binop1093;
    double binop1095 = binop1089 && binop1094;
    double binop1096 = pos < src_len;
    double charat1097 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1098 = charat1097 == 43.0000000000;
    double charat1099 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1100 = charat1099 == 42.0000000000;
    double binop1101 = binop1098 || binop1100;
    double binop1102 = binop1096 && binop1101;
    if (binop1095) {
    double binop1103 = pos + 2.0000000000;
        cases1088 = binop1103;
    } else if (binop1102) {
    double binop1104 = pos + 1.0000000000;
        cases1088 = binop1104;
    } else if (1.0000000000) {
        cases1088 = 0.0000000000;
    } else { cases1088 = 0.0; }
    double cases1105;
    double binop1106 = pos < src_len;
    double charat1107 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1108 = charat1107 >= 48.0000000000;
    double charat1109 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1110 = charat1109 <= 57.0000000000;
    double binop1111 = binop1108 && binop1110;
    double binop1112 = binop1106 && binop1111;
    double binop1113 = pos < src_len;
    double charat1114 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1115 = charat1114 == 43.0000000000;
    double charat1116 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1117 = charat1116 == 42.0000000000;
    double binop1118 = binop1115 || binop1117;
    double binop1119 = binop1113 && binop1118;
    if (binop1112) {
    double binop1120 = pos + 3.0000000000;
        cases1105 = binop1120;
    } else if (binop1119) {
    double binop1121 = pos + 2.0000000000;
        cases1105 = binop1121;
    } else if (1.0000000000) {
    double binop1122 = src_len + 1.0000000000;
        cases1105 = binop1122;
    } else { cases1105 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1087] = 0.0000000000;
    tokens[(int)binop1083] = 0.0000000000;
    tokens[(int)binop1065] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1123 = 20.0000000000 - 1.0000000000;
    double binop1124 = binop1123 * 3.0000000000;
    double cases1125;
    double binop1126 = pos < src_len;
    double charat1127 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1128 = charat1127 >= 48.0000000000;
    double charat1129 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1130 = charat1129 <= 57.0000000000;
    double binop1131 = binop1128 && binop1130;
    double binop1132 = binop1126 && binop1131;
    double binop1133 = pos < src_len;
    double charat1134 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1135 = charat1134 == 43.0000000000;
    double binop1136 = binop1133 && binop1135;
    double binop1137 = pos < src_len;
    double charat1138 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1139 = charat1138 == 42.0000000000;
    double binop1140 = binop1137 && binop1139;
    if (binop1132) {
        cases1125 = TOK_NUMBER;
    } else if (binop1136) {
        cases1125 = TOK_PLUS;
    } else if (binop1140) {
        cases1125 = TOK_MUL;
    } else if (1.0000000000) {
        cases1125 = 0.0000000000;
    } else { cases1125 = 0.0; }
    double binop1141 = 20.0000000000 - 1.0000000000;
    double binop1142 = binop1141 * 0.0000000000;
    double cases1143;
    double binop1144 = pos < src_len;
    if (binop1144) {
        cases1143 = pos;
    } else if (1.0000000000) {
        cases1143 = 0.0000000000;
    } else { cases1143 = 0.0; }
    double binop1145 = 20.0000000000 - 1.0000000000;
    double binop1146 = binop1145 * 0.0000000000;
    double cases1147;
    double binop1148 = pos < src_len;
    double charat1149 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1150 = charat1149 >= 48.0000000000;
    double charat1151 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1152 = charat1151 <= 57.0000000000;
    double binop1153 = binop1150 && binop1152;
    double binop1154 = binop1148 && binop1153;
    double binop1155 = pos < src_len;
    double charat1156 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1157 = charat1156 == 43.0000000000;
    double charat1158 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1159 = charat1158 == 42.0000000000;
    double binop1160 = binop1157 || binop1159;
    double binop1161 = binop1155 && binop1160;
    if (binop1154) {
    double binop1162 = pos + 2.0000000000;
        cases1147 = binop1162;
    } else if (binop1161) {
    double binop1163 = pos + 1.0000000000;
        cases1147 = binop1163;
    } else if (1.0000000000) {
        cases1147 = 0.0000000000;
    } else { cases1147 = 0.0; }
    double cases1164;
    double binop1165 = pos < src_len;
    double charat1166 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1167 = charat1166 >= 48.0000000000;
    double charat1168 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1169 = charat1168 <= 57.0000000000;
    double binop1170 = binop1167 && binop1169;
    double binop1171 = binop1165 && binop1170;
    double binop1172 = pos < src_len;
    double charat1173 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1174 = charat1173 == 43.0000000000;
    double charat1175 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1176 = charat1175 == 42.0000000000;
    double binop1177 = binop1174 || binop1176;
    double binop1178 = binop1172 && binop1177;
    if (binop1171) {
    double binop1179 = pos + 3.0000000000;
        cases1164 = binop1179;
    } else if (binop1178) {
    double binop1180 = pos + 2.0000000000;
        cases1164 = binop1180;
    } else if (1.0000000000) {
    double binop1181 = src_len + 1.0000000000;
        cases1164 = binop1181;
    } else { cases1164 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1146] = 0.0000000000;
    tokens[(int)binop1142] = 0.0000000000;
    tokens[(int)binop1124] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1182 = 21.0000000000 - 1.0000000000;
    double binop1183 = binop1182 * 3.0000000000;
    double cases1184;
    double binop1185 = pos < src_len;
    double charat1186 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1187 = charat1186 >= 48.0000000000;
    double charat1188 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1189 = charat1188 <= 57.0000000000;
    double binop1190 = binop1187 && binop1189;
    double binop1191 = binop1185 && binop1190;
    double binop1192 = pos < src_len;
    double charat1193 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1194 = charat1193 == 43.0000000000;
    double binop1195 = binop1192 && binop1194;
    double binop1196 = pos < src_len;
    double charat1197 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1198 = charat1197 == 42.0000000000;
    double binop1199 = binop1196 && binop1198;
    if (binop1191) {
        cases1184 = TOK_NUMBER;
    } else if (binop1195) {
        cases1184 = TOK_PLUS;
    } else if (binop1199) {
        cases1184 = TOK_MUL;
    } else if (1.0000000000) {
        cases1184 = 0.0000000000;
    } else { cases1184 = 0.0; }
    double binop1200 = 21.0000000000 - 1.0000000000;
    double binop1201 = binop1200 * 0.0000000000;
    double cases1202;
    double binop1203 = pos < src_len;
    if (binop1203) {
        cases1202 = pos;
    } else if (1.0000000000) {
        cases1202 = 0.0000000000;
    } else { cases1202 = 0.0; }
    double binop1204 = 21.0000000000 - 1.0000000000;
    double binop1205 = binop1204 * 0.0000000000;
    double cases1206;
    double binop1207 = pos < src_len;
    double charat1208 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1209 = charat1208 >= 48.0000000000;
    double charat1210 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1211 = charat1210 <= 57.0000000000;
    double binop1212 = binop1209 && binop1211;
    double binop1213 = binop1207 && binop1212;
    double binop1214 = pos < src_len;
    double charat1215 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1216 = charat1215 == 43.0000000000;
    double charat1217 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1218 = charat1217 == 42.0000000000;
    double binop1219 = binop1216 || binop1218;
    double binop1220 = binop1214 && binop1219;
    if (binop1213) {
    double binop1221 = pos + 2.0000000000;
        cases1206 = binop1221;
    } else if (binop1220) {
    double binop1222 = pos + 1.0000000000;
        cases1206 = binop1222;
    } else if (1.0000000000) {
        cases1206 = 0.0000000000;
    } else { cases1206 = 0.0; }
    double cases1223;
    double binop1224 = pos < src_len;
    double charat1225 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1226 = charat1225 >= 48.0000000000;
    double charat1227 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1228 = charat1227 <= 57.0000000000;
    double binop1229 = binop1226 && binop1228;
    double binop1230 = binop1224 && binop1229;
    double binop1231 = pos < src_len;
    double charat1232 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1233 = charat1232 == 43.0000000000;
    double charat1234 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1235 = charat1234 == 42.0000000000;
    double binop1236 = binop1233 || binop1235;
    double binop1237 = binop1231 && binop1236;
    if (binop1230) {
    double binop1238 = pos + 3.0000000000;
        cases1223 = binop1238;
    } else if (binop1237) {
    double binop1239 = pos + 2.0000000000;
        cases1223 = binop1239;
    } else if (1.0000000000) {
    double binop1240 = src_len + 1.0000000000;
        cases1223 = binop1240;
    } else { cases1223 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1205] = 0.0000000000;
    tokens[(int)binop1201] = 0.0000000000;
    tokens[(int)binop1183] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1241 = 22.0000000000 - 1.0000000000;
    double binop1242 = binop1241 * 3.0000000000;
    double cases1243;
    double binop1244 = pos < src_len;
    double charat1245 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1246 = charat1245 >= 48.0000000000;
    double charat1247 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1248 = charat1247 <= 57.0000000000;
    double binop1249 = binop1246 && binop1248;
    double binop1250 = binop1244 && binop1249;
    double binop1251 = pos < src_len;
    double charat1252 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1253 = charat1252 == 43.0000000000;
    double binop1254 = binop1251 && binop1253;
    double binop1255 = pos < src_len;
    double charat1256 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1257 = charat1256 == 42.0000000000;
    double binop1258 = binop1255 && binop1257;
    if (binop1250) {
        cases1243 = TOK_NUMBER;
    } else if (binop1254) {
        cases1243 = TOK_PLUS;
    } else if (binop1258) {
        cases1243 = TOK_MUL;
    } else if (1.0000000000) {
        cases1243 = 0.0000000000;
    } else { cases1243 = 0.0; }
    double binop1259 = 22.0000000000 - 1.0000000000;
    double binop1260 = binop1259 * 0.0000000000;
    double cases1261;
    double binop1262 = pos < src_len;
    if (binop1262) {
        cases1261 = pos;
    } else if (1.0000000000) {
        cases1261 = 0.0000000000;
    } else { cases1261 = 0.0; }
    double binop1263 = 22.0000000000 - 1.0000000000;
    double binop1264 = binop1263 * 0.0000000000;
    double cases1265;
    double binop1266 = pos < src_len;
    double charat1267 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1268 = charat1267 >= 48.0000000000;
    double charat1269 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1270 = charat1269 <= 57.0000000000;
    double binop1271 = binop1268 && binop1270;
    double binop1272 = binop1266 && binop1271;
    double binop1273 = pos < src_len;
    double charat1274 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1275 = charat1274 == 43.0000000000;
    double charat1276 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1277 = charat1276 == 42.0000000000;
    double binop1278 = binop1275 || binop1277;
    double binop1279 = binop1273 && binop1278;
    if (binop1272) {
    double binop1280 = pos + 2.0000000000;
        cases1265 = binop1280;
    } else if (binop1279) {
    double binop1281 = pos + 1.0000000000;
        cases1265 = binop1281;
    } else if (1.0000000000) {
        cases1265 = 0.0000000000;
    } else { cases1265 = 0.0; }
    double cases1282;
    double binop1283 = pos < src_len;
    double charat1284 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1285 = charat1284 >= 48.0000000000;
    double charat1286 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1287 = charat1286 <= 57.0000000000;
    double binop1288 = binop1285 && binop1287;
    double binop1289 = binop1283 && binop1288;
    double binop1290 = pos < src_len;
    double charat1291 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1292 = charat1291 == 43.0000000000;
    double charat1293 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1294 = charat1293 == 42.0000000000;
    double binop1295 = binop1292 || binop1294;
    double binop1296 = binop1290 && binop1295;
    if (binop1289) {
    double binop1297 = pos + 3.0000000000;
        cases1282 = binop1297;
    } else if (binop1296) {
    double binop1298 = pos + 2.0000000000;
        cases1282 = binop1298;
    } else if (1.0000000000) {
    double binop1299 = src_len + 1.0000000000;
        cases1282 = binop1299;
    } else { cases1282 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1264] = 0.0000000000;
    tokens[(int)binop1260] = 0.0000000000;
    tokens[(int)binop1242] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1300 = 23.0000000000 - 1.0000000000;
    double binop1301 = binop1300 * 3.0000000000;
    double cases1302;
    double binop1303 = pos < src_len;
    double charat1304 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1305 = charat1304 >= 48.0000000000;
    double charat1306 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1307 = charat1306 <= 57.0000000000;
    double binop1308 = binop1305 && binop1307;
    double binop1309 = binop1303 && binop1308;
    double binop1310 = pos < src_len;
    double charat1311 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1312 = charat1311 == 43.0000000000;
    double binop1313 = binop1310 && binop1312;
    double binop1314 = pos < src_len;
    double charat1315 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1316 = charat1315 == 42.0000000000;
    double binop1317 = binop1314 && binop1316;
    if (binop1309) {
        cases1302 = TOK_NUMBER;
    } else if (binop1313) {
        cases1302 = TOK_PLUS;
    } else if (binop1317) {
        cases1302 = TOK_MUL;
    } else if (1.0000000000) {
        cases1302 = 0.0000000000;
    } else { cases1302 = 0.0; }
    double binop1318 = 23.0000000000 - 1.0000000000;
    double binop1319 = binop1318 * 0.0000000000;
    double cases1320;
    double binop1321 = pos < src_len;
    if (binop1321) {
        cases1320 = pos;
    } else if (1.0000000000) {
        cases1320 = 0.0000000000;
    } else { cases1320 = 0.0; }
    double binop1322 = 23.0000000000 - 1.0000000000;
    double binop1323 = binop1322 * 0.0000000000;
    double cases1324;
    double binop1325 = pos < src_len;
    double charat1326 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1327 = charat1326 >= 48.0000000000;
    double charat1328 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1329 = charat1328 <= 57.0000000000;
    double binop1330 = binop1327 && binop1329;
    double binop1331 = binop1325 && binop1330;
    double binop1332 = pos < src_len;
    double charat1333 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1334 = charat1333 == 43.0000000000;
    double charat1335 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1336 = charat1335 == 42.0000000000;
    double binop1337 = binop1334 || binop1336;
    double binop1338 = binop1332 && binop1337;
    if (binop1331) {
    double binop1339 = pos + 2.0000000000;
        cases1324 = binop1339;
    } else if (binop1338) {
    double binop1340 = pos + 1.0000000000;
        cases1324 = binop1340;
    } else if (1.0000000000) {
        cases1324 = 0.0000000000;
    } else { cases1324 = 0.0; }
    double cases1341;
    double binop1342 = pos < src_len;
    double charat1343 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1344 = charat1343 >= 48.0000000000;
    double charat1345 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1346 = charat1345 <= 57.0000000000;
    double binop1347 = binop1344 && binop1346;
    double binop1348 = binop1342 && binop1347;
    double binop1349 = pos < src_len;
    double charat1350 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1351 = charat1350 == 43.0000000000;
    double charat1352 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1353 = charat1352 == 42.0000000000;
    double binop1354 = binop1351 || binop1353;
    double binop1355 = binop1349 && binop1354;
    if (binop1348) {
    double binop1356 = pos + 3.0000000000;
        cases1341 = binop1356;
    } else if (binop1355) {
    double binop1357 = pos + 2.0000000000;
        cases1341 = binop1357;
    } else if (1.0000000000) {
    double binop1358 = src_len + 1.0000000000;
        cases1341 = binop1358;
    } else { cases1341 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1323] = 0.0000000000;
    tokens[(int)binop1319] = 0.0000000000;
    tokens[(int)binop1301] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1359 = 24.0000000000 - 1.0000000000;
    double binop1360 = binop1359 * 3.0000000000;
    double cases1361;
    double binop1362 = pos < src_len;
    double charat1363 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1364 = charat1363 >= 48.0000000000;
    double charat1365 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1366 = charat1365 <= 57.0000000000;
    double binop1367 = binop1364 && binop1366;
    double binop1368 = binop1362 && binop1367;
    double binop1369 = pos < src_len;
    double charat1370 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1371 = charat1370 == 43.0000000000;
    double binop1372 = binop1369 && binop1371;
    double binop1373 = pos < src_len;
    double charat1374 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1375 = charat1374 == 42.0000000000;
    double binop1376 = binop1373 && binop1375;
    if (binop1368) {
        cases1361 = TOK_NUMBER;
    } else if (binop1372) {
        cases1361 = TOK_PLUS;
    } else if (binop1376) {
        cases1361 = TOK_MUL;
    } else if (1.0000000000) {
        cases1361 = 0.0000000000;
    } else { cases1361 = 0.0; }
    double binop1377 = 24.0000000000 - 1.0000000000;
    double binop1378 = binop1377 * 0.0000000000;
    double cases1379;
    double binop1380 = pos < src_len;
    if (binop1380) {
        cases1379 = pos;
    } else if (1.0000000000) {
        cases1379 = 0.0000000000;
    } else { cases1379 = 0.0; }
    double binop1381 = 24.0000000000 - 1.0000000000;
    double binop1382 = binop1381 * 0.0000000000;
    double cases1383;
    double binop1384 = pos < src_len;
    double charat1385 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1386 = charat1385 >= 48.0000000000;
    double charat1387 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1388 = charat1387 <= 57.0000000000;
    double binop1389 = binop1386 && binop1388;
    double binop1390 = binop1384 && binop1389;
    double binop1391 = pos < src_len;
    double charat1392 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1393 = charat1392 == 43.0000000000;
    double charat1394 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1395 = charat1394 == 42.0000000000;
    double binop1396 = binop1393 || binop1395;
    double binop1397 = binop1391 && binop1396;
    if (binop1390) {
    double binop1398 = pos + 2.0000000000;
        cases1383 = binop1398;
    } else if (binop1397) {
    double binop1399 = pos + 1.0000000000;
        cases1383 = binop1399;
    } else if (1.0000000000) {
        cases1383 = 0.0000000000;
    } else { cases1383 = 0.0; }
    double cases1400;
    double binop1401 = pos < src_len;
    double charat1402 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1403 = charat1402 >= 48.0000000000;
    double charat1404 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1405 = charat1404 <= 57.0000000000;
    double binop1406 = binop1403 && binop1405;
    double binop1407 = binop1401 && binop1406;
    double binop1408 = pos < src_len;
    double charat1409 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1410 = charat1409 == 43.0000000000;
    double charat1411 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1412 = charat1411 == 42.0000000000;
    double binop1413 = binop1410 || binop1412;
    double binop1414 = binop1408 && binop1413;
    if (binop1407) {
    double binop1415 = pos + 3.0000000000;
        cases1400 = binop1415;
    } else if (binop1414) {
    double binop1416 = pos + 2.0000000000;
        cases1400 = binop1416;
    } else if (1.0000000000) {
    double binop1417 = src_len + 1.0000000000;
        cases1400 = binop1417;
    } else { cases1400 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1382] = 0.0000000000;
    tokens[(int)binop1378] = 0.0000000000;
    tokens[(int)binop1360] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1418 = 25.0000000000 - 1.0000000000;
    double binop1419 = binop1418 * 3.0000000000;
    double cases1420;
    double binop1421 = pos < src_len;
    double charat1422 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1423 = charat1422 >= 48.0000000000;
    double charat1424 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1425 = charat1424 <= 57.0000000000;
    double binop1426 = binop1423 && binop1425;
    double binop1427 = binop1421 && binop1426;
    double binop1428 = pos < src_len;
    double charat1429 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1430 = charat1429 == 43.0000000000;
    double binop1431 = binop1428 && binop1430;
    double binop1432 = pos < src_len;
    double charat1433 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1434 = charat1433 == 42.0000000000;
    double binop1435 = binop1432 && binop1434;
    if (binop1427) {
        cases1420 = TOK_NUMBER;
    } else if (binop1431) {
        cases1420 = TOK_PLUS;
    } else if (binop1435) {
        cases1420 = TOK_MUL;
    } else if (1.0000000000) {
        cases1420 = 0.0000000000;
    } else { cases1420 = 0.0; }
    double binop1436 = 25.0000000000 - 1.0000000000;
    double binop1437 = binop1436 * 0.0000000000;
    double cases1438;
    double binop1439 = pos < src_len;
    if (binop1439) {
        cases1438 = pos;
    } else if (1.0000000000) {
        cases1438 = 0.0000000000;
    } else { cases1438 = 0.0; }
    double binop1440 = 25.0000000000 - 1.0000000000;
    double binop1441 = binop1440 * 0.0000000000;
    double cases1442;
    double binop1443 = pos < src_len;
    double charat1444 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1445 = charat1444 >= 48.0000000000;
    double charat1446 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1447 = charat1446 <= 57.0000000000;
    double binop1448 = binop1445 && binop1447;
    double binop1449 = binop1443 && binop1448;
    double binop1450 = pos < src_len;
    double charat1451 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1452 = charat1451 == 43.0000000000;
    double charat1453 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1454 = charat1453 == 42.0000000000;
    double binop1455 = binop1452 || binop1454;
    double binop1456 = binop1450 && binop1455;
    if (binop1449) {
    double binop1457 = pos + 2.0000000000;
        cases1442 = binop1457;
    } else if (binop1456) {
    double binop1458 = pos + 1.0000000000;
        cases1442 = binop1458;
    } else if (1.0000000000) {
        cases1442 = 0.0000000000;
    } else { cases1442 = 0.0; }
    double cases1459;
    double binop1460 = pos < src_len;
    double charat1461 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1462 = charat1461 >= 48.0000000000;
    double charat1463 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1464 = charat1463 <= 57.0000000000;
    double binop1465 = binop1462 && binop1464;
    double binop1466 = binop1460 && binop1465;
    double binop1467 = pos < src_len;
    double charat1468 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1469 = charat1468 == 43.0000000000;
    double charat1470 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1471 = charat1470 == 42.0000000000;
    double binop1472 = binop1469 || binop1471;
    double binop1473 = binop1467 && binop1472;
    if (binop1466) {
    double binop1474 = pos + 3.0000000000;
        cases1459 = binop1474;
    } else if (binop1473) {
    double binop1475 = pos + 2.0000000000;
        cases1459 = binop1475;
    } else if (1.0000000000) {
    double binop1476 = src_len + 1.0000000000;
        cases1459 = binop1476;
    } else { cases1459 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1441] = 0.0000000000;
    tokens[(int)binop1437] = 0.0000000000;
    tokens[(int)binop1419] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1477 = 26.0000000000 - 1.0000000000;
    double binop1478 = binop1477 * 3.0000000000;
    double cases1479;
    double binop1480 = pos < src_len;
    double charat1481 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1482 = charat1481 >= 48.0000000000;
    double charat1483 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1484 = charat1483 <= 57.0000000000;
    double binop1485 = binop1482 && binop1484;
    double binop1486 = binop1480 && binop1485;
    double binop1487 = pos < src_len;
    double charat1488 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1489 = charat1488 == 43.0000000000;
    double binop1490 = binop1487 && binop1489;
    double binop1491 = pos < src_len;
    double charat1492 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1493 = charat1492 == 42.0000000000;
    double binop1494 = binop1491 && binop1493;
    if (binop1486) {
        cases1479 = TOK_NUMBER;
    } else if (binop1490) {
        cases1479 = TOK_PLUS;
    } else if (binop1494) {
        cases1479 = TOK_MUL;
    } else if (1.0000000000) {
        cases1479 = 0.0000000000;
    } else { cases1479 = 0.0; }
    double binop1495 = 26.0000000000 - 1.0000000000;
    double binop1496 = binop1495 * 0.0000000000;
    double cases1497;
    double binop1498 = pos < src_len;
    if (binop1498) {
        cases1497 = pos;
    } else if (1.0000000000) {
        cases1497 = 0.0000000000;
    } else { cases1497 = 0.0; }
    double binop1499 = 26.0000000000 - 1.0000000000;
    double binop1500 = binop1499 * 0.0000000000;
    double cases1501;
    double binop1502 = pos < src_len;
    double charat1503 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1504 = charat1503 >= 48.0000000000;
    double charat1505 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1506 = charat1505 <= 57.0000000000;
    double binop1507 = binop1504 && binop1506;
    double binop1508 = binop1502 && binop1507;
    double binop1509 = pos < src_len;
    double charat1510 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1511 = charat1510 == 43.0000000000;
    double charat1512 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1513 = charat1512 == 42.0000000000;
    double binop1514 = binop1511 || binop1513;
    double binop1515 = binop1509 && binop1514;
    if (binop1508) {
    double binop1516 = pos + 2.0000000000;
        cases1501 = binop1516;
    } else if (binop1515) {
    double binop1517 = pos + 1.0000000000;
        cases1501 = binop1517;
    } else if (1.0000000000) {
        cases1501 = 0.0000000000;
    } else { cases1501 = 0.0; }
    double cases1518;
    double binop1519 = pos < src_len;
    double charat1520 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1521 = charat1520 >= 48.0000000000;
    double charat1522 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1523 = charat1522 <= 57.0000000000;
    double binop1524 = binop1521 && binop1523;
    double binop1525 = binop1519 && binop1524;
    double binop1526 = pos < src_len;
    double charat1527 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1528 = charat1527 == 43.0000000000;
    double charat1529 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1530 = charat1529 == 42.0000000000;
    double binop1531 = binop1528 || binop1530;
    double binop1532 = binop1526 && binop1531;
    if (binop1525) {
    double binop1533 = pos + 3.0000000000;
        cases1518 = binop1533;
    } else if (binop1532) {
    double binop1534 = pos + 2.0000000000;
        cases1518 = binop1534;
    } else if (1.0000000000) {
    double binop1535 = src_len + 1.0000000000;
        cases1518 = binop1535;
    } else { cases1518 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1500] = 0.0000000000;
    tokens[(int)binop1496] = 0.0000000000;
    tokens[(int)binop1478] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1536 = 27.0000000000 - 1.0000000000;
    double binop1537 = binop1536 * 3.0000000000;
    double cases1538;
    double binop1539 = pos < src_len;
    double charat1540 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1541 = charat1540 >= 48.0000000000;
    double charat1542 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1543 = charat1542 <= 57.0000000000;
    double binop1544 = binop1541 && binop1543;
    double binop1545 = binop1539 && binop1544;
    double binop1546 = pos < src_len;
    double charat1547 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1548 = charat1547 == 43.0000000000;
    double binop1549 = binop1546 && binop1548;
    double binop1550 = pos < src_len;
    double charat1551 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1552 = charat1551 == 42.0000000000;
    double binop1553 = binop1550 && binop1552;
    if (binop1545) {
        cases1538 = TOK_NUMBER;
    } else if (binop1549) {
        cases1538 = TOK_PLUS;
    } else if (binop1553) {
        cases1538 = TOK_MUL;
    } else if (1.0000000000) {
        cases1538 = 0.0000000000;
    } else { cases1538 = 0.0; }
    double binop1554 = 27.0000000000 - 1.0000000000;
    double binop1555 = binop1554 * 0.0000000000;
    double cases1556;
    double binop1557 = pos < src_len;
    if (binop1557) {
        cases1556 = pos;
    } else if (1.0000000000) {
        cases1556 = 0.0000000000;
    } else { cases1556 = 0.0; }
    double binop1558 = 27.0000000000 - 1.0000000000;
    double binop1559 = binop1558 * 0.0000000000;
    double cases1560;
    double binop1561 = pos < src_len;
    double charat1562 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1563 = charat1562 >= 48.0000000000;
    double charat1564 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1565 = charat1564 <= 57.0000000000;
    double binop1566 = binop1563 && binop1565;
    double binop1567 = binop1561 && binop1566;
    double binop1568 = pos < src_len;
    double charat1569 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1570 = charat1569 == 43.0000000000;
    double charat1571 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1572 = charat1571 == 42.0000000000;
    double binop1573 = binop1570 || binop1572;
    double binop1574 = binop1568 && binop1573;
    if (binop1567) {
    double binop1575 = pos + 2.0000000000;
        cases1560 = binop1575;
    } else if (binop1574) {
    double binop1576 = pos + 1.0000000000;
        cases1560 = binop1576;
    } else if (1.0000000000) {
        cases1560 = 0.0000000000;
    } else { cases1560 = 0.0; }
    double cases1577;
    double binop1578 = pos < src_len;
    double charat1579 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1580 = charat1579 >= 48.0000000000;
    double charat1581 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1582 = charat1581 <= 57.0000000000;
    double binop1583 = binop1580 && binop1582;
    double binop1584 = binop1578 && binop1583;
    double binop1585 = pos < src_len;
    double charat1586 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1587 = charat1586 == 43.0000000000;
    double charat1588 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1589 = charat1588 == 42.0000000000;
    double binop1590 = binop1587 || binop1589;
    double binop1591 = binop1585 && binop1590;
    if (binop1584) {
    double binop1592 = pos + 3.0000000000;
        cases1577 = binop1592;
    } else if (binop1591) {
    double binop1593 = pos + 2.0000000000;
        cases1577 = binop1593;
    } else if (1.0000000000) {
    double binop1594 = src_len + 1.0000000000;
        cases1577 = binop1594;
    } else { cases1577 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1559] = 0.0000000000;
    tokens[(int)binop1555] = 0.0000000000;
    tokens[(int)binop1537] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1595 = 28.0000000000 - 1.0000000000;
    double binop1596 = binop1595 * 3.0000000000;
    double cases1597;
    double binop1598 = pos < src_len;
    double charat1599 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1600 = charat1599 >= 48.0000000000;
    double charat1601 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1602 = charat1601 <= 57.0000000000;
    double binop1603 = binop1600 && binop1602;
    double binop1604 = binop1598 && binop1603;
    double binop1605 = pos < src_len;
    double charat1606 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1607 = charat1606 == 43.0000000000;
    double binop1608 = binop1605 && binop1607;
    double binop1609 = pos < src_len;
    double charat1610 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1611 = charat1610 == 42.0000000000;
    double binop1612 = binop1609 && binop1611;
    if (binop1604) {
        cases1597 = TOK_NUMBER;
    } else if (binop1608) {
        cases1597 = TOK_PLUS;
    } else if (binop1612) {
        cases1597 = TOK_MUL;
    } else if (1.0000000000) {
        cases1597 = 0.0000000000;
    } else { cases1597 = 0.0; }
    double binop1613 = 28.0000000000 - 1.0000000000;
    double binop1614 = binop1613 * 0.0000000000;
    double cases1615;
    double binop1616 = pos < src_len;
    if (binop1616) {
        cases1615 = pos;
    } else if (1.0000000000) {
        cases1615 = 0.0000000000;
    } else { cases1615 = 0.0; }
    double binop1617 = 28.0000000000 - 1.0000000000;
    double binop1618 = binop1617 * 0.0000000000;
    double cases1619;
    double binop1620 = pos < src_len;
    double charat1621 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1622 = charat1621 >= 48.0000000000;
    double charat1623 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1624 = charat1623 <= 57.0000000000;
    double binop1625 = binop1622 && binop1624;
    double binop1626 = binop1620 && binop1625;
    double binop1627 = pos < src_len;
    double charat1628 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1629 = charat1628 == 43.0000000000;
    double charat1630 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1631 = charat1630 == 42.0000000000;
    double binop1632 = binop1629 || binop1631;
    double binop1633 = binop1627 && binop1632;
    if (binop1626) {
    double binop1634 = pos + 2.0000000000;
        cases1619 = binop1634;
    } else if (binop1633) {
    double binop1635 = pos + 1.0000000000;
        cases1619 = binop1635;
    } else if (1.0000000000) {
        cases1619 = 0.0000000000;
    } else { cases1619 = 0.0; }
    double cases1636;
    double binop1637 = pos < src_len;
    double charat1638 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1639 = charat1638 >= 48.0000000000;
    double charat1640 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1641 = charat1640 <= 57.0000000000;
    double binop1642 = binop1639 && binop1641;
    double binop1643 = binop1637 && binop1642;
    double binop1644 = pos < src_len;
    double charat1645 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1646 = charat1645 == 43.0000000000;
    double charat1647 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1648 = charat1647 == 42.0000000000;
    double binop1649 = binop1646 || binop1648;
    double binop1650 = binop1644 && binop1649;
    if (binop1643) {
    double binop1651 = pos + 3.0000000000;
        cases1636 = binop1651;
    } else if (binop1650) {
    double binop1652 = pos + 2.0000000000;
        cases1636 = binop1652;
    } else if (1.0000000000) {
    double binop1653 = src_len + 1.0000000000;
        cases1636 = binop1653;
    } else { cases1636 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1618] = 0.0000000000;
    tokens[(int)binop1614] = 0.0000000000;
    tokens[(int)binop1596] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1654 = 29.0000000000 - 1.0000000000;
    double binop1655 = binop1654 * 3.0000000000;
    double cases1656;
    double binop1657 = pos < src_len;
    double charat1658 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1659 = charat1658 >= 48.0000000000;
    double charat1660 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1661 = charat1660 <= 57.0000000000;
    double binop1662 = binop1659 && binop1661;
    double binop1663 = binop1657 && binop1662;
    double binop1664 = pos < src_len;
    double charat1665 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1666 = charat1665 == 43.0000000000;
    double binop1667 = binop1664 && binop1666;
    double binop1668 = pos < src_len;
    double charat1669 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1670 = charat1669 == 42.0000000000;
    double binop1671 = binop1668 && binop1670;
    if (binop1663) {
        cases1656 = TOK_NUMBER;
    } else if (binop1667) {
        cases1656 = TOK_PLUS;
    } else if (binop1671) {
        cases1656 = TOK_MUL;
    } else if (1.0000000000) {
        cases1656 = 0.0000000000;
    } else { cases1656 = 0.0; }
    double binop1672 = 29.0000000000 - 1.0000000000;
    double binop1673 = binop1672 * 0.0000000000;
    double cases1674;
    double binop1675 = pos < src_len;
    if (binop1675) {
        cases1674 = pos;
    } else if (1.0000000000) {
        cases1674 = 0.0000000000;
    } else { cases1674 = 0.0; }
    double binop1676 = 29.0000000000 - 1.0000000000;
    double binop1677 = binop1676 * 0.0000000000;
    double cases1678;
    double binop1679 = pos < src_len;
    double charat1680 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1681 = charat1680 >= 48.0000000000;
    double charat1682 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1683 = charat1682 <= 57.0000000000;
    double binop1684 = binop1681 && binop1683;
    double binop1685 = binop1679 && binop1684;
    double binop1686 = pos < src_len;
    double charat1687 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1688 = charat1687 == 43.0000000000;
    double charat1689 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1690 = charat1689 == 42.0000000000;
    double binop1691 = binop1688 || binop1690;
    double binop1692 = binop1686 && binop1691;
    if (binop1685) {
    double binop1693 = pos + 2.0000000000;
        cases1678 = binop1693;
    } else if (binop1692) {
    double binop1694 = pos + 1.0000000000;
        cases1678 = binop1694;
    } else if (1.0000000000) {
        cases1678 = 0.0000000000;
    } else { cases1678 = 0.0; }
    double cases1695;
    double binop1696 = pos < src_len;
    double charat1697 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1698 = charat1697 >= 48.0000000000;
    double charat1699 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1700 = charat1699 <= 57.0000000000;
    double binop1701 = binop1698 && binop1700;
    double binop1702 = binop1696 && binop1701;
    double binop1703 = pos < src_len;
    double charat1704 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1705 = charat1704 == 43.0000000000;
    double charat1706 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1707 = charat1706 == 42.0000000000;
    double binop1708 = binop1705 || binop1707;
    double binop1709 = binop1703 && binop1708;
    if (binop1702) {
    double binop1710 = pos + 3.0000000000;
        cases1695 = binop1710;
    } else if (binop1709) {
    double binop1711 = pos + 2.0000000000;
        cases1695 = binop1711;
    } else if (1.0000000000) {
    double binop1712 = src_len + 1.0000000000;
        cases1695 = binop1712;
    } else { cases1695 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1677] = 0.0000000000;
    tokens[(int)binop1673] = 0.0000000000;
    tokens[(int)binop1655] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1713 = 30.0000000000 - 1.0000000000;
    double binop1714 = binop1713 * 3.0000000000;
    double cases1715;
    double binop1716 = pos < src_len;
    double charat1717 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1718 = charat1717 >= 48.0000000000;
    double charat1719 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1720 = charat1719 <= 57.0000000000;
    double binop1721 = binop1718 && binop1720;
    double binop1722 = binop1716 && binop1721;
    double binop1723 = pos < src_len;
    double charat1724 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1725 = charat1724 == 43.0000000000;
    double binop1726 = binop1723 && binop1725;
    double binop1727 = pos < src_len;
    double charat1728 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1729 = charat1728 == 42.0000000000;
    double binop1730 = binop1727 && binop1729;
    if (binop1722) {
        cases1715 = TOK_NUMBER;
    } else if (binop1726) {
        cases1715 = TOK_PLUS;
    } else if (binop1730) {
        cases1715 = TOK_MUL;
    } else if (1.0000000000) {
        cases1715 = 0.0000000000;
    } else { cases1715 = 0.0; }
    double binop1731 = 30.0000000000 - 1.0000000000;
    double binop1732 = binop1731 * 0.0000000000;
    double cases1733;
    double binop1734 = pos < src_len;
    if (binop1734) {
        cases1733 = pos;
    } else if (1.0000000000) {
        cases1733 = 0.0000000000;
    } else { cases1733 = 0.0; }
    double binop1735 = 30.0000000000 - 1.0000000000;
    double binop1736 = binop1735 * 0.0000000000;
    double cases1737;
    double binop1738 = pos < src_len;
    double charat1739 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1740 = charat1739 >= 48.0000000000;
    double charat1741 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1742 = charat1741 <= 57.0000000000;
    double binop1743 = binop1740 && binop1742;
    double binop1744 = binop1738 && binop1743;
    double binop1745 = pos < src_len;
    double charat1746 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1747 = charat1746 == 43.0000000000;
    double charat1748 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1749 = charat1748 == 42.0000000000;
    double binop1750 = binop1747 || binop1749;
    double binop1751 = binop1745 && binop1750;
    if (binop1744) {
    double binop1752 = pos + 2.0000000000;
        cases1737 = binop1752;
    } else if (binop1751) {
    double binop1753 = pos + 1.0000000000;
        cases1737 = binop1753;
    } else if (1.0000000000) {
        cases1737 = 0.0000000000;
    } else { cases1737 = 0.0; }
    double cases1754;
    double binop1755 = pos < src_len;
    double charat1756 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1757 = charat1756 >= 48.0000000000;
    double charat1758 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1759 = charat1758 <= 57.0000000000;
    double binop1760 = binop1757 && binop1759;
    double binop1761 = binop1755 && binop1760;
    double binop1762 = pos < src_len;
    double charat1763 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1764 = charat1763 == 43.0000000000;
    double charat1765 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1766 = charat1765 == 42.0000000000;
    double binop1767 = binop1764 || binop1766;
    double binop1768 = binop1762 && binop1767;
    if (binop1761) {
    double binop1769 = pos + 3.0000000000;
        cases1754 = binop1769;
    } else if (binop1768) {
    double binop1770 = pos + 2.0000000000;
        cases1754 = binop1770;
    } else if (1.0000000000) {
    double binop1771 = src_len + 1.0000000000;
        cases1754 = binop1771;
    } else { cases1754 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1736] = 0.0000000000;
    tokens[(int)binop1732] = 0.0000000000;
    tokens[(int)binop1714] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1772 = 31.0000000000 - 1.0000000000;
    double binop1773 = binop1772 * 3.0000000000;
    double cases1774;
    double binop1775 = pos < src_len;
    double charat1776 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1777 = charat1776 >= 48.0000000000;
    double charat1778 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1779 = charat1778 <= 57.0000000000;
    double binop1780 = binop1777 && binop1779;
    double binop1781 = binop1775 && binop1780;
    double binop1782 = pos < src_len;
    double charat1783 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1784 = charat1783 == 43.0000000000;
    double binop1785 = binop1782 && binop1784;
    double binop1786 = pos < src_len;
    double charat1787 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1788 = charat1787 == 42.0000000000;
    double binop1789 = binop1786 && binop1788;
    if (binop1781) {
        cases1774 = TOK_NUMBER;
    } else if (binop1785) {
        cases1774 = TOK_PLUS;
    } else if (binop1789) {
        cases1774 = TOK_MUL;
    } else if (1.0000000000) {
        cases1774 = 0.0000000000;
    } else { cases1774 = 0.0; }
    double binop1790 = 31.0000000000 - 1.0000000000;
    double binop1791 = binop1790 * 0.0000000000;
    double cases1792;
    double binop1793 = pos < src_len;
    if (binop1793) {
        cases1792 = pos;
    } else if (1.0000000000) {
        cases1792 = 0.0000000000;
    } else { cases1792 = 0.0; }
    double binop1794 = 31.0000000000 - 1.0000000000;
    double binop1795 = binop1794 * 0.0000000000;
    double cases1796;
    double binop1797 = pos < src_len;
    double charat1798 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1799 = charat1798 >= 48.0000000000;
    double charat1800 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1801 = charat1800 <= 57.0000000000;
    double binop1802 = binop1799 && binop1801;
    double binop1803 = binop1797 && binop1802;
    double binop1804 = pos < src_len;
    double charat1805 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1806 = charat1805 == 43.0000000000;
    double charat1807 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1808 = charat1807 == 42.0000000000;
    double binop1809 = binop1806 || binop1808;
    double binop1810 = binop1804 && binop1809;
    if (binop1803) {
    double binop1811 = pos + 2.0000000000;
        cases1796 = binop1811;
    } else if (binop1810) {
    double binop1812 = pos + 1.0000000000;
        cases1796 = binop1812;
    } else if (1.0000000000) {
        cases1796 = 0.0000000000;
    } else { cases1796 = 0.0; }
    double cases1813;
    double binop1814 = pos < src_len;
    double charat1815 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1816 = charat1815 >= 48.0000000000;
    double charat1817 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1818 = charat1817 <= 57.0000000000;
    double binop1819 = binop1816 && binop1818;
    double binop1820 = binop1814 && binop1819;
    double binop1821 = pos < src_len;
    double charat1822 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1823 = charat1822 == 43.0000000000;
    double charat1824 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1825 = charat1824 == 42.0000000000;
    double binop1826 = binop1823 || binop1825;
    double binop1827 = binop1821 && binop1826;
    if (binop1820) {
    double binop1828 = pos + 3.0000000000;
        cases1813 = binop1828;
    } else if (binop1827) {
    double binop1829 = pos + 2.0000000000;
        cases1813 = binop1829;
    } else if (1.0000000000) {
    double binop1830 = src_len + 1.0000000000;
        cases1813 = binop1830;
    } else { cases1813 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1795] = 0.0000000000;
    tokens[(int)binop1791] = 0.0000000000;
    tokens[(int)binop1773] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1831 = 32.0000000000 - 1.0000000000;
    double binop1832 = binop1831 * 3.0000000000;
    double cases1833;
    double binop1834 = pos < src_len;
    double charat1835 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1836 = charat1835 >= 48.0000000000;
    double charat1837 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1838 = charat1837 <= 57.0000000000;
    double binop1839 = binop1836 && binop1838;
    double binop1840 = binop1834 && binop1839;
    double binop1841 = pos < src_len;
    double charat1842 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1843 = charat1842 == 43.0000000000;
    double binop1844 = binop1841 && binop1843;
    double binop1845 = pos < src_len;
    double charat1846 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1847 = charat1846 == 42.0000000000;
    double binop1848 = binop1845 && binop1847;
    if (binop1840) {
        cases1833 = TOK_NUMBER;
    } else if (binop1844) {
        cases1833 = TOK_PLUS;
    } else if (binop1848) {
        cases1833 = TOK_MUL;
    } else if (1.0000000000) {
        cases1833 = 0.0000000000;
    } else { cases1833 = 0.0; }
    double binop1849 = 32.0000000000 - 1.0000000000;
    double binop1850 = binop1849 * 0.0000000000;
    double cases1851;
    double binop1852 = pos < src_len;
    if (binop1852) {
        cases1851 = pos;
    } else if (1.0000000000) {
        cases1851 = 0.0000000000;
    } else { cases1851 = 0.0; }
    double binop1853 = 32.0000000000 - 1.0000000000;
    double binop1854 = binop1853 * 0.0000000000;
    double cases1855;
    double binop1856 = pos < src_len;
    double charat1857 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1858 = charat1857 >= 48.0000000000;
    double charat1859 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1860 = charat1859 <= 57.0000000000;
    double binop1861 = binop1858 && binop1860;
    double binop1862 = binop1856 && binop1861;
    double binop1863 = pos < src_len;
    double charat1864 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1865 = charat1864 == 43.0000000000;
    double charat1866 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1867 = charat1866 == 42.0000000000;
    double binop1868 = binop1865 || binop1867;
    double binop1869 = binop1863 && binop1868;
    if (binop1862) {
    double binop1870 = pos + 2.0000000000;
        cases1855 = binop1870;
    } else if (binop1869) {
    double binop1871 = pos + 1.0000000000;
        cases1855 = binop1871;
    } else if (1.0000000000) {
        cases1855 = 0.0000000000;
    } else { cases1855 = 0.0; }
    double cases1872;
    double binop1873 = pos < src_len;
    double charat1874 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1875 = charat1874 >= 48.0000000000;
    double charat1876 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1877 = charat1876 <= 57.0000000000;
    double binop1878 = binop1875 && binop1877;
    double binop1879 = binop1873 && binop1878;
    double binop1880 = pos < src_len;
    double charat1881 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1882 = charat1881 == 43.0000000000;
    double charat1883 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1884 = charat1883 == 42.0000000000;
    double binop1885 = binop1882 || binop1884;
    double binop1886 = binop1880 && binop1885;
    if (binop1879) {
    double binop1887 = pos + 3.0000000000;
        cases1872 = binop1887;
    } else if (binop1886) {
    double binop1888 = pos + 2.0000000000;
        cases1872 = binop1888;
    } else if (1.0000000000) {
    double binop1889 = src_len + 1.0000000000;
        cases1872 = binop1889;
    } else { cases1872 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1854] = 0.0000000000;
    tokens[(int)binop1850] = 0.0000000000;
    tokens[(int)binop1832] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1890 = 33.0000000000 - 1.0000000000;
    double binop1891 = binop1890 * 3.0000000000;
    double cases1892;
    double binop1893 = pos < src_len;
    double charat1894 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1895 = charat1894 >= 48.0000000000;
    double charat1896 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1897 = charat1896 <= 57.0000000000;
    double binop1898 = binop1895 && binop1897;
    double binop1899 = binop1893 && binop1898;
    double binop1900 = pos < src_len;
    double charat1901 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1902 = charat1901 == 43.0000000000;
    double binop1903 = binop1900 && binop1902;
    double binop1904 = pos < src_len;
    double charat1905 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1906 = charat1905 == 42.0000000000;
    double binop1907 = binop1904 && binop1906;
    if (binop1899) {
        cases1892 = TOK_NUMBER;
    } else if (binop1903) {
        cases1892 = TOK_PLUS;
    } else if (binop1907) {
        cases1892 = TOK_MUL;
    } else if (1.0000000000) {
        cases1892 = 0.0000000000;
    } else { cases1892 = 0.0; }
    double binop1908 = 33.0000000000 - 1.0000000000;
    double binop1909 = binop1908 * 0.0000000000;
    double cases1910;
    double binop1911 = pos < src_len;
    if (binop1911) {
        cases1910 = pos;
    } else if (1.0000000000) {
        cases1910 = 0.0000000000;
    } else { cases1910 = 0.0; }
    double binop1912 = 33.0000000000 - 1.0000000000;
    double binop1913 = binop1912 * 0.0000000000;
    double cases1914;
    double binop1915 = pos < src_len;
    double charat1916 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1917 = charat1916 >= 48.0000000000;
    double charat1918 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1919 = charat1918 <= 57.0000000000;
    double binop1920 = binop1917 && binop1919;
    double binop1921 = binop1915 && binop1920;
    double binop1922 = pos < src_len;
    double charat1923 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1924 = charat1923 == 43.0000000000;
    double charat1925 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1926 = charat1925 == 42.0000000000;
    double binop1927 = binop1924 || binop1926;
    double binop1928 = binop1922 && binop1927;
    if (binop1921) {
    double binop1929 = pos + 2.0000000000;
        cases1914 = binop1929;
    } else if (binop1928) {
    double binop1930 = pos + 1.0000000000;
        cases1914 = binop1930;
    } else if (1.0000000000) {
        cases1914 = 0.0000000000;
    } else { cases1914 = 0.0; }
    double cases1931;
    double binop1932 = pos < src_len;
    double charat1933 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1934 = charat1933 >= 48.0000000000;
    double charat1935 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1936 = charat1935 <= 57.0000000000;
    double binop1937 = binop1934 && binop1936;
    double binop1938 = binop1932 && binop1937;
    double binop1939 = pos < src_len;
    double charat1940 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1941 = charat1940 == 43.0000000000;
    double charat1942 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1943 = charat1942 == 42.0000000000;
    double binop1944 = binop1941 || binop1943;
    double binop1945 = binop1939 && binop1944;
    if (binop1938) {
    double binop1946 = pos + 3.0000000000;
        cases1931 = binop1946;
    } else if (binop1945) {
    double binop1947 = pos + 2.0000000000;
        cases1931 = binop1947;
    } else if (1.0000000000) {
    double binop1948 = src_len + 1.0000000000;
        cases1931 = binop1948;
    } else { cases1931 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1913] = 0.0000000000;
    tokens[(int)binop1909] = 0.0000000000;
    tokens[(int)binop1891] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop1949 = 34.0000000000 - 1.0000000000;
    double binop1950 = binop1949 * 3.0000000000;
    double cases1951;
    double binop1952 = pos < src_len;
    double charat1953 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1954 = charat1953 >= 48.0000000000;
    double charat1955 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1956 = charat1955 <= 57.0000000000;
    double binop1957 = binop1954 && binop1956;
    double binop1958 = binop1952 && binop1957;
    double binop1959 = pos < src_len;
    double charat1960 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1961 = charat1960 == 43.0000000000;
    double binop1962 = binop1959 && binop1961;
    double binop1963 = pos < src_len;
    double charat1964 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1965 = charat1964 == 42.0000000000;
    double binop1966 = binop1963 && binop1965;
    if (binop1958) {
        cases1951 = TOK_NUMBER;
    } else if (binop1962) {
        cases1951 = TOK_PLUS;
    } else if (binop1966) {
        cases1951 = TOK_MUL;
    } else if (1.0000000000) {
        cases1951 = 0.0000000000;
    } else { cases1951 = 0.0; }
    double binop1967 = 34.0000000000 - 1.0000000000;
    double binop1968 = binop1967 * 0.0000000000;
    double cases1969;
    double binop1970 = pos < src_len;
    if (binop1970) {
        cases1969 = pos;
    } else if (1.0000000000) {
        cases1969 = 0.0000000000;
    } else { cases1969 = 0.0; }
    double binop1971 = 34.0000000000 - 1.0000000000;
    double binop1972 = binop1971 * 0.0000000000;
    double cases1973;
    double binop1974 = pos < src_len;
    double charat1975 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1976 = charat1975 >= 48.0000000000;
    double charat1977 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1978 = charat1977 <= 57.0000000000;
    double binop1979 = binop1976 && binop1978;
    double binop1980 = binop1974 && binop1979;
    double binop1981 = pos < src_len;
    double charat1982 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1983 = charat1982 == 43.0000000000;
    double charat1984 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1985 = charat1984 == 42.0000000000;
    double binop1986 = binop1983 || binop1985;
    double binop1987 = binop1981 && binop1986;
    if (binop1980) {
    double binop1988 = pos + 2.0000000000;
        cases1973 = binop1988;
    } else if (binop1987) {
    double binop1989 = pos + 1.0000000000;
        cases1973 = binop1989;
    } else if (1.0000000000) {
        cases1973 = 0.0000000000;
    } else { cases1973 = 0.0; }
    double cases1990;
    double binop1991 = pos < src_len;
    double charat1992 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1993 = charat1992 >= 48.0000000000;
    double charat1994 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop1995 = charat1994 <= 57.0000000000;
    double binop1996 = binop1993 && binop1995;
    double binop1997 = binop1991 && binop1996;
    double binop1998 = pos < src_len;
    double charat1999 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2000 = charat1999 == 43.0000000000;
    double charat2001 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2002 = charat2001 == 42.0000000000;
    double binop2003 = binop2000 || binop2002;
    double binop2004 = binop1998 && binop2003;
    if (binop1997) {
    double binop2005 = pos + 3.0000000000;
        cases1990 = binop2005;
    } else if (binop2004) {
    double binop2006 = pos + 2.0000000000;
        cases1990 = binop2006;
    } else if (1.0000000000) {
    double binop2007 = src_len + 1.0000000000;
        cases1990 = binop2007;
    } else { cases1990 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop1972] = 0.0000000000;
    tokens[(int)binop1968] = 0.0000000000;
    tokens[(int)binop1950] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2008 = 35.0000000000 - 1.0000000000;
    double binop2009 = binop2008 * 3.0000000000;
    double cases2010;
    double binop2011 = pos < src_len;
    double charat2012 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2013 = charat2012 >= 48.0000000000;
    double charat2014 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2015 = charat2014 <= 57.0000000000;
    double binop2016 = binop2013 && binop2015;
    double binop2017 = binop2011 && binop2016;
    double binop2018 = pos < src_len;
    double charat2019 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2020 = charat2019 == 43.0000000000;
    double binop2021 = binop2018 && binop2020;
    double binop2022 = pos < src_len;
    double charat2023 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2024 = charat2023 == 42.0000000000;
    double binop2025 = binop2022 && binop2024;
    if (binop2017) {
        cases2010 = TOK_NUMBER;
    } else if (binop2021) {
        cases2010 = TOK_PLUS;
    } else if (binop2025) {
        cases2010 = TOK_MUL;
    } else if (1.0000000000) {
        cases2010 = 0.0000000000;
    } else { cases2010 = 0.0; }
    double binop2026 = 35.0000000000 - 1.0000000000;
    double binop2027 = binop2026 * 0.0000000000;
    double cases2028;
    double binop2029 = pos < src_len;
    if (binop2029) {
        cases2028 = pos;
    } else if (1.0000000000) {
        cases2028 = 0.0000000000;
    } else { cases2028 = 0.0; }
    double binop2030 = 35.0000000000 - 1.0000000000;
    double binop2031 = binop2030 * 0.0000000000;
    double cases2032;
    double binop2033 = pos < src_len;
    double charat2034 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2035 = charat2034 >= 48.0000000000;
    double charat2036 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2037 = charat2036 <= 57.0000000000;
    double binop2038 = binop2035 && binop2037;
    double binop2039 = binop2033 && binop2038;
    double binop2040 = pos < src_len;
    double charat2041 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2042 = charat2041 == 43.0000000000;
    double charat2043 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2044 = charat2043 == 42.0000000000;
    double binop2045 = binop2042 || binop2044;
    double binop2046 = binop2040 && binop2045;
    if (binop2039) {
    double binop2047 = pos + 2.0000000000;
        cases2032 = binop2047;
    } else if (binop2046) {
    double binop2048 = pos + 1.0000000000;
        cases2032 = binop2048;
    } else if (1.0000000000) {
        cases2032 = 0.0000000000;
    } else { cases2032 = 0.0; }
    double cases2049;
    double binop2050 = pos < src_len;
    double charat2051 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2052 = charat2051 >= 48.0000000000;
    double charat2053 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2054 = charat2053 <= 57.0000000000;
    double binop2055 = binop2052 && binop2054;
    double binop2056 = binop2050 && binop2055;
    double binop2057 = pos < src_len;
    double charat2058 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2059 = charat2058 == 43.0000000000;
    double charat2060 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2061 = charat2060 == 42.0000000000;
    double binop2062 = binop2059 || binop2061;
    double binop2063 = binop2057 && binop2062;
    if (binop2056) {
    double binop2064 = pos + 3.0000000000;
        cases2049 = binop2064;
    } else if (binop2063) {
    double binop2065 = pos + 2.0000000000;
        cases2049 = binop2065;
    } else if (1.0000000000) {
    double binop2066 = src_len + 1.0000000000;
        cases2049 = binop2066;
    } else { cases2049 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2031] = 0.0000000000;
    tokens[(int)binop2027] = 0.0000000000;
    tokens[(int)binop2009] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2067 = 36.0000000000 - 1.0000000000;
    double binop2068 = binop2067 * 3.0000000000;
    double cases2069;
    double binop2070 = pos < src_len;
    double charat2071 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2072 = charat2071 >= 48.0000000000;
    double charat2073 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2074 = charat2073 <= 57.0000000000;
    double binop2075 = binop2072 && binop2074;
    double binop2076 = binop2070 && binop2075;
    double binop2077 = pos < src_len;
    double charat2078 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2079 = charat2078 == 43.0000000000;
    double binop2080 = binop2077 && binop2079;
    double binop2081 = pos < src_len;
    double charat2082 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2083 = charat2082 == 42.0000000000;
    double binop2084 = binop2081 && binop2083;
    if (binop2076) {
        cases2069 = TOK_NUMBER;
    } else if (binop2080) {
        cases2069 = TOK_PLUS;
    } else if (binop2084) {
        cases2069 = TOK_MUL;
    } else if (1.0000000000) {
        cases2069 = 0.0000000000;
    } else { cases2069 = 0.0; }
    double binop2085 = 36.0000000000 - 1.0000000000;
    double binop2086 = binop2085 * 0.0000000000;
    double cases2087;
    double binop2088 = pos < src_len;
    if (binop2088) {
        cases2087 = pos;
    } else if (1.0000000000) {
        cases2087 = 0.0000000000;
    } else { cases2087 = 0.0; }
    double binop2089 = 36.0000000000 - 1.0000000000;
    double binop2090 = binop2089 * 0.0000000000;
    double cases2091;
    double binop2092 = pos < src_len;
    double charat2093 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2094 = charat2093 >= 48.0000000000;
    double charat2095 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2096 = charat2095 <= 57.0000000000;
    double binop2097 = binop2094 && binop2096;
    double binop2098 = binop2092 && binop2097;
    double binop2099 = pos < src_len;
    double charat2100 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2101 = charat2100 == 43.0000000000;
    double charat2102 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2103 = charat2102 == 42.0000000000;
    double binop2104 = binop2101 || binop2103;
    double binop2105 = binop2099 && binop2104;
    if (binop2098) {
    double binop2106 = pos + 2.0000000000;
        cases2091 = binop2106;
    } else if (binop2105) {
    double binop2107 = pos + 1.0000000000;
        cases2091 = binop2107;
    } else if (1.0000000000) {
        cases2091 = 0.0000000000;
    } else { cases2091 = 0.0; }
    double cases2108;
    double binop2109 = pos < src_len;
    double charat2110 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2111 = charat2110 >= 48.0000000000;
    double charat2112 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2113 = charat2112 <= 57.0000000000;
    double binop2114 = binop2111 && binop2113;
    double binop2115 = binop2109 && binop2114;
    double binop2116 = pos < src_len;
    double charat2117 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2118 = charat2117 == 43.0000000000;
    double charat2119 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2120 = charat2119 == 42.0000000000;
    double binop2121 = binop2118 || binop2120;
    double binop2122 = binop2116 && binop2121;
    if (binop2115) {
    double binop2123 = pos + 3.0000000000;
        cases2108 = binop2123;
    } else if (binop2122) {
    double binop2124 = pos + 2.0000000000;
        cases2108 = binop2124;
    } else if (1.0000000000) {
    double binop2125 = src_len + 1.0000000000;
        cases2108 = binop2125;
    } else { cases2108 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2090] = 0.0000000000;
    tokens[(int)binop2086] = 0.0000000000;
    tokens[(int)binop2068] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2126 = 37.0000000000 - 1.0000000000;
    double binop2127 = binop2126 * 3.0000000000;
    double cases2128;
    double binop2129 = pos < src_len;
    double charat2130 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2131 = charat2130 >= 48.0000000000;
    double charat2132 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2133 = charat2132 <= 57.0000000000;
    double binop2134 = binop2131 && binop2133;
    double binop2135 = binop2129 && binop2134;
    double binop2136 = pos < src_len;
    double charat2137 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2138 = charat2137 == 43.0000000000;
    double binop2139 = binop2136 && binop2138;
    double binop2140 = pos < src_len;
    double charat2141 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2142 = charat2141 == 42.0000000000;
    double binop2143 = binop2140 && binop2142;
    if (binop2135) {
        cases2128 = TOK_NUMBER;
    } else if (binop2139) {
        cases2128 = TOK_PLUS;
    } else if (binop2143) {
        cases2128 = TOK_MUL;
    } else if (1.0000000000) {
        cases2128 = 0.0000000000;
    } else { cases2128 = 0.0; }
    double binop2144 = 37.0000000000 - 1.0000000000;
    double binop2145 = binop2144 * 0.0000000000;
    double cases2146;
    double binop2147 = pos < src_len;
    if (binop2147) {
        cases2146 = pos;
    } else if (1.0000000000) {
        cases2146 = 0.0000000000;
    } else { cases2146 = 0.0; }
    double binop2148 = 37.0000000000 - 1.0000000000;
    double binop2149 = binop2148 * 0.0000000000;
    double cases2150;
    double binop2151 = pos < src_len;
    double charat2152 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2153 = charat2152 >= 48.0000000000;
    double charat2154 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2155 = charat2154 <= 57.0000000000;
    double binop2156 = binop2153 && binop2155;
    double binop2157 = binop2151 && binop2156;
    double binop2158 = pos < src_len;
    double charat2159 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2160 = charat2159 == 43.0000000000;
    double charat2161 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2162 = charat2161 == 42.0000000000;
    double binop2163 = binop2160 || binop2162;
    double binop2164 = binop2158 && binop2163;
    if (binop2157) {
    double binop2165 = pos + 2.0000000000;
        cases2150 = binop2165;
    } else if (binop2164) {
    double binop2166 = pos + 1.0000000000;
        cases2150 = binop2166;
    } else if (1.0000000000) {
        cases2150 = 0.0000000000;
    } else { cases2150 = 0.0; }
    double cases2167;
    double binop2168 = pos < src_len;
    double charat2169 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2170 = charat2169 >= 48.0000000000;
    double charat2171 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2172 = charat2171 <= 57.0000000000;
    double binop2173 = binop2170 && binop2172;
    double binop2174 = binop2168 && binop2173;
    double binop2175 = pos < src_len;
    double charat2176 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2177 = charat2176 == 43.0000000000;
    double charat2178 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2179 = charat2178 == 42.0000000000;
    double binop2180 = binop2177 || binop2179;
    double binop2181 = binop2175 && binop2180;
    if (binop2174) {
    double binop2182 = pos + 3.0000000000;
        cases2167 = binop2182;
    } else if (binop2181) {
    double binop2183 = pos + 2.0000000000;
        cases2167 = binop2183;
    } else if (1.0000000000) {
    double binop2184 = src_len + 1.0000000000;
        cases2167 = binop2184;
    } else { cases2167 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2149] = 0.0000000000;
    tokens[(int)binop2145] = 0.0000000000;
    tokens[(int)binop2127] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2185 = 38.0000000000 - 1.0000000000;
    double binop2186 = binop2185 * 3.0000000000;
    double cases2187;
    double binop2188 = pos < src_len;
    double charat2189 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2190 = charat2189 >= 48.0000000000;
    double charat2191 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2192 = charat2191 <= 57.0000000000;
    double binop2193 = binop2190 && binop2192;
    double binop2194 = binop2188 && binop2193;
    double binop2195 = pos < src_len;
    double charat2196 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2197 = charat2196 == 43.0000000000;
    double binop2198 = binop2195 && binop2197;
    double binop2199 = pos < src_len;
    double charat2200 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2201 = charat2200 == 42.0000000000;
    double binop2202 = binop2199 && binop2201;
    if (binop2194) {
        cases2187 = TOK_NUMBER;
    } else if (binop2198) {
        cases2187 = TOK_PLUS;
    } else if (binop2202) {
        cases2187 = TOK_MUL;
    } else if (1.0000000000) {
        cases2187 = 0.0000000000;
    } else { cases2187 = 0.0; }
    double binop2203 = 38.0000000000 - 1.0000000000;
    double binop2204 = binop2203 * 0.0000000000;
    double cases2205;
    double binop2206 = pos < src_len;
    if (binop2206) {
        cases2205 = pos;
    } else if (1.0000000000) {
        cases2205 = 0.0000000000;
    } else { cases2205 = 0.0; }
    double binop2207 = 38.0000000000 - 1.0000000000;
    double binop2208 = binop2207 * 0.0000000000;
    double cases2209;
    double binop2210 = pos < src_len;
    double charat2211 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2212 = charat2211 >= 48.0000000000;
    double charat2213 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2214 = charat2213 <= 57.0000000000;
    double binop2215 = binop2212 && binop2214;
    double binop2216 = binop2210 && binop2215;
    double binop2217 = pos < src_len;
    double charat2218 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2219 = charat2218 == 43.0000000000;
    double charat2220 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2221 = charat2220 == 42.0000000000;
    double binop2222 = binop2219 || binop2221;
    double binop2223 = binop2217 && binop2222;
    if (binop2216) {
    double binop2224 = pos + 2.0000000000;
        cases2209 = binop2224;
    } else if (binop2223) {
    double binop2225 = pos + 1.0000000000;
        cases2209 = binop2225;
    } else if (1.0000000000) {
        cases2209 = 0.0000000000;
    } else { cases2209 = 0.0; }
    double cases2226;
    double binop2227 = pos < src_len;
    double charat2228 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2229 = charat2228 >= 48.0000000000;
    double charat2230 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2231 = charat2230 <= 57.0000000000;
    double binop2232 = binop2229 && binop2231;
    double binop2233 = binop2227 && binop2232;
    double binop2234 = pos < src_len;
    double charat2235 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2236 = charat2235 == 43.0000000000;
    double charat2237 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2238 = charat2237 == 42.0000000000;
    double binop2239 = binop2236 || binop2238;
    double binop2240 = binop2234 && binop2239;
    if (binop2233) {
    double binop2241 = pos + 3.0000000000;
        cases2226 = binop2241;
    } else if (binop2240) {
    double binop2242 = pos + 2.0000000000;
        cases2226 = binop2242;
    } else if (1.0000000000) {
    double binop2243 = src_len + 1.0000000000;
        cases2226 = binop2243;
    } else { cases2226 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2208] = 0.0000000000;
    tokens[(int)binop2204] = 0.0000000000;
    tokens[(int)binop2186] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2244 = 39.0000000000 - 1.0000000000;
    double binop2245 = binop2244 * 3.0000000000;
    double cases2246;
    double binop2247 = pos < src_len;
    double charat2248 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2249 = charat2248 >= 48.0000000000;
    double charat2250 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2251 = charat2250 <= 57.0000000000;
    double binop2252 = binop2249 && binop2251;
    double binop2253 = binop2247 && binop2252;
    double binop2254 = pos < src_len;
    double charat2255 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2256 = charat2255 == 43.0000000000;
    double binop2257 = binop2254 && binop2256;
    double binop2258 = pos < src_len;
    double charat2259 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2260 = charat2259 == 42.0000000000;
    double binop2261 = binop2258 && binop2260;
    if (binop2253) {
        cases2246 = TOK_NUMBER;
    } else if (binop2257) {
        cases2246 = TOK_PLUS;
    } else if (binop2261) {
        cases2246 = TOK_MUL;
    } else if (1.0000000000) {
        cases2246 = 0.0000000000;
    } else { cases2246 = 0.0; }
    double binop2262 = 39.0000000000 - 1.0000000000;
    double binop2263 = binop2262 * 0.0000000000;
    double cases2264;
    double binop2265 = pos < src_len;
    if (binop2265) {
        cases2264 = pos;
    } else if (1.0000000000) {
        cases2264 = 0.0000000000;
    } else { cases2264 = 0.0; }
    double binop2266 = 39.0000000000 - 1.0000000000;
    double binop2267 = binop2266 * 0.0000000000;
    double cases2268;
    double binop2269 = pos < src_len;
    double charat2270 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2271 = charat2270 >= 48.0000000000;
    double charat2272 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2273 = charat2272 <= 57.0000000000;
    double binop2274 = binop2271 && binop2273;
    double binop2275 = binop2269 && binop2274;
    double binop2276 = pos < src_len;
    double charat2277 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2278 = charat2277 == 43.0000000000;
    double charat2279 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2280 = charat2279 == 42.0000000000;
    double binop2281 = binop2278 || binop2280;
    double binop2282 = binop2276 && binop2281;
    if (binop2275) {
    double binop2283 = pos + 2.0000000000;
        cases2268 = binop2283;
    } else if (binop2282) {
    double binop2284 = pos + 1.0000000000;
        cases2268 = binop2284;
    } else if (1.0000000000) {
        cases2268 = 0.0000000000;
    } else { cases2268 = 0.0; }
    double cases2285;
    double binop2286 = pos < src_len;
    double charat2287 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2288 = charat2287 >= 48.0000000000;
    double charat2289 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2290 = charat2289 <= 57.0000000000;
    double binop2291 = binop2288 && binop2290;
    double binop2292 = binop2286 && binop2291;
    double binop2293 = pos < src_len;
    double charat2294 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2295 = charat2294 == 43.0000000000;
    double charat2296 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2297 = charat2296 == 42.0000000000;
    double binop2298 = binop2295 || binop2297;
    double binop2299 = binop2293 && binop2298;
    if (binop2292) {
    double binop2300 = pos + 3.0000000000;
        cases2285 = binop2300;
    } else if (binop2299) {
    double binop2301 = pos + 2.0000000000;
        cases2285 = binop2301;
    } else if (1.0000000000) {
    double binop2302 = src_len + 1.0000000000;
        cases2285 = binop2302;
    } else { cases2285 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2267] = 0.0000000000;
    tokens[(int)binop2263] = 0.0000000000;
    tokens[(int)binop2245] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2303 = 40.0000000000 - 1.0000000000;
    double binop2304 = binop2303 * 3.0000000000;
    double cases2305;
    double binop2306 = pos < src_len;
    double charat2307 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2308 = charat2307 >= 48.0000000000;
    double charat2309 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2310 = charat2309 <= 57.0000000000;
    double binop2311 = binop2308 && binop2310;
    double binop2312 = binop2306 && binop2311;
    double binop2313 = pos < src_len;
    double charat2314 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2315 = charat2314 == 43.0000000000;
    double binop2316 = binop2313 && binop2315;
    double binop2317 = pos < src_len;
    double charat2318 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2319 = charat2318 == 42.0000000000;
    double binop2320 = binop2317 && binop2319;
    if (binop2312) {
        cases2305 = TOK_NUMBER;
    } else if (binop2316) {
        cases2305 = TOK_PLUS;
    } else if (binop2320) {
        cases2305 = TOK_MUL;
    } else if (1.0000000000) {
        cases2305 = 0.0000000000;
    } else { cases2305 = 0.0; }
    double binop2321 = 40.0000000000 - 1.0000000000;
    double binop2322 = binop2321 * 0.0000000000;
    double cases2323;
    double binop2324 = pos < src_len;
    if (binop2324) {
        cases2323 = pos;
    } else if (1.0000000000) {
        cases2323 = 0.0000000000;
    } else { cases2323 = 0.0; }
    double binop2325 = 40.0000000000 - 1.0000000000;
    double binop2326 = binop2325 * 0.0000000000;
    double cases2327;
    double binop2328 = pos < src_len;
    double charat2329 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2330 = charat2329 >= 48.0000000000;
    double charat2331 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2332 = charat2331 <= 57.0000000000;
    double binop2333 = binop2330 && binop2332;
    double binop2334 = binop2328 && binop2333;
    double binop2335 = pos < src_len;
    double charat2336 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2337 = charat2336 == 43.0000000000;
    double charat2338 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2339 = charat2338 == 42.0000000000;
    double binop2340 = binop2337 || binop2339;
    double binop2341 = binop2335 && binop2340;
    if (binop2334) {
    double binop2342 = pos + 2.0000000000;
        cases2327 = binop2342;
    } else if (binop2341) {
    double binop2343 = pos + 1.0000000000;
        cases2327 = binop2343;
    } else if (1.0000000000) {
        cases2327 = 0.0000000000;
    } else { cases2327 = 0.0; }
    double cases2344;
    double binop2345 = pos < src_len;
    double charat2346 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2347 = charat2346 >= 48.0000000000;
    double charat2348 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2349 = charat2348 <= 57.0000000000;
    double binop2350 = binop2347 && binop2349;
    double binop2351 = binop2345 && binop2350;
    double binop2352 = pos < src_len;
    double charat2353 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2354 = charat2353 == 43.0000000000;
    double charat2355 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2356 = charat2355 == 42.0000000000;
    double binop2357 = binop2354 || binop2356;
    double binop2358 = binop2352 && binop2357;
    if (binop2351) {
    double binop2359 = pos + 3.0000000000;
        cases2344 = binop2359;
    } else if (binop2358) {
    double binop2360 = pos + 2.0000000000;
        cases2344 = binop2360;
    } else if (1.0000000000) {
    double binop2361 = src_len + 1.0000000000;
        cases2344 = binop2361;
    } else { cases2344 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2326] = 0.0000000000;
    tokens[(int)binop2322] = 0.0000000000;
    tokens[(int)binop2304] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2362 = 41.0000000000 - 1.0000000000;
    double binop2363 = binop2362 * 3.0000000000;
    double cases2364;
    double binop2365 = pos < src_len;
    double charat2366 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2367 = charat2366 >= 48.0000000000;
    double charat2368 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2369 = charat2368 <= 57.0000000000;
    double binop2370 = binop2367 && binop2369;
    double binop2371 = binop2365 && binop2370;
    double binop2372 = pos < src_len;
    double charat2373 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2374 = charat2373 == 43.0000000000;
    double binop2375 = binop2372 && binop2374;
    double binop2376 = pos < src_len;
    double charat2377 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2378 = charat2377 == 42.0000000000;
    double binop2379 = binop2376 && binop2378;
    if (binop2371) {
        cases2364 = TOK_NUMBER;
    } else if (binop2375) {
        cases2364 = TOK_PLUS;
    } else if (binop2379) {
        cases2364 = TOK_MUL;
    } else if (1.0000000000) {
        cases2364 = 0.0000000000;
    } else { cases2364 = 0.0; }
    double binop2380 = 41.0000000000 - 1.0000000000;
    double binop2381 = binop2380 * 0.0000000000;
    double cases2382;
    double binop2383 = pos < src_len;
    if (binop2383) {
        cases2382 = pos;
    } else if (1.0000000000) {
        cases2382 = 0.0000000000;
    } else { cases2382 = 0.0; }
    double binop2384 = 41.0000000000 - 1.0000000000;
    double binop2385 = binop2384 * 0.0000000000;
    double cases2386;
    double binop2387 = pos < src_len;
    double charat2388 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2389 = charat2388 >= 48.0000000000;
    double charat2390 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2391 = charat2390 <= 57.0000000000;
    double binop2392 = binop2389 && binop2391;
    double binop2393 = binop2387 && binop2392;
    double binop2394 = pos < src_len;
    double charat2395 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2396 = charat2395 == 43.0000000000;
    double charat2397 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2398 = charat2397 == 42.0000000000;
    double binop2399 = binop2396 || binop2398;
    double binop2400 = binop2394 && binop2399;
    if (binop2393) {
    double binop2401 = pos + 2.0000000000;
        cases2386 = binop2401;
    } else if (binop2400) {
    double binop2402 = pos + 1.0000000000;
        cases2386 = binop2402;
    } else if (1.0000000000) {
        cases2386 = 0.0000000000;
    } else { cases2386 = 0.0; }
    double cases2403;
    double binop2404 = pos < src_len;
    double charat2405 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2406 = charat2405 >= 48.0000000000;
    double charat2407 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2408 = charat2407 <= 57.0000000000;
    double binop2409 = binop2406 && binop2408;
    double binop2410 = binop2404 && binop2409;
    double binop2411 = pos < src_len;
    double charat2412 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2413 = charat2412 == 43.0000000000;
    double charat2414 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2415 = charat2414 == 42.0000000000;
    double binop2416 = binop2413 || binop2415;
    double binop2417 = binop2411 && binop2416;
    if (binop2410) {
    double binop2418 = pos + 3.0000000000;
        cases2403 = binop2418;
    } else if (binop2417) {
    double binop2419 = pos + 2.0000000000;
        cases2403 = binop2419;
    } else if (1.0000000000) {
    double binop2420 = src_len + 1.0000000000;
        cases2403 = binop2420;
    } else { cases2403 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2385] = 0.0000000000;
    tokens[(int)binop2381] = 0.0000000000;
    tokens[(int)binop2363] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2421 = 42.0000000000 - 1.0000000000;
    double binop2422 = binop2421 * 3.0000000000;
    double cases2423;
    double binop2424 = pos < src_len;
    double charat2425 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2426 = charat2425 >= 48.0000000000;
    double charat2427 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2428 = charat2427 <= 57.0000000000;
    double binop2429 = binop2426 && binop2428;
    double binop2430 = binop2424 && binop2429;
    double binop2431 = pos < src_len;
    double charat2432 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2433 = charat2432 == 43.0000000000;
    double binop2434 = binop2431 && binop2433;
    double binop2435 = pos < src_len;
    double charat2436 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2437 = charat2436 == 42.0000000000;
    double binop2438 = binop2435 && binop2437;
    if (binop2430) {
        cases2423 = TOK_NUMBER;
    } else if (binop2434) {
        cases2423 = TOK_PLUS;
    } else if (binop2438) {
        cases2423 = TOK_MUL;
    } else if (1.0000000000) {
        cases2423 = 0.0000000000;
    } else { cases2423 = 0.0; }
    double binop2439 = 42.0000000000 - 1.0000000000;
    double binop2440 = binop2439 * 0.0000000000;
    double cases2441;
    double binop2442 = pos < src_len;
    if (binop2442) {
        cases2441 = pos;
    } else if (1.0000000000) {
        cases2441 = 0.0000000000;
    } else { cases2441 = 0.0; }
    double binop2443 = 42.0000000000 - 1.0000000000;
    double binop2444 = binop2443 * 0.0000000000;
    double cases2445;
    double binop2446 = pos < src_len;
    double charat2447 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2448 = charat2447 >= 48.0000000000;
    double charat2449 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2450 = charat2449 <= 57.0000000000;
    double binop2451 = binop2448 && binop2450;
    double binop2452 = binop2446 && binop2451;
    double binop2453 = pos < src_len;
    double charat2454 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2455 = charat2454 == 43.0000000000;
    double charat2456 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2457 = charat2456 == 42.0000000000;
    double binop2458 = binop2455 || binop2457;
    double binop2459 = binop2453 && binop2458;
    if (binop2452) {
    double binop2460 = pos + 2.0000000000;
        cases2445 = binop2460;
    } else if (binop2459) {
    double binop2461 = pos + 1.0000000000;
        cases2445 = binop2461;
    } else if (1.0000000000) {
        cases2445 = 0.0000000000;
    } else { cases2445 = 0.0; }
    double cases2462;
    double binop2463 = pos < src_len;
    double charat2464 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2465 = charat2464 >= 48.0000000000;
    double charat2466 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2467 = charat2466 <= 57.0000000000;
    double binop2468 = binop2465 && binop2467;
    double binop2469 = binop2463 && binop2468;
    double binop2470 = pos < src_len;
    double charat2471 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2472 = charat2471 == 43.0000000000;
    double charat2473 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2474 = charat2473 == 42.0000000000;
    double binop2475 = binop2472 || binop2474;
    double binop2476 = binop2470 && binop2475;
    if (binop2469) {
    double binop2477 = pos + 3.0000000000;
        cases2462 = binop2477;
    } else if (binop2476) {
    double binop2478 = pos + 2.0000000000;
        cases2462 = binop2478;
    } else if (1.0000000000) {
    double binop2479 = src_len + 1.0000000000;
        cases2462 = binop2479;
    } else { cases2462 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2444] = 0.0000000000;
    tokens[(int)binop2440] = 0.0000000000;
    tokens[(int)binop2422] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2480 = 43.0000000000 - 1.0000000000;
    double binop2481 = binop2480 * 3.0000000000;
    double cases2482;
    double binop2483 = pos < src_len;
    double charat2484 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2485 = charat2484 >= 48.0000000000;
    double charat2486 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2487 = charat2486 <= 57.0000000000;
    double binop2488 = binop2485 && binop2487;
    double binop2489 = binop2483 && binop2488;
    double binop2490 = pos < src_len;
    double charat2491 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2492 = charat2491 == 43.0000000000;
    double binop2493 = binop2490 && binop2492;
    double binop2494 = pos < src_len;
    double charat2495 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2496 = charat2495 == 42.0000000000;
    double binop2497 = binop2494 && binop2496;
    if (binop2489) {
        cases2482 = TOK_NUMBER;
    } else if (binop2493) {
        cases2482 = TOK_PLUS;
    } else if (binop2497) {
        cases2482 = TOK_MUL;
    } else if (1.0000000000) {
        cases2482 = 0.0000000000;
    } else { cases2482 = 0.0; }
    double binop2498 = 43.0000000000 - 1.0000000000;
    double binop2499 = binop2498 * 0.0000000000;
    double cases2500;
    double binop2501 = pos < src_len;
    if (binop2501) {
        cases2500 = pos;
    } else if (1.0000000000) {
        cases2500 = 0.0000000000;
    } else { cases2500 = 0.0; }
    double binop2502 = 43.0000000000 - 1.0000000000;
    double binop2503 = binop2502 * 0.0000000000;
    double cases2504;
    double binop2505 = pos < src_len;
    double charat2506 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2507 = charat2506 >= 48.0000000000;
    double charat2508 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2509 = charat2508 <= 57.0000000000;
    double binop2510 = binop2507 && binop2509;
    double binop2511 = binop2505 && binop2510;
    double binop2512 = pos < src_len;
    double charat2513 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2514 = charat2513 == 43.0000000000;
    double charat2515 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2516 = charat2515 == 42.0000000000;
    double binop2517 = binop2514 || binop2516;
    double binop2518 = binop2512 && binop2517;
    if (binop2511) {
    double binop2519 = pos + 2.0000000000;
        cases2504 = binop2519;
    } else if (binop2518) {
    double binop2520 = pos + 1.0000000000;
        cases2504 = binop2520;
    } else if (1.0000000000) {
        cases2504 = 0.0000000000;
    } else { cases2504 = 0.0; }
    double cases2521;
    double binop2522 = pos < src_len;
    double charat2523 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2524 = charat2523 >= 48.0000000000;
    double charat2525 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2526 = charat2525 <= 57.0000000000;
    double binop2527 = binop2524 && binop2526;
    double binop2528 = binop2522 && binop2527;
    double binop2529 = pos < src_len;
    double charat2530 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2531 = charat2530 == 43.0000000000;
    double charat2532 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2533 = charat2532 == 42.0000000000;
    double binop2534 = binop2531 || binop2533;
    double binop2535 = binop2529 && binop2534;
    if (binop2528) {
    double binop2536 = pos + 3.0000000000;
        cases2521 = binop2536;
    } else if (binop2535) {
    double binop2537 = pos + 2.0000000000;
        cases2521 = binop2537;
    } else if (1.0000000000) {
    double binop2538 = src_len + 1.0000000000;
        cases2521 = binop2538;
    } else { cases2521 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2503] = 0.0000000000;
    tokens[(int)binop2499] = 0.0000000000;
    tokens[(int)binop2481] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2539 = 44.0000000000 - 1.0000000000;
    double binop2540 = binop2539 * 3.0000000000;
    double cases2541;
    double binop2542 = pos < src_len;
    double charat2543 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2544 = charat2543 >= 48.0000000000;
    double charat2545 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2546 = charat2545 <= 57.0000000000;
    double binop2547 = binop2544 && binop2546;
    double binop2548 = binop2542 && binop2547;
    double binop2549 = pos < src_len;
    double charat2550 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2551 = charat2550 == 43.0000000000;
    double binop2552 = binop2549 && binop2551;
    double binop2553 = pos < src_len;
    double charat2554 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2555 = charat2554 == 42.0000000000;
    double binop2556 = binop2553 && binop2555;
    if (binop2548) {
        cases2541 = TOK_NUMBER;
    } else if (binop2552) {
        cases2541 = TOK_PLUS;
    } else if (binop2556) {
        cases2541 = TOK_MUL;
    } else if (1.0000000000) {
        cases2541 = 0.0000000000;
    } else { cases2541 = 0.0; }
    double binop2557 = 44.0000000000 - 1.0000000000;
    double binop2558 = binop2557 * 0.0000000000;
    double cases2559;
    double binop2560 = pos < src_len;
    if (binop2560) {
        cases2559 = pos;
    } else if (1.0000000000) {
        cases2559 = 0.0000000000;
    } else { cases2559 = 0.0; }
    double binop2561 = 44.0000000000 - 1.0000000000;
    double binop2562 = binop2561 * 0.0000000000;
    double cases2563;
    double binop2564 = pos < src_len;
    double charat2565 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2566 = charat2565 >= 48.0000000000;
    double charat2567 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2568 = charat2567 <= 57.0000000000;
    double binop2569 = binop2566 && binop2568;
    double binop2570 = binop2564 && binop2569;
    double binop2571 = pos < src_len;
    double charat2572 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2573 = charat2572 == 43.0000000000;
    double charat2574 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2575 = charat2574 == 42.0000000000;
    double binop2576 = binop2573 || binop2575;
    double binop2577 = binop2571 && binop2576;
    if (binop2570) {
    double binop2578 = pos + 2.0000000000;
        cases2563 = binop2578;
    } else if (binop2577) {
    double binop2579 = pos + 1.0000000000;
        cases2563 = binop2579;
    } else if (1.0000000000) {
        cases2563 = 0.0000000000;
    } else { cases2563 = 0.0; }
    double cases2580;
    double binop2581 = pos < src_len;
    double charat2582 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2583 = charat2582 >= 48.0000000000;
    double charat2584 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2585 = charat2584 <= 57.0000000000;
    double binop2586 = binop2583 && binop2585;
    double binop2587 = binop2581 && binop2586;
    double binop2588 = pos < src_len;
    double charat2589 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2590 = charat2589 == 43.0000000000;
    double charat2591 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2592 = charat2591 == 42.0000000000;
    double binop2593 = binop2590 || binop2592;
    double binop2594 = binop2588 && binop2593;
    if (binop2587) {
    double binop2595 = pos + 3.0000000000;
        cases2580 = binop2595;
    } else if (binop2594) {
    double binop2596 = pos + 2.0000000000;
        cases2580 = binop2596;
    } else if (1.0000000000) {
    double binop2597 = src_len + 1.0000000000;
        cases2580 = binop2597;
    } else { cases2580 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2562] = 0.0000000000;
    tokens[(int)binop2558] = 0.0000000000;
    tokens[(int)binop2540] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2598 = 45.0000000000 - 1.0000000000;
    double binop2599 = binop2598 * 3.0000000000;
    double cases2600;
    double binop2601 = pos < src_len;
    double charat2602 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2603 = charat2602 >= 48.0000000000;
    double charat2604 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2605 = charat2604 <= 57.0000000000;
    double binop2606 = binop2603 && binop2605;
    double binop2607 = binop2601 && binop2606;
    double binop2608 = pos < src_len;
    double charat2609 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2610 = charat2609 == 43.0000000000;
    double binop2611 = binop2608 && binop2610;
    double binop2612 = pos < src_len;
    double charat2613 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2614 = charat2613 == 42.0000000000;
    double binop2615 = binop2612 && binop2614;
    if (binop2607) {
        cases2600 = TOK_NUMBER;
    } else if (binop2611) {
        cases2600 = TOK_PLUS;
    } else if (binop2615) {
        cases2600 = TOK_MUL;
    } else if (1.0000000000) {
        cases2600 = 0.0000000000;
    } else { cases2600 = 0.0; }
    double binop2616 = 45.0000000000 - 1.0000000000;
    double binop2617 = binop2616 * 0.0000000000;
    double cases2618;
    double binop2619 = pos < src_len;
    if (binop2619) {
        cases2618 = pos;
    } else if (1.0000000000) {
        cases2618 = 0.0000000000;
    } else { cases2618 = 0.0; }
    double binop2620 = 45.0000000000 - 1.0000000000;
    double binop2621 = binop2620 * 0.0000000000;
    double cases2622;
    double binop2623 = pos < src_len;
    double charat2624 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2625 = charat2624 >= 48.0000000000;
    double charat2626 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2627 = charat2626 <= 57.0000000000;
    double binop2628 = binop2625 && binop2627;
    double binop2629 = binop2623 && binop2628;
    double binop2630 = pos < src_len;
    double charat2631 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2632 = charat2631 == 43.0000000000;
    double charat2633 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2634 = charat2633 == 42.0000000000;
    double binop2635 = binop2632 || binop2634;
    double binop2636 = binop2630 && binop2635;
    if (binop2629) {
    double binop2637 = pos + 2.0000000000;
        cases2622 = binop2637;
    } else if (binop2636) {
    double binop2638 = pos + 1.0000000000;
        cases2622 = binop2638;
    } else if (1.0000000000) {
        cases2622 = 0.0000000000;
    } else { cases2622 = 0.0; }
    double cases2639;
    double binop2640 = pos < src_len;
    double charat2641 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2642 = charat2641 >= 48.0000000000;
    double charat2643 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2644 = charat2643 <= 57.0000000000;
    double binop2645 = binop2642 && binop2644;
    double binop2646 = binop2640 && binop2645;
    double binop2647 = pos < src_len;
    double charat2648 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2649 = charat2648 == 43.0000000000;
    double charat2650 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2651 = charat2650 == 42.0000000000;
    double binop2652 = binop2649 || binop2651;
    double binop2653 = binop2647 && binop2652;
    if (binop2646) {
    double binop2654 = pos + 3.0000000000;
        cases2639 = binop2654;
    } else if (binop2653) {
    double binop2655 = pos + 2.0000000000;
        cases2639 = binop2655;
    } else if (1.0000000000) {
    double binop2656 = src_len + 1.0000000000;
        cases2639 = binop2656;
    } else { cases2639 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2621] = 0.0000000000;
    tokens[(int)binop2617] = 0.0000000000;
    tokens[(int)binop2599] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2657 = 46.0000000000 - 1.0000000000;
    double binop2658 = binop2657 * 3.0000000000;
    double cases2659;
    double binop2660 = pos < src_len;
    double charat2661 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2662 = charat2661 >= 48.0000000000;
    double charat2663 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2664 = charat2663 <= 57.0000000000;
    double binop2665 = binop2662 && binop2664;
    double binop2666 = binop2660 && binop2665;
    double binop2667 = pos < src_len;
    double charat2668 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2669 = charat2668 == 43.0000000000;
    double binop2670 = binop2667 && binop2669;
    double binop2671 = pos < src_len;
    double charat2672 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2673 = charat2672 == 42.0000000000;
    double binop2674 = binop2671 && binop2673;
    if (binop2666) {
        cases2659 = TOK_NUMBER;
    } else if (binop2670) {
        cases2659 = TOK_PLUS;
    } else if (binop2674) {
        cases2659 = TOK_MUL;
    } else if (1.0000000000) {
        cases2659 = 0.0000000000;
    } else { cases2659 = 0.0; }
    double binop2675 = 46.0000000000 - 1.0000000000;
    double binop2676 = binop2675 * 0.0000000000;
    double cases2677;
    double binop2678 = pos < src_len;
    if (binop2678) {
        cases2677 = pos;
    } else if (1.0000000000) {
        cases2677 = 0.0000000000;
    } else { cases2677 = 0.0; }
    double binop2679 = 46.0000000000 - 1.0000000000;
    double binop2680 = binop2679 * 0.0000000000;
    double cases2681;
    double binop2682 = pos < src_len;
    double charat2683 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2684 = charat2683 >= 48.0000000000;
    double charat2685 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2686 = charat2685 <= 57.0000000000;
    double binop2687 = binop2684 && binop2686;
    double binop2688 = binop2682 && binop2687;
    double binop2689 = pos < src_len;
    double charat2690 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2691 = charat2690 == 43.0000000000;
    double charat2692 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2693 = charat2692 == 42.0000000000;
    double binop2694 = binop2691 || binop2693;
    double binop2695 = binop2689 && binop2694;
    if (binop2688) {
    double binop2696 = pos + 2.0000000000;
        cases2681 = binop2696;
    } else if (binop2695) {
    double binop2697 = pos + 1.0000000000;
        cases2681 = binop2697;
    } else if (1.0000000000) {
        cases2681 = 0.0000000000;
    } else { cases2681 = 0.0; }
    double cases2698;
    double binop2699 = pos < src_len;
    double charat2700 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2701 = charat2700 >= 48.0000000000;
    double charat2702 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2703 = charat2702 <= 57.0000000000;
    double binop2704 = binop2701 && binop2703;
    double binop2705 = binop2699 && binop2704;
    double binop2706 = pos < src_len;
    double charat2707 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2708 = charat2707 == 43.0000000000;
    double charat2709 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2710 = charat2709 == 42.0000000000;
    double binop2711 = binop2708 || binop2710;
    double binop2712 = binop2706 && binop2711;
    if (binop2705) {
    double binop2713 = pos + 3.0000000000;
        cases2698 = binop2713;
    } else if (binop2712) {
    double binop2714 = pos + 2.0000000000;
        cases2698 = binop2714;
    } else if (1.0000000000) {
    double binop2715 = src_len + 1.0000000000;
        cases2698 = binop2715;
    } else { cases2698 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2680] = 0.0000000000;
    tokens[(int)binop2676] = 0.0000000000;
    tokens[(int)binop2658] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2716 = 47.0000000000 - 1.0000000000;
    double binop2717 = binop2716 * 3.0000000000;
    double cases2718;
    double binop2719 = pos < src_len;
    double charat2720 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2721 = charat2720 >= 48.0000000000;
    double charat2722 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2723 = charat2722 <= 57.0000000000;
    double binop2724 = binop2721 && binop2723;
    double binop2725 = binop2719 && binop2724;
    double binop2726 = pos < src_len;
    double charat2727 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2728 = charat2727 == 43.0000000000;
    double binop2729 = binop2726 && binop2728;
    double binop2730 = pos < src_len;
    double charat2731 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2732 = charat2731 == 42.0000000000;
    double binop2733 = binop2730 && binop2732;
    if (binop2725) {
        cases2718 = TOK_NUMBER;
    } else if (binop2729) {
        cases2718 = TOK_PLUS;
    } else if (binop2733) {
        cases2718 = TOK_MUL;
    } else if (1.0000000000) {
        cases2718 = 0.0000000000;
    } else { cases2718 = 0.0; }
    double binop2734 = 47.0000000000 - 1.0000000000;
    double binop2735 = binop2734 * 0.0000000000;
    double cases2736;
    double binop2737 = pos < src_len;
    if (binop2737) {
        cases2736 = pos;
    } else if (1.0000000000) {
        cases2736 = 0.0000000000;
    } else { cases2736 = 0.0; }
    double binop2738 = 47.0000000000 - 1.0000000000;
    double binop2739 = binop2738 * 0.0000000000;
    double cases2740;
    double binop2741 = pos < src_len;
    double charat2742 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2743 = charat2742 >= 48.0000000000;
    double charat2744 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2745 = charat2744 <= 57.0000000000;
    double binop2746 = binop2743 && binop2745;
    double binop2747 = binop2741 && binop2746;
    double binop2748 = pos < src_len;
    double charat2749 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2750 = charat2749 == 43.0000000000;
    double charat2751 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2752 = charat2751 == 42.0000000000;
    double binop2753 = binop2750 || binop2752;
    double binop2754 = binop2748 && binop2753;
    if (binop2747) {
    double binop2755 = pos + 2.0000000000;
        cases2740 = binop2755;
    } else if (binop2754) {
    double binop2756 = pos + 1.0000000000;
        cases2740 = binop2756;
    } else if (1.0000000000) {
        cases2740 = 0.0000000000;
    } else { cases2740 = 0.0; }
    double cases2757;
    double binop2758 = pos < src_len;
    double charat2759 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2760 = charat2759 >= 48.0000000000;
    double charat2761 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2762 = charat2761 <= 57.0000000000;
    double binop2763 = binop2760 && binop2762;
    double binop2764 = binop2758 && binop2763;
    double binop2765 = pos < src_len;
    double charat2766 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2767 = charat2766 == 43.0000000000;
    double charat2768 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2769 = charat2768 == 42.0000000000;
    double binop2770 = binop2767 || binop2769;
    double binop2771 = binop2765 && binop2770;
    if (binop2764) {
    double binop2772 = pos + 3.0000000000;
        cases2757 = binop2772;
    } else if (binop2771) {
    double binop2773 = pos + 2.0000000000;
        cases2757 = binop2773;
    } else if (1.0000000000) {
    double binop2774 = src_len + 1.0000000000;
        cases2757 = binop2774;
    } else { cases2757 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2739] = 0.0000000000;
    tokens[(int)binop2735] = 0.0000000000;
    tokens[(int)binop2717] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2775 = 48.0000000000 - 1.0000000000;
    double binop2776 = binop2775 * 3.0000000000;
    double cases2777;
    double binop2778 = pos < src_len;
    double charat2779 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2780 = charat2779 >= 48.0000000000;
    double charat2781 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2782 = charat2781 <= 57.0000000000;
    double binop2783 = binop2780 && binop2782;
    double binop2784 = binop2778 && binop2783;
    double binop2785 = pos < src_len;
    double charat2786 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2787 = charat2786 == 43.0000000000;
    double binop2788 = binop2785 && binop2787;
    double binop2789 = pos < src_len;
    double charat2790 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2791 = charat2790 == 42.0000000000;
    double binop2792 = binop2789 && binop2791;
    if (binop2784) {
        cases2777 = TOK_NUMBER;
    } else if (binop2788) {
        cases2777 = TOK_PLUS;
    } else if (binop2792) {
        cases2777 = TOK_MUL;
    } else if (1.0000000000) {
        cases2777 = 0.0000000000;
    } else { cases2777 = 0.0; }
    double binop2793 = 48.0000000000 - 1.0000000000;
    double binop2794 = binop2793 * 0.0000000000;
    double cases2795;
    double binop2796 = pos < src_len;
    if (binop2796) {
        cases2795 = pos;
    } else if (1.0000000000) {
        cases2795 = 0.0000000000;
    } else { cases2795 = 0.0; }
    double binop2797 = 48.0000000000 - 1.0000000000;
    double binop2798 = binop2797 * 0.0000000000;
    double cases2799;
    double binop2800 = pos < src_len;
    double charat2801 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2802 = charat2801 >= 48.0000000000;
    double charat2803 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2804 = charat2803 <= 57.0000000000;
    double binop2805 = binop2802 && binop2804;
    double binop2806 = binop2800 && binop2805;
    double binop2807 = pos < src_len;
    double charat2808 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2809 = charat2808 == 43.0000000000;
    double charat2810 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2811 = charat2810 == 42.0000000000;
    double binop2812 = binop2809 || binop2811;
    double binop2813 = binop2807 && binop2812;
    if (binop2806) {
    double binop2814 = pos + 2.0000000000;
        cases2799 = binop2814;
    } else if (binop2813) {
    double binop2815 = pos + 1.0000000000;
        cases2799 = binop2815;
    } else if (1.0000000000) {
        cases2799 = 0.0000000000;
    } else { cases2799 = 0.0; }
    double cases2816;
    double binop2817 = pos < src_len;
    double charat2818 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2819 = charat2818 >= 48.0000000000;
    double charat2820 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2821 = charat2820 <= 57.0000000000;
    double binop2822 = binop2819 && binop2821;
    double binop2823 = binop2817 && binop2822;
    double binop2824 = pos < src_len;
    double charat2825 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2826 = charat2825 == 43.0000000000;
    double charat2827 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2828 = charat2827 == 42.0000000000;
    double binop2829 = binop2826 || binop2828;
    double binop2830 = binop2824 && binop2829;
    if (binop2823) {
    double binop2831 = pos + 3.0000000000;
        cases2816 = binop2831;
    } else if (binop2830) {
    double binop2832 = pos + 2.0000000000;
        cases2816 = binop2832;
    } else if (1.0000000000) {
    double binop2833 = src_len + 1.0000000000;
        cases2816 = binop2833;
    } else { cases2816 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2798] = 0.0000000000;
    tokens[(int)binop2794] = 0.0000000000;
    tokens[(int)binop2776] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2834 = 49.0000000000 - 1.0000000000;
    double binop2835 = binop2834 * 3.0000000000;
    double cases2836;
    double binop2837 = pos < src_len;
    double charat2838 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2839 = charat2838 >= 48.0000000000;
    double charat2840 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2841 = charat2840 <= 57.0000000000;
    double binop2842 = binop2839 && binop2841;
    double binop2843 = binop2837 && binop2842;
    double binop2844 = pos < src_len;
    double charat2845 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2846 = charat2845 == 43.0000000000;
    double binop2847 = binop2844 && binop2846;
    double binop2848 = pos < src_len;
    double charat2849 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2850 = charat2849 == 42.0000000000;
    double binop2851 = binop2848 && binop2850;
    if (binop2843) {
        cases2836 = TOK_NUMBER;
    } else if (binop2847) {
        cases2836 = TOK_PLUS;
    } else if (binop2851) {
        cases2836 = TOK_MUL;
    } else if (1.0000000000) {
        cases2836 = 0.0000000000;
    } else { cases2836 = 0.0; }
    double binop2852 = 49.0000000000 - 1.0000000000;
    double binop2853 = binop2852 * 0.0000000000;
    double cases2854;
    double binop2855 = pos < src_len;
    if (binop2855) {
        cases2854 = pos;
    } else if (1.0000000000) {
        cases2854 = 0.0000000000;
    } else { cases2854 = 0.0; }
    double binop2856 = 49.0000000000 - 1.0000000000;
    double binop2857 = binop2856 * 0.0000000000;
    double cases2858;
    double binop2859 = pos < src_len;
    double charat2860 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2861 = charat2860 >= 48.0000000000;
    double charat2862 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2863 = charat2862 <= 57.0000000000;
    double binop2864 = binop2861 && binop2863;
    double binop2865 = binop2859 && binop2864;
    double binop2866 = pos < src_len;
    double charat2867 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2868 = charat2867 == 43.0000000000;
    double charat2869 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2870 = charat2869 == 42.0000000000;
    double binop2871 = binop2868 || binop2870;
    double binop2872 = binop2866 && binop2871;
    if (binop2865) {
    double binop2873 = pos + 2.0000000000;
        cases2858 = binop2873;
    } else if (binop2872) {
    double binop2874 = pos + 1.0000000000;
        cases2858 = binop2874;
    } else if (1.0000000000) {
        cases2858 = 0.0000000000;
    } else { cases2858 = 0.0; }
    double cases2875;
    double binop2876 = pos < src_len;
    double charat2877 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2878 = charat2877 >= 48.0000000000;
    double charat2879 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2880 = charat2879 <= 57.0000000000;
    double binop2881 = binop2878 && binop2880;
    double binop2882 = binop2876 && binop2881;
    double binop2883 = pos < src_len;
    double charat2884 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2885 = charat2884 == 43.0000000000;
    double charat2886 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2887 = charat2886 == 42.0000000000;
    double binop2888 = binop2885 || binop2887;
    double binop2889 = binop2883 && binop2888;
    if (binop2882) {
    double binop2890 = pos + 3.0000000000;
        cases2875 = binop2890;
    } else if (binop2889) {
    double binop2891 = pos + 2.0000000000;
        cases2875 = binop2891;
    } else if (1.0000000000) {
    double binop2892 = src_len + 1.0000000000;
        cases2875 = binop2892;
    } else { cases2875 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2857] = 0.0000000000;
    tokens[(int)binop2853] = 0.0000000000;
    tokens[(int)binop2835] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2893 = 50.0000000000 - 1.0000000000;
    double binop2894 = binop2893 * 3.0000000000;
    double cases2895;
    double binop2896 = pos < src_len;
    double charat2897 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2898 = charat2897 >= 48.0000000000;
    double charat2899 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2900 = charat2899 <= 57.0000000000;
    double binop2901 = binop2898 && binop2900;
    double binop2902 = binop2896 && binop2901;
    double binop2903 = pos < src_len;
    double charat2904 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2905 = charat2904 == 43.0000000000;
    double binop2906 = binop2903 && binop2905;
    double binop2907 = pos < src_len;
    double charat2908 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2909 = charat2908 == 42.0000000000;
    double binop2910 = binop2907 && binop2909;
    if (binop2902) {
        cases2895 = TOK_NUMBER;
    } else if (binop2906) {
        cases2895 = TOK_PLUS;
    } else if (binop2910) {
        cases2895 = TOK_MUL;
    } else if (1.0000000000) {
        cases2895 = 0.0000000000;
    } else { cases2895 = 0.0; }
    double binop2911 = 50.0000000000 - 1.0000000000;
    double binop2912 = binop2911 * 0.0000000000;
    double cases2913;
    double binop2914 = pos < src_len;
    if (binop2914) {
        cases2913 = pos;
    } else if (1.0000000000) {
        cases2913 = 0.0000000000;
    } else { cases2913 = 0.0; }
    double binop2915 = 50.0000000000 - 1.0000000000;
    double binop2916 = binop2915 * 0.0000000000;
    double cases2917;
    double binop2918 = pos < src_len;
    double charat2919 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2920 = charat2919 >= 48.0000000000;
    double charat2921 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2922 = charat2921 <= 57.0000000000;
    double binop2923 = binop2920 && binop2922;
    double binop2924 = binop2918 && binop2923;
    double binop2925 = pos < src_len;
    double charat2926 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2927 = charat2926 == 43.0000000000;
    double charat2928 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2929 = charat2928 == 42.0000000000;
    double binop2930 = binop2927 || binop2929;
    double binop2931 = binop2925 && binop2930;
    if (binop2924) {
    double binop2932 = pos + 2.0000000000;
        cases2917 = binop2932;
    } else if (binop2931) {
    double binop2933 = pos + 1.0000000000;
        cases2917 = binop2933;
    } else if (1.0000000000) {
        cases2917 = 0.0000000000;
    } else { cases2917 = 0.0; }
    double cases2934;
    double binop2935 = pos < src_len;
    double charat2936 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2937 = charat2936 >= 48.0000000000;
    double charat2938 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2939 = charat2938 <= 57.0000000000;
    double binop2940 = binop2937 && binop2939;
    double binop2941 = binop2935 && binop2940;
    double binop2942 = pos < src_len;
    double charat2943 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2944 = charat2943 == 43.0000000000;
    double charat2945 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2946 = charat2945 == 42.0000000000;
    double binop2947 = binop2944 || binop2946;
    double binop2948 = binop2942 && binop2947;
    if (binop2941) {
    double binop2949 = pos + 3.0000000000;
        cases2934 = binop2949;
    } else if (binop2948) {
    double binop2950 = pos + 2.0000000000;
        cases2934 = binop2950;
    } else if (1.0000000000) {
    double binop2951 = src_len + 1.0000000000;
        cases2934 = binop2951;
    } else { cases2934 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2916] = 0.0000000000;
    tokens[(int)binop2912] = 0.0000000000;
    tokens[(int)binop2894] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop2952 = 51.0000000000 - 1.0000000000;
    double binop2953 = binop2952 * 3.0000000000;
    double cases2954;
    double binop2955 = pos < src_len;
    double charat2956 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2957 = charat2956 >= 48.0000000000;
    double charat2958 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2959 = charat2958 <= 57.0000000000;
    double binop2960 = binop2957 && binop2959;
    double binop2961 = binop2955 && binop2960;
    double binop2962 = pos < src_len;
    double charat2963 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2964 = charat2963 == 43.0000000000;
    double binop2965 = binop2962 && binop2964;
    double binop2966 = pos < src_len;
    double charat2967 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2968 = charat2967 == 42.0000000000;
    double binop2969 = binop2966 && binop2968;
    if (binop2961) {
        cases2954 = TOK_NUMBER;
    } else if (binop2965) {
        cases2954 = TOK_PLUS;
    } else if (binop2969) {
        cases2954 = TOK_MUL;
    } else if (1.0000000000) {
        cases2954 = 0.0000000000;
    } else { cases2954 = 0.0; }
    double binop2970 = 51.0000000000 - 1.0000000000;
    double binop2971 = binop2970 * 0.0000000000;
    double cases2972;
    double binop2973 = pos < src_len;
    if (binop2973) {
        cases2972 = pos;
    } else if (1.0000000000) {
        cases2972 = 0.0000000000;
    } else { cases2972 = 0.0; }
    double binop2974 = 51.0000000000 - 1.0000000000;
    double binop2975 = binop2974 * 0.0000000000;
    double cases2976;
    double binop2977 = pos < src_len;
    double charat2978 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2979 = charat2978 >= 48.0000000000;
    double charat2980 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2981 = charat2980 <= 57.0000000000;
    double binop2982 = binop2979 && binop2981;
    double binop2983 = binop2977 && binop2982;
    double binop2984 = pos < src_len;
    double charat2985 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2986 = charat2985 == 43.0000000000;
    double charat2987 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2988 = charat2987 == 42.0000000000;
    double binop2989 = binop2986 || binop2988;
    double binop2990 = binop2984 && binop2989;
    if (binop2983) {
    double binop2991 = pos + 2.0000000000;
        cases2976 = binop2991;
    } else if (binop2990) {
    double binop2992 = pos + 1.0000000000;
        cases2976 = binop2992;
    } else if (1.0000000000) {
        cases2976 = 0.0000000000;
    } else { cases2976 = 0.0; }
    double cases2993;
    double binop2994 = pos < src_len;
    double charat2995 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2996 = charat2995 >= 48.0000000000;
    double charat2997 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop2998 = charat2997 <= 57.0000000000;
    double binop2999 = binop2996 && binop2998;
    double binop3000 = binop2994 && binop2999;
    double binop3001 = pos < src_len;
    double charat3002 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3003 = charat3002 == 43.0000000000;
    double charat3004 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3005 = charat3004 == 42.0000000000;
    double binop3006 = binop3003 || binop3005;
    double binop3007 = binop3001 && binop3006;
    if (binop3000) {
    double binop3008 = pos + 3.0000000000;
        cases2993 = binop3008;
    } else if (binop3007) {
    double binop3009 = pos + 2.0000000000;
        cases2993 = binop3009;
    } else if (1.0000000000) {
    double binop3010 = src_len + 1.0000000000;
        cases2993 = binop3010;
    } else { cases2993 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop2975] = 0.0000000000;
    tokens[(int)binop2971] = 0.0000000000;
    tokens[(int)binop2953] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3011 = 52.0000000000 - 1.0000000000;
    double binop3012 = binop3011 * 3.0000000000;
    double cases3013;
    double binop3014 = pos < src_len;
    double charat3015 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3016 = charat3015 >= 48.0000000000;
    double charat3017 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3018 = charat3017 <= 57.0000000000;
    double binop3019 = binop3016 && binop3018;
    double binop3020 = binop3014 && binop3019;
    double binop3021 = pos < src_len;
    double charat3022 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3023 = charat3022 == 43.0000000000;
    double binop3024 = binop3021 && binop3023;
    double binop3025 = pos < src_len;
    double charat3026 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3027 = charat3026 == 42.0000000000;
    double binop3028 = binop3025 && binop3027;
    if (binop3020) {
        cases3013 = TOK_NUMBER;
    } else if (binop3024) {
        cases3013 = TOK_PLUS;
    } else if (binop3028) {
        cases3013 = TOK_MUL;
    } else if (1.0000000000) {
        cases3013 = 0.0000000000;
    } else { cases3013 = 0.0; }
    double binop3029 = 52.0000000000 - 1.0000000000;
    double binop3030 = binop3029 * 0.0000000000;
    double cases3031;
    double binop3032 = pos < src_len;
    if (binop3032) {
        cases3031 = pos;
    } else if (1.0000000000) {
        cases3031 = 0.0000000000;
    } else { cases3031 = 0.0; }
    double binop3033 = 52.0000000000 - 1.0000000000;
    double binop3034 = binop3033 * 0.0000000000;
    double cases3035;
    double binop3036 = pos < src_len;
    double charat3037 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3038 = charat3037 >= 48.0000000000;
    double charat3039 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3040 = charat3039 <= 57.0000000000;
    double binop3041 = binop3038 && binop3040;
    double binop3042 = binop3036 && binop3041;
    double binop3043 = pos < src_len;
    double charat3044 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3045 = charat3044 == 43.0000000000;
    double charat3046 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3047 = charat3046 == 42.0000000000;
    double binop3048 = binop3045 || binop3047;
    double binop3049 = binop3043 && binop3048;
    if (binop3042) {
    double binop3050 = pos + 2.0000000000;
        cases3035 = binop3050;
    } else if (binop3049) {
    double binop3051 = pos + 1.0000000000;
        cases3035 = binop3051;
    } else if (1.0000000000) {
        cases3035 = 0.0000000000;
    } else { cases3035 = 0.0; }
    double cases3052;
    double binop3053 = pos < src_len;
    double charat3054 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3055 = charat3054 >= 48.0000000000;
    double charat3056 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3057 = charat3056 <= 57.0000000000;
    double binop3058 = binop3055 && binop3057;
    double binop3059 = binop3053 && binop3058;
    double binop3060 = pos < src_len;
    double charat3061 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3062 = charat3061 == 43.0000000000;
    double charat3063 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3064 = charat3063 == 42.0000000000;
    double binop3065 = binop3062 || binop3064;
    double binop3066 = binop3060 && binop3065;
    if (binop3059) {
    double binop3067 = pos + 3.0000000000;
        cases3052 = binop3067;
    } else if (binop3066) {
    double binop3068 = pos + 2.0000000000;
        cases3052 = binop3068;
    } else if (1.0000000000) {
    double binop3069 = src_len + 1.0000000000;
        cases3052 = binop3069;
    } else { cases3052 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3034] = 0.0000000000;
    tokens[(int)binop3030] = 0.0000000000;
    tokens[(int)binop3012] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3070 = 53.0000000000 - 1.0000000000;
    double binop3071 = binop3070 * 3.0000000000;
    double cases3072;
    double binop3073 = pos < src_len;
    double charat3074 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3075 = charat3074 >= 48.0000000000;
    double charat3076 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3077 = charat3076 <= 57.0000000000;
    double binop3078 = binop3075 && binop3077;
    double binop3079 = binop3073 && binop3078;
    double binop3080 = pos < src_len;
    double charat3081 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3082 = charat3081 == 43.0000000000;
    double binop3083 = binop3080 && binop3082;
    double binop3084 = pos < src_len;
    double charat3085 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3086 = charat3085 == 42.0000000000;
    double binop3087 = binop3084 && binop3086;
    if (binop3079) {
        cases3072 = TOK_NUMBER;
    } else if (binop3083) {
        cases3072 = TOK_PLUS;
    } else if (binop3087) {
        cases3072 = TOK_MUL;
    } else if (1.0000000000) {
        cases3072 = 0.0000000000;
    } else { cases3072 = 0.0; }
    double binop3088 = 53.0000000000 - 1.0000000000;
    double binop3089 = binop3088 * 0.0000000000;
    double cases3090;
    double binop3091 = pos < src_len;
    if (binop3091) {
        cases3090 = pos;
    } else if (1.0000000000) {
        cases3090 = 0.0000000000;
    } else { cases3090 = 0.0; }
    double binop3092 = 53.0000000000 - 1.0000000000;
    double binop3093 = binop3092 * 0.0000000000;
    double cases3094;
    double binop3095 = pos < src_len;
    double charat3096 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3097 = charat3096 >= 48.0000000000;
    double charat3098 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3099 = charat3098 <= 57.0000000000;
    double binop3100 = binop3097 && binop3099;
    double binop3101 = binop3095 && binop3100;
    double binop3102 = pos < src_len;
    double charat3103 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3104 = charat3103 == 43.0000000000;
    double charat3105 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3106 = charat3105 == 42.0000000000;
    double binop3107 = binop3104 || binop3106;
    double binop3108 = binop3102 && binop3107;
    if (binop3101) {
    double binop3109 = pos + 2.0000000000;
        cases3094 = binop3109;
    } else if (binop3108) {
    double binop3110 = pos + 1.0000000000;
        cases3094 = binop3110;
    } else if (1.0000000000) {
        cases3094 = 0.0000000000;
    } else { cases3094 = 0.0; }
    double cases3111;
    double binop3112 = pos < src_len;
    double charat3113 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3114 = charat3113 >= 48.0000000000;
    double charat3115 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3116 = charat3115 <= 57.0000000000;
    double binop3117 = binop3114 && binop3116;
    double binop3118 = binop3112 && binop3117;
    double binop3119 = pos < src_len;
    double charat3120 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3121 = charat3120 == 43.0000000000;
    double charat3122 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3123 = charat3122 == 42.0000000000;
    double binop3124 = binop3121 || binop3123;
    double binop3125 = binop3119 && binop3124;
    if (binop3118) {
    double binop3126 = pos + 3.0000000000;
        cases3111 = binop3126;
    } else if (binop3125) {
    double binop3127 = pos + 2.0000000000;
        cases3111 = binop3127;
    } else if (1.0000000000) {
    double binop3128 = src_len + 1.0000000000;
        cases3111 = binop3128;
    } else { cases3111 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3093] = 0.0000000000;
    tokens[(int)binop3089] = 0.0000000000;
    tokens[(int)binop3071] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3129 = 54.0000000000 - 1.0000000000;
    double binop3130 = binop3129 * 3.0000000000;
    double cases3131;
    double binop3132 = pos < src_len;
    double charat3133 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3134 = charat3133 >= 48.0000000000;
    double charat3135 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3136 = charat3135 <= 57.0000000000;
    double binop3137 = binop3134 && binop3136;
    double binop3138 = binop3132 && binop3137;
    double binop3139 = pos < src_len;
    double charat3140 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3141 = charat3140 == 43.0000000000;
    double binop3142 = binop3139 && binop3141;
    double binop3143 = pos < src_len;
    double charat3144 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3145 = charat3144 == 42.0000000000;
    double binop3146 = binop3143 && binop3145;
    if (binop3138) {
        cases3131 = TOK_NUMBER;
    } else if (binop3142) {
        cases3131 = TOK_PLUS;
    } else if (binop3146) {
        cases3131 = TOK_MUL;
    } else if (1.0000000000) {
        cases3131 = 0.0000000000;
    } else { cases3131 = 0.0; }
    double binop3147 = 54.0000000000 - 1.0000000000;
    double binop3148 = binop3147 * 0.0000000000;
    double cases3149;
    double binop3150 = pos < src_len;
    if (binop3150) {
        cases3149 = pos;
    } else if (1.0000000000) {
        cases3149 = 0.0000000000;
    } else { cases3149 = 0.0; }
    double binop3151 = 54.0000000000 - 1.0000000000;
    double binop3152 = binop3151 * 0.0000000000;
    double cases3153;
    double binop3154 = pos < src_len;
    double charat3155 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3156 = charat3155 >= 48.0000000000;
    double charat3157 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3158 = charat3157 <= 57.0000000000;
    double binop3159 = binop3156 && binop3158;
    double binop3160 = binop3154 && binop3159;
    double binop3161 = pos < src_len;
    double charat3162 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3163 = charat3162 == 43.0000000000;
    double charat3164 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3165 = charat3164 == 42.0000000000;
    double binop3166 = binop3163 || binop3165;
    double binop3167 = binop3161 && binop3166;
    if (binop3160) {
    double binop3168 = pos + 2.0000000000;
        cases3153 = binop3168;
    } else if (binop3167) {
    double binop3169 = pos + 1.0000000000;
        cases3153 = binop3169;
    } else if (1.0000000000) {
        cases3153 = 0.0000000000;
    } else { cases3153 = 0.0; }
    double cases3170;
    double binop3171 = pos < src_len;
    double charat3172 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3173 = charat3172 >= 48.0000000000;
    double charat3174 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3175 = charat3174 <= 57.0000000000;
    double binop3176 = binop3173 && binop3175;
    double binop3177 = binop3171 && binop3176;
    double binop3178 = pos < src_len;
    double charat3179 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3180 = charat3179 == 43.0000000000;
    double charat3181 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3182 = charat3181 == 42.0000000000;
    double binop3183 = binop3180 || binop3182;
    double binop3184 = binop3178 && binop3183;
    if (binop3177) {
    double binop3185 = pos + 3.0000000000;
        cases3170 = binop3185;
    } else if (binop3184) {
    double binop3186 = pos + 2.0000000000;
        cases3170 = binop3186;
    } else if (1.0000000000) {
    double binop3187 = src_len + 1.0000000000;
        cases3170 = binop3187;
    } else { cases3170 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3152] = 0.0000000000;
    tokens[(int)binop3148] = 0.0000000000;
    tokens[(int)binop3130] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3188 = 55.0000000000 - 1.0000000000;
    double binop3189 = binop3188 * 3.0000000000;
    double cases3190;
    double binop3191 = pos < src_len;
    double charat3192 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3193 = charat3192 >= 48.0000000000;
    double charat3194 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3195 = charat3194 <= 57.0000000000;
    double binop3196 = binop3193 && binop3195;
    double binop3197 = binop3191 && binop3196;
    double binop3198 = pos < src_len;
    double charat3199 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3200 = charat3199 == 43.0000000000;
    double binop3201 = binop3198 && binop3200;
    double binop3202 = pos < src_len;
    double charat3203 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3204 = charat3203 == 42.0000000000;
    double binop3205 = binop3202 && binop3204;
    if (binop3197) {
        cases3190 = TOK_NUMBER;
    } else if (binop3201) {
        cases3190 = TOK_PLUS;
    } else if (binop3205) {
        cases3190 = TOK_MUL;
    } else if (1.0000000000) {
        cases3190 = 0.0000000000;
    } else { cases3190 = 0.0; }
    double binop3206 = 55.0000000000 - 1.0000000000;
    double binop3207 = binop3206 * 0.0000000000;
    double cases3208;
    double binop3209 = pos < src_len;
    if (binop3209) {
        cases3208 = pos;
    } else if (1.0000000000) {
        cases3208 = 0.0000000000;
    } else { cases3208 = 0.0; }
    double binop3210 = 55.0000000000 - 1.0000000000;
    double binop3211 = binop3210 * 0.0000000000;
    double cases3212;
    double binop3213 = pos < src_len;
    double charat3214 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3215 = charat3214 >= 48.0000000000;
    double charat3216 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3217 = charat3216 <= 57.0000000000;
    double binop3218 = binop3215 && binop3217;
    double binop3219 = binop3213 && binop3218;
    double binop3220 = pos < src_len;
    double charat3221 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3222 = charat3221 == 43.0000000000;
    double charat3223 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3224 = charat3223 == 42.0000000000;
    double binop3225 = binop3222 || binop3224;
    double binop3226 = binop3220 && binop3225;
    if (binop3219) {
    double binop3227 = pos + 2.0000000000;
        cases3212 = binop3227;
    } else if (binop3226) {
    double binop3228 = pos + 1.0000000000;
        cases3212 = binop3228;
    } else if (1.0000000000) {
        cases3212 = 0.0000000000;
    } else { cases3212 = 0.0; }
    double cases3229;
    double binop3230 = pos < src_len;
    double charat3231 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3232 = charat3231 >= 48.0000000000;
    double charat3233 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3234 = charat3233 <= 57.0000000000;
    double binop3235 = binop3232 && binop3234;
    double binop3236 = binop3230 && binop3235;
    double binop3237 = pos < src_len;
    double charat3238 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3239 = charat3238 == 43.0000000000;
    double charat3240 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3241 = charat3240 == 42.0000000000;
    double binop3242 = binop3239 || binop3241;
    double binop3243 = binop3237 && binop3242;
    if (binop3236) {
    double binop3244 = pos + 3.0000000000;
        cases3229 = binop3244;
    } else if (binop3243) {
    double binop3245 = pos + 2.0000000000;
        cases3229 = binop3245;
    } else if (1.0000000000) {
    double binop3246 = src_len + 1.0000000000;
        cases3229 = binop3246;
    } else { cases3229 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3211] = 0.0000000000;
    tokens[(int)binop3207] = 0.0000000000;
    tokens[(int)binop3189] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3247 = 56.0000000000 - 1.0000000000;
    double binop3248 = binop3247 * 3.0000000000;
    double cases3249;
    double binop3250 = pos < src_len;
    double charat3251 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3252 = charat3251 >= 48.0000000000;
    double charat3253 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3254 = charat3253 <= 57.0000000000;
    double binop3255 = binop3252 && binop3254;
    double binop3256 = binop3250 && binop3255;
    double binop3257 = pos < src_len;
    double charat3258 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3259 = charat3258 == 43.0000000000;
    double binop3260 = binop3257 && binop3259;
    double binop3261 = pos < src_len;
    double charat3262 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3263 = charat3262 == 42.0000000000;
    double binop3264 = binop3261 && binop3263;
    if (binop3256) {
        cases3249 = TOK_NUMBER;
    } else if (binop3260) {
        cases3249 = TOK_PLUS;
    } else if (binop3264) {
        cases3249 = TOK_MUL;
    } else if (1.0000000000) {
        cases3249 = 0.0000000000;
    } else { cases3249 = 0.0; }
    double binop3265 = 56.0000000000 - 1.0000000000;
    double binop3266 = binop3265 * 0.0000000000;
    double cases3267;
    double binop3268 = pos < src_len;
    if (binop3268) {
        cases3267 = pos;
    } else if (1.0000000000) {
        cases3267 = 0.0000000000;
    } else { cases3267 = 0.0; }
    double binop3269 = 56.0000000000 - 1.0000000000;
    double binop3270 = binop3269 * 0.0000000000;
    double cases3271;
    double binop3272 = pos < src_len;
    double charat3273 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3274 = charat3273 >= 48.0000000000;
    double charat3275 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3276 = charat3275 <= 57.0000000000;
    double binop3277 = binop3274 && binop3276;
    double binop3278 = binop3272 && binop3277;
    double binop3279 = pos < src_len;
    double charat3280 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3281 = charat3280 == 43.0000000000;
    double charat3282 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3283 = charat3282 == 42.0000000000;
    double binop3284 = binop3281 || binop3283;
    double binop3285 = binop3279 && binop3284;
    if (binop3278) {
    double binop3286 = pos + 2.0000000000;
        cases3271 = binop3286;
    } else if (binop3285) {
    double binop3287 = pos + 1.0000000000;
        cases3271 = binop3287;
    } else if (1.0000000000) {
        cases3271 = 0.0000000000;
    } else { cases3271 = 0.0; }
    double cases3288;
    double binop3289 = pos < src_len;
    double charat3290 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3291 = charat3290 >= 48.0000000000;
    double charat3292 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3293 = charat3292 <= 57.0000000000;
    double binop3294 = binop3291 && binop3293;
    double binop3295 = binop3289 && binop3294;
    double binop3296 = pos < src_len;
    double charat3297 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3298 = charat3297 == 43.0000000000;
    double charat3299 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3300 = charat3299 == 42.0000000000;
    double binop3301 = binop3298 || binop3300;
    double binop3302 = binop3296 && binop3301;
    if (binop3295) {
    double binop3303 = pos + 3.0000000000;
        cases3288 = binop3303;
    } else if (binop3302) {
    double binop3304 = pos + 2.0000000000;
        cases3288 = binop3304;
    } else if (1.0000000000) {
    double binop3305 = src_len + 1.0000000000;
        cases3288 = binop3305;
    } else { cases3288 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3270] = 0.0000000000;
    tokens[(int)binop3266] = 0.0000000000;
    tokens[(int)binop3248] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3306 = 57.0000000000 - 1.0000000000;
    double binop3307 = binop3306 * 3.0000000000;
    double cases3308;
    double binop3309 = pos < src_len;
    double charat3310 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3311 = charat3310 >= 48.0000000000;
    double charat3312 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3313 = charat3312 <= 57.0000000000;
    double binop3314 = binop3311 && binop3313;
    double binop3315 = binop3309 && binop3314;
    double binop3316 = pos < src_len;
    double charat3317 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3318 = charat3317 == 43.0000000000;
    double binop3319 = binop3316 && binop3318;
    double binop3320 = pos < src_len;
    double charat3321 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3322 = charat3321 == 42.0000000000;
    double binop3323 = binop3320 && binop3322;
    if (binop3315) {
        cases3308 = TOK_NUMBER;
    } else if (binop3319) {
        cases3308 = TOK_PLUS;
    } else if (binop3323) {
        cases3308 = TOK_MUL;
    } else if (1.0000000000) {
        cases3308 = 0.0000000000;
    } else { cases3308 = 0.0; }
    double binop3324 = 57.0000000000 - 1.0000000000;
    double binop3325 = binop3324 * 0.0000000000;
    double cases3326;
    double binop3327 = pos < src_len;
    if (binop3327) {
        cases3326 = pos;
    } else if (1.0000000000) {
        cases3326 = 0.0000000000;
    } else { cases3326 = 0.0; }
    double binop3328 = 57.0000000000 - 1.0000000000;
    double binop3329 = binop3328 * 0.0000000000;
    double cases3330;
    double binop3331 = pos < src_len;
    double charat3332 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3333 = charat3332 >= 48.0000000000;
    double charat3334 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3335 = charat3334 <= 57.0000000000;
    double binop3336 = binop3333 && binop3335;
    double binop3337 = binop3331 && binop3336;
    double binop3338 = pos < src_len;
    double charat3339 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3340 = charat3339 == 43.0000000000;
    double charat3341 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3342 = charat3341 == 42.0000000000;
    double binop3343 = binop3340 || binop3342;
    double binop3344 = binop3338 && binop3343;
    if (binop3337) {
    double binop3345 = pos + 2.0000000000;
        cases3330 = binop3345;
    } else if (binop3344) {
    double binop3346 = pos + 1.0000000000;
        cases3330 = binop3346;
    } else if (1.0000000000) {
        cases3330 = 0.0000000000;
    } else { cases3330 = 0.0; }
    double cases3347;
    double binop3348 = pos < src_len;
    double charat3349 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3350 = charat3349 >= 48.0000000000;
    double charat3351 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3352 = charat3351 <= 57.0000000000;
    double binop3353 = binop3350 && binop3352;
    double binop3354 = binop3348 && binop3353;
    double binop3355 = pos < src_len;
    double charat3356 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3357 = charat3356 == 43.0000000000;
    double charat3358 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3359 = charat3358 == 42.0000000000;
    double binop3360 = binop3357 || binop3359;
    double binop3361 = binop3355 && binop3360;
    if (binop3354) {
    double binop3362 = pos + 3.0000000000;
        cases3347 = binop3362;
    } else if (binop3361) {
    double binop3363 = pos + 2.0000000000;
        cases3347 = binop3363;
    } else if (1.0000000000) {
    double binop3364 = src_len + 1.0000000000;
        cases3347 = binop3364;
    } else { cases3347 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3329] = 0.0000000000;
    tokens[(int)binop3325] = 0.0000000000;
    tokens[(int)binop3307] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3365 = 58.0000000000 - 1.0000000000;
    double binop3366 = binop3365 * 3.0000000000;
    double cases3367;
    double binop3368 = pos < src_len;
    double charat3369 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3370 = charat3369 >= 48.0000000000;
    double charat3371 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3372 = charat3371 <= 57.0000000000;
    double binop3373 = binop3370 && binop3372;
    double binop3374 = binop3368 && binop3373;
    double binop3375 = pos < src_len;
    double charat3376 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3377 = charat3376 == 43.0000000000;
    double binop3378 = binop3375 && binop3377;
    double binop3379 = pos < src_len;
    double charat3380 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3381 = charat3380 == 42.0000000000;
    double binop3382 = binop3379 && binop3381;
    if (binop3374) {
        cases3367 = TOK_NUMBER;
    } else if (binop3378) {
        cases3367 = TOK_PLUS;
    } else if (binop3382) {
        cases3367 = TOK_MUL;
    } else if (1.0000000000) {
        cases3367 = 0.0000000000;
    } else { cases3367 = 0.0; }
    double binop3383 = 58.0000000000 - 1.0000000000;
    double binop3384 = binop3383 * 0.0000000000;
    double cases3385;
    double binop3386 = pos < src_len;
    if (binop3386) {
        cases3385 = pos;
    } else if (1.0000000000) {
        cases3385 = 0.0000000000;
    } else { cases3385 = 0.0; }
    double binop3387 = 58.0000000000 - 1.0000000000;
    double binop3388 = binop3387 * 0.0000000000;
    double cases3389;
    double binop3390 = pos < src_len;
    double charat3391 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3392 = charat3391 >= 48.0000000000;
    double charat3393 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3394 = charat3393 <= 57.0000000000;
    double binop3395 = binop3392 && binop3394;
    double binop3396 = binop3390 && binop3395;
    double binop3397 = pos < src_len;
    double charat3398 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3399 = charat3398 == 43.0000000000;
    double charat3400 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3401 = charat3400 == 42.0000000000;
    double binop3402 = binop3399 || binop3401;
    double binop3403 = binop3397 && binop3402;
    if (binop3396) {
    double binop3404 = pos + 2.0000000000;
        cases3389 = binop3404;
    } else if (binop3403) {
    double binop3405 = pos + 1.0000000000;
        cases3389 = binop3405;
    } else if (1.0000000000) {
        cases3389 = 0.0000000000;
    } else { cases3389 = 0.0; }
    double cases3406;
    double binop3407 = pos < src_len;
    double charat3408 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3409 = charat3408 >= 48.0000000000;
    double charat3410 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3411 = charat3410 <= 57.0000000000;
    double binop3412 = binop3409 && binop3411;
    double binop3413 = binop3407 && binop3412;
    double binop3414 = pos < src_len;
    double charat3415 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3416 = charat3415 == 43.0000000000;
    double charat3417 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3418 = charat3417 == 42.0000000000;
    double binop3419 = binop3416 || binop3418;
    double binop3420 = binop3414 && binop3419;
    if (binop3413) {
    double binop3421 = pos + 3.0000000000;
        cases3406 = binop3421;
    } else if (binop3420) {
    double binop3422 = pos + 2.0000000000;
        cases3406 = binop3422;
    } else if (1.0000000000) {
    double binop3423 = src_len + 1.0000000000;
        cases3406 = binop3423;
    } else { cases3406 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3388] = 0.0000000000;
    tokens[(int)binop3384] = 0.0000000000;
    tokens[(int)binop3366] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3424 = 59.0000000000 - 1.0000000000;
    double binop3425 = binop3424 * 3.0000000000;
    double cases3426;
    double binop3427 = pos < src_len;
    double charat3428 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3429 = charat3428 >= 48.0000000000;
    double charat3430 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3431 = charat3430 <= 57.0000000000;
    double binop3432 = binop3429 && binop3431;
    double binop3433 = binop3427 && binop3432;
    double binop3434 = pos < src_len;
    double charat3435 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3436 = charat3435 == 43.0000000000;
    double binop3437 = binop3434 && binop3436;
    double binop3438 = pos < src_len;
    double charat3439 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3440 = charat3439 == 42.0000000000;
    double binop3441 = binop3438 && binop3440;
    if (binop3433) {
        cases3426 = TOK_NUMBER;
    } else if (binop3437) {
        cases3426 = TOK_PLUS;
    } else if (binop3441) {
        cases3426 = TOK_MUL;
    } else if (1.0000000000) {
        cases3426 = 0.0000000000;
    } else { cases3426 = 0.0; }
    double binop3442 = 59.0000000000 - 1.0000000000;
    double binop3443 = binop3442 * 0.0000000000;
    double cases3444;
    double binop3445 = pos < src_len;
    if (binop3445) {
        cases3444 = pos;
    } else if (1.0000000000) {
        cases3444 = 0.0000000000;
    } else { cases3444 = 0.0; }
    double binop3446 = 59.0000000000 - 1.0000000000;
    double binop3447 = binop3446 * 0.0000000000;
    double cases3448;
    double binop3449 = pos < src_len;
    double charat3450 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3451 = charat3450 >= 48.0000000000;
    double charat3452 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3453 = charat3452 <= 57.0000000000;
    double binop3454 = binop3451 && binop3453;
    double binop3455 = binop3449 && binop3454;
    double binop3456 = pos < src_len;
    double charat3457 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3458 = charat3457 == 43.0000000000;
    double charat3459 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3460 = charat3459 == 42.0000000000;
    double binop3461 = binop3458 || binop3460;
    double binop3462 = binop3456 && binop3461;
    if (binop3455) {
    double binop3463 = pos + 2.0000000000;
        cases3448 = binop3463;
    } else if (binop3462) {
    double binop3464 = pos + 1.0000000000;
        cases3448 = binop3464;
    } else if (1.0000000000) {
        cases3448 = 0.0000000000;
    } else { cases3448 = 0.0; }
    double cases3465;
    double binop3466 = pos < src_len;
    double charat3467 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3468 = charat3467 >= 48.0000000000;
    double charat3469 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3470 = charat3469 <= 57.0000000000;
    double binop3471 = binop3468 && binop3470;
    double binop3472 = binop3466 && binop3471;
    double binop3473 = pos < src_len;
    double charat3474 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3475 = charat3474 == 43.0000000000;
    double charat3476 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3477 = charat3476 == 42.0000000000;
    double binop3478 = binop3475 || binop3477;
    double binop3479 = binop3473 && binop3478;
    if (binop3472) {
    double binop3480 = pos + 3.0000000000;
        cases3465 = binop3480;
    } else if (binop3479) {
    double binop3481 = pos + 2.0000000000;
        cases3465 = binop3481;
    } else if (1.0000000000) {
    double binop3482 = src_len + 1.0000000000;
        cases3465 = binop3482;
    } else { cases3465 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3447] = 0.0000000000;
    tokens[(int)binop3443] = 0.0000000000;
    tokens[(int)binop3425] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3483 = 60.0000000000 - 1.0000000000;
    double binop3484 = binop3483 * 3.0000000000;
    double cases3485;
    double binop3486 = pos < src_len;
    double charat3487 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3488 = charat3487 >= 48.0000000000;
    double charat3489 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3490 = charat3489 <= 57.0000000000;
    double binop3491 = binop3488 && binop3490;
    double binop3492 = binop3486 && binop3491;
    double binop3493 = pos < src_len;
    double charat3494 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3495 = charat3494 == 43.0000000000;
    double binop3496 = binop3493 && binop3495;
    double binop3497 = pos < src_len;
    double charat3498 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3499 = charat3498 == 42.0000000000;
    double binop3500 = binop3497 && binop3499;
    if (binop3492) {
        cases3485 = TOK_NUMBER;
    } else if (binop3496) {
        cases3485 = TOK_PLUS;
    } else if (binop3500) {
        cases3485 = TOK_MUL;
    } else if (1.0000000000) {
        cases3485 = 0.0000000000;
    } else { cases3485 = 0.0; }
    double binop3501 = 60.0000000000 - 1.0000000000;
    double binop3502 = binop3501 * 0.0000000000;
    double cases3503;
    double binop3504 = pos < src_len;
    if (binop3504) {
        cases3503 = pos;
    } else if (1.0000000000) {
        cases3503 = 0.0000000000;
    } else { cases3503 = 0.0; }
    double binop3505 = 60.0000000000 - 1.0000000000;
    double binop3506 = binop3505 * 0.0000000000;
    double cases3507;
    double binop3508 = pos < src_len;
    double charat3509 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3510 = charat3509 >= 48.0000000000;
    double charat3511 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3512 = charat3511 <= 57.0000000000;
    double binop3513 = binop3510 && binop3512;
    double binop3514 = binop3508 && binop3513;
    double binop3515 = pos < src_len;
    double charat3516 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3517 = charat3516 == 43.0000000000;
    double charat3518 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3519 = charat3518 == 42.0000000000;
    double binop3520 = binop3517 || binop3519;
    double binop3521 = binop3515 && binop3520;
    if (binop3514) {
    double binop3522 = pos + 2.0000000000;
        cases3507 = binop3522;
    } else if (binop3521) {
    double binop3523 = pos + 1.0000000000;
        cases3507 = binop3523;
    } else if (1.0000000000) {
        cases3507 = 0.0000000000;
    } else { cases3507 = 0.0; }
    double cases3524;
    double binop3525 = pos < src_len;
    double charat3526 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3527 = charat3526 >= 48.0000000000;
    double charat3528 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3529 = charat3528 <= 57.0000000000;
    double binop3530 = binop3527 && binop3529;
    double binop3531 = binop3525 && binop3530;
    double binop3532 = pos < src_len;
    double charat3533 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3534 = charat3533 == 43.0000000000;
    double charat3535 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3536 = charat3535 == 42.0000000000;
    double binop3537 = binop3534 || binop3536;
    double binop3538 = binop3532 && binop3537;
    if (binop3531) {
    double binop3539 = pos + 3.0000000000;
        cases3524 = binop3539;
    } else if (binop3538) {
    double binop3540 = pos + 2.0000000000;
        cases3524 = binop3540;
    } else if (1.0000000000) {
    double binop3541 = src_len + 1.0000000000;
        cases3524 = binop3541;
    } else { cases3524 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3506] = 0.0000000000;
    tokens[(int)binop3502] = 0.0000000000;
    tokens[(int)binop3484] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3542 = 61.0000000000 - 1.0000000000;
    double binop3543 = binop3542 * 3.0000000000;
    double cases3544;
    double binop3545 = pos < src_len;
    double charat3546 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3547 = charat3546 >= 48.0000000000;
    double charat3548 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3549 = charat3548 <= 57.0000000000;
    double binop3550 = binop3547 && binop3549;
    double binop3551 = binop3545 && binop3550;
    double binop3552 = pos < src_len;
    double charat3553 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3554 = charat3553 == 43.0000000000;
    double binop3555 = binop3552 && binop3554;
    double binop3556 = pos < src_len;
    double charat3557 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3558 = charat3557 == 42.0000000000;
    double binop3559 = binop3556 && binop3558;
    if (binop3551) {
        cases3544 = TOK_NUMBER;
    } else if (binop3555) {
        cases3544 = TOK_PLUS;
    } else if (binop3559) {
        cases3544 = TOK_MUL;
    } else if (1.0000000000) {
        cases3544 = 0.0000000000;
    } else { cases3544 = 0.0; }
    double binop3560 = 61.0000000000 - 1.0000000000;
    double binop3561 = binop3560 * 0.0000000000;
    double cases3562;
    double binop3563 = pos < src_len;
    if (binop3563) {
        cases3562 = pos;
    } else if (1.0000000000) {
        cases3562 = 0.0000000000;
    } else { cases3562 = 0.0; }
    double binop3564 = 61.0000000000 - 1.0000000000;
    double binop3565 = binop3564 * 0.0000000000;
    double cases3566;
    double binop3567 = pos < src_len;
    double charat3568 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3569 = charat3568 >= 48.0000000000;
    double charat3570 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3571 = charat3570 <= 57.0000000000;
    double binop3572 = binop3569 && binop3571;
    double binop3573 = binop3567 && binop3572;
    double binop3574 = pos < src_len;
    double charat3575 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3576 = charat3575 == 43.0000000000;
    double charat3577 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3578 = charat3577 == 42.0000000000;
    double binop3579 = binop3576 || binop3578;
    double binop3580 = binop3574 && binop3579;
    if (binop3573) {
    double binop3581 = pos + 2.0000000000;
        cases3566 = binop3581;
    } else if (binop3580) {
    double binop3582 = pos + 1.0000000000;
        cases3566 = binop3582;
    } else if (1.0000000000) {
        cases3566 = 0.0000000000;
    } else { cases3566 = 0.0; }
    double cases3583;
    double binop3584 = pos < src_len;
    double charat3585 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3586 = charat3585 >= 48.0000000000;
    double charat3587 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3588 = charat3587 <= 57.0000000000;
    double binop3589 = binop3586 && binop3588;
    double binop3590 = binop3584 && binop3589;
    double binop3591 = pos < src_len;
    double charat3592 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3593 = charat3592 == 43.0000000000;
    double charat3594 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3595 = charat3594 == 42.0000000000;
    double binop3596 = binop3593 || binop3595;
    double binop3597 = binop3591 && binop3596;
    if (binop3590) {
    double binop3598 = pos + 3.0000000000;
        cases3583 = binop3598;
    } else if (binop3597) {
    double binop3599 = pos + 2.0000000000;
        cases3583 = binop3599;
    } else if (1.0000000000) {
    double binop3600 = src_len + 1.0000000000;
        cases3583 = binop3600;
    } else { cases3583 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3565] = 0.0000000000;
    tokens[(int)binop3561] = 0.0000000000;
    tokens[(int)binop3543] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3601 = 62.0000000000 - 1.0000000000;
    double binop3602 = binop3601 * 3.0000000000;
    double cases3603;
    double binop3604 = pos < src_len;
    double charat3605 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3606 = charat3605 >= 48.0000000000;
    double charat3607 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3608 = charat3607 <= 57.0000000000;
    double binop3609 = binop3606 && binop3608;
    double binop3610 = binop3604 && binop3609;
    double binop3611 = pos < src_len;
    double charat3612 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3613 = charat3612 == 43.0000000000;
    double binop3614 = binop3611 && binop3613;
    double binop3615 = pos < src_len;
    double charat3616 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3617 = charat3616 == 42.0000000000;
    double binop3618 = binop3615 && binop3617;
    if (binop3610) {
        cases3603 = TOK_NUMBER;
    } else if (binop3614) {
        cases3603 = TOK_PLUS;
    } else if (binop3618) {
        cases3603 = TOK_MUL;
    } else if (1.0000000000) {
        cases3603 = 0.0000000000;
    } else { cases3603 = 0.0; }
    double binop3619 = 62.0000000000 - 1.0000000000;
    double binop3620 = binop3619 * 0.0000000000;
    double cases3621;
    double binop3622 = pos < src_len;
    if (binop3622) {
        cases3621 = pos;
    } else if (1.0000000000) {
        cases3621 = 0.0000000000;
    } else { cases3621 = 0.0; }
    double binop3623 = 62.0000000000 - 1.0000000000;
    double binop3624 = binop3623 * 0.0000000000;
    double cases3625;
    double binop3626 = pos < src_len;
    double charat3627 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3628 = charat3627 >= 48.0000000000;
    double charat3629 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3630 = charat3629 <= 57.0000000000;
    double binop3631 = binop3628 && binop3630;
    double binop3632 = binop3626 && binop3631;
    double binop3633 = pos < src_len;
    double charat3634 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3635 = charat3634 == 43.0000000000;
    double charat3636 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3637 = charat3636 == 42.0000000000;
    double binop3638 = binop3635 || binop3637;
    double binop3639 = binop3633 && binop3638;
    if (binop3632) {
    double binop3640 = pos + 2.0000000000;
        cases3625 = binop3640;
    } else if (binop3639) {
    double binop3641 = pos + 1.0000000000;
        cases3625 = binop3641;
    } else if (1.0000000000) {
        cases3625 = 0.0000000000;
    } else { cases3625 = 0.0; }
    double cases3642;
    double binop3643 = pos < src_len;
    double charat3644 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3645 = charat3644 >= 48.0000000000;
    double charat3646 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3647 = charat3646 <= 57.0000000000;
    double binop3648 = binop3645 && binop3647;
    double binop3649 = binop3643 && binop3648;
    double binop3650 = pos < src_len;
    double charat3651 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3652 = charat3651 == 43.0000000000;
    double charat3653 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3654 = charat3653 == 42.0000000000;
    double binop3655 = binop3652 || binop3654;
    double binop3656 = binop3650 && binop3655;
    if (binop3649) {
    double binop3657 = pos + 3.0000000000;
        cases3642 = binop3657;
    } else if (binop3656) {
    double binop3658 = pos + 2.0000000000;
        cases3642 = binop3658;
    } else if (1.0000000000) {
    double binop3659 = src_len + 1.0000000000;
        cases3642 = binop3659;
    } else { cases3642 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3624] = 0.0000000000;
    tokens[(int)binop3620] = 0.0000000000;
    tokens[(int)binop3602] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3660 = 63.0000000000 - 1.0000000000;
    double binop3661 = binop3660 * 3.0000000000;
    double cases3662;
    double binop3663 = pos < src_len;
    double charat3664 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3665 = charat3664 >= 48.0000000000;
    double charat3666 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3667 = charat3666 <= 57.0000000000;
    double binop3668 = binop3665 && binop3667;
    double binop3669 = binop3663 && binop3668;
    double binop3670 = pos < src_len;
    double charat3671 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3672 = charat3671 == 43.0000000000;
    double binop3673 = binop3670 && binop3672;
    double binop3674 = pos < src_len;
    double charat3675 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3676 = charat3675 == 42.0000000000;
    double binop3677 = binop3674 && binop3676;
    if (binop3669) {
        cases3662 = TOK_NUMBER;
    } else if (binop3673) {
        cases3662 = TOK_PLUS;
    } else if (binop3677) {
        cases3662 = TOK_MUL;
    } else if (1.0000000000) {
        cases3662 = 0.0000000000;
    } else { cases3662 = 0.0; }
    double binop3678 = 63.0000000000 - 1.0000000000;
    double binop3679 = binop3678 * 0.0000000000;
    double cases3680;
    double binop3681 = pos < src_len;
    if (binop3681) {
        cases3680 = pos;
    } else if (1.0000000000) {
        cases3680 = 0.0000000000;
    } else { cases3680 = 0.0; }
    double binop3682 = 63.0000000000 - 1.0000000000;
    double binop3683 = binop3682 * 0.0000000000;
    double cases3684;
    double binop3685 = pos < src_len;
    double charat3686 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3687 = charat3686 >= 48.0000000000;
    double charat3688 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3689 = charat3688 <= 57.0000000000;
    double binop3690 = binop3687 && binop3689;
    double binop3691 = binop3685 && binop3690;
    double binop3692 = pos < src_len;
    double charat3693 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3694 = charat3693 == 43.0000000000;
    double charat3695 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3696 = charat3695 == 42.0000000000;
    double binop3697 = binop3694 || binop3696;
    double binop3698 = binop3692 && binop3697;
    if (binop3691) {
    double binop3699 = pos + 2.0000000000;
        cases3684 = binop3699;
    } else if (binop3698) {
    double binop3700 = pos + 1.0000000000;
        cases3684 = binop3700;
    } else if (1.0000000000) {
        cases3684 = 0.0000000000;
    } else { cases3684 = 0.0; }
    double cases3701;
    double binop3702 = pos < src_len;
    double charat3703 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3704 = charat3703 >= 48.0000000000;
    double charat3705 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3706 = charat3705 <= 57.0000000000;
    double binop3707 = binop3704 && binop3706;
    double binop3708 = binop3702 && binop3707;
    double binop3709 = pos < src_len;
    double charat3710 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3711 = charat3710 == 43.0000000000;
    double charat3712 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3713 = charat3712 == 42.0000000000;
    double binop3714 = binop3711 || binop3713;
    double binop3715 = binop3709 && binop3714;
    if (binop3708) {
    double binop3716 = pos + 3.0000000000;
        cases3701 = binop3716;
    } else if (binop3715) {
    double binop3717 = pos + 2.0000000000;
        cases3701 = binop3717;
    } else if (1.0000000000) {
    double binop3718 = src_len + 1.0000000000;
        cases3701 = binop3718;
    } else { cases3701 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3683] = 0.0000000000;
    tokens[(int)binop3679] = 0.0000000000;
    tokens[(int)binop3661] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3719 = 64.0000000000 - 1.0000000000;
    double binop3720 = binop3719 * 3.0000000000;
    double cases3721;
    double binop3722 = pos < src_len;
    double charat3723 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3724 = charat3723 >= 48.0000000000;
    double charat3725 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3726 = charat3725 <= 57.0000000000;
    double binop3727 = binop3724 && binop3726;
    double binop3728 = binop3722 && binop3727;
    double binop3729 = pos < src_len;
    double charat3730 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3731 = charat3730 == 43.0000000000;
    double binop3732 = binop3729 && binop3731;
    double binop3733 = pos < src_len;
    double charat3734 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3735 = charat3734 == 42.0000000000;
    double binop3736 = binop3733 && binop3735;
    if (binop3728) {
        cases3721 = TOK_NUMBER;
    } else if (binop3732) {
        cases3721 = TOK_PLUS;
    } else if (binop3736) {
        cases3721 = TOK_MUL;
    } else if (1.0000000000) {
        cases3721 = 0.0000000000;
    } else { cases3721 = 0.0; }
    double binop3737 = 64.0000000000 - 1.0000000000;
    double binop3738 = binop3737 * 0.0000000000;
    double cases3739;
    double binop3740 = pos < src_len;
    if (binop3740) {
        cases3739 = pos;
    } else if (1.0000000000) {
        cases3739 = 0.0000000000;
    } else { cases3739 = 0.0; }
    double binop3741 = 64.0000000000 - 1.0000000000;
    double binop3742 = binop3741 * 0.0000000000;
    double cases3743;
    double binop3744 = pos < src_len;
    double charat3745 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3746 = charat3745 >= 48.0000000000;
    double charat3747 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3748 = charat3747 <= 57.0000000000;
    double binop3749 = binop3746 && binop3748;
    double binop3750 = binop3744 && binop3749;
    double binop3751 = pos < src_len;
    double charat3752 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3753 = charat3752 == 43.0000000000;
    double charat3754 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3755 = charat3754 == 42.0000000000;
    double binop3756 = binop3753 || binop3755;
    double binop3757 = binop3751 && binop3756;
    if (binop3750) {
    double binop3758 = pos + 2.0000000000;
        cases3743 = binop3758;
    } else if (binop3757) {
    double binop3759 = pos + 1.0000000000;
        cases3743 = binop3759;
    } else if (1.0000000000) {
        cases3743 = 0.0000000000;
    } else { cases3743 = 0.0; }
    double cases3760;
    double binop3761 = pos < src_len;
    double charat3762 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3763 = charat3762 >= 48.0000000000;
    double charat3764 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3765 = charat3764 <= 57.0000000000;
    double binop3766 = binop3763 && binop3765;
    double binop3767 = binop3761 && binop3766;
    double binop3768 = pos < src_len;
    double charat3769 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3770 = charat3769 == 43.0000000000;
    double charat3771 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3772 = charat3771 == 42.0000000000;
    double binop3773 = binop3770 || binop3772;
    double binop3774 = binop3768 && binop3773;
    if (binop3767) {
    double binop3775 = pos + 3.0000000000;
        cases3760 = binop3775;
    } else if (binop3774) {
    double binop3776 = pos + 2.0000000000;
        cases3760 = binop3776;
    } else if (1.0000000000) {
    double binop3777 = src_len + 1.0000000000;
        cases3760 = binop3777;
    } else { cases3760 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3742] = 0.0000000000;
    tokens[(int)binop3738] = 0.0000000000;
    tokens[(int)binop3720] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3778 = 65.0000000000 - 1.0000000000;
    double binop3779 = binop3778 * 3.0000000000;
    double cases3780;
    double binop3781 = pos < src_len;
    double charat3782 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3783 = charat3782 >= 48.0000000000;
    double charat3784 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3785 = charat3784 <= 57.0000000000;
    double binop3786 = binop3783 && binop3785;
    double binop3787 = binop3781 && binop3786;
    double binop3788 = pos < src_len;
    double charat3789 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3790 = charat3789 == 43.0000000000;
    double binop3791 = binop3788 && binop3790;
    double binop3792 = pos < src_len;
    double charat3793 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3794 = charat3793 == 42.0000000000;
    double binop3795 = binop3792 && binop3794;
    if (binop3787) {
        cases3780 = TOK_NUMBER;
    } else if (binop3791) {
        cases3780 = TOK_PLUS;
    } else if (binop3795) {
        cases3780 = TOK_MUL;
    } else if (1.0000000000) {
        cases3780 = 0.0000000000;
    } else { cases3780 = 0.0; }
    double binop3796 = 65.0000000000 - 1.0000000000;
    double binop3797 = binop3796 * 0.0000000000;
    double cases3798;
    double binop3799 = pos < src_len;
    if (binop3799) {
        cases3798 = pos;
    } else if (1.0000000000) {
        cases3798 = 0.0000000000;
    } else { cases3798 = 0.0; }
    double binop3800 = 65.0000000000 - 1.0000000000;
    double binop3801 = binop3800 * 0.0000000000;
    double cases3802;
    double binop3803 = pos < src_len;
    double charat3804 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3805 = charat3804 >= 48.0000000000;
    double charat3806 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3807 = charat3806 <= 57.0000000000;
    double binop3808 = binop3805 && binop3807;
    double binop3809 = binop3803 && binop3808;
    double binop3810 = pos < src_len;
    double charat3811 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3812 = charat3811 == 43.0000000000;
    double charat3813 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3814 = charat3813 == 42.0000000000;
    double binop3815 = binop3812 || binop3814;
    double binop3816 = binop3810 && binop3815;
    if (binop3809) {
    double binop3817 = pos + 2.0000000000;
        cases3802 = binop3817;
    } else if (binop3816) {
    double binop3818 = pos + 1.0000000000;
        cases3802 = binop3818;
    } else if (1.0000000000) {
        cases3802 = 0.0000000000;
    } else { cases3802 = 0.0; }
    double cases3819;
    double binop3820 = pos < src_len;
    double charat3821 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3822 = charat3821 >= 48.0000000000;
    double charat3823 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3824 = charat3823 <= 57.0000000000;
    double binop3825 = binop3822 && binop3824;
    double binop3826 = binop3820 && binop3825;
    double binop3827 = pos < src_len;
    double charat3828 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3829 = charat3828 == 43.0000000000;
    double charat3830 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3831 = charat3830 == 42.0000000000;
    double binop3832 = binop3829 || binop3831;
    double binop3833 = binop3827 && binop3832;
    if (binop3826) {
    double binop3834 = pos + 3.0000000000;
        cases3819 = binop3834;
    } else if (binop3833) {
    double binop3835 = pos + 2.0000000000;
        cases3819 = binop3835;
    } else if (1.0000000000) {
    double binop3836 = src_len + 1.0000000000;
        cases3819 = binop3836;
    } else { cases3819 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3801] = 0.0000000000;
    tokens[(int)binop3797] = 0.0000000000;
    tokens[(int)binop3779] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3837 = 66.0000000000 - 1.0000000000;
    double binop3838 = binop3837 * 3.0000000000;
    double cases3839;
    double binop3840 = pos < src_len;
    double charat3841 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3842 = charat3841 >= 48.0000000000;
    double charat3843 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3844 = charat3843 <= 57.0000000000;
    double binop3845 = binop3842 && binop3844;
    double binop3846 = binop3840 && binop3845;
    double binop3847 = pos < src_len;
    double charat3848 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3849 = charat3848 == 43.0000000000;
    double binop3850 = binop3847 && binop3849;
    double binop3851 = pos < src_len;
    double charat3852 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3853 = charat3852 == 42.0000000000;
    double binop3854 = binop3851 && binop3853;
    if (binop3846) {
        cases3839 = TOK_NUMBER;
    } else if (binop3850) {
        cases3839 = TOK_PLUS;
    } else if (binop3854) {
        cases3839 = TOK_MUL;
    } else if (1.0000000000) {
        cases3839 = 0.0000000000;
    } else { cases3839 = 0.0; }
    double binop3855 = 66.0000000000 - 1.0000000000;
    double binop3856 = binop3855 * 0.0000000000;
    double cases3857;
    double binop3858 = pos < src_len;
    if (binop3858) {
        cases3857 = pos;
    } else if (1.0000000000) {
        cases3857 = 0.0000000000;
    } else { cases3857 = 0.0; }
    double binop3859 = 66.0000000000 - 1.0000000000;
    double binop3860 = binop3859 * 0.0000000000;
    double cases3861;
    double binop3862 = pos < src_len;
    double charat3863 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3864 = charat3863 >= 48.0000000000;
    double charat3865 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3866 = charat3865 <= 57.0000000000;
    double binop3867 = binop3864 && binop3866;
    double binop3868 = binop3862 && binop3867;
    double binop3869 = pos < src_len;
    double charat3870 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3871 = charat3870 == 43.0000000000;
    double charat3872 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3873 = charat3872 == 42.0000000000;
    double binop3874 = binop3871 || binop3873;
    double binop3875 = binop3869 && binop3874;
    if (binop3868) {
    double binop3876 = pos + 2.0000000000;
        cases3861 = binop3876;
    } else if (binop3875) {
    double binop3877 = pos + 1.0000000000;
        cases3861 = binop3877;
    } else if (1.0000000000) {
        cases3861 = 0.0000000000;
    } else { cases3861 = 0.0; }
    double cases3878;
    double binop3879 = pos < src_len;
    double charat3880 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3881 = charat3880 >= 48.0000000000;
    double charat3882 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3883 = charat3882 <= 57.0000000000;
    double binop3884 = binop3881 && binop3883;
    double binop3885 = binop3879 && binop3884;
    double binop3886 = pos < src_len;
    double charat3887 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3888 = charat3887 == 43.0000000000;
    double charat3889 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3890 = charat3889 == 42.0000000000;
    double binop3891 = binop3888 || binop3890;
    double binop3892 = binop3886 && binop3891;
    if (binop3885) {
    double binop3893 = pos + 3.0000000000;
        cases3878 = binop3893;
    } else if (binop3892) {
    double binop3894 = pos + 2.0000000000;
        cases3878 = binop3894;
    } else if (1.0000000000) {
    double binop3895 = src_len + 1.0000000000;
        cases3878 = binop3895;
    } else { cases3878 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3860] = 0.0000000000;
    tokens[(int)binop3856] = 0.0000000000;
    tokens[(int)binop3838] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3896 = 67.0000000000 - 1.0000000000;
    double binop3897 = binop3896 * 3.0000000000;
    double cases3898;
    double binop3899 = pos < src_len;
    double charat3900 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3901 = charat3900 >= 48.0000000000;
    double charat3902 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3903 = charat3902 <= 57.0000000000;
    double binop3904 = binop3901 && binop3903;
    double binop3905 = binop3899 && binop3904;
    double binop3906 = pos < src_len;
    double charat3907 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3908 = charat3907 == 43.0000000000;
    double binop3909 = binop3906 && binop3908;
    double binop3910 = pos < src_len;
    double charat3911 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3912 = charat3911 == 42.0000000000;
    double binop3913 = binop3910 && binop3912;
    if (binop3905) {
        cases3898 = TOK_NUMBER;
    } else if (binop3909) {
        cases3898 = TOK_PLUS;
    } else if (binop3913) {
        cases3898 = TOK_MUL;
    } else if (1.0000000000) {
        cases3898 = 0.0000000000;
    } else { cases3898 = 0.0; }
    double binop3914 = 67.0000000000 - 1.0000000000;
    double binop3915 = binop3914 * 0.0000000000;
    double cases3916;
    double binop3917 = pos < src_len;
    if (binop3917) {
        cases3916 = pos;
    } else if (1.0000000000) {
        cases3916 = 0.0000000000;
    } else { cases3916 = 0.0; }
    double binop3918 = 67.0000000000 - 1.0000000000;
    double binop3919 = binop3918 * 0.0000000000;
    double cases3920;
    double binop3921 = pos < src_len;
    double charat3922 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3923 = charat3922 >= 48.0000000000;
    double charat3924 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3925 = charat3924 <= 57.0000000000;
    double binop3926 = binop3923 && binop3925;
    double binop3927 = binop3921 && binop3926;
    double binop3928 = pos < src_len;
    double charat3929 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3930 = charat3929 == 43.0000000000;
    double charat3931 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3932 = charat3931 == 42.0000000000;
    double binop3933 = binop3930 || binop3932;
    double binop3934 = binop3928 && binop3933;
    if (binop3927) {
    double binop3935 = pos + 2.0000000000;
        cases3920 = binop3935;
    } else if (binop3934) {
    double binop3936 = pos + 1.0000000000;
        cases3920 = binop3936;
    } else if (1.0000000000) {
        cases3920 = 0.0000000000;
    } else { cases3920 = 0.0; }
    double cases3937;
    double binop3938 = pos < src_len;
    double charat3939 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3940 = charat3939 >= 48.0000000000;
    double charat3941 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3942 = charat3941 <= 57.0000000000;
    double binop3943 = binop3940 && binop3942;
    double binop3944 = binop3938 && binop3943;
    double binop3945 = pos < src_len;
    double charat3946 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3947 = charat3946 == 43.0000000000;
    double charat3948 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3949 = charat3948 == 42.0000000000;
    double binop3950 = binop3947 || binop3949;
    double binop3951 = binop3945 && binop3950;
    if (binop3944) {
    double binop3952 = pos + 3.0000000000;
        cases3937 = binop3952;
    } else if (binop3951) {
    double binop3953 = pos + 2.0000000000;
        cases3937 = binop3953;
    } else if (1.0000000000) {
    double binop3954 = src_len + 1.0000000000;
        cases3937 = binop3954;
    } else { cases3937 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3919] = 0.0000000000;
    tokens[(int)binop3915] = 0.0000000000;
    tokens[(int)binop3897] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop3955 = 68.0000000000 - 1.0000000000;
    double binop3956 = binop3955 * 3.0000000000;
    double cases3957;
    double binop3958 = pos < src_len;
    double charat3959 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3960 = charat3959 >= 48.0000000000;
    double charat3961 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3962 = charat3961 <= 57.0000000000;
    double binop3963 = binop3960 && binop3962;
    double binop3964 = binop3958 && binop3963;
    double binop3965 = pos < src_len;
    double charat3966 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3967 = charat3966 == 43.0000000000;
    double binop3968 = binop3965 && binop3967;
    double binop3969 = pos < src_len;
    double charat3970 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3971 = charat3970 == 42.0000000000;
    double binop3972 = binop3969 && binop3971;
    if (binop3964) {
        cases3957 = TOK_NUMBER;
    } else if (binop3968) {
        cases3957 = TOK_PLUS;
    } else if (binop3972) {
        cases3957 = TOK_MUL;
    } else if (1.0000000000) {
        cases3957 = 0.0000000000;
    } else { cases3957 = 0.0; }
    double binop3973 = 68.0000000000 - 1.0000000000;
    double binop3974 = binop3973 * 0.0000000000;
    double cases3975;
    double binop3976 = pos < src_len;
    if (binop3976) {
        cases3975 = pos;
    } else if (1.0000000000) {
        cases3975 = 0.0000000000;
    } else { cases3975 = 0.0; }
    double binop3977 = 68.0000000000 - 1.0000000000;
    double binop3978 = binop3977 * 0.0000000000;
    double cases3979;
    double binop3980 = pos < src_len;
    double charat3981 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3982 = charat3981 >= 48.0000000000;
    double charat3983 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3984 = charat3983 <= 57.0000000000;
    double binop3985 = binop3982 && binop3984;
    double binop3986 = binop3980 && binop3985;
    double binop3987 = pos < src_len;
    double charat3988 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3989 = charat3988 == 43.0000000000;
    double charat3990 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3991 = charat3990 == 42.0000000000;
    double binop3992 = binop3989 || binop3991;
    double binop3993 = binop3987 && binop3992;
    if (binop3986) {
    double binop3994 = pos + 2.0000000000;
        cases3979 = binop3994;
    } else if (binop3993) {
    double binop3995 = pos + 1.0000000000;
        cases3979 = binop3995;
    } else if (1.0000000000) {
        cases3979 = 0.0000000000;
    } else { cases3979 = 0.0; }
    double cases3996;
    double binop3997 = pos < src_len;
    double charat3998 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop3999 = charat3998 >= 48.0000000000;
    double charat4000 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4001 = charat4000 <= 57.0000000000;
    double binop4002 = binop3999 && binop4001;
    double binop4003 = binop3997 && binop4002;
    double binop4004 = pos < src_len;
    double charat4005 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4006 = charat4005 == 43.0000000000;
    double charat4007 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4008 = charat4007 == 42.0000000000;
    double binop4009 = binop4006 || binop4008;
    double binop4010 = binop4004 && binop4009;
    if (binop4003) {
    double binop4011 = pos + 3.0000000000;
        cases3996 = binop4011;
    } else if (binop4010) {
    double binop4012 = pos + 2.0000000000;
        cases3996 = binop4012;
    } else if (1.0000000000) {
    double binop4013 = src_len + 1.0000000000;
        cases3996 = binop4013;
    } else { cases3996 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop3978] = 0.0000000000;
    tokens[(int)binop3974] = 0.0000000000;
    tokens[(int)binop3956] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4014 = 69.0000000000 - 1.0000000000;
    double binop4015 = binop4014 * 3.0000000000;
    double cases4016;
    double binop4017 = pos < src_len;
    double charat4018 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4019 = charat4018 >= 48.0000000000;
    double charat4020 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4021 = charat4020 <= 57.0000000000;
    double binop4022 = binop4019 && binop4021;
    double binop4023 = binop4017 && binop4022;
    double binop4024 = pos < src_len;
    double charat4025 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4026 = charat4025 == 43.0000000000;
    double binop4027 = binop4024 && binop4026;
    double binop4028 = pos < src_len;
    double charat4029 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4030 = charat4029 == 42.0000000000;
    double binop4031 = binop4028 && binop4030;
    if (binop4023) {
        cases4016 = TOK_NUMBER;
    } else if (binop4027) {
        cases4016 = TOK_PLUS;
    } else if (binop4031) {
        cases4016 = TOK_MUL;
    } else if (1.0000000000) {
        cases4016 = 0.0000000000;
    } else { cases4016 = 0.0; }
    double binop4032 = 69.0000000000 - 1.0000000000;
    double binop4033 = binop4032 * 0.0000000000;
    double cases4034;
    double binop4035 = pos < src_len;
    if (binop4035) {
        cases4034 = pos;
    } else if (1.0000000000) {
        cases4034 = 0.0000000000;
    } else { cases4034 = 0.0; }
    double binop4036 = 69.0000000000 - 1.0000000000;
    double binop4037 = binop4036 * 0.0000000000;
    double cases4038;
    double binop4039 = pos < src_len;
    double charat4040 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4041 = charat4040 >= 48.0000000000;
    double charat4042 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4043 = charat4042 <= 57.0000000000;
    double binop4044 = binop4041 && binop4043;
    double binop4045 = binop4039 && binop4044;
    double binop4046 = pos < src_len;
    double charat4047 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4048 = charat4047 == 43.0000000000;
    double charat4049 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4050 = charat4049 == 42.0000000000;
    double binop4051 = binop4048 || binop4050;
    double binop4052 = binop4046 && binop4051;
    if (binop4045) {
    double binop4053 = pos + 2.0000000000;
        cases4038 = binop4053;
    } else if (binop4052) {
    double binop4054 = pos + 1.0000000000;
        cases4038 = binop4054;
    } else if (1.0000000000) {
        cases4038 = 0.0000000000;
    } else { cases4038 = 0.0; }
    double cases4055;
    double binop4056 = pos < src_len;
    double charat4057 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4058 = charat4057 >= 48.0000000000;
    double charat4059 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4060 = charat4059 <= 57.0000000000;
    double binop4061 = binop4058 && binop4060;
    double binop4062 = binop4056 && binop4061;
    double binop4063 = pos < src_len;
    double charat4064 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4065 = charat4064 == 43.0000000000;
    double charat4066 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4067 = charat4066 == 42.0000000000;
    double binop4068 = binop4065 || binop4067;
    double binop4069 = binop4063 && binop4068;
    if (binop4062) {
    double binop4070 = pos + 3.0000000000;
        cases4055 = binop4070;
    } else if (binop4069) {
    double binop4071 = pos + 2.0000000000;
        cases4055 = binop4071;
    } else if (1.0000000000) {
    double binop4072 = src_len + 1.0000000000;
        cases4055 = binop4072;
    } else { cases4055 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4037] = 0.0000000000;
    tokens[(int)binop4033] = 0.0000000000;
    tokens[(int)binop4015] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4073 = 70.0000000000 - 1.0000000000;
    double binop4074 = binop4073 * 3.0000000000;
    double cases4075;
    double binop4076 = pos < src_len;
    double charat4077 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4078 = charat4077 >= 48.0000000000;
    double charat4079 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4080 = charat4079 <= 57.0000000000;
    double binop4081 = binop4078 && binop4080;
    double binop4082 = binop4076 && binop4081;
    double binop4083 = pos < src_len;
    double charat4084 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4085 = charat4084 == 43.0000000000;
    double binop4086 = binop4083 && binop4085;
    double binop4087 = pos < src_len;
    double charat4088 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4089 = charat4088 == 42.0000000000;
    double binop4090 = binop4087 && binop4089;
    if (binop4082) {
        cases4075 = TOK_NUMBER;
    } else if (binop4086) {
        cases4075 = TOK_PLUS;
    } else if (binop4090) {
        cases4075 = TOK_MUL;
    } else if (1.0000000000) {
        cases4075 = 0.0000000000;
    } else { cases4075 = 0.0; }
    double binop4091 = 70.0000000000 - 1.0000000000;
    double binop4092 = binop4091 * 0.0000000000;
    double cases4093;
    double binop4094 = pos < src_len;
    if (binop4094) {
        cases4093 = pos;
    } else if (1.0000000000) {
        cases4093 = 0.0000000000;
    } else { cases4093 = 0.0; }
    double binop4095 = 70.0000000000 - 1.0000000000;
    double binop4096 = binop4095 * 0.0000000000;
    double cases4097;
    double binop4098 = pos < src_len;
    double charat4099 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4100 = charat4099 >= 48.0000000000;
    double charat4101 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4102 = charat4101 <= 57.0000000000;
    double binop4103 = binop4100 && binop4102;
    double binop4104 = binop4098 && binop4103;
    double binop4105 = pos < src_len;
    double charat4106 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4107 = charat4106 == 43.0000000000;
    double charat4108 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4109 = charat4108 == 42.0000000000;
    double binop4110 = binop4107 || binop4109;
    double binop4111 = binop4105 && binop4110;
    if (binop4104) {
    double binop4112 = pos + 2.0000000000;
        cases4097 = binop4112;
    } else if (binop4111) {
    double binop4113 = pos + 1.0000000000;
        cases4097 = binop4113;
    } else if (1.0000000000) {
        cases4097 = 0.0000000000;
    } else { cases4097 = 0.0; }
    double cases4114;
    double binop4115 = pos < src_len;
    double charat4116 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4117 = charat4116 >= 48.0000000000;
    double charat4118 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4119 = charat4118 <= 57.0000000000;
    double binop4120 = binop4117 && binop4119;
    double binop4121 = binop4115 && binop4120;
    double binop4122 = pos < src_len;
    double charat4123 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4124 = charat4123 == 43.0000000000;
    double charat4125 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4126 = charat4125 == 42.0000000000;
    double binop4127 = binop4124 || binop4126;
    double binop4128 = binop4122 && binop4127;
    if (binop4121) {
    double binop4129 = pos + 3.0000000000;
        cases4114 = binop4129;
    } else if (binop4128) {
    double binop4130 = pos + 2.0000000000;
        cases4114 = binop4130;
    } else if (1.0000000000) {
    double binop4131 = src_len + 1.0000000000;
        cases4114 = binop4131;
    } else { cases4114 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4096] = 0.0000000000;
    tokens[(int)binop4092] = 0.0000000000;
    tokens[(int)binop4074] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4132 = 71.0000000000 - 1.0000000000;
    double binop4133 = binop4132 * 3.0000000000;
    double cases4134;
    double binop4135 = pos < src_len;
    double charat4136 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4137 = charat4136 >= 48.0000000000;
    double charat4138 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4139 = charat4138 <= 57.0000000000;
    double binop4140 = binop4137 && binop4139;
    double binop4141 = binop4135 && binop4140;
    double binop4142 = pos < src_len;
    double charat4143 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4144 = charat4143 == 43.0000000000;
    double binop4145 = binop4142 && binop4144;
    double binop4146 = pos < src_len;
    double charat4147 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4148 = charat4147 == 42.0000000000;
    double binop4149 = binop4146 && binop4148;
    if (binop4141) {
        cases4134 = TOK_NUMBER;
    } else if (binop4145) {
        cases4134 = TOK_PLUS;
    } else if (binop4149) {
        cases4134 = TOK_MUL;
    } else if (1.0000000000) {
        cases4134 = 0.0000000000;
    } else { cases4134 = 0.0; }
    double binop4150 = 71.0000000000 - 1.0000000000;
    double binop4151 = binop4150 * 0.0000000000;
    double cases4152;
    double binop4153 = pos < src_len;
    if (binop4153) {
        cases4152 = pos;
    } else if (1.0000000000) {
        cases4152 = 0.0000000000;
    } else { cases4152 = 0.0; }
    double binop4154 = 71.0000000000 - 1.0000000000;
    double binop4155 = binop4154 * 0.0000000000;
    double cases4156;
    double binop4157 = pos < src_len;
    double charat4158 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4159 = charat4158 >= 48.0000000000;
    double charat4160 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4161 = charat4160 <= 57.0000000000;
    double binop4162 = binop4159 && binop4161;
    double binop4163 = binop4157 && binop4162;
    double binop4164 = pos < src_len;
    double charat4165 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4166 = charat4165 == 43.0000000000;
    double charat4167 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4168 = charat4167 == 42.0000000000;
    double binop4169 = binop4166 || binop4168;
    double binop4170 = binop4164 && binop4169;
    if (binop4163) {
    double binop4171 = pos + 2.0000000000;
        cases4156 = binop4171;
    } else if (binop4170) {
    double binop4172 = pos + 1.0000000000;
        cases4156 = binop4172;
    } else if (1.0000000000) {
        cases4156 = 0.0000000000;
    } else { cases4156 = 0.0; }
    double cases4173;
    double binop4174 = pos < src_len;
    double charat4175 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4176 = charat4175 >= 48.0000000000;
    double charat4177 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4178 = charat4177 <= 57.0000000000;
    double binop4179 = binop4176 && binop4178;
    double binop4180 = binop4174 && binop4179;
    double binop4181 = pos < src_len;
    double charat4182 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4183 = charat4182 == 43.0000000000;
    double charat4184 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4185 = charat4184 == 42.0000000000;
    double binop4186 = binop4183 || binop4185;
    double binop4187 = binop4181 && binop4186;
    if (binop4180) {
    double binop4188 = pos + 3.0000000000;
        cases4173 = binop4188;
    } else if (binop4187) {
    double binop4189 = pos + 2.0000000000;
        cases4173 = binop4189;
    } else if (1.0000000000) {
    double binop4190 = src_len + 1.0000000000;
        cases4173 = binop4190;
    } else { cases4173 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4155] = 0.0000000000;
    tokens[(int)binop4151] = 0.0000000000;
    tokens[(int)binop4133] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4191 = 72.0000000000 - 1.0000000000;
    double binop4192 = binop4191 * 3.0000000000;
    double cases4193;
    double binop4194 = pos < src_len;
    double charat4195 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4196 = charat4195 >= 48.0000000000;
    double charat4197 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4198 = charat4197 <= 57.0000000000;
    double binop4199 = binop4196 && binop4198;
    double binop4200 = binop4194 && binop4199;
    double binop4201 = pos < src_len;
    double charat4202 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4203 = charat4202 == 43.0000000000;
    double binop4204 = binop4201 && binop4203;
    double binop4205 = pos < src_len;
    double charat4206 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4207 = charat4206 == 42.0000000000;
    double binop4208 = binop4205 && binop4207;
    if (binop4200) {
        cases4193 = TOK_NUMBER;
    } else if (binop4204) {
        cases4193 = TOK_PLUS;
    } else if (binop4208) {
        cases4193 = TOK_MUL;
    } else if (1.0000000000) {
        cases4193 = 0.0000000000;
    } else { cases4193 = 0.0; }
    double binop4209 = 72.0000000000 - 1.0000000000;
    double binop4210 = binop4209 * 0.0000000000;
    double cases4211;
    double binop4212 = pos < src_len;
    if (binop4212) {
        cases4211 = pos;
    } else if (1.0000000000) {
        cases4211 = 0.0000000000;
    } else { cases4211 = 0.0; }
    double binop4213 = 72.0000000000 - 1.0000000000;
    double binop4214 = binop4213 * 0.0000000000;
    double cases4215;
    double binop4216 = pos < src_len;
    double charat4217 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4218 = charat4217 >= 48.0000000000;
    double charat4219 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4220 = charat4219 <= 57.0000000000;
    double binop4221 = binop4218 && binop4220;
    double binop4222 = binop4216 && binop4221;
    double binop4223 = pos < src_len;
    double charat4224 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4225 = charat4224 == 43.0000000000;
    double charat4226 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4227 = charat4226 == 42.0000000000;
    double binop4228 = binop4225 || binop4227;
    double binop4229 = binop4223 && binop4228;
    if (binop4222) {
    double binop4230 = pos + 2.0000000000;
        cases4215 = binop4230;
    } else if (binop4229) {
    double binop4231 = pos + 1.0000000000;
        cases4215 = binop4231;
    } else if (1.0000000000) {
        cases4215 = 0.0000000000;
    } else { cases4215 = 0.0; }
    double cases4232;
    double binop4233 = pos < src_len;
    double charat4234 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4235 = charat4234 >= 48.0000000000;
    double charat4236 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4237 = charat4236 <= 57.0000000000;
    double binop4238 = binop4235 && binop4237;
    double binop4239 = binop4233 && binop4238;
    double binop4240 = pos < src_len;
    double charat4241 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4242 = charat4241 == 43.0000000000;
    double charat4243 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4244 = charat4243 == 42.0000000000;
    double binop4245 = binop4242 || binop4244;
    double binop4246 = binop4240 && binop4245;
    if (binop4239) {
    double binop4247 = pos + 3.0000000000;
        cases4232 = binop4247;
    } else if (binop4246) {
    double binop4248 = pos + 2.0000000000;
        cases4232 = binop4248;
    } else if (1.0000000000) {
    double binop4249 = src_len + 1.0000000000;
        cases4232 = binop4249;
    } else { cases4232 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4214] = 0.0000000000;
    tokens[(int)binop4210] = 0.0000000000;
    tokens[(int)binop4192] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4250 = 73.0000000000 - 1.0000000000;
    double binop4251 = binop4250 * 3.0000000000;
    double cases4252;
    double binop4253 = pos < src_len;
    double charat4254 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4255 = charat4254 >= 48.0000000000;
    double charat4256 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4257 = charat4256 <= 57.0000000000;
    double binop4258 = binop4255 && binop4257;
    double binop4259 = binop4253 && binop4258;
    double binop4260 = pos < src_len;
    double charat4261 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4262 = charat4261 == 43.0000000000;
    double binop4263 = binop4260 && binop4262;
    double binop4264 = pos < src_len;
    double charat4265 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4266 = charat4265 == 42.0000000000;
    double binop4267 = binop4264 && binop4266;
    if (binop4259) {
        cases4252 = TOK_NUMBER;
    } else if (binop4263) {
        cases4252 = TOK_PLUS;
    } else if (binop4267) {
        cases4252 = TOK_MUL;
    } else if (1.0000000000) {
        cases4252 = 0.0000000000;
    } else { cases4252 = 0.0; }
    double binop4268 = 73.0000000000 - 1.0000000000;
    double binop4269 = binop4268 * 0.0000000000;
    double cases4270;
    double binop4271 = pos < src_len;
    if (binop4271) {
        cases4270 = pos;
    } else if (1.0000000000) {
        cases4270 = 0.0000000000;
    } else { cases4270 = 0.0; }
    double binop4272 = 73.0000000000 - 1.0000000000;
    double binop4273 = binop4272 * 0.0000000000;
    double cases4274;
    double binop4275 = pos < src_len;
    double charat4276 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4277 = charat4276 >= 48.0000000000;
    double charat4278 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4279 = charat4278 <= 57.0000000000;
    double binop4280 = binop4277 && binop4279;
    double binop4281 = binop4275 && binop4280;
    double binop4282 = pos < src_len;
    double charat4283 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4284 = charat4283 == 43.0000000000;
    double charat4285 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4286 = charat4285 == 42.0000000000;
    double binop4287 = binop4284 || binop4286;
    double binop4288 = binop4282 && binop4287;
    if (binop4281) {
    double binop4289 = pos + 2.0000000000;
        cases4274 = binop4289;
    } else if (binop4288) {
    double binop4290 = pos + 1.0000000000;
        cases4274 = binop4290;
    } else if (1.0000000000) {
        cases4274 = 0.0000000000;
    } else { cases4274 = 0.0; }
    double cases4291;
    double binop4292 = pos < src_len;
    double charat4293 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4294 = charat4293 >= 48.0000000000;
    double charat4295 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4296 = charat4295 <= 57.0000000000;
    double binop4297 = binop4294 && binop4296;
    double binop4298 = binop4292 && binop4297;
    double binop4299 = pos < src_len;
    double charat4300 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4301 = charat4300 == 43.0000000000;
    double charat4302 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4303 = charat4302 == 42.0000000000;
    double binop4304 = binop4301 || binop4303;
    double binop4305 = binop4299 && binop4304;
    if (binop4298) {
    double binop4306 = pos + 3.0000000000;
        cases4291 = binop4306;
    } else if (binop4305) {
    double binop4307 = pos + 2.0000000000;
        cases4291 = binop4307;
    } else if (1.0000000000) {
    double binop4308 = src_len + 1.0000000000;
        cases4291 = binop4308;
    } else { cases4291 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4273] = 0.0000000000;
    tokens[(int)binop4269] = 0.0000000000;
    tokens[(int)binop4251] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4309 = 74.0000000000 - 1.0000000000;
    double binop4310 = binop4309 * 3.0000000000;
    double cases4311;
    double binop4312 = pos < src_len;
    double charat4313 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4314 = charat4313 >= 48.0000000000;
    double charat4315 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4316 = charat4315 <= 57.0000000000;
    double binop4317 = binop4314 && binop4316;
    double binop4318 = binop4312 && binop4317;
    double binop4319 = pos < src_len;
    double charat4320 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4321 = charat4320 == 43.0000000000;
    double binop4322 = binop4319 && binop4321;
    double binop4323 = pos < src_len;
    double charat4324 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4325 = charat4324 == 42.0000000000;
    double binop4326 = binop4323 && binop4325;
    if (binop4318) {
        cases4311 = TOK_NUMBER;
    } else if (binop4322) {
        cases4311 = TOK_PLUS;
    } else if (binop4326) {
        cases4311 = TOK_MUL;
    } else if (1.0000000000) {
        cases4311 = 0.0000000000;
    } else { cases4311 = 0.0; }
    double binop4327 = 74.0000000000 - 1.0000000000;
    double binop4328 = binop4327 * 0.0000000000;
    double cases4329;
    double binop4330 = pos < src_len;
    if (binop4330) {
        cases4329 = pos;
    } else if (1.0000000000) {
        cases4329 = 0.0000000000;
    } else { cases4329 = 0.0; }
    double binop4331 = 74.0000000000 - 1.0000000000;
    double binop4332 = binop4331 * 0.0000000000;
    double cases4333;
    double binop4334 = pos < src_len;
    double charat4335 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4336 = charat4335 >= 48.0000000000;
    double charat4337 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4338 = charat4337 <= 57.0000000000;
    double binop4339 = binop4336 && binop4338;
    double binop4340 = binop4334 && binop4339;
    double binop4341 = pos < src_len;
    double charat4342 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4343 = charat4342 == 43.0000000000;
    double charat4344 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4345 = charat4344 == 42.0000000000;
    double binop4346 = binop4343 || binop4345;
    double binop4347 = binop4341 && binop4346;
    if (binop4340) {
    double binop4348 = pos + 2.0000000000;
        cases4333 = binop4348;
    } else if (binop4347) {
    double binop4349 = pos + 1.0000000000;
        cases4333 = binop4349;
    } else if (1.0000000000) {
        cases4333 = 0.0000000000;
    } else { cases4333 = 0.0; }
    double cases4350;
    double binop4351 = pos < src_len;
    double charat4352 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4353 = charat4352 >= 48.0000000000;
    double charat4354 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4355 = charat4354 <= 57.0000000000;
    double binop4356 = binop4353 && binop4355;
    double binop4357 = binop4351 && binop4356;
    double binop4358 = pos < src_len;
    double charat4359 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4360 = charat4359 == 43.0000000000;
    double charat4361 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4362 = charat4361 == 42.0000000000;
    double binop4363 = binop4360 || binop4362;
    double binop4364 = binop4358 && binop4363;
    if (binop4357) {
    double binop4365 = pos + 3.0000000000;
        cases4350 = binop4365;
    } else if (binop4364) {
    double binop4366 = pos + 2.0000000000;
        cases4350 = binop4366;
    } else if (1.0000000000) {
    double binop4367 = src_len + 1.0000000000;
        cases4350 = binop4367;
    } else { cases4350 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4332] = 0.0000000000;
    tokens[(int)binop4328] = 0.0000000000;
    tokens[(int)binop4310] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4368 = 75.0000000000 - 1.0000000000;
    double binop4369 = binop4368 * 3.0000000000;
    double cases4370;
    double binop4371 = pos < src_len;
    double charat4372 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4373 = charat4372 >= 48.0000000000;
    double charat4374 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4375 = charat4374 <= 57.0000000000;
    double binop4376 = binop4373 && binop4375;
    double binop4377 = binop4371 && binop4376;
    double binop4378 = pos < src_len;
    double charat4379 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4380 = charat4379 == 43.0000000000;
    double binop4381 = binop4378 && binop4380;
    double binop4382 = pos < src_len;
    double charat4383 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4384 = charat4383 == 42.0000000000;
    double binop4385 = binop4382 && binop4384;
    if (binop4377) {
        cases4370 = TOK_NUMBER;
    } else if (binop4381) {
        cases4370 = TOK_PLUS;
    } else if (binop4385) {
        cases4370 = TOK_MUL;
    } else if (1.0000000000) {
        cases4370 = 0.0000000000;
    } else { cases4370 = 0.0; }
    double binop4386 = 75.0000000000 - 1.0000000000;
    double binop4387 = binop4386 * 0.0000000000;
    double cases4388;
    double binop4389 = pos < src_len;
    if (binop4389) {
        cases4388 = pos;
    } else if (1.0000000000) {
        cases4388 = 0.0000000000;
    } else { cases4388 = 0.0; }
    double binop4390 = 75.0000000000 - 1.0000000000;
    double binop4391 = binop4390 * 0.0000000000;
    double cases4392;
    double binop4393 = pos < src_len;
    double charat4394 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4395 = charat4394 >= 48.0000000000;
    double charat4396 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4397 = charat4396 <= 57.0000000000;
    double binop4398 = binop4395 && binop4397;
    double binop4399 = binop4393 && binop4398;
    double binop4400 = pos < src_len;
    double charat4401 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4402 = charat4401 == 43.0000000000;
    double charat4403 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4404 = charat4403 == 42.0000000000;
    double binop4405 = binop4402 || binop4404;
    double binop4406 = binop4400 && binop4405;
    if (binop4399) {
    double binop4407 = pos + 2.0000000000;
        cases4392 = binop4407;
    } else if (binop4406) {
    double binop4408 = pos + 1.0000000000;
        cases4392 = binop4408;
    } else if (1.0000000000) {
        cases4392 = 0.0000000000;
    } else { cases4392 = 0.0; }
    double cases4409;
    double binop4410 = pos < src_len;
    double charat4411 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4412 = charat4411 >= 48.0000000000;
    double charat4413 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4414 = charat4413 <= 57.0000000000;
    double binop4415 = binop4412 && binop4414;
    double binop4416 = binop4410 && binop4415;
    double binop4417 = pos < src_len;
    double charat4418 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4419 = charat4418 == 43.0000000000;
    double charat4420 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4421 = charat4420 == 42.0000000000;
    double binop4422 = binop4419 || binop4421;
    double binop4423 = binop4417 && binop4422;
    if (binop4416) {
    double binop4424 = pos + 3.0000000000;
        cases4409 = binop4424;
    } else if (binop4423) {
    double binop4425 = pos + 2.0000000000;
        cases4409 = binop4425;
    } else if (1.0000000000) {
    double binop4426 = src_len + 1.0000000000;
        cases4409 = binop4426;
    } else { cases4409 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4391] = 0.0000000000;
    tokens[(int)binop4387] = 0.0000000000;
    tokens[(int)binop4369] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4427 = 76.0000000000 - 1.0000000000;
    double binop4428 = binop4427 * 3.0000000000;
    double cases4429;
    double binop4430 = pos < src_len;
    double charat4431 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4432 = charat4431 >= 48.0000000000;
    double charat4433 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4434 = charat4433 <= 57.0000000000;
    double binop4435 = binop4432 && binop4434;
    double binop4436 = binop4430 && binop4435;
    double binop4437 = pos < src_len;
    double charat4438 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4439 = charat4438 == 43.0000000000;
    double binop4440 = binop4437 && binop4439;
    double binop4441 = pos < src_len;
    double charat4442 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4443 = charat4442 == 42.0000000000;
    double binop4444 = binop4441 && binop4443;
    if (binop4436) {
        cases4429 = TOK_NUMBER;
    } else if (binop4440) {
        cases4429 = TOK_PLUS;
    } else if (binop4444) {
        cases4429 = TOK_MUL;
    } else if (1.0000000000) {
        cases4429 = 0.0000000000;
    } else { cases4429 = 0.0; }
    double binop4445 = 76.0000000000 - 1.0000000000;
    double binop4446 = binop4445 * 0.0000000000;
    double cases4447;
    double binop4448 = pos < src_len;
    if (binop4448) {
        cases4447 = pos;
    } else if (1.0000000000) {
        cases4447 = 0.0000000000;
    } else { cases4447 = 0.0; }
    double binop4449 = 76.0000000000 - 1.0000000000;
    double binop4450 = binop4449 * 0.0000000000;
    double cases4451;
    double binop4452 = pos < src_len;
    double charat4453 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4454 = charat4453 >= 48.0000000000;
    double charat4455 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4456 = charat4455 <= 57.0000000000;
    double binop4457 = binop4454 && binop4456;
    double binop4458 = binop4452 && binop4457;
    double binop4459 = pos < src_len;
    double charat4460 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4461 = charat4460 == 43.0000000000;
    double charat4462 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4463 = charat4462 == 42.0000000000;
    double binop4464 = binop4461 || binop4463;
    double binop4465 = binop4459 && binop4464;
    if (binop4458) {
    double binop4466 = pos + 2.0000000000;
        cases4451 = binop4466;
    } else if (binop4465) {
    double binop4467 = pos + 1.0000000000;
        cases4451 = binop4467;
    } else if (1.0000000000) {
        cases4451 = 0.0000000000;
    } else { cases4451 = 0.0; }
    double cases4468;
    double binop4469 = pos < src_len;
    double charat4470 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4471 = charat4470 >= 48.0000000000;
    double charat4472 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4473 = charat4472 <= 57.0000000000;
    double binop4474 = binop4471 && binop4473;
    double binop4475 = binop4469 && binop4474;
    double binop4476 = pos < src_len;
    double charat4477 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4478 = charat4477 == 43.0000000000;
    double charat4479 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4480 = charat4479 == 42.0000000000;
    double binop4481 = binop4478 || binop4480;
    double binop4482 = binop4476 && binop4481;
    if (binop4475) {
    double binop4483 = pos + 3.0000000000;
        cases4468 = binop4483;
    } else if (binop4482) {
    double binop4484 = pos + 2.0000000000;
        cases4468 = binop4484;
    } else if (1.0000000000) {
    double binop4485 = src_len + 1.0000000000;
        cases4468 = binop4485;
    } else { cases4468 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4450] = 0.0000000000;
    tokens[(int)binop4446] = 0.0000000000;
    tokens[(int)binop4428] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4486 = 77.0000000000 - 1.0000000000;
    double binop4487 = binop4486 * 3.0000000000;
    double cases4488;
    double binop4489 = pos < src_len;
    double charat4490 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4491 = charat4490 >= 48.0000000000;
    double charat4492 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4493 = charat4492 <= 57.0000000000;
    double binop4494 = binop4491 && binop4493;
    double binop4495 = binop4489 && binop4494;
    double binop4496 = pos < src_len;
    double charat4497 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4498 = charat4497 == 43.0000000000;
    double binop4499 = binop4496 && binop4498;
    double binop4500 = pos < src_len;
    double charat4501 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4502 = charat4501 == 42.0000000000;
    double binop4503 = binop4500 && binop4502;
    if (binop4495) {
        cases4488 = TOK_NUMBER;
    } else if (binop4499) {
        cases4488 = TOK_PLUS;
    } else if (binop4503) {
        cases4488 = TOK_MUL;
    } else if (1.0000000000) {
        cases4488 = 0.0000000000;
    } else { cases4488 = 0.0; }
    double binop4504 = 77.0000000000 - 1.0000000000;
    double binop4505 = binop4504 * 0.0000000000;
    double cases4506;
    double binop4507 = pos < src_len;
    if (binop4507) {
        cases4506 = pos;
    } else if (1.0000000000) {
        cases4506 = 0.0000000000;
    } else { cases4506 = 0.0; }
    double binop4508 = 77.0000000000 - 1.0000000000;
    double binop4509 = binop4508 * 0.0000000000;
    double cases4510;
    double binop4511 = pos < src_len;
    double charat4512 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4513 = charat4512 >= 48.0000000000;
    double charat4514 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4515 = charat4514 <= 57.0000000000;
    double binop4516 = binop4513 && binop4515;
    double binop4517 = binop4511 && binop4516;
    double binop4518 = pos < src_len;
    double charat4519 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4520 = charat4519 == 43.0000000000;
    double charat4521 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4522 = charat4521 == 42.0000000000;
    double binop4523 = binop4520 || binop4522;
    double binop4524 = binop4518 && binop4523;
    if (binop4517) {
    double binop4525 = pos + 2.0000000000;
        cases4510 = binop4525;
    } else if (binop4524) {
    double binop4526 = pos + 1.0000000000;
        cases4510 = binop4526;
    } else if (1.0000000000) {
        cases4510 = 0.0000000000;
    } else { cases4510 = 0.0; }
    double cases4527;
    double binop4528 = pos < src_len;
    double charat4529 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4530 = charat4529 >= 48.0000000000;
    double charat4531 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4532 = charat4531 <= 57.0000000000;
    double binop4533 = binop4530 && binop4532;
    double binop4534 = binop4528 && binop4533;
    double binop4535 = pos < src_len;
    double charat4536 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4537 = charat4536 == 43.0000000000;
    double charat4538 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4539 = charat4538 == 42.0000000000;
    double binop4540 = binop4537 || binop4539;
    double binop4541 = binop4535 && binop4540;
    if (binop4534) {
    double binop4542 = pos + 3.0000000000;
        cases4527 = binop4542;
    } else if (binop4541) {
    double binop4543 = pos + 2.0000000000;
        cases4527 = binop4543;
    } else if (1.0000000000) {
    double binop4544 = src_len + 1.0000000000;
        cases4527 = binop4544;
    } else { cases4527 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4509] = 0.0000000000;
    tokens[(int)binop4505] = 0.0000000000;
    tokens[(int)binop4487] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4545 = 78.0000000000 - 1.0000000000;
    double binop4546 = binop4545 * 3.0000000000;
    double cases4547;
    double binop4548 = pos < src_len;
    double charat4549 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4550 = charat4549 >= 48.0000000000;
    double charat4551 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4552 = charat4551 <= 57.0000000000;
    double binop4553 = binop4550 && binop4552;
    double binop4554 = binop4548 && binop4553;
    double binop4555 = pos < src_len;
    double charat4556 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4557 = charat4556 == 43.0000000000;
    double binop4558 = binop4555 && binop4557;
    double binop4559 = pos < src_len;
    double charat4560 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4561 = charat4560 == 42.0000000000;
    double binop4562 = binop4559 && binop4561;
    if (binop4554) {
        cases4547 = TOK_NUMBER;
    } else if (binop4558) {
        cases4547 = TOK_PLUS;
    } else if (binop4562) {
        cases4547 = TOK_MUL;
    } else if (1.0000000000) {
        cases4547 = 0.0000000000;
    } else { cases4547 = 0.0; }
    double binop4563 = 78.0000000000 - 1.0000000000;
    double binop4564 = binop4563 * 0.0000000000;
    double cases4565;
    double binop4566 = pos < src_len;
    if (binop4566) {
        cases4565 = pos;
    } else if (1.0000000000) {
        cases4565 = 0.0000000000;
    } else { cases4565 = 0.0; }
    double binop4567 = 78.0000000000 - 1.0000000000;
    double binop4568 = binop4567 * 0.0000000000;
    double cases4569;
    double binop4570 = pos < src_len;
    double charat4571 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4572 = charat4571 >= 48.0000000000;
    double charat4573 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4574 = charat4573 <= 57.0000000000;
    double binop4575 = binop4572 && binop4574;
    double binop4576 = binop4570 && binop4575;
    double binop4577 = pos < src_len;
    double charat4578 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4579 = charat4578 == 43.0000000000;
    double charat4580 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4581 = charat4580 == 42.0000000000;
    double binop4582 = binop4579 || binop4581;
    double binop4583 = binop4577 && binop4582;
    if (binop4576) {
    double binop4584 = pos + 2.0000000000;
        cases4569 = binop4584;
    } else if (binop4583) {
    double binop4585 = pos + 1.0000000000;
        cases4569 = binop4585;
    } else if (1.0000000000) {
        cases4569 = 0.0000000000;
    } else { cases4569 = 0.0; }
    double cases4586;
    double binop4587 = pos < src_len;
    double charat4588 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4589 = charat4588 >= 48.0000000000;
    double charat4590 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4591 = charat4590 <= 57.0000000000;
    double binop4592 = binop4589 && binop4591;
    double binop4593 = binop4587 && binop4592;
    double binop4594 = pos < src_len;
    double charat4595 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4596 = charat4595 == 43.0000000000;
    double charat4597 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4598 = charat4597 == 42.0000000000;
    double binop4599 = binop4596 || binop4598;
    double binop4600 = binop4594 && binop4599;
    if (binop4593) {
    double binop4601 = pos + 3.0000000000;
        cases4586 = binop4601;
    } else if (binop4600) {
    double binop4602 = pos + 2.0000000000;
        cases4586 = binop4602;
    } else if (1.0000000000) {
    double binop4603 = src_len + 1.0000000000;
        cases4586 = binop4603;
    } else { cases4586 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4568] = 0.0000000000;
    tokens[(int)binop4564] = 0.0000000000;
    tokens[(int)binop4546] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4604 = 79.0000000000 - 1.0000000000;
    double binop4605 = binop4604 * 3.0000000000;
    double cases4606;
    double binop4607 = pos < src_len;
    double charat4608 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4609 = charat4608 >= 48.0000000000;
    double charat4610 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4611 = charat4610 <= 57.0000000000;
    double binop4612 = binop4609 && binop4611;
    double binop4613 = binop4607 && binop4612;
    double binop4614 = pos < src_len;
    double charat4615 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4616 = charat4615 == 43.0000000000;
    double binop4617 = binop4614 && binop4616;
    double binop4618 = pos < src_len;
    double charat4619 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4620 = charat4619 == 42.0000000000;
    double binop4621 = binop4618 && binop4620;
    if (binop4613) {
        cases4606 = TOK_NUMBER;
    } else if (binop4617) {
        cases4606 = TOK_PLUS;
    } else if (binop4621) {
        cases4606 = TOK_MUL;
    } else if (1.0000000000) {
        cases4606 = 0.0000000000;
    } else { cases4606 = 0.0; }
    double binop4622 = 79.0000000000 - 1.0000000000;
    double binop4623 = binop4622 * 0.0000000000;
    double cases4624;
    double binop4625 = pos < src_len;
    if (binop4625) {
        cases4624 = pos;
    } else if (1.0000000000) {
        cases4624 = 0.0000000000;
    } else { cases4624 = 0.0; }
    double binop4626 = 79.0000000000 - 1.0000000000;
    double binop4627 = binop4626 * 0.0000000000;
    double cases4628;
    double binop4629 = pos < src_len;
    double charat4630 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4631 = charat4630 >= 48.0000000000;
    double charat4632 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4633 = charat4632 <= 57.0000000000;
    double binop4634 = binop4631 && binop4633;
    double binop4635 = binop4629 && binop4634;
    double binop4636 = pos < src_len;
    double charat4637 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4638 = charat4637 == 43.0000000000;
    double charat4639 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4640 = charat4639 == 42.0000000000;
    double binop4641 = binop4638 || binop4640;
    double binop4642 = binop4636 && binop4641;
    if (binop4635) {
    double binop4643 = pos + 2.0000000000;
        cases4628 = binop4643;
    } else if (binop4642) {
    double binop4644 = pos + 1.0000000000;
        cases4628 = binop4644;
    } else if (1.0000000000) {
        cases4628 = 0.0000000000;
    } else { cases4628 = 0.0; }
    double cases4645;
    double binop4646 = pos < src_len;
    double charat4647 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4648 = charat4647 >= 48.0000000000;
    double charat4649 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4650 = charat4649 <= 57.0000000000;
    double binop4651 = binop4648 && binop4650;
    double binop4652 = binop4646 && binop4651;
    double binop4653 = pos < src_len;
    double charat4654 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4655 = charat4654 == 43.0000000000;
    double charat4656 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4657 = charat4656 == 42.0000000000;
    double binop4658 = binop4655 || binop4657;
    double binop4659 = binop4653 && binop4658;
    if (binop4652) {
    double binop4660 = pos + 3.0000000000;
        cases4645 = binop4660;
    } else if (binop4659) {
    double binop4661 = pos + 2.0000000000;
        cases4645 = binop4661;
    } else if (1.0000000000) {
    double binop4662 = src_len + 1.0000000000;
        cases4645 = binop4662;
    } else { cases4645 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4627] = 0.0000000000;
    tokens[(int)binop4623] = 0.0000000000;
    tokens[(int)binop4605] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4663 = 80.0000000000 - 1.0000000000;
    double binop4664 = binop4663 * 3.0000000000;
    double cases4665;
    double binop4666 = pos < src_len;
    double charat4667 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4668 = charat4667 >= 48.0000000000;
    double charat4669 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4670 = charat4669 <= 57.0000000000;
    double binop4671 = binop4668 && binop4670;
    double binop4672 = binop4666 && binop4671;
    double binop4673 = pos < src_len;
    double charat4674 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4675 = charat4674 == 43.0000000000;
    double binop4676 = binop4673 && binop4675;
    double binop4677 = pos < src_len;
    double charat4678 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4679 = charat4678 == 42.0000000000;
    double binop4680 = binop4677 && binop4679;
    if (binop4672) {
        cases4665 = TOK_NUMBER;
    } else if (binop4676) {
        cases4665 = TOK_PLUS;
    } else if (binop4680) {
        cases4665 = TOK_MUL;
    } else if (1.0000000000) {
        cases4665 = 0.0000000000;
    } else { cases4665 = 0.0; }
    double binop4681 = 80.0000000000 - 1.0000000000;
    double binop4682 = binop4681 * 0.0000000000;
    double cases4683;
    double binop4684 = pos < src_len;
    if (binop4684) {
        cases4683 = pos;
    } else if (1.0000000000) {
        cases4683 = 0.0000000000;
    } else { cases4683 = 0.0; }
    double binop4685 = 80.0000000000 - 1.0000000000;
    double binop4686 = binop4685 * 0.0000000000;
    double cases4687;
    double binop4688 = pos < src_len;
    double charat4689 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4690 = charat4689 >= 48.0000000000;
    double charat4691 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4692 = charat4691 <= 57.0000000000;
    double binop4693 = binop4690 && binop4692;
    double binop4694 = binop4688 && binop4693;
    double binop4695 = pos < src_len;
    double charat4696 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4697 = charat4696 == 43.0000000000;
    double charat4698 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4699 = charat4698 == 42.0000000000;
    double binop4700 = binop4697 || binop4699;
    double binop4701 = binop4695 && binop4700;
    if (binop4694) {
    double binop4702 = pos + 2.0000000000;
        cases4687 = binop4702;
    } else if (binop4701) {
    double binop4703 = pos + 1.0000000000;
        cases4687 = binop4703;
    } else if (1.0000000000) {
        cases4687 = 0.0000000000;
    } else { cases4687 = 0.0; }
    double cases4704;
    double binop4705 = pos < src_len;
    double charat4706 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4707 = charat4706 >= 48.0000000000;
    double charat4708 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4709 = charat4708 <= 57.0000000000;
    double binop4710 = binop4707 && binop4709;
    double binop4711 = binop4705 && binop4710;
    double binop4712 = pos < src_len;
    double charat4713 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4714 = charat4713 == 43.0000000000;
    double charat4715 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4716 = charat4715 == 42.0000000000;
    double binop4717 = binop4714 || binop4716;
    double binop4718 = binop4712 && binop4717;
    if (binop4711) {
    double binop4719 = pos + 3.0000000000;
        cases4704 = binop4719;
    } else if (binop4718) {
    double binop4720 = pos + 2.0000000000;
        cases4704 = binop4720;
    } else if (1.0000000000) {
    double binop4721 = src_len + 1.0000000000;
        cases4704 = binop4721;
    } else { cases4704 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4686] = 0.0000000000;
    tokens[(int)binop4682] = 0.0000000000;
    tokens[(int)binop4664] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4722 = 81.0000000000 - 1.0000000000;
    double binop4723 = binop4722 * 3.0000000000;
    double cases4724;
    double binop4725 = pos < src_len;
    double charat4726 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4727 = charat4726 >= 48.0000000000;
    double charat4728 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4729 = charat4728 <= 57.0000000000;
    double binop4730 = binop4727 && binop4729;
    double binop4731 = binop4725 && binop4730;
    double binop4732 = pos < src_len;
    double charat4733 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4734 = charat4733 == 43.0000000000;
    double binop4735 = binop4732 && binop4734;
    double binop4736 = pos < src_len;
    double charat4737 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4738 = charat4737 == 42.0000000000;
    double binop4739 = binop4736 && binop4738;
    if (binop4731) {
        cases4724 = TOK_NUMBER;
    } else if (binop4735) {
        cases4724 = TOK_PLUS;
    } else if (binop4739) {
        cases4724 = TOK_MUL;
    } else if (1.0000000000) {
        cases4724 = 0.0000000000;
    } else { cases4724 = 0.0; }
    double binop4740 = 81.0000000000 - 1.0000000000;
    double binop4741 = binop4740 * 0.0000000000;
    double cases4742;
    double binop4743 = pos < src_len;
    if (binop4743) {
        cases4742 = pos;
    } else if (1.0000000000) {
        cases4742 = 0.0000000000;
    } else { cases4742 = 0.0; }
    double binop4744 = 81.0000000000 - 1.0000000000;
    double binop4745 = binop4744 * 0.0000000000;
    double cases4746;
    double binop4747 = pos < src_len;
    double charat4748 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4749 = charat4748 >= 48.0000000000;
    double charat4750 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4751 = charat4750 <= 57.0000000000;
    double binop4752 = binop4749 && binop4751;
    double binop4753 = binop4747 && binop4752;
    double binop4754 = pos < src_len;
    double charat4755 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4756 = charat4755 == 43.0000000000;
    double charat4757 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4758 = charat4757 == 42.0000000000;
    double binop4759 = binop4756 || binop4758;
    double binop4760 = binop4754 && binop4759;
    if (binop4753) {
    double binop4761 = pos + 2.0000000000;
        cases4746 = binop4761;
    } else if (binop4760) {
    double binop4762 = pos + 1.0000000000;
        cases4746 = binop4762;
    } else if (1.0000000000) {
        cases4746 = 0.0000000000;
    } else { cases4746 = 0.0; }
    double cases4763;
    double binop4764 = pos < src_len;
    double charat4765 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4766 = charat4765 >= 48.0000000000;
    double charat4767 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4768 = charat4767 <= 57.0000000000;
    double binop4769 = binop4766 && binop4768;
    double binop4770 = binop4764 && binop4769;
    double binop4771 = pos < src_len;
    double charat4772 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4773 = charat4772 == 43.0000000000;
    double charat4774 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4775 = charat4774 == 42.0000000000;
    double binop4776 = binop4773 || binop4775;
    double binop4777 = binop4771 && binop4776;
    if (binop4770) {
    double binop4778 = pos + 3.0000000000;
        cases4763 = binop4778;
    } else if (binop4777) {
    double binop4779 = pos + 2.0000000000;
        cases4763 = binop4779;
    } else if (1.0000000000) {
    double binop4780 = src_len + 1.0000000000;
        cases4763 = binop4780;
    } else { cases4763 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4745] = 0.0000000000;
    tokens[(int)binop4741] = 0.0000000000;
    tokens[(int)binop4723] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4781 = 82.0000000000 - 1.0000000000;
    double binop4782 = binop4781 * 3.0000000000;
    double cases4783;
    double binop4784 = pos < src_len;
    double charat4785 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4786 = charat4785 >= 48.0000000000;
    double charat4787 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4788 = charat4787 <= 57.0000000000;
    double binop4789 = binop4786 && binop4788;
    double binop4790 = binop4784 && binop4789;
    double binop4791 = pos < src_len;
    double charat4792 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4793 = charat4792 == 43.0000000000;
    double binop4794 = binop4791 && binop4793;
    double binop4795 = pos < src_len;
    double charat4796 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4797 = charat4796 == 42.0000000000;
    double binop4798 = binop4795 && binop4797;
    if (binop4790) {
        cases4783 = TOK_NUMBER;
    } else if (binop4794) {
        cases4783 = TOK_PLUS;
    } else if (binop4798) {
        cases4783 = TOK_MUL;
    } else if (1.0000000000) {
        cases4783 = 0.0000000000;
    } else { cases4783 = 0.0; }
    double binop4799 = 82.0000000000 - 1.0000000000;
    double binop4800 = binop4799 * 0.0000000000;
    double cases4801;
    double binop4802 = pos < src_len;
    if (binop4802) {
        cases4801 = pos;
    } else if (1.0000000000) {
        cases4801 = 0.0000000000;
    } else { cases4801 = 0.0; }
    double binop4803 = 82.0000000000 - 1.0000000000;
    double binop4804 = binop4803 * 0.0000000000;
    double cases4805;
    double binop4806 = pos < src_len;
    double charat4807 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4808 = charat4807 >= 48.0000000000;
    double charat4809 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4810 = charat4809 <= 57.0000000000;
    double binop4811 = binop4808 && binop4810;
    double binop4812 = binop4806 && binop4811;
    double binop4813 = pos < src_len;
    double charat4814 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4815 = charat4814 == 43.0000000000;
    double charat4816 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4817 = charat4816 == 42.0000000000;
    double binop4818 = binop4815 || binop4817;
    double binop4819 = binop4813 && binop4818;
    if (binop4812) {
    double binop4820 = pos + 2.0000000000;
        cases4805 = binop4820;
    } else if (binop4819) {
    double binop4821 = pos + 1.0000000000;
        cases4805 = binop4821;
    } else if (1.0000000000) {
        cases4805 = 0.0000000000;
    } else { cases4805 = 0.0; }
    double cases4822;
    double binop4823 = pos < src_len;
    double charat4824 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4825 = charat4824 >= 48.0000000000;
    double charat4826 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4827 = charat4826 <= 57.0000000000;
    double binop4828 = binop4825 && binop4827;
    double binop4829 = binop4823 && binop4828;
    double binop4830 = pos < src_len;
    double charat4831 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4832 = charat4831 == 43.0000000000;
    double charat4833 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4834 = charat4833 == 42.0000000000;
    double binop4835 = binop4832 || binop4834;
    double binop4836 = binop4830 && binop4835;
    if (binop4829) {
    double binop4837 = pos + 3.0000000000;
        cases4822 = binop4837;
    } else if (binop4836) {
    double binop4838 = pos + 2.0000000000;
        cases4822 = binop4838;
    } else if (1.0000000000) {
    double binop4839 = src_len + 1.0000000000;
        cases4822 = binop4839;
    } else { cases4822 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4804] = 0.0000000000;
    tokens[(int)binop4800] = 0.0000000000;
    tokens[(int)binop4782] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4840 = 83.0000000000 - 1.0000000000;
    double binop4841 = binop4840 * 3.0000000000;
    double cases4842;
    double binop4843 = pos < src_len;
    double charat4844 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4845 = charat4844 >= 48.0000000000;
    double charat4846 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4847 = charat4846 <= 57.0000000000;
    double binop4848 = binop4845 && binop4847;
    double binop4849 = binop4843 && binop4848;
    double binop4850 = pos < src_len;
    double charat4851 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4852 = charat4851 == 43.0000000000;
    double binop4853 = binop4850 && binop4852;
    double binop4854 = pos < src_len;
    double charat4855 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4856 = charat4855 == 42.0000000000;
    double binop4857 = binop4854 && binop4856;
    if (binop4849) {
        cases4842 = TOK_NUMBER;
    } else if (binop4853) {
        cases4842 = TOK_PLUS;
    } else if (binop4857) {
        cases4842 = TOK_MUL;
    } else if (1.0000000000) {
        cases4842 = 0.0000000000;
    } else { cases4842 = 0.0; }
    double binop4858 = 83.0000000000 - 1.0000000000;
    double binop4859 = binop4858 * 0.0000000000;
    double cases4860;
    double binop4861 = pos < src_len;
    if (binop4861) {
        cases4860 = pos;
    } else if (1.0000000000) {
        cases4860 = 0.0000000000;
    } else { cases4860 = 0.0; }
    double binop4862 = 83.0000000000 - 1.0000000000;
    double binop4863 = binop4862 * 0.0000000000;
    double cases4864;
    double binop4865 = pos < src_len;
    double charat4866 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4867 = charat4866 >= 48.0000000000;
    double charat4868 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4869 = charat4868 <= 57.0000000000;
    double binop4870 = binop4867 && binop4869;
    double binop4871 = binop4865 && binop4870;
    double binop4872 = pos < src_len;
    double charat4873 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4874 = charat4873 == 43.0000000000;
    double charat4875 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4876 = charat4875 == 42.0000000000;
    double binop4877 = binop4874 || binop4876;
    double binop4878 = binop4872 && binop4877;
    if (binop4871) {
    double binop4879 = pos + 2.0000000000;
        cases4864 = binop4879;
    } else if (binop4878) {
    double binop4880 = pos + 1.0000000000;
        cases4864 = binop4880;
    } else if (1.0000000000) {
        cases4864 = 0.0000000000;
    } else { cases4864 = 0.0; }
    double cases4881;
    double binop4882 = pos < src_len;
    double charat4883 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4884 = charat4883 >= 48.0000000000;
    double charat4885 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4886 = charat4885 <= 57.0000000000;
    double binop4887 = binop4884 && binop4886;
    double binop4888 = binop4882 && binop4887;
    double binop4889 = pos < src_len;
    double charat4890 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4891 = charat4890 == 43.0000000000;
    double charat4892 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4893 = charat4892 == 42.0000000000;
    double binop4894 = binop4891 || binop4893;
    double binop4895 = binop4889 && binop4894;
    if (binop4888) {
    double binop4896 = pos + 3.0000000000;
        cases4881 = binop4896;
    } else if (binop4895) {
    double binop4897 = pos + 2.0000000000;
        cases4881 = binop4897;
    } else if (1.0000000000) {
    double binop4898 = src_len + 1.0000000000;
        cases4881 = binop4898;
    } else { cases4881 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4863] = 0.0000000000;
    tokens[(int)binop4859] = 0.0000000000;
    tokens[(int)binop4841] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4899 = 84.0000000000 - 1.0000000000;
    double binop4900 = binop4899 * 3.0000000000;
    double cases4901;
    double binop4902 = pos < src_len;
    double charat4903 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4904 = charat4903 >= 48.0000000000;
    double charat4905 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4906 = charat4905 <= 57.0000000000;
    double binop4907 = binop4904 && binop4906;
    double binop4908 = binop4902 && binop4907;
    double binop4909 = pos < src_len;
    double charat4910 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4911 = charat4910 == 43.0000000000;
    double binop4912 = binop4909 && binop4911;
    double binop4913 = pos < src_len;
    double charat4914 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4915 = charat4914 == 42.0000000000;
    double binop4916 = binop4913 && binop4915;
    if (binop4908) {
        cases4901 = TOK_NUMBER;
    } else if (binop4912) {
        cases4901 = TOK_PLUS;
    } else if (binop4916) {
        cases4901 = TOK_MUL;
    } else if (1.0000000000) {
        cases4901 = 0.0000000000;
    } else { cases4901 = 0.0; }
    double binop4917 = 84.0000000000 - 1.0000000000;
    double binop4918 = binop4917 * 0.0000000000;
    double cases4919;
    double binop4920 = pos < src_len;
    if (binop4920) {
        cases4919 = pos;
    } else if (1.0000000000) {
        cases4919 = 0.0000000000;
    } else { cases4919 = 0.0; }
    double binop4921 = 84.0000000000 - 1.0000000000;
    double binop4922 = binop4921 * 0.0000000000;
    double cases4923;
    double binop4924 = pos < src_len;
    double charat4925 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4926 = charat4925 >= 48.0000000000;
    double charat4927 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4928 = charat4927 <= 57.0000000000;
    double binop4929 = binop4926 && binop4928;
    double binop4930 = binop4924 && binop4929;
    double binop4931 = pos < src_len;
    double charat4932 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4933 = charat4932 == 43.0000000000;
    double charat4934 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4935 = charat4934 == 42.0000000000;
    double binop4936 = binop4933 || binop4935;
    double binop4937 = binop4931 && binop4936;
    if (binop4930) {
    double binop4938 = pos + 2.0000000000;
        cases4923 = binop4938;
    } else if (binop4937) {
    double binop4939 = pos + 1.0000000000;
        cases4923 = binop4939;
    } else if (1.0000000000) {
        cases4923 = 0.0000000000;
    } else { cases4923 = 0.0; }
    double cases4940;
    double binop4941 = pos < src_len;
    double charat4942 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4943 = charat4942 >= 48.0000000000;
    double charat4944 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4945 = charat4944 <= 57.0000000000;
    double binop4946 = binop4943 && binop4945;
    double binop4947 = binop4941 && binop4946;
    double binop4948 = pos < src_len;
    double charat4949 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4950 = charat4949 == 43.0000000000;
    double charat4951 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4952 = charat4951 == 42.0000000000;
    double binop4953 = binop4950 || binop4952;
    double binop4954 = binop4948 && binop4953;
    if (binop4947) {
    double binop4955 = pos + 3.0000000000;
        cases4940 = binop4955;
    } else if (binop4954) {
    double binop4956 = pos + 2.0000000000;
        cases4940 = binop4956;
    } else if (1.0000000000) {
    double binop4957 = src_len + 1.0000000000;
        cases4940 = binop4957;
    } else { cases4940 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4922] = 0.0000000000;
    tokens[(int)binop4918] = 0.0000000000;
    tokens[(int)binop4900] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop4958 = 85.0000000000 - 1.0000000000;
    double binop4959 = binop4958 * 3.0000000000;
    double cases4960;
    double binop4961 = pos < src_len;
    double charat4962 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4963 = charat4962 >= 48.0000000000;
    double charat4964 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4965 = charat4964 <= 57.0000000000;
    double binop4966 = binop4963 && binop4965;
    double binop4967 = binop4961 && binop4966;
    double binop4968 = pos < src_len;
    double charat4969 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4970 = charat4969 == 43.0000000000;
    double binop4971 = binop4968 && binop4970;
    double binop4972 = pos < src_len;
    double charat4973 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4974 = charat4973 == 42.0000000000;
    double binop4975 = binop4972 && binop4974;
    if (binop4967) {
        cases4960 = TOK_NUMBER;
    } else if (binop4971) {
        cases4960 = TOK_PLUS;
    } else if (binop4975) {
        cases4960 = TOK_MUL;
    } else if (1.0000000000) {
        cases4960 = 0.0000000000;
    } else { cases4960 = 0.0; }
    double binop4976 = 85.0000000000 - 1.0000000000;
    double binop4977 = binop4976 * 0.0000000000;
    double cases4978;
    double binop4979 = pos < src_len;
    if (binop4979) {
        cases4978 = pos;
    } else if (1.0000000000) {
        cases4978 = 0.0000000000;
    } else { cases4978 = 0.0; }
    double binop4980 = 85.0000000000 - 1.0000000000;
    double binop4981 = binop4980 * 0.0000000000;
    double cases4982;
    double binop4983 = pos < src_len;
    double charat4984 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4985 = charat4984 >= 48.0000000000;
    double charat4986 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4987 = charat4986 <= 57.0000000000;
    double binop4988 = binop4985 && binop4987;
    double binop4989 = binop4983 && binop4988;
    double binop4990 = pos < src_len;
    double charat4991 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4992 = charat4991 == 43.0000000000;
    double charat4993 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop4994 = charat4993 == 42.0000000000;
    double binop4995 = binop4992 || binop4994;
    double binop4996 = binop4990 && binop4995;
    if (binop4989) {
    double binop4997 = pos + 2.0000000000;
        cases4982 = binop4997;
    } else if (binop4996) {
    double binop4998 = pos + 1.0000000000;
        cases4982 = binop4998;
    } else if (1.0000000000) {
        cases4982 = 0.0000000000;
    } else { cases4982 = 0.0; }
    double cases4999;
    double binop5000 = pos < src_len;
    double charat5001 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5002 = charat5001 >= 48.0000000000;
    double charat5003 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5004 = charat5003 <= 57.0000000000;
    double binop5005 = binop5002 && binop5004;
    double binop5006 = binop5000 && binop5005;
    double binop5007 = pos < src_len;
    double charat5008 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5009 = charat5008 == 43.0000000000;
    double charat5010 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5011 = charat5010 == 42.0000000000;
    double binop5012 = binop5009 || binop5011;
    double binop5013 = binop5007 && binop5012;
    if (binop5006) {
    double binop5014 = pos + 3.0000000000;
        cases4999 = binop5014;
    } else if (binop5013) {
    double binop5015 = pos + 2.0000000000;
        cases4999 = binop5015;
    } else if (1.0000000000) {
    double binop5016 = src_len + 1.0000000000;
        cases4999 = binop5016;
    } else { cases4999 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop4981] = 0.0000000000;
    tokens[(int)binop4977] = 0.0000000000;
    tokens[(int)binop4959] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5017 = 86.0000000000 - 1.0000000000;
    double binop5018 = binop5017 * 3.0000000000;
    double cases5019;
    double binop5020 = pos < src_len;
    double charat5021 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5022 = charat5021 >= 48.0000000000;
    double charat5023 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5024 = charat5023 <= 57.0000000000;
    double binop5025 = binop5022 && binop5024;
    double binop5026 = binop5020 && binop5025;
    double binop5027 = pos < src_len;
    double charat5028 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5029 = charat5028 == 43.0000000000;
    double binop5030 = binop5027 && binop5029;
    double binop5031 = pos < src_len;
    double charat5032 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5033 = charat5032 == 42.0000000000;
    double binop5034 = binop5031 && binop5033;
    if (binop5026) {
        cases5019 = TOK_NUMBER;
    } else if (binop5030) {
        cases5019 = TOK_PLUS;
    } else if (binop5034) {
        cases5019 = TOK_MUL;
    } else if (1.0000000000) {
        cases5019 = 0.0000000000;
    } else { cases5019 = 0.0; }
    double binop5035 = 86.0000000000 - 1.0000000000;
    double binop5036 = binop5035 * 0.0000000000;
    double cases5037;
    double binop5038 = pos < src_len;
    if (binop5038) {
        cases5037 = pos;
    } else if (1.0000000000) {
        cases5037 = 0.0000000000;
    } else { cases5037 = 0.0; }
    double binop5039 = 86.0000000000 - 1.0000000000;
    double binop5040 = binop5039 * 0.0000000000;
    double cases5041;
    double binop5042 = pos < src_len;
    double charat5043 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5044 = charat5043 >= 48.0000000000;
    double charat5045 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5046 = charat5045 <= 57.0000000000;
    double binop5047 = binop5044 && binop5046;
    double binop5048 = binop5042 && binop5047;
    double binop5049 = pos < src_len;
    double charat5050 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5051 = charat5050 == 43.0000000000;
    double charat5052 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5053 = charat5052 == 42.0000000000;
    double binop5054 = binop5051 || binop5053;
    double binop5055 = binop5049 && binop5054;
    if (binop5048) {
    double binop5056 = pos + 2.0000000000;
        cases5041 = binop5056;
    } else if (binop5055) {
    double binop5057 = pos + 1.0000000000;
        cases5041 = binop5057;
    } else if (1.0000000000) {
        cases5041 = 0.0000000000;
    } else { cases5041 = 0.0; }
    double cases5058;
    double binop5059 = pos < src_len;
    double charat5060 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5061 = charat5060 >= 48.0000000000;
    double charat5062 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5063 = charat5062 <= 57.0000000000;
    double binop5064 = binop5061 && binop5063;
    double binop5065 = binop5059 && binop5064;
    double binop5066 = pos < src_len;
    double charat5067 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5068 = charat5067 == 43.0000000000;
    double charat5069 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5070 = charat5069 == 42.0000000000;
    double binop5071 = binop5068 || binop5070;
    double binop5072 = binop5066 && binop5071;
    if (binop5065) {
    double binop5073 = pos + 3.0000000000;
        cases5058 = binop5073;
    } else if (binop5072) {
    double binop5074 = pos + 2.0000000000;
        cases5058 = binop5074;
    } else if (1.0000000000) {
    double binop5075 = src_len + 1.0000000000;
        cases5058 = binop5075;
    } else { cases5058 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5040] = 0.0000000000;
    tokens[(int)binop5036] = 0.0000000000;
    tokens[(int)binop5018] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5076 = 87.0000000000 - 1.0000000000;
    double binop5077 = binop5076 * 3.0000000000;
    double cases5078;
    double binop5079 = pos < src_len;
    double charat5080 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5081 = charat5080 >= 48.0000000000;
    double charat5082 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5083 = charat5082 <= 57.0000000000;
    double binop5084 = binop5081 && binop5083;
    double binop5085 = binop5079 && binop5084;
    double binop5086 = pos < src_len;
    double charat5087 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5088 = charat5087 == 43.0000000000;
    double binop5089 = binop5086 && binop5088;
    double binop5090 = pos < src_len;
    double charat5091 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5092 = charat5091 == 42.0000000000;
    double binop5093 = binop5090 && binop5092;
    if (binop5085) {
        cases5078 = TOK_NUMBER;
    } else if (binop5089) {
        cases5078 = TOK_PLUS;
    } else if (binop5093) {
        cases5078 = TOK_MUL;
    } else if (1.0000000000) {
        cases5078 = 0.0000000000;
    } else { cases5078 = 0.0; }
    double binop5094 = 87.0000000000 - 1.0000000000;
    double binop5095 = binop5094 * 0.0000000000;
    double cases5096;
    double binop5097 = pos < src_len;
    if (binop5097) {
        cases5096 = pos;
    } else if (1.0000000000) {
        cases5096 = 0.0000000000;
    } else { cases5096 = 0.0; }
    double binop5098 = 87.0000000000 - 1.0000000000;
    double binop5099 = binop5098 * 0.0000000000;
    double cases5100;
    double binop5101 = pos < src_len;
    double charat5102 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5103 = charat5102 >= 48.0000000000;
    double charat5104 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5105 = charat5104 <= 57.0000000000;
    double binop5106 = binop5103 && binop5105;
    double binop5107 = binop5101 && binop5106;
    double binop5108 = pos < src_len;
    double charat5109 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5110 = charat5109 == 43.0000000000;
    double charat5111 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5112 = charat5111 == 42.0000000000;
    double binop5113 = binop5110 || binop5112;
    double binop5114 = binop5108 && binop5113;
    if (binop5107) {
    double binop5115 = pos + 2.0000000000;
        cases5100 = binop5115;
    } else if (binop5114) {
    double binop5116 = pos + 1.0000000000;
        cases5100 = binop5116;
    } else if (1.0000000000) {
        cases5100 = 0.0000000000;
    } else { cases5100 = 0.0; }
    double cases5117;
    double binop5118 = pos < src_len;
    double charat5119 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5120 = charat5119 >= 48.0000000000;
    double charat5121 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5122 = charat5121 <= 57.0000000000;
    double binop5123 = binop5120 && binop5122;
    double binop5124 = binop5118 && binop5123;
    double binop5125 = pos < src_len;
    double charat5126 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5127 = charat5126 == 43.0000000000;
    double charat5128 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5129 = charat5128 == 42.0000000000;
    double binop5130 = binop5127 || binop5129;
    double binop5131 = binop5125 && binop5130;
    if (binop5124) {
    double binop5132 = pos + 3.0000000000;
        cases5117 = binop5132;
    } else if (binop5131) {
    double binop5133 = pos + 2.0000000000;
        cases5117 = binop5133;
    } else if (1.0000000000) {
    double binop5134 = src_len + 1.0000000000;
        cases5117 = binop5134;
    } else { cases5117 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5099] = 0.0000000000;
    tokens[(int)binop5095] = 0.0000000000;
    tokens[(int)binop5077] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5135 = 88.0000000000 - 1.0000000000;
    double binop5136 = binop5135 * 3.0000000000;
    double cases5137;
    double binop5138 = pos < src_len;
    double charat5139 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5140 = charat5139 >= 48.0000000000;
    double charat5141 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5142 = charat5141 <= 57.0000000000;
    double binop5143 = binop5140 && binop5142;
    double binop5144 = binop5138 && binop5143;
    double binop5145 = pos < src_len;
    double charat5146 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5147 = charat5146 == 43.0000000000;
    double binop5148 = binop5145 && binop5147;
    double binop5149 = pos < src_len;
    double charat5150 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5151 = charat5150 == 42.0000000000;
    double binop5152 = binop5149 && binop5151;
    if (binop5144) {
        cases5137 = TOK_NUMBER;
    } else if (binop5148) {
        cases5137 = TOK_PLUS;
    } else if (binop5152) {
        cases5137 = TOK_MUL;
    } else if (1.0000000000) {
        cases5137 = 0.0000000000;
    } else { cases5137 = 0.0; }
    double binop5153 = 88.0000000000 - 1.0000000000;
    double binop5154 = binop5153 * 0.0000000000;
    double cases5155;
    double binop5156 = pos < src_len;
    if (binop5156) {
        cases5155 = pos;
    } else if (1.0000000000) {
        cases5155 = 0.0000000000;
    } else { cases5155 = 0.0; }
    double binop5157 = 88.0000000000 - 1.0000000000;
    double binop5158 = binop5157 * 0.0000000000;
    double cases5159;
    double binop5160 = pos < src_len;
    double charat5161 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5162 = charat5161 >= 48.0000000000;
    double charat5163 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5164 = charat5163 <= 57.0000000000;
    double binop5165 = binop5162 && binop5164;
    double binop5166 = binop5160 && binop5165;
    double binop5167 = pos < src_len;
    double charat5168 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5169 = charat5168 == 43.0000000000;
    double charat5170 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5171 = charat5170 == 42.0000000000;
    double binop5172 = binop5169 || binop5171;
    double binop5173 = binop5167 && binop5172;
    if (binop5166) {
    double binop5174 = pos + 2.0000000000;
        cases5159 = binop5174;
    } else if (binop5173) {
    double binop5175 = pos + 1.0000000000;
        cases5159 = binop5175;
    } else if (1.0000000000) {
        cases5159 = 0.0000000000;
    } else { cases5159 = 0.0; }
    double cases5176;
    double binop5177 = pos < src_len;
    double charat5178 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5179 = charat5178 >= 48.0000000000;
    double charat5180 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5181 = charat5180 <= 57.0000000000;
    double binop5182 = binop5179 && binop5181;
    double binop5183 = binop5177 && binop5182;
    double binop5184 = pos < src_len;
    double charat5185 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5186 = charat5185 == 43.0000000000;
    double charat5187 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5188 = charat5187 == 42.0000000000;
    double binop5189 = binop5186 || binop5188;
    double binop5190 = binop5184 && binop5189;
    if (binop5183) {
    double binop5191 = pos + 3.0000000000;
        cases5176 = binop5191;
    } else if (binop5190) {
    double binop5192 = pos + 2.0000000000;
        cases5176 = binop5192;
    } else if (1.0000000000) {
    double binop5193 = src_len + 1.0000000000;
        cases5176 = binop5193;
    } else { cases5176 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5158] = 0.0000000000;
    tokens[(int)binop5154] = 0.0000000000;
    tokens[(int)binop5136] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5194 = 89.0000000000 - 1.0000000000;
    double binop5195 = binop5194 * 3.0000000000;
    double cases5196;
    double binop5197 = pos < src_len;
    double charat5198 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5199 = charat5198 >= 48.0000000000;
    double charat5200 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5201 = charat5200 <= 57.0000000000;
    double binop5202 = binop5199 && binop5201;
    double binop5203 = binop5197 && binop5202;
    double binop5204 = pos < src_len;
    double charat5205 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5206 = charat5205 == 43.0000000000;
    double binop5207 = binop5204 && binop5206;
    double binop5208 = pos < src_len;
    double charat5209 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5210 = charat5209 == 42.0000000000;
    double binop5211 = binop5208 && binop5210;
    if (binop5203) {
        cases5196 = TOK_NUMBER;
    } else if (binop5207) {
        cases5196 = TOK_PLUS;
    } else if (binop5211) {
        cases5196 = TOK_MUL;
    } else if (1.0000000000) {
        cases5196 = 0.0000000000;
    } else { cases5196 = 0.0; }
    double binop5212 = 89.0000000000 - 1.0000000000;
    double binop5213 = binop5212 * 0.0000000000;
    double cases5214;
    double binop5215 = pos < src_len;
    if (binop5215) {
        cases5214 = pos;
    } else if (1.0000000000) {
        cases5214 = 0.0000000000;
    } else { cases5214 = 0.0; }
    double binop5216 = 89.0000000000 - 1.0000000000;
    double binop5217 = binop5216 * 0.0000000000;
    double cases5218;
    double binop5219 = pos < src_len;
    double charat5220 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5221 = charat5220 >= 48.0000000000;
    double charat5222 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5223 = charat5222 <= 57.0000000000;
    double binop5224 = binop5221 && binop5223;
    double binop5225 = binop5219 && binop5224;
    double binop5226 = pos < src_len;
    double charat5227 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5228 = charat5227 == 43.0000000000;
    double charat5229 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5230 = charat5229 == 42.0000000000;
    double binop5231 = binop5228 || binop5230;
    double binop5232 = binop5226 && binop5231;
    if (binop5225) {
    double binop5233 = pos + 2.0000000000;
        cases5218 = binop5233;
    } else if (binop5232) {
    double binop5234 = pos + 1.0000000000;
        cases5218 = binop5234;
    } else if (1.0000000000) {
        cases5218 = 0.0000000000;
    } else { cases5218 = 0.0; }
    double cases5235;
    double binop5236 = pos < src_len;
    double charat5237 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5238 = charat5237 >= 48.0000000000;
    double charat5239 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5240 = charat5239 <= 57.0000000000;
    double binop5241 = binop5238 && binop5240;
    double binop5242 = binop5236 && binop5241;
    double binop5243 = pos < src_len;
    double charat5244 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5245 = charat5244 == 43.0000000000;
    double charat5246 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5247 = charat5246 == 42.0000000000;
    double binop5248 = binop5245 || binop5247;
    double binop5249 = binop5243 && binop5248;
    if (binop5242) {
    double binop5250 = pos + 3.0000000000;
        cases5235 = binop5250;
    } else if (binop5249) {
    double binop5251 = pos + 2.0000000000;
        cases5235 = binop5251;
    } else if (1.0000000000) {
    double binop5252 = src_len + 1.0000000000;
        cases5235 = binop5252;
    } else { cases5235 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5217] = 0.0000000000;
    tokens[(int)binop5213] = 0.0000000000;
    tokens[(int)binop5195] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5253 = 90.0000000000 - 1.0000000000;
    double binop5254 = binop5253 * 3.0000000000;
    double cases5255;
    double binop5256 = pos < src_len;
    double charat5257 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5258 = charat5257 >= 48.0000000000;
    double charat5259 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5260 = charat5259 <= 57.0000000000;
    double binop5261 = binop5258 && binop5260;
    double binop5262 = binop5256 && binop5261;
    double binop5263 = pos < src_len;
    double charat5264 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5265 = charat5264 == 43.0000000000;
    double binop5266 = binop5263 && binop5265;
    double binop5267 = pos < src_len;
    double charat5268 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5269 = charat5268 == 42.0000000000;
    double binop5270 = binop5267 && binop5269;
    if (binop5262) {
        cases5255 = TOK_NUMBER;
    } else if (binop5266) {
        cases5255 = TOK_PLUS;
    } else if (binop5270) {
        cases5255 = TOK_MUL;
    } else if (1.0000000000) {
        cases5255 = 0.0000000000;
    } else { cases5255 = 0.0; }
    double binop5271 = 90.0000000000 - 1.0000000000;
    double binop5272 = binop5271 * 0.0000000000;
    double cases5273;
    double binop5274 = pos < src_len;
    if (binop5274) {
        cases5273 = pos;
    } else if (1.0000000000) {
        cases5273 = 0.0000000000;
    } else { cases5273 = 0.0; }
    double binop5275 = 90.0000000000 - 1.0000000000;
    double binop5276 = binop5275 * 0.0000000000;
    double cases5277;
    double binop5278 = pos < src_len;
    double charat5279 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5280 = charat5279 >= 48.0000000000;
    double charat5281 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5282 = charat5281 <= 57.0000000000;
    double binop5283 = binop5280 && binop5282;
    double binop5284 = binop5278 && binop5283;
    double binop5285 = pos < src_len;
    double charat5286 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5287 = charat5286 == 43.0000000000;
    double charat5288 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5289 = charat5288 == 42.0000000000;
    double binop5290 = binop5287 || binop5289;
    double binop5291 = binop5285 && binop5290;
    if (binop5284) {
    double binop5292 = pos + 2.0000000000;
        cases5277 = binop5292;
    } else if (binop5291) {
    double binop5293 = pos + 1.0000000000;
        cases5277 = binop5293;
    } else if (1.0000000000) {
        cases5277 = 0.0000000000;
    } else { cases5277 = 0.0; }
    double cases5294;
    double binop5295 = pos < src_len;
    double charat5296 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5297 = charat5296 >= 48.0000000000;
    double charat5298 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5299 = charat5298 <= 57.0000000000;
    double binop5300 = binop5297 && binop5299;
    double binop5301 = binop5295 && binop5300;
    double binop5302 = pos < src_len;
    double charat5303 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5304 = charat5303 == 43.0000000000;
    double charat5305 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5306 = charat5305 == 42.0000000000;
    double binop5307 = binop5304 || binop5306;
    double binop5308 = binop5302 && binop5307;
    if (binop5301) {
    double binop5309 = pos + 3.0000000000;
        cases5294 = binop5309;
    } else if (binop5308) {
    double binop5310 = pos + 2.0000000000;
        cases5294 = binop5310;
    } else if (1.0000000000) {
    double binop5311 = src_len + 1.0000000000;
        cases5294 = binop5311;
    } else { cases5294 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5276] = 0.0000000000;
    tokens[(int)binop5272] = 0.0000000000;
    tokens[(int)binop5254] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5312 = 91.0000000000 - 1.0000000000;
    double binop5313 = binop5312 * 3.0000000000;
    double cases5314;
    double binop5315 = pos < src_len;
    double charat5316 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5317 = charat5316 >= 48.0000000000;
    double charat5318 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5319 = charat5318 <= 57.0000000000;
    double binop5320 = binop5317 && binop5319;
    double binop5321 = binop5315 && binop5320;
    double binop5322 = pos < src_len;
    double charat5323 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5324 = charat5323 == 43.0000000000;
    double binop5325 = binop5322 && binop5324;
    double binop5326 = pos < src_len;
    double charat5327 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5328 = charat5327 == 42.0000000000;
    double binop5329 = binop5326 && binop5328;
    if (binop5321) {
        cases5314 = TOK_NUMBER;
    } else if (binop5325) {
        cases5314 = TOK_PLUS;
    } else if (binop5329) {
        cases5314 = TOK_MUL;
    } else if (1.0000000000) {
        cases5314 = 0.0000000000;
    } else { cases5314 = 0.0; }
    double binop5330 = 91.0000000000 - 1.0000000000;
    double binop5331 = binop5330 * 0.0000000000;
    double cases5332;
    double binop5333 = pos < src_len;
    if (binop5333) {
        cases5332 = pos;
    } else if (1.0000000000) {
        cases5332 = 0.0000000000;
    } else { cases5332 = 0.0; }
    double binop5334 = 91.0000000000 - 1.0000000000;
    double binop5335 = binop5334 * 0.0000000000;
    double cases5336;
    double binop5337 = pos < src_len;
    double charat5338 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5339 = charat5338 >= 48.0000000000;
    double charat5340 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5341 = charat5340 <= 57.0000000000;
    double binop5342 = binop5339 && binop5341;
    double binop5343 = binop5337 && binop5342;
    double binop5344 = pos < src_len;
    double charat5345 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5346 = charat5345 == 43.0000000000;
    double charat5347 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5348 = charat5347 == 42.0000000000;
    double binop5349 = binop5346 || binop5348;
    double binop5350 = binop5344 && binop5349;
    if (binop5343) {
    double binop5351 = pos + 2.0000000000;
        cases5336 = binop5351;
    } else if (binop5350) {
    double binop5352 = pos + 1.0000000000;
        cases5336 = binop5352;
    } else if (1.0000000000) {
        cases5336 = 0.0000000000;
    } else { cases5336 = 0.0; }
    double cases5353;
    double binop5354 = pos < src_len;
    double charat5355 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5356 = charat5355 >= 48.0000000000;
    double charat5357 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5358 = charat5357 <= 57.0000000000;
    double binop5359 = binop5356 && binop5358;
    double binop5360 = binop5354 && binop5359;
    double binop5361 = pos < src_len;
    double charat5362 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5363 = charat5362 == 43.0000000000;
    double charat5364 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5365 = charat5364 == 42.0000000000;
    double binop5366 = binop5363 || binop5365;
    double binop5367 = binop5361 && binop5366;
    if (binop5360) {
    double binop5368 = pos + 3.0000000000;
        cases5353 = binop5368;
    } else if (binop5367) {
    double binop5369 = pos + 2.0000000000;
        cases5353 = binop5369;
    } else if (1.0000000000) {
    double binop5370 = src_len + 1.0000000000;
        cases5353 = binop5370;
    } else { cases5353 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5335] = 0.0000000000;
    tokens[(int)binop5331] = 0.0000000000;
    tokens[(int)binop5313] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5371 = 92.0000000000 - 1.0000000000;
    double binop5372 = binop5371 * 3.0000000000;
    double cases5373;
    double binop5374 = pos < src_len;
    double charat5375 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5376 = charat5375 >= 48.0000000000;
    double charat5377 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5378 = charat5377 <= 57.0000000000;
    double binop5379 = binop5376 && binop5378;
    double binop5380 = binop5374 && binop5379;
    double binop5381 = pos < src_len;
    double charat5382 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5383 = charat5382 == 43.0000000000;
    double binop5384 = binop5381 && binop5383;
    double binop5385 = pos < src_len;
    double charat5386 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5387 = charat5386 == 42.0000000000;
    double binop5388 = binop5385 && binop5387;
    if (binop5380) {
        cases5373 = TOK_NUMBER;
    } else if (binop5384) {
        cases5373 = TOK_PLUS;
    } else if (binop5388) {
        cases5373 = TOK_MUL;
    } else if (1.0000000000) {
        cases5373 = 0.0000000000;
    } else { cases5373 = 0.0; }
    double binop5389 = 92.0000000000 - 1.0000000000;
    double binop5390 = binop5389 * 0.0000000000;
    double cases5391;
    double binop5392 = pos < src_len;
    if (binop5392) {
        cases5391 = pos;
    } else if (1.0000000000) {
        cases5391 = 0.0000000000;
    } else { cases5391 = 0.0; }
    double binop5393 = 92.0000000000 - 1.0000000000;
    double binop5394 = binop5393 * 0.0000000000;
    double cases5395;
    double binop5396 = pos < src_len;
    double charat5397 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5398 = charat5397 >= 48.0000000000;
    double charat5399 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5400 = charat5399 <= 57.0000000000;
    double binop5401 = binop5398 && binop5400;
    double binop5402 = binop5396 && binop5401;
    double binop5403 = pos < src_len;
    double charat5404 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5405 = charat5404 == 43.0000000000;
    double charat5406 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5407 = charat5406 == 42.0000000000;
    double binop5408 = binop5405 || binop5407;
    double binop5409 = binop5403 && binop5408;
    if (binop5402) {
    double binop5410 = pos + 2.0000000000;
        cases5395 = binop5410;
    } else if (binop5409) {
    double binop5411 = pos + 1.0000000000;
        cases5395 = binop5411;
    } else if (1.0000000000) {
        cases5395 = 0.0000000000;
    } else { cases5395 = 0.0; }
    double cases5412;
    double binop5413 = pos < src_len;
    double charat5414 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5415 = charat5414 >= 48.0000000000;
    double charat5416 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5417 = charat5416 <= 57.0000000000;
    double binop5418 = binop5415 && binop5417;
    double binop5419 = binop5413 && binop5418;
    double binop5420 = pos < src_len;
    double charat5421 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5422 = charat5421 == 43.0000000000;
    double charat5423 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5424 = charat5423 == 42.0000000000;
    double binop5425 = binop5422 || binop5424;
    double binop5426 = binop5420 && binop5425;
    if (binop5419) {
    double binop5427 = pos + 3.0000000000;
        cases5412 = binop5427;
    } else if (binop5426) {
    double binop5428 = pos + 2.0000000000;
        cases5412 = binop5428;
    } else if (1.0000000000) {
    double binop5429 = src_len + 1.0000000000;
        cases5412 = binop5429;
    } else { cases5412 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5394] = 0.0000000000;
    tokens[(int)binop5390] = 0.0000000000;
    tokens[(int)binop5372] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5430 = 93.0000000000 - 1.0000000000;
    double binop5431 = binop5430 * 3.0000000000;
    double cases5432;
    double binop5433 = pos < src_len;
    double charat5434 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5435 = charat5434 >= 48.0000000000;
    double charat5436 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5437 = charat5436 <= 57.0000000000;
    double binop5438 = binop5435 && binop5437;
    double binop5439 = binop5433 && binop5438;
    double binop5440 = pos < src_len;
    double charat5441 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5442 = charat5441 == 43.0000000000;
    double binop5443 = binop5440 && binop5442;
    double binop5444 = pos < src_len;
    double charat5445 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5446 = charat5445 == 42.0000000000;
    double binop5447 = binop5444 && binop5446;
    if (binop5439) {
        cases5432 = TOK_NUMBER;
    } else if (binop5443) {
        cases5432 = TOK_PLUS;
    } else if (binop5447) {
        cases5432 = TOK_MUL;
    } else if (1.0000000000) {
        cases5432 = 0.0000000000;
    } else { cases5432 = 0.0; }
    double binop5448 = 93.0000000000 - 1.0000000000;
    double binop5449 = binop5448 * 0.0000000000;
    double cases5450;
    double binop5451 = pos < src_len;
    if (binop5451) {
        cases5450 = pos;
    } else if (1.0000000000) {
        cases5450 = 0.0000000000;
    } else { cases5450 = 0.0; }
    double binop5452 = 93.0000000000 - 1.0000000000;
    double binop5453 = binop5452 * 0.0000000000;
    double cases5454;
    double binop5455 = pos < src_len;
    double charat5456 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5457 = charat5456 >= 48.0000000000;
    double charat5458 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5459 = charat5458 <= 57.0000000000;
    double binop5460 = binop5457 && binop5459;
    double binop5461 = binop5455 && binop5460;
    double binop5462 = pos < src_len;
    double charat5463 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5464 = charat5463 == 43.0000000000;
    double charat5465 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5466 = charat5465 == 42.0000000000;
    double binop5467 = binop5464 || binop5466;
    double binop5468 = binop5462 && binop5467;
    if (binop5461) {
    double binop5469 = pos + 2.0000000000;
        cases5454 = binop5469;
    } else if (binop5468) {
    double binop5470 = pos + 1.0000000000;
        cases5454 = binop5470;
    } else if (1.0000000000) {
        cases5454 = 0.0000000000;
    } else { cases5454 = 0.0; }
    double cases5471;
    double binop5472 = pos < src_len;
    double charat5473 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5474 = charat5473 >= 48.0000000000;
    double charat5475 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5476 = charat5475 <= 57.0000000000;
    double binop5477 = binop5474 && binop5476;
    double binop5478 = binop5472 && binop5477;
    double binop5479 = pos < src_len;
    double charat5480 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5481 = charat5480 == 43.0000000000;
    double charat5482 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5483 = charat5482 == 42.0000000000;
    double binop5484 = binop5481 || binop5483;
    double binop5485 = binop5479 && binop5484;
    if (binop5478) {
    double binop5486 = pos + 3.0000000000;
        cases5471 = binop5486;
    } else if (binop5485) {
    double binop5487 = pos + 2.0000000000;
        cases5471 = binop5487;
    } else if (1.0000000000) {
    double binop5488 = src_len + 1.0000000000;
        cases5471 = binop5488;
    } else { cases5471 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5453] = 0.0000000000;
    tokens[(int)binop5449] = 0.0000000000;
    tokens[(int)binop5431] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5489 = 94.0000000000 - 1.0000000000;
    double binop5490 = binop5489 * 3.0000000000;
    double cases5491;
    double binop5492 = pos < src_len;
    double charat5493 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5494 = charat5493 >= 48.0000000000;
    double charat5495 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5496 = charat5495 <= 57.0000000000;
    double binop5497 = binop5494 && binop5496;
    double binop5498 = binop5492 && binop5497;
    double binop5499 = pos < src_len;
    double charat5500 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5501 = charat5500 == 43.0000000000;
    double binop5502 = binop5499 && binop5501;
    double binop5503 = pos < src_len;
    double charat5504 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5505 = charat5504 == 42.0000000000;
    double binop5506 = binop5503 && binop5505;
    if (binop5498) {
        cases5491 = TOK_NUMBER;
    } else if (binop5502) {
        cases5491 = TOK_PLUS;
    } else if (binop5506) {
        cases5491 = TOK_MUL;
    } else if (1.0000000000) {
        cases5491 = 0.0000000000;
    } else { cases5491 = 0.0; }
    double binop5507 = 94.0000000000 - 1.0000000000;
    double binop5508 = binop5507 * 0.0000000000;
    double cases5509;
    double binop5510 = pos < src_len;
    if (binop5510) {
        cases5509 = pos;
    } else if (1.0000000000) {
        cases5509 = 0.0000000000;
    } else { cases5509 = 0.0; }
    double binop5511 = 94.0000000000 - 1.0000000000;
    double binop5512 = binop5511 * 0.0000000000;
    double cases5513;
    double binop5514 = pos < src_len;
    double charat5515 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5516 = charat5515 >= 48.0000000000;
    double charat5517 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5518 = charat5517 <= 57.0000000000;
    double binop5519 = binop5516 && binop5518;
    double binop5520 = binop5514 && binop5519;
    double binop5521 = pos < src_len;
    double charat5522 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5523 = charat5522 == 43.0000000000;
    double charat5524 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5525 = charat5524 == 42.0000000000;
    double binop5526 = binop5523 || binop5525;
    double binop5527 = binop5521 && binop5526;
    if (binop5520) {
    double binop5528 = pos + 2.0000000000;
        cases5513 = binop5528;
    } else if (binop5527) {
    double binop5529 = pos + 1.0000000000;
        cases5513 = binop5529;
    } else if (1.0000000000) {
        cases5513 = 0.0000000000;
    } else { cases5513 = 0.0; }
    double cases5530;
    double binop5531 = pos < src_len;
    double charat5532 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5533 = charat5532 >= 48.0000000000;
    double charat5534 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5535 = charat5534 <= 57.0000000000;
    double binop5536 = binop5533 && binop5535;
    double binop5537 = binop5531 && binop5536;
    double binop5538 = pos < src_len;
    double charat5539 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5540 = charat5539 == 43.0000000000;
    double charat5541 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5542 = charat5541 == 42.0000000000;
    double binop5543 = binop5540 || binop5542;
    double binop5544 = binop5538 && binop5543;
    if (binop5537) {
    double binop5545 = pos + 3.0000000000;
        cases5530 = binop5545;
    } else if (binop5544) {
    double binop5546 = pos + 2.0000000000;
        cases5530 = binop5546;
    } else if (1.0000000000) {
    double binop5547 = src_len + 1.0000000000;
        cases5530 = binop5547;
    } else { cases5530 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5512] = 0.0000000000;
    tokens[(int)binop5508] = 0.0000000000;
    tokens[(int)binop5490] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5548 = 95.0000000000 - 1.0000000000;
    double binop5549 = binop5548 * 3.0000000000;
    double cases5550;
    double binop5551 = pos < src_len;
    double charat5552 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5553 = charat5552 >= 48.0000000000;
    double charat5554 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5555 = charat5554 <= 57.0000000000;
    double binop5556 = binop5553 && binop5555;
    double binop5557 = binop5551 && binop5556;
    double binop5558 = pos < src_len;
    double charat5559 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5560 = charat5559 == 43.0000000000;
    double binop5561 = binop5558 && binop5560;
    double binop5562 = pos < src_len;
    double charat5563 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5564 = charat5563 == 42.0000000000;
    double binop5565 = binop5562 && binop5564;
    if (binop5557) {
        cases5550 = TOK_NUMBER;
    } else if (binop5561) {
        cases5550 = TOK_PLUS;
    } else if (binop5565) {
        cases5550 = TOK_MUL;
    } else if (1.0000000000) {
        cases5550 = 0.0000000000;
    } else { cases5550 = 0.0; }
    double binop5566 = 95.0000000000 - 1.0000000000;
    double binop5567 = binop5566 * 0.0000000000;
    double cases5568;
    double binop5569 = pos < src_len;
    if (binop5569) {
        cases5568 = pos;
    } else if (1.0000000000) {
        cases5568 = 0.0000000000;
    } else { cases5568 = 0.0; }
    double binop5570 = 95.0000000000 - 1.0000000000;
    double binop5571 = binop5570 * 0.0000000000;
    double cases5572;
    double binop5573 = pos < src_len;
    double charat5574 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5575 = charat5574 >= 48.0000000000;
    double charat5576 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5577 = charat5576 <= 57.0000000000;
    double binop5578 = binop5575 && binop5577;
    double binop5579 = binop5573 && binop5578;
    double binop5580 = pos < src_len;
    double charat5581 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5582 = charat5581 == 43.0000000000;
    double charat5583 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5584 = charat5583 == 42.0000000000;
    double binop5585 = binop5582 || binop5584;
    double binop5586 = binop5580 && binop5585;
    if (binop5579) {
    double binop5587 = pos + 2.0000000000;
        cases5572 = binop5587;
    } else if (binop5586) {
    double binop5588 = pos + 1.0000000000;
        cases5572 = binop5588;
    } else if (1.0000000000) {
        cases5572 = 0.0000000000;
    } else { cases5572 = 0.0; }
    double cases5589;
    double binop5590 = pos < src_len;
    double charat5591 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5592 = charat5591 >= 48.0000000000;
    double charat5593 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5594 = charat5593 <= 57.0000000000;
    double binop5595 = binop5592 && binop5594;
    double binop5596 = binop5590 && binop5595;
    double binop5597 = pos < src_len;
    double charat5598 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5599 = charat5598 == 43.0000000000;
    double charat5600 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5601 = charat5600 == 42.0000000000;
    double binop5602 = binop5599 || binop5601;
    double binop5603 = binop5597 && binop5602;
    if (binop5596) {
    double binop5604 = pos + 3.0000000000;
        cases5589 = binop5604;
    } else if (binop5603) {
    double binop5605 = pos + 2.0000000000;
        cases5589 = binop5605;
    } else if (1.0000000000) {
    double binop5606 = src_len + 1.0000000000;
        cases5589 = binop5606;
    } else { cases5589 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5571] = 0.0000000000;
    tokens[(int)binop5567] = 0.0000000000;
    tokens[(int)binop5549] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5607 = 96.0000000000 - 1.0000000000;
    double binop5608 = binop5607 * 3.0000000000;
    double cases5609;
    double binop5610 = pos < src_len;
    double charat5611 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5612 = charat5611 >= 48.0000000000;
    double charat5613 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5614 = charat5613 <= 57.0000000000;
    double binop5615 = binop5612 && binop5614;
    double binop5616 = binop5610 && binop5615;
    double binop5617 = pos < src_len;
    double charat5618 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5619 = charat5618 == 43.0000000000;
    double binop5620 = binop5617 && binop5619;
    double binop5621 = pos < src_len;
    double charat5622 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5623 = charat5622 == 42.0000000000;
    double binop5624 = binop5621 && binop5623;
    if (binop5616) {
        cases5609 = TOK_NUMBER;
    } else if (binop5620) {
        cases5609 = TOK_PLUS;
    } else if (binop5624) {
        cases5609 = TOK_MUL;
    } else if (1.0000000000) {
        cases5609 = 0.0000000000;
    } else { cases5609 = 0.0; }
    double binop5625 = 96.0000000000 - 1.0000000000;
    double binop5626 = binop5625 * 0.0000000000;
    double cases5627;
    double binop5628 = pos < src_len;
    if (binop5628) {
        cases5627 = pos;
    } else if (1.0000000000) {
        cases5627 = 0.0000000000;
    } else { cases5627 = 0.0; }
    double binop5629 = 96.0000000000 - 1.0000000000;
    double binop5630 = binop5629 * 0.0000000000;
    double cases5631;
    double binop5632 = pos < src_len;
    double charat5633 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5634 = charat5633 >= 48.0000000000;
    double charat5635 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5636 = charat5635 <= 57.0000000000;
    double binop5637 = binop5634 && binop5636;
    double binop5638 = binop5632 && binop5637;
    double binop5639 = pos < src_len;
    double charat5640 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5641 = charat5640 == 43.0000000000;
    double charat5642 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5643 = charat5642 == 42.0000000000;
    double binop5644 = binop5641 || binop5643;
    double binop5645 = binop5639 && binop5644;
    if (binop5638) {
    double binop5646 = pos + 2.0000000000;
        cases5631 = binop5646;
    } else if (binop5645) {
    double binop5647 = pos + 1.0000000000;
        cases5631 = binop5647;
    } else if (1.0000000000) {
        cases5631 = 0.0000000000;
    } else { cases5631 = 0.0; }
    double cases5648;
    double binop5649 = pos < src_len;
    double charat5650 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5651 = charat5650 >= 48.0000000000;
    double charat5652 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5653 = charat5652 <= 57.0000000000;
    double binop5654 = binop5651 && binop5653;
    double binop5655 = binop5649 && binop5654;
    double binop5656 = pos < src_len;
    double charat5657 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5658 = charat5657 == 43.0000000000;
    double charat5659 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5660 = charat5659 == 42.0000000000;
    double binop5661 = binop5658 || binop5660;
    double binop5662 = binop5656 && binop5661;
    if (binop5655) {
    double binop5663 = pos + 3.0000000000;
        cases5648 = binop5663;
    } else if (binop5662) {
    double binop5664 = pos + 2.0000000000;
        cases5648 = binop5664;
    } else if (1.0000000000) {
    double binop5665 = src_len + 1.0000000000;
        cases5648 = binop5665;
    } else { cases5648 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5630] = 0.0000000000;
    tokens[(int)binop5626] = 0.0000000000;
    tokens[(int)binop5608] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5666 = 97.0000000000 - 1.0000000000;
    double binop5667 = binop5666 * 3.0000000000;
    double cases5668;
    double binop5669 = pos < src_len;
    double charat5670 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5671 = charat5670 >= 48.0000000000;
    double charat5672 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5673 = charat5672 <= 57.0000000000;
    double binop5674 = binop5671 && binop5673;
    double binop5675 = binop5669 && binop5674;
    double binop5676 = pos < src_len;
    double charat5677 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5678 = charat5677 == 43.0000000000;
    double binop5679 = binop5676 && binop5678;
    double binop5680 = pos < src_len;
    double charat5681 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5682 = charat5681 == 42.0000000000;
    double binop5683 = binop5680 && binop5682;
    if (binop5675) {
        cases5668 = TOK_NUMBER;
    } else if (binop5679) {
        cases5668 = TOK_PLUS;
    } else if (binop5683) {
        cases5668 = TOK_MUL;
    } else if (1.0000000000) {
        cases5668 = 0.0000000000;
    } else { cases5668 = 0.0; }
    double binop5684 = 97.0000000000 - 1.0000000000;
    double binop5685 = binop5684 * 0.0000000000;
    double cases5686;
    double binop5687 = pos < src_len;
    if (binop5687) {
        cases5686 = pos;
    } else if (1.0000000000) {
        cases5686 = 0.0000000000;
    } else { cases5686 = 0.0; }
    double binop5688 = 97.0000000000 - 1.0000000000;
    double binop5689 = binop5688 * 0.0000000000;
    double cases5690;
    double binop5691 = pos < src_len;
    double charat5692 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5693 = charat5692 >= 48.0000000000;
    double charat5694 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5695 = charat5694 <= 57.0000000000;
    double binop5696 = binop5693 && binop5695;
    double binop5697 = binop5691 && binop5696;
    double binop5698 = pos < src_len;
    double charat5699 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5700 = charat5699 == 43.0000000000;
    double charat5701 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5702 = charat5701 == 42.0000000000;
    double binop5703 = binop5700 || binop5702;
    double binop5704 = binop5698 && binop5703;
    if (binop5697) {
    double binop5705 = pos + 2.0000000000;
        cases5690 = binop5705;
    } else if (binop5704) {
    double binop5706 = pos + 1.0000000000;
        cases5690 = binop5706;
    } else if (1.0000000000) {
        cases5690 = 0.0000000000;
    } else { cases5690 = 0.0; }
    double cases5707;
    double binop5708 = pos < src_len;
    double charat5709 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5710 = charat5709 >= 48.0000000000;
    double charat5711 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5712 = charat5711 <= 57.0000000000;
    double binop5713 = binop5710 && binop5712;
    double binop5714 = binop5708 && binop5713;
    double binop5715 = pos < src_len;
    double charat5716 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5717 = charat5716 == 43.0000000000;
    double charat5718 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5719 = charat5718 == 42.0000000000;
    double binop5720 = binop5717 || binop5719;
    double binop5721 = binop5715 && binop5720;
    if (binop5714) {
    double binop5722 = pos + 3.0000000000;
        cases5707 = binop5722;
    } else if (binop5721) {
    double binop5723 = pos + 2.0000000000;
        cases5707 = binop5723;
    } else if (1.0000000000) {
    double binop5724 = src_len + 1.0000000000;
        cases5707 = binop5724;
    } else { cases5707 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5689] = 0.0000000000;
    tokens[(int)binop5685] = 0.0000000000;
    tokens[(int)binop5667] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5725 = 98.0000000000 - 1.0000000000;
    double binop5726 = binop5725 * 3.0000000000;
    double cases5727;
    double binop5728 = pos < src_len;
    double charat5729 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5730 = charat5729 >= 48.0000000000;
    double charat5731 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5732 = charat5731 <= 57.0000000000;
    double binop5733 = binop5730 && binop5732;
    double binop5734 = binop5728 && binop5733;
    double binop5735 = pos < src_len;
    double charat5736 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5737 = charat5736 == 43.0000000000;
    double binop5738 = binop5735 && binop5737;
    double binop5739 = pos < src_len;
    double charat5740 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5741 = charat5740 == 42.0000000000;
    double binop5742 = binop5739 && binop5741;
    if (binop5734) {
        cases5727 = TOK_NUMBER;
    } else if (binop5738) {
        cases5727 = TOK_PLUS;
    } else if (binop5742) {
        cases5727 = TOK_MUL;
    } else if (1.0000000000) {
        cases5727 = 0.0000000000;
    } else { cases5727 = 0.0; }
    double binop5743 = 98.0000000000 - 1.0000000000;
    double binop5744 = binop5743 * 0.0000000000;
    double cases5745;
    double binop5746 = pos < src_len;
    if (binop5746) {
        cases5745 = pos;
    } else if (1.0000000000) {
        cases5745 = 0.0000000000;
    } else { cases5745 = 0.0; }
    double binop5747 = 98.0000000000 - 1.0000000000;
    double binop5748 = binop5747 * 0.0000000000;
    double cases5749;
    double binop5750 = pos < src_len;
    double charat5751 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5752 = charat5751 >= 48.0000000000;
    double charat5753 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5754 = charat5753 <= 57.0000000000;
    double binop5755 = binop5752 && binop5754;
    double binop5756 = binop5750 && binop5755;
    double binop5757 = pos < src_len;
    double charat5758 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5759 = charat5758 == 43.0000000000;
    double charat5760 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5761 = charat5760 == 42.0000000000;
    double binop5762 = binop5759 || binop5761;
    double binop5763 = binop5757 && binop5762;
    if (binop5756) {
    double binop5764 = pos + 2.0000000000;
        cases5749 = binop5764;
    } else if (binop5763) {
    double binop5765 = pos + 1.0000000000;
        cases5749 = binop5765;
    } else if (1.0000000000) {
        cases5749 = 0.0000000000;
    } else { cases5749 = 0.0; }
    double cases5766;
    double binop5767 = pos < src_len;
    double charat5768 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5769 = charat5768 >= 48.0000000000;
    double charat5770 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5771 = charat5770 <= 57.0000000000;
    double binop5772 = binop5769 && binop5771;
    double binop5773 = binop5767 && binop5772;
    double binop5774 = pos < src_len;
    double charat5775 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5776 = charat5775 == 43.0000000000;
    double charat5777 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5778 = charat5777 == 42.0000000000;
    double binop5779 = binop5776 || binop5778;
    double binop5780 = binop5774 && binop5779;
    if (binop5773) {
    double binop5781 = pos + 3.0000000000;
        cases5766 = binop5781;
    } else if (binop5780) {
    double binop5782 = pos + 2.0000000000;
        cases5766 = binop5782;
    } else if (1.0000000000) {
    double binop5783 = src_len + 1.0000000000;
        cases5766 = binop5783;
    } else { cases5766 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5748] = 0.0000000000;
    tokens[(int)binop5744] = 0.0000000000;
    tokens[(int)binop5726] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5784 = 99.0000000000 - 1.0000000000;
    double binop5785 = binop5784 * 3.0000000000;
    double cases5786;
    double binop5787 = pos < src_len;
    double charat5788 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5789 = charat5788 >= 48.0000000000;
    double charat5790 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5791 = charat5790 <= 57.0000000000;
    double binop5792 = binop5789 && binop5791;
    double binop5793 = binop5787 && binop5792;
    double binop5794 = pos < src_len;
    double charat5795 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5796 = charat5795 == 43.0000000000;
    double binop5797 = binop5794 && binop5796;
    double binop5798 = pos < src_len;
    double charat5799 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5800 = charat5799 == 42.0000000000;
    double binop5801 = binop5798 && binop5800;
    if (binop5793) {
        cases5786 = TOK_NUMBER;
    } else if (binop5797) {
        cases5786 = TOK_PLUS;
    } else if (binop5801) {
        cases5786 = TOK_MUL;
    } else if (1.0000000000) {
        cases5786 = 0.0000000000;
    } else { cases5786 = 0.0; }
    double binop5802 = 99.0000000000 - 1.0000000000;
    double binop5803 = binop5802 * 0.0000000000;
    double cases5804;
    double binop5805 = pos < src_len;
    if (binop5805) {
        cases5804 = pos;
    } else if (1.0000000000) {
        cases5804 = 0.0000000000;
    } else { cases5804 = 0.0; }
    double binop5806 = 99.0000000000 - 1.0000000000;
    double binop5807 = binop5806 * 0.0000000000;
    double cases5808;
    double binop5809 = pos < src_len;
    double charat5810 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5811 = charat5810 >= 48.0000000000;
    double charat5812 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5813 = charat5812 <= 57.0000000000;
    double binop5814 = binop5811 && binop5813;
    double binop5815 = binop5809 && binop5814;
    double binop5816 = pos < src_len;
    double charat5817 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5818 = charat5817 == 43.0000000000;
    double charat5819 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5820 = charat5819 == 42.0000000000;
    double binop5821 = binop5818 || binop5820;
    double binop5822 = binop5816 && binop5821;
    if (binop5815) {
    double binop5823 = pos + 2.0000000000;
        cases5808 = binop5823;
    } else if (binop5822) {
    double binop5824 = pos + 1.0000000000;
        cases5808 = binop5824;
    } else if (1.0000000000) {
        cases5808 = 0.0000000000;
    } else { cases5808 = 0.0; }
    double cases5825;
    double binop5826 = pos < src_len;
    double charat5827 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5828 = charat5827 >= 48.0000000000;
    double charat5829 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5830 = charat5829 <= 57.0000000000;
    double binop5831 = binop5828 && binop5830;
    double binop5832 = binop5826 && binop5831;
    double binop5833 = pos < src_len;
    double charat5834 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5835 = charat5834 == 43.0000000000;
    double charat5836 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5837 = charat5836 == 42.0000000000;
    double binop5838 = binop5835 || binop5837;
    double binop5839 = binop5833 && binop5838;
    if (binop5832) {
    double binop5840 = pos + 3.0000000000;
        cases5825 = binop5840;
    } else if (binop5839) {
    double binop5841 = pos + 2.0000000000;
        cases5825 = binop5841;
    } else if (1.0000000000) {
    double binop5842 = src_len + 1.0000000000;
        cases5825 = binop5842;
    } else { cases5825 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5807] = 0.0000000000;
    tokens[(int)binop5803] = 0.0000000000;
    tokens[(int)binop5785] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5843 = 100.0000000000 - 1.0000000000;
    double binop5844 = binop5843 * 3.0000000000;
    double cases5845;
    double binop5846 = pos < src_len;
    double charat5847 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5848 = charat5847 >= 48.0000000000;
    double charat5849 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5850 = charat5849 <= 57.0000000000;
    double binop5851 = binop5848 && binop5850;
    double binop5852 = binop5846 && binop5851;
    double binop5853 = pos < src_len;
    double charat5854 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5855 = charat5854 == 43.0000000000;
    double binop5856 = binop5853 && binop5855;
    double binop5857 = pos < src_len;
    double charat5858 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5859 = charat5858 == 42.0000000000;
    double binop5860 = binop5857 && binop5859;
    if (binop5852) {
        cases5845 = TOK_NUMBER;
    } else if (binop5856) {
        cases5845 = TOK_PLUS;
    } else if (binop5860) {
        cases5845 = TOK_MUL;
    } else if (1.0000000000) {
        cases5845 = 0.0000000000;
    } else { cases5845 = 0.0; }
    double binop5861 = 100.0000000000 - 1.0000000000;
    double binop5862 = binop5861 * 0.0000000000;
    double cases5863;
    double binop5864 = pos < src_len;
    if (binop5864) {
        cases5863 = pos;
    } else if (1.0000000000) {
        cases5863 = 0.0000000000;
    } else { cases5863 = 0.0; }
    double binop5865 = 100.0000000000 - 1.0000000000;
    double binop5866 = binop5865 * 0.0000000000;
    double cases5867;
    double binop5868 = pos < src_len;
    double charat5869 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5870 = charat5869 >= 48.0000000000;
    double charat5871 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5872 = charat5871 <= 57.0000000000;
    double binop5873 = binop5870 && binop5872;
    double binop5874 = binop5868 && binop5873;
    double binop5875 = pos < src_len;
    double charat5876 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5877 = charat5876 == 43.0000000000;
    double charat5878 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5879 = charat5878 == 42.0000000000;
    double binop5880 = binop5877 || binop5879;
    double binop5881 = binop5875 && binop5880;
    if (binop5874) {
    double binop5882 = pos + 2.0000000000;
        cases5867 = binop5882;
    } else if (binop5881) {
    double binop5883 = pos + 1.0000000000;
        cases5867 = binop5883;
    } else if (1.0000000000) {
        cases5867 = 0.0000000000;
    } else { cases5867 = 0.0; }
    double cases5884;
    double binop5885 = pos < src_len;
    double charat5886 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5887 = charat5886 >= 48.0000000000;
    double charat5888 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5889 = charat5888 <= 57.0000000000;
    double binop5890 = binop5887 && binop5889;
    double binop5891 = binop5885 && binop5890;
    double binop5892 = pos < src_len;
    double charat5893 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5894 = charat5893 == 43.0000000000;
    double charat5895 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5896 = charat5895 == 42.0000000000;
    double binop5897 = binop5894 || binop5896;
    double binop5898 = binop5892 && binop5897;
    if (binop5891) {
    double binop5899 = pos + 3.0000000000;
        cases5884 = binop5899;
    } else if (binop5898) {
    double binop5900 = pos + 2.0000000000;
        cases5884 = binop5900;
    } else if (1.0000000000) {
    double binop5901 = src_len + 1.0000000000;
        cases5884 = binop5901;
    } else { cases5884 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5866] = 0.0000000000;
    tokens[(int)binop5862] = 0.0000000000;
    tokens[(int)binop5844] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5902 = 101.0000000000 - 1.0000000000;
    double binop5903 = binop5902 * 3.0000000000;
    double cases5904;
    double binop5905 = pos < src_len;
    double charat5906 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5907 = charat5906 >= 48.0000000000;
    double charat5908 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5909 = charat5908 <= 57.0000000000;
    double binop5910 = binop5907 && binop5909;
    double binop5911 = binop5905 && binop5910;
    double binop5912 = pos < src_len;
    double charat5913 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5914 = charat5913 == 43.0000000000;
    double binop5915 = binop5912 && binop5914;
    double binop5916 = pos < src_len;
    double charat5917 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5918 = charat5917 == 42.0000000000;
    double binop5919 = binop5916 && binop5918;
    if (binop5911) {
        cases5904 = TOK_NUMBER;
    } else if (binop5915) {
        cases5904 = TOK_PLUS;
    } else if (binop5919) {
        cases5904 = TOK_MUL;
    } else if (1.0000000000) {
        cases5904 = 0.0000000000;
    } else { cases5904 = 0.0; }
    double binop5920 = 101.0000000000 - 1.0000000000;
    double binop5921 = binop5920 * 0.0000000000;
    double cases5922;
    double binop5923 = pos < src_len;
    if (binop5923) {
        cases5922 = pos;
    } else if (1.0000000000) {
        cases5922 = 0.0000000000;
    } else { cases5922 = 0.0; }
    double binop5924 = 101.0000000000 - 1.0000000000;
    double binop5925 = binop5924 * 0.0000000000;
    double cases5926;
    double binop5927 = pos < src_len;
    double charat5928 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5929 = charat5928 >= 48.0000000000;
    double charat5930 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5931 = charat5930 <= 57.0000000000;
    double binop5932 = binop5929 && binop5931;
    double binop5933 = binop5927 && binop5932;
    double binop5934 = pos < src_len;
    double charat5935 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5936 = charat5935 == 43.0000000000;
    double charat5937 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5938 = charat5937 == 42.0000000000;
    double binop5939 = binop5936 || binop5938;
    double binop5940 = binop5934 && binop5939;
    if (binop5933) {
    double binop5941 = pos + 2.0000000000;
        cases5926 = binop5941;
    } else if (binop5940) {
    double binop5942 = pos + 1.0000000000;
        cases5926 = binop5942;
    } else if (1.0000000000) {
        cases5926 = 0.0000000000;
    } else { cases5926 = 0.0; }
    double cases5943;
    double binop5944 = pos < src_len;
    double charat5945 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5946 = charat5945 >= 48.0000000000;
    double charat5947 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5948 = charat5947 <= 57.0000000000;
    double binop5949 = binop5946 && binop5948;
    double binop5950 = binop5944 && binop5949;
    double binop5951 = pos < src_len;
    double charat5952 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5953 = charat5952 == 43.0000000000;
    double charat5954 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5955 = charat5954 == 42.0000000000;
    double binop5956 = binop5953 || binop5955;
    double binop5957 = binop5951 && binop5956;
    if (binop5950) {
    double binop5958 = pos + 3.0000000000;
        cases5943 = binop5958;
    } else if (binop5957) {
    double binop5959 = pos + 2.0000000000;
        cases5943 = binop5959;
    } else if (1.0000000000) {
    double binop5960 = src_len + 1.0000000000;
        cases5943 = binop5960;
    } else { cases5943 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5925] = 0.0000000000;
    tokens[(int)binop5921] = 0.0000000000;
    tokens[(int)binop5903] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop5961 = 102.0000000000 - 1.0000000000;
    double binop5962 = binop5961 * 3.0000000000;
    double cases5963;
    double binop5964 = pos < src_len;
    double charat5965 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5966 = charat5965 >= 48.0000000000;
    double charat5967 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5968 = charat5967 <= 57.0000000000;
    double binop5969 = binop5966 && binop5968;
    double binop5970 = binop5964 && binop5969;
    double binop5971 = pos < src_len;
    double charat5972 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5973 = charat5972 == 43.0000000000;
    double binop5974 = binop5971 && binop5973;
    double binop5975 = pos < src_len;
    double charat5976 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5977 = charat5976 == 42.0000000000;
    double binop5978 = binop5975 && binop5977;
    if (binop5970) {
        cases5963 = TOK_NUMBER;
    } else if (binop5974) {
        cases5963 = TOK_PLUS;
    } else if (binop5978) {
        cases5963 = TOK_MUL;
    } else if (1.0000000000) {
        cases5963 = 0.0000000000;
    } else { cases5963 = 0.0; }
    double binop5979 = 102.0000000000 - 1.0000000000;
    double binop5980 = binop5979 * 0.0000000000;
    double cases5981;
    double binop5982 = pos < src_len;
    if (binop5982) {
        cases5981 = pos;
    } else if (1.0000000000) {
        cases5981 = 0.0000000000;
    } else { cases5981 = 0.0; }
    double binop5983 = 102.0000000000 - 1.0000000000;
    double binop5984 = binop5983 * 0.0000000000;
    double cases5985;
    double binop5986 = pos < src_len;
    double charat5987 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5988 = charat5987 >= 48.0000000000;
    double charat5989 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5990 = charat5989 <= 57.0000000000;
    double binop5991 = binop5988 && binop5990;
    double binop5992 = binop5986 && binop5991;
    double binop5993 = pos < src_len;
    double charat5994 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5995 = charat5994 == 43.0000000000;
    double charat5996 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop5997 = charat5996 == 42.0000000000;
    double binop5998 = binop5995 || binop5997;
    double binop5999 = binop5993 && binop5998;
    if (binop5992) {
    double binop6000 = pos + 2.0000000000;
        cases5985 = binop6000;
    } else if (binop5999) {
    double binop6001 = pos + 1.0000000000;
        cases5985 = binop6001;
    } else if (1.0000000000) {
        cases5985 = 0.0000000000;
    } else { cases5985 = 0.0; }
    double cases6002;
    double binop6003 = pos < src_len;
    double charat6004 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6005 = charat6004 >= 48.0000000000;
    double charat6006 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6007 = charat6006 <= 57.0000000000;
    double binop6008 = binop6005 && binop6007;
    double binop6009 = binop6003 && binop6008;
    double binop6010 = pos < src_len;
    double charat6011 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6012 = charat6011 == 43.0000000000;
    double charat6013 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6014 = charat6013 == 42.0000000000;
    double binop6015 = binop6012 || binop6014;
    double binop6016 = binop6010 && binop6015;
    if (binop6009) {
    double binop6017 = pos + 3.0000000000;
        cases6002 = binop6017;
    } else if (binop6016) {
    double binop6018 = pos + 2.0000000000;
        cases6002 = binop6018;
    } else if (1.0000000000) {
    double binop6019 = src_len + 1.0000000000;
        cases6002 = binop6019;
    } else { cases6002 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop5984] = 0.0000000000;
    tokens[(int)binop5980] = 0.0000000000;
    tokens[(int)binop5962] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6020 = 103.0000000000 - 1.0000000000;
    double binop6021 = binop6020 * 3.0000000000;
    double cases6022;
    double binop6023 = pos < src_len;
    double charat6024 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6025 = charat6024 >= 48.0000000000;
    double charat6026 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6027 = charat6026 <= 57.0000000000;
    double binop6028 = binop6025 && binop6027;
    double binop6029 = binop6023 && binop6028;
    double binop6030 = pos < src_len;
    double charat6031 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6032 = charat6031 == 43.0000000000;
    double binop6033 = binop6030 && binop6032;
    double binop6034 = pos < src_len;
    double charat6035 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6036 = charat6035 == 42.0000000000;
    double binop6037 = binop6034 && binop6036;
    if (binop6029) {
        cases6022 = TOK_NUMBER;
    } else if (binop6033) {
        cases6022 = TOK_PLUS;
    } else if (binop6037) {
        cases6022 = TOK_MUL;
    } else if (1.0000000000) {
        cases6022 = 0.0000000000;
    } else { cases6022 = 0.0; }
    double binop6038 = 103.0000000000 - 1.0000000000;
    double binop6039 = binop6038 * 0.0000000000;
    double cases6040;
    double binop6041 = pos < src_len;
    if (binop6041) {
        cases6040 = pos;
    } else if (1.0000000000) {
        cases6040 = 0.0000000000;
    } else { cases6040 = 0.0; }
    double binop6042 = 103.0000000000 - 1.0000000000;
    double binop6043 = binop6042 * 0.0000000000;
    double cases6044;
    double binop6045 = pos < src_len;
    double charat6046 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6047 = charat6046 >= 48.0000000000;
    double charat6048 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6049 = charat6048 <= 57.0000000000;
    double binop6050 = binop6047 && binop6049;
    double binop6051 = binop6045 && binop6050;
    double binop6052 = pos < src_len;
    double charat6053 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6054 = charat6053 == 43.0000000000;
    double charat6055 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6056 = charat6055 == 42.0000000000;
    double binop6057 = binop6054 || binop6056;
    double binop6058 = binop6052 && binop6057;
    if (binop6051) {
    double binop6059 = pos + 2.0000000000;
        cases6044 = binop6059;
    } else if (binop6058) {
    double binop6060 = pos + 1.0000000000;
        cases6044 = binop6060;
    } else if (1.0000000000) {
        cases6044 = 0.0000000000;
    } else { cases6044 = 0.0; }
    double cases6061;
    double binop6062 = pos < src_len;
    double charat6063 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6064 = charat6063 >= 48.0000000000;
    double charat6065 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6066 = charat6065 <= 57.0000000000;
    double binop6067 = binop6064 && binop6066;
    double binop6068 = binop6062 && binop6067;
    double binop6069 = pos < src_len;
    double charat6070 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6071 = charat6070 == 43.0000000000;
    double charat6072 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6073 = charat6072 == 42.0000000000;
    double binop6074 = binop6071 || binop6073;
    double binop6075 = binop6069 && binop6074;
    if (binop6068) {
    double binop6076 = pos + 3.0000000000;
        cases6061 = binop6076;
    } else if (binop6075) {
    double binop6077 = pos + 2.0000000000;
        cases6061 = binop6077;
    } else if (1.0000000000) {
    double binop6078 = src_len + 1.0000000000;
        cases6061 = binop6078;
    } else { cases6061 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6043] = 0.0000000000;
    tokens[(int)binop6039] = 0.0000000000;
    tokens[(int)binop6021] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6079 = 104.0000000000 - 1.0000000000;
    double binop6080 = binop6079 * 3.0000000000;
    double cases6081;
    double binop6082 = pos < src_len;
    double charat6083 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6084 = charat6083 >= 48.0000000000;
    double charat6085 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6086 = charat6085 <= 57.0000000000;
    double binop6087 = binop6084 && binop6086;
    double binop6088 = binop6082 && binop6087;
    double binop6089 = pos < src_len;
    double charat6090 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6091 = charat6090 == 43.0000000000;
    double binop6092 = binop6089 && binop6091;
    double binop6093 = pos < src_len;
    double charat6094 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6095 = charat6094 == 42.0000000000;
    double binop6096 = binop6093 && binop6095;
    if (binop6088) {
        cases6081 = TOK_NUMBER;
    } else if (binop6092) {
        cases6081 = TOK_PLUS;
    } else if (binop6096) {
        cases6081 = TOK_MUL;
    } else if (1.0000000000) {
        cases6081 = 0.0000000000;
    } else { cases6081 = 0.0; }
    double binop6097 = 104.0000000000 - 1.0000000000;
    double binop6098 = binop6097 * 0.0000000000;
    double cases6099;
    double binop6100 = pos < src_len;
    if (binop6100) {
        cases6099 = pos;
    } else if (1.0000000000) {
        cases6099 = 0.0000000000;
    } else { cases6099 = 0.0; }
    double binop6101 = 104.0000000000 - 1.0000000000;
    double binop6102 = binop6101 * 0.0000000000;
    double cases6103;
    double binop6104 = pos < src_len;
    double charat6105 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6106 = charat6105 >= 48.0000000000;
    double charat6107 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6108 = charat6107 <= 57.0000000000;
    double binop6109 = binop6106 && binop6108;
    double binop6110 = binop6104 && binop6109;
    double binop6111 = pos < src_len;
    double charat6112 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6113 = charat6112 == 43.0000000000;
    double charat6114 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6115 = charat6114 == 42.0000000000;
    double binop6116 = binop6113 || binop6115;
    double binop6117 = binop6111 && binop6116;
    if (binop6110) {
    double binop6118 = pos + 2.0000000000;
        cases6103 = binop6118;
    } else if (binop6117) {
    double binop6119 = pos + 1.0000000000;
        cases6103 = binop6119;
    } else if (1.0000000000) {
        cases6103 = 0.0000000000;
    } else { cases6103 = 0.0; }
    double cases6120;
    double binop6121 = pos < src_len;
    double charat6122 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6123 = charat6122 >= 48.0000000000;
    double charat6124 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6125 = charat6124 <= 57.0000000000;
    double binop6126 = binop6123 && binop6125;
    double binop6127 = binop6121 && binop6126;
    double binop6128 = pos < src_len;
    double charat6129 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6130 = charat6129 == 43.0000000000;
    double charat6131 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6132 = charat6131 == 42.0000000000;
    double binop6133 = binop6130 || binop6132;
    double binop6134 = binop6128 && binop6133;
    if (binop6127) {
    double binop6135 = pos + 3.0000000000;
        cases6120 = binop6135;
    } else if (binop6134) {
    double binop6136 = pos + 2.0000000000;
        cases6120 = binop6136;
    } else if (1.0000000000) {
    double binop6137 = src_len + 1.0000000000;
        cases6120 = binop6137;
    } else { cases6120 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6102] = 0.0000000000;
    tokens[(int)binop6098] = 0.0000000000;
    tokens[(int)binop6080] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6138 = 105.0000000000 - 1.0000000000;
    double binop6139 = binop6138 * 3.0000000000;
    double cases6140;
    double binop6141 = pos < src_len;
    double charat6142 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6143 = charat6142 >= 48.0000000000;
    double charat6144 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6145 = charat6144 <= 57.0000000000;
    double binop6146 = binop6143 && binop6145;
    double binop6147 = binop6141 && binop6146;
    double binop6148 = pos < src_len;
    double charat6149 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6150 = charat6149 == 43.0000000000;
    double binop6151 = binop6148 && binop6150;
    double binop6152 = pos < src_len;
    double charat6153 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6154 = charat6153 == 42.0000000000;
    double binop6155 = binop6152 && binop6154;
    if (binop6147) {
        cases6140 = TOK_NUMBER;
    } else if (binop6151) {
        cases6140 = TOK_PLUS;
    } else if (binop6155) {
        cases6140 = TOK_MUL;
    } else if (1.0000000000) {
        cases6140 = 0.0000000000;
    } else { cases6140 = 0.0; }
    double binop6156 = 105.0000000000 - 1.0000000000;
    double binop6157 = binop6156 * 0.0000000000;
    double cases6158;
    double binop6159 = pos < src_len;
    if (binop6159) {
        cases6158 = pos;
    } else if (1.0000000000) {
        cases6158 = 0.0000000000;
    } else { cases6158 = 0.0; }
    double binop6160 = 105.0000000000 - 1.0000000000;
    double binop6161 = binop6160 * 0.0000000000;
    double cases6162;
    double binop6163 = pos < src_len;
    double charat6164 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6165 = charat6164 >= 48.0000000000;
    double charat6166 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6167 = charat6166 <= 57.0000000000;
    double binop6168 = binop6165 && binop6167;
    double binop6169 = binop6163 && binop6168;
    double binop6170 = pos < src_len;
    double charat6171 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6172 = charat6171 == 43.0000000000;
    double charat6173 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6174 = charat6173 == 42.0000000000;
    double binop6175 = binop6172 || binop6174;
    double binop6176 = binop6170 && binop6175;
    if (binop6169) {
    double binop6177 = pos + 2.0000000000;
        cases6162 = binop6177;
    } else if (binop6176) {
    double binop6178 = pos + 1.0000000000;
        cases6162 = binop6178;
    } else if (1.0000000000) {
        cases6162 = 0.0000000000;
    } else { cases6162 = 0.0; }
    double cases6179;
    double binop6180 = pos < src_len;
    double charat6181 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6182 = charat6181 >= 48.0000000000;
    double charat6183 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6184 = charat6183 <= 57.0000000000;
    double binop6185 = binop6182 && binop6184;
    double binop6186 = binop6180 && binop6185;
    double binop6187 = pos < src_len;
    double charat6188 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6189 = charat6188 == 43.0000000000;
    double charat6190 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6191 = charat6190 == 42.0000000000;
    double binop6192 = binop6189 || binop6191;
    double binop6193 = binop6187 && binop6192;
    if (binop6186) {
    double binop6194 = pos + 3.0000000000;
        cases6179 = binop6194;
    } else if (binop6193) {
    double binop6195 = pos + 2.0000000000;
        cases6179 = binop6195;
    } else if (1.0000000000) {
    double binop6196 = src_len + 1.0000000000;
        cases6179 = binop6196;
    } else { cases6179 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6161] = 0.0000000000;
    tokens[(int)binop6157] = 0.0000000000;
    tokens[(int)binop6139] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6197 = 106.0000000000 - 1.0000000000;
    double binop6198 = binop6197 * 3.0000000000;
    double cases6199;
    double binop6200 = pos < src_len;
    double charat6201 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6202 = charat6201 >= 48.0000000000;
    double charat6203 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6204 = charat6203 <= 57.0000000000;
    double binop6205 = binop6202 && binop6204;
    double binop6206 = binop6200 && binop6205;
    double binop6207 = pos < src_len;
    double charat6208 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6209 = charat6208 == 43.0000000000;
    double binop6210 = binop6207 && binop6209;
    double binop6211 = pos < src_len;
    double charat6212 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6213 = charat6212 == 42.0000000000;
    double binop6214 = binop6211 && binop6213;
    if (binop6206) {
        cases6199 = TOK_NUMBER;
    } else if (binop6210) {
        cases6199 = TOK_PLUS;
    } else if (binop6214) {
        cases6199 = TOK_MUL;
    } else if (1.0000000000) {
        cases6199 = 0.0000000000;
    } else { cases6199 = 0.0; }
    double binop6215 = 106.0000000000 - 1.0000000000;
    double binop6216 = binop6215 * 0.0000000000;
    double cases6217;
    double binop6218 = pos < src_len;
    if (binop6218) {
        cases6217 = pos;
    } else if (1.0000000000) {
        cases6217 = 0.0000000000;
    } else { cases6217 = 0.0; }
    double binop6219 = 106.0000000000 - 1.0000000000;
    double binop6220 = binop6219 * 0.0000000000;
    double cases6221;
    double binop6222 = pos < src_len;
    double charat6223 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6224 = charat6223 >= 48.0000000000;
    double charat6225 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6226 = charat6225 <= 57.0000000000;
    double binop6227 = binop6224 && binop6226;
    double binop6228 = binop6222 && binop6227;
    double binop6229 = pos < src_len;
    double charat6230 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6231 = charat6230 == 43.0000000000;
    double charat6232 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6233 = charat6232 == 42.0000000000;
    double binop6234 = binop6231 || binop6233;
    double binop6235 = binop6229 && binop6234;
    if (binop6228) {
    double binop6236 = pos + 2.0000000000;
        cases6221 = binop6236;
    } else if (binop6235) {
    double binop6237 = pos + 1.0000000000;
        cases6221 = binop6237;
    } else if (1.0000000000) {
        cases6221 = 0.0000000000;
    } else { cases6221 = 0.0; }
    double cases6238;
    double binop6239 = pos < src_len;
    double charat6240 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6241 = charat6240 >= 48.0000000000;
    double charat6242 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6243 = charat6242 <= 57.0000000000;
    double binop6244 = binop6241 && binop6243;
    double binop6245 = binop6239 && binop6244;
    double binop6246 = pos < src_len;
    double charat6247 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6248 = charat6247 == 43.0000000000;
    double charat6249 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6250 = charat6249 == 42.0000000000;
    double binop6251 = binop6248 || binop6250;
    double binop6252 = binop6246 && binop6251;
    if (binop6245) {
    double binop6253 = pos + 3.0000000000;
        cases6238 = binop6253;
    } else if (binop6252) {
    double binop6254 = pos + 2.0000000000;
        cases6238 = binop6254;
    } else if (1.0000000000) {
    double binop6255 = src_len + 1.0000000000;
        cases6238 = binop6255;
    } else { cases6238 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6220] = 0.0000000000;
    tokens[(int)binop6216] = 0.0000000000;
    tokens[(int)binop6198] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6256 = 107.0000000000 - 1.0000000000;
    double binop6257 = binop6256 * 3.0000000000;
    double cases6258;
    double binop6259 = pos < src_len;
    double charat6260 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6261 = charat6260 >= 48.0000000000;
    double charat6262 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6263 = charat6262 <= 57.0000000000;
    double binop6264 = binop6261 && binop6263;
    double binop6265 = binop6259 && binop6264;
    double binop6266 = pos < src_len;
    double charat6267 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6268 = charat6267 == 43.0000000000;
    double binop6269 = binop6266 && binop6268;
    double binop6270 = pos < src_len;
    double charat6271 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6272 = charat6271 == 42.0000000000;
    double binop6273 = binop6270 && binop6272;
    if (binop6265) {
        cases6258 = TOK_NUMBER;
    } else if (binop6269) {
        cases6258 = TOK_PLUS;
    } else if (binop6273) {
        cases6258 = TOK_MUL;
    } else if (1.0000000000) {
        cases6258 = 0.0000000000;
    } else { cases6258 = 0.0; }
    double binop6274 = 107.0000000000 - 1.0000000000;
    double binop6275 = binop6274 * 0.0000000000;
    double cases6276;
    double binop6277 = pos < src_len;
    if (binop6277) {
        cases6276 = pos;
    } else if (1.0000000000) {
        cases6276 = 0.0000000000;
    } else { cases6276 = 0.0; }
    double binop6278 = 107.0000000000 - 1.0000000000;
    double binop6279 = binop6278 * 0.0000000000;
    double cases6280;
    double binop6281 = pos < src_len;
    double charat6282 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6283 = charat6282 >= 48.0000000000;
    double charat6284 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6285 = charat6284 <= 57.0000000000;
    double binop6286 = binop6283 && binop6285;
    double binop6287 = binop6281 && binop6286;
    double binop6288 = pos < src_len;
    double charat6289 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6290 = charat6289 == 43.0000000000;
    double charat6291 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6292 = charat6291 == 42.0000000000;
    double binop6293 = binop6290 || binop6292;
    double binop6294 = binop6288 && binop6293;
    if (binop6287) {
    double binop6295 = pos + 2.0000000000;
        cases6280 = binop6295;
    } else if (binop6294) {
    double binop6296 = pos + 1.0000000000;
        cases6280 = binop6296;
    } else if (1.0000000000) {
        cases6280 = 0.0000000000;
    } else { cases6280 = 0.0; }
    double cases6297;
    double binop6298 = pos < src_len;
    double charat6299 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6300 = charat6299 >= 48.0000000000;
    double charat6301 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6302 = charat6301 <= 57.0000000000;
    double binop6303 = binop6300 && binop6302;
    double binop6304 = binop6298 && binop6303;
    double binop6305 = pos < src_len;
    double charat6306 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6307 = charat6306 == 43.0000000000;
    double charat6308 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6309 = charat6308 == 42.0000000000;
    double binop6310 = binop6307 || binop6309;
    double binop6311 = binop6305 && binop6310;
    if (binop6304) {
    double binop6312 = pos + 3.0000000000;
        cases6297 = binop6312;
    } else if (binop6311) {
    double binop6313 = pos + 2.0000000000;
        cases6297 = binop6313;
    } else if (1.0000000000) {
    double binop6314 = src_len + 1.0000000000;
        cases6297 = binop6314;
    } else { cases6297 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6279] = 0.0000000000;
    tokens[(int)binop6275] = 0.0000000000;
    tokens[(int)binop6257] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6315 = 108.0000000000 - 1.0000000000;
    double binop6316 = binop6315 * 3.0000000000;
    double cases6317;
    double binop6318 = pos < src_len;
    double charat6319 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6320 = charat6319 >= 48.0000000000;
    double charat6321 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6322 = charat6321 <= 57.0000000000;
    double binop6323 = binop6320 && binop6322;
    double binop6324 = binop6318 && binop6323;
    double binop6325 = pos < src_len;
    double charat6326 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6327 = charat6326 == 43.0000000000;
    double binop6328 = binop6325 && binop6327;
    double binop6329 = pos < src_len;
    double charat6330 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6331 = charat6330 == 42.0000000000;
    double binop6332 = binop6329 && binop6331;
    if (binop6324) {
        cases6317 = TOK_NUMBER;
    } else if (binop6328) {
        cases6317 = TOK_PLUS;
    } else if (binop6332) {
        cases6317 = TOK_MUL;
    } else if (1.0000000000) {
        cases6317 = 0.0000000000;
    } else { cases6317 = 0.0; }
    double binop6333 = 108.0000000000 - 1.0000000000;
    double binop6334 = binop6333 * 0.0000000000;
    double cases6335;
    double binop6336 = pos < src_len;
    if (binop6336) {
        cases6335 = pos;
    } else if (1.0000000000) {
        cases6335 = 0.0000000000;
    } else { cases6335 = 0.0; }
    double binop6337 = 108.0000000000 - 1.0000000000;
    double binop6338 = binop6337 * 0.0000000000;
    double cases6339;
    double binop6340 = pos < src_len;
    double charat6341 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6342 = charat6341 >= 48.0000000000;
    double charat6343 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6344 = charat6343 <= 57.0000000000;
    double binop6345 = binop6342 && binop6344;
    double binop6346 = binop6340 && binop6345;
    double binop6347 = pos < src_len;
    double charat6348 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6349 = charat6348 == 43.0000000000;
    double charat6350 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6351 = charat6350 == 42.0000000000;
    double binop6352 = binop6349 || binop6351;
    double binop6353 = binop6347 && binop6352;
    if (binop6346) {
    double binop6354 = pos + 2.0000000000;
        cases6339 = binop6354;
    } else if (binop6353) {
    double binop6355 = pos + 1.0000000000;
        cases6339 = binop6355;
    } else if (1.0000000000) {
        cases6339 = 0.0000000000;
    } else { cases6339 = 0.0; }
    double cases6356;
    double binop6357 = pos < src_len;
    double charat6358 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6359 = charat6358 >= 48.0000000000;
    double charat6360 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6361 = charat6360 <= 57.0000000000;
    double binop6362 = binop6359 && binop6361;
    double binop6363 = binop6357 && binop6362;
    double binop6364 = pos < src_len;
    double charat6365 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6366 = charat6365 == 43.0000000000;
    double charat6367 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6368 = charat6367 == 42.0000000000;
    double binop6369 = binop6366 || binop6368;
    double binop6370 = binop6364 && binop6369;
    if (binop6363) {
    double binop6371 = pos + 3.0000000000;
        cases6356 = binop6371;
    } else if (binop6370) {
    double binop6372 = pos + 2.0000000000;
        cases6356 = binop6372;
    } else if (1.0000000000) {
    double binop6373 = src_len + 1.0000000000;
        cases6356 = binop6373;
    } else { cases6356 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6338] = 0.0000000000;
    tokens[(int)binop6334] = 0.0000000000;
    tokens[(int)binop6316] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6374 = 109.0000000000 - 1.0000000000;
    double binop6375 = binop6374 * 3.0000000000;
    double cases6376;
    double binop6377 = pos < src_len;
    double charat6378 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6379 = charat6378 >= 48.0000000000;
    double charat6380 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6381 = charat6380 <= 57.0000000000;
    double binop6382 = binop6379 && binop6381;
    double binop6383 = binop6377 && binop6382;
    double binop6384 = pos < src_len;
    double charat6385 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6386 = charat6385 == 43.0000000000;
    double binop6387 = binop6384 && binop6386;
    double binop6388 = pos < src_len;
    double charat6389 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6390 = charat6389 == 42.0000000000;
    double binop6391 = binop6388 && binop6390;
    if (binop6383) {
        cases6376 = TOK_NUMBER;
    } else if (binop6387) {
        cases6376 = TOK_PLUS;
    } else if (binop6391) {
        cases6376 = TOK_MUL;
    } else if (1.0000000000) {
        cases6376 = 0.0000000000;
    } else { cases6376 = 0.0; }
    double binop6392 = 109.0000000000 - 1.0000000000;
    double binop6393 = binop6392 * 0.0000000000;
    double cases6394;
    double binop6395 = pos < src_len;
    if (binop6395) {
        cases6394 = pos;
    } else if (1.0000000000) {
        cases6394 = 0.0000000000;
    } else { cases6394 = 0.0; }
    double binop6396 = 109.0000000000 - 1.0000000000;
    double binop6397 = binop6396 * 0.0000000000;
    double cases6398;
    double binop6399 = pos < src_len;
    double charat6400 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6401 = charat6400 >= 48.0000000000;
    double charat6402 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6403 = charat6402 <= 57.0000000000;
    double binop6404 = binop6401 && binop6403;
    double binop6405 = binop6399 && binop6404;
    double binop6406 = pos < src_len;
    double charat6407 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6408 = charat6407 == 43.0000000000;
    double charat6409 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6410 = charat6409 == 42.0000000000;
    double binop6411 = binop6408 || binop6410;
    double binop6412 = binop6406 && binop6411;
    if (binop6405) {
    double binop6413 = pos + 2.0000000000;
        cases6398 = binop6413;
    } else if (binop6412) {
    double binop6414 = pos + 1.0000000000;
        cases6398 = binop6414;
    } else if (1.0000000000) {
        cases6398 = 0.0000000000;
    } else { cases6398 = 0.0; }
    double cases6415;
    double binop6416 = pos < src_len;
    double charat6417 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6418 = charat6417 >= 48.0000000000;
    double charat6419 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6420 = charat6419 <= 57.0000000000;
    double binop6421 = binop6418 && binop6420;
    double binop6422 = binop6416 && binop6421;
    double binop6423 = pos < src_len;
    double charat6424 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6425 = charat6424 == 43.0000000000;
    double charat6426 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6427 = charat6426 == 42.0000000000;
    double binop6428 = binop6425 || binop6427;
    double binop6429 = binop6423 && binop6428;
    if (binop6422) {
    double binop6430 = pos + 3.0000000000;
        cases6415 = binop6430;
    } else if (binop6429) {
    double binop6431 = pos + 2.0000000000;
        cases6415 = binop6431;
    } else if (1.0000000000) {
    double binop6432 = src_len + 1.0000000000;
        cases6415 = binop6432;
    } else { cases6415 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6397] = 0.0000000000;
    tokens[(int)binop6393] = 0.0000000000;
    tokens[(int)binop6375] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6433 = 110.0000000000 - 1.0000000000;
    double binop6434 = binop6433 * 3.0000000000;
    double cases6435;
    double binop6436 = pos < src_len;
    double charat6437 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6438 = charat6437 >= 48.0000000000;
    double charat6439 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6440 = charat6439 <= 57.0000000000;
    double binop6441 = binop6438 && binop6440;
    double binop6442 = binop6436 && binop6441;
    double binop6443 = pos < src_len;
    double charat6444 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6445 = charat6444 == 43.0000000000;
    double binop6446 = binop6443 && binop6445;
    double binop6447 = pos < src_len;
    double charat6448 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6449 = charat6448 == 42.0000000000;
    double binop6450 = binop6447 && binop6449;
    if (binop6442) {
        cases6435 = TOK_NUMBER;
    } else if (binop6446) {
        cases6435 = TOK_PLUS;
    } else if (binop6450) {
        cases6435 = TOK_MUL;
    } else if (1.0000000000) {
        cases6435 = 0.0000000000;
    } else { cases6435 = 0.0; }
    double binop6451 = 110.0000000000 - 1.0000000000;
    double binop6452 = binop6451 * 0.0000000000;
    double cases6453;
    double binop6454 = pos < src_len;
    if (binop6454) {
        cases6453 = pos;
    } else if (1.0000000000) {
        cases6453 = 0.0000000000;
    } else { cases6453 = 0.0; }
    double binop6455 = 110.0000000000 - 1.0000000000;
    double binop6456 = binop6455 * 0.0000000000;
    double cases6457;
    double binop6458 = pos < src_len;
    double charat6459 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6460 = charat6459 >= 48.0000000000;
    double charat6461 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6462 = charat6461 <= 57.0000000000;
    double binop6463 = binop6460 && binop6462;
    double binop6464 = binop6458 && binop6463;
    double binop6465 = pos < src_len;
    double charat6466 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6467 = charat6466 == 43.0000000000;
    double charat6468 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6469 = charat6468 == 42.0000000000;
    double binop6470 = binop6467 || binop6469;
    double binop6471 = binop6465 && binop6470;
    if (binop6464) {
    double binop6472 = pos + 2.0000000000;
        cases6457 = binop6472;
    } else if (binop6471) {
    double binop6473 = pos + 1.0000000000;
        cases6457 = binop6473;
    } else if (1.0000000000) {
        cases6457 = 0.0000000000;
    } else { cases6457 = 0.0; }
    double cases6474;
    double binop6475 = pos < src_len;
    double charat6476 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6477 = charat6476 >= 48.0000000000;
    double charat6478 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6479 = charat6478 <= 57.0000000000;
    double binop6480 = binop6477 && binop6479;
    double binop6481 = binop6475 && binop6480;
    double binop6482 = pos < src_len;
    double charat6483 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6484 = charat6483 == 43.0000000000;
    double charat6485 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6486 = charat6485 == 42.0000000000;
    double binop6487 = binop6484 || binop6486;
    double binop6488 = binop6482 && binop6487;
    if (binop6481) {
    double binop6489 = pos + 3.0000000000;
        cases6474 = binop6489;
    } else if (binop6488) {
    double binop6490 = pos + 2.0000000000;
        cases6474 = binop6490;
    } else if (1.0000000000) {
    double binop6491 = src_len + 1.0000000000;
        cases6474 = binop6491;
    } else { cases6474 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6456] = 0.0000000000;
    tokens[(int)binop6452] = 0.0000000000;
    tokens[(int)binop6434] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6492 = 111.0000000000 - 1.0000000000;
    double binop6493 = binop6492 * 3.0000000000;
    double cases6494;
    double binop6495 = pos < src_len;
    double charat6496 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6497 = charat6496 >= 48.0000000000;
    double charat6498 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6499 = charat6498 <= 57.0000000000;
    double binop6500 = binop6497 && binop6499;
    double binop6501 = binop6495 && binop6500;
    double binop6502 = pos < src_len;
    double charat6503 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6504 = charat6503 == 43.0000000000;
    double binop6505 = binop6502 && binop6504;
    double binop6506 = pos < src_len;
    double charat6507 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6508 = charat6507 == 42.0000000000;
    double binop6509 = binop6506 && binop6508;
    if (binop6501) {
        cases6494 = TOK_NUMBER;
    } else if (binop6505) {
        cases6494 = TOK_PLUS;
    } else if (binop6509) {
        cases6494 = TOK_MUL;
    } else if (1.0000000000) {
        cases6494 = 0.0000000000;
    } else { cases6494 = 0.0; }
    double binop6510 = 111.0000000000 - 1.0000000000;
    double binop6511 = binop6510 * 0.0000000000;
    double cases6512;
    double binop6513 = pos < src_len;
    if (binop6513) {
        cases6512 = pos;
    } else if (1.0000000000) {
        cases6512 = 0.0000000000;
    } else { cases6512 = 0.0; }
    double binop6514 = 111.0000000000 - 1.0000000000;
    double binop6515 = binop6514 * 0.0000000000;
    double cases6516;
    double binop6517 = pos < src_len;
    double charat6518 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6519 = charat6518 >= 48.0000000000;
    double charat6520 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6521 = charat6520 <= 57.0000000000;
    double binop6522 = binop6519 && binop6521;
    double binop6523 = binop6517 && binop6522;
    double binop6524 = pos < src_len;
    double charat6525 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6526 = charat6525 == 43.0000000000;
    double charat6527 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6528 = charat6527 == 42.0000000000;
    double binop6529 = binop6526 || binop6528;
    double binop6530 = binop6524 && binop6529;
    if (binop6523) {
    double binop6531 = pos + 2.0000000000;
        cases6516 = binop6531;
    } else if (binop6530) {
    double binop6532 = pos + 1.0000000000;
        cases6516 = binop6532;
    } else if (1.0000000000) {
        cases6516 = 0.0000000000;
    } else { cases6516 = 0.0; }
    double cases6533;
    double binop6534 = pos < src_len;
    double charat6535 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6536 = charat6535 >= 48.0000000000;
    double charat6537 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6538 = charat6537 <= 57.0000000000;
    double binop6539 = binop6536 && binop6538;
    double binop6540 = binop6534 && binop6539;
    double binop6541 = pos < src_len;
    double charat6542 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6543 = charat6542 == 43.0000000000;
    double charat6544 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6545 = charat6544 == 42.0000000000;
    double binop6546 = binop6543 || binop6545;
    double binop6547 = binop6541 && binop6546;
    if (binop6540) {
    double binop6548 = pos + 3.0000000000;
        cases6533 = binop6548;
    } else if (binop6547) {
    double binop6549 = pos + 2.0000000000;
        cases6533 = binop6549;
    } else if (1.0000000000) {
    double binop6550 = src_len + 1.0000000000;
        cases6533 = binop6550;
    } else { cases6533 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6515] = 0.0000000000;
    tokens[(int)binop6511] = 0.0000000000;
    tokens[(int)binop6493] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6551 = 112.0000000000 - 1.0000000000;
    double binop6552 = binop6551 * 3.0000000000;
    double cases6553;
    double binop6554 = pos < src_len;
    double charat6555 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6556 = charat6555 >= 48.0000000000;
    double charat6557 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6558 = charat6557 <= 57.0000000000;
    double binop6559 = binop6556 && binop6558;
    double binop6560 = binop6554 && binop6559;
    double binop6561 = pos < src_len;
    double charat6562 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6563 = charat6562 == 43.0000000000;
    double binop6564 = binop6561 && binop6563;
    double binop6565 = pos < src_len;
    double charat6566 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6567 = charat6566 == 42.0000000000;
    double binop6568 = binop6565 && binop6567;
    if (binop6560) {
        cases6553 = TOK_NUMBER;
    } else if (binop6564) {
        cases6553 = TOK_PLUS;
    } else if (binop6568) {
        cases6553 = TOK_MUL;
    } else if (1.0000000000) {
        cases6553 = 0.0000000000;
    } else { cases6553 = 0.0; }
    double binop6569 = 112.0000000000 - 1.0000000000;
    double binop6570 = binop6569 * 0.0000000000;
    double cases6571;
    double binop6572 = pos < src_len;
    if (binop6572) {
        cases6571 = pos;
    } else if (1.0000000000) {
        cases6571 = 0.0000000000;
    } else { cases6571 = 0.0; }
    double binop6573 = 112.0000000000 - 1.0000000000;
    double binop6574 = binop6573 * 0.0000000000;
    double cases6575;
    double binop6576 = pos < src_len;
    double charat6577 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6578 = charat6577 >= 48.0000000000;
    double charat6579 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6580 = charat6579 <= 57.0000000000;
    double binop6581 = binop6578 && binop6580;
    double binop6582 = binop6576 && binop6581;
    double binop6583 = pos < src_len;
    double charat6584 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6585 = charat6584 == 43.0000000000;
    double charat6586 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6587 = charat6586 == 42.0000000000;
    double binop6588 = binop6585 || binop6587;
    double binop6589 = binop6583 && binop6588;
    if (binop6582) {
    double binop6590 = pos + 2.0000000000;
        cases6575 = binop6590;
    } else if (binop6589) {
    double binop6591 = pos + 1.0000000000;
        cases6575 = binop6591;
    } else if (1.0000000000) {
        cases6575 = 0.0000000000;
    } else { cases6575 = 0.0; }
    double cases6592;
    double binop6593 = pos < src_len;
    double charat6594 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6595 = charat6594 >= 48.0000000000;
    double charat6596 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6597 = charat6596 <= 57.0000000000;
    double binop6598 = binop6595 && binop6597;
    double binop6599 = binop6593 && binop6598;
    double binop6600 = pos < src_len;
    double charat6601 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6602 = charat6601 == 43.0000000000;
    double charat6603 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6604 = charat6603 == 42.0000000000;
    double binop6605 = binop6602 || binop6604;
    double binop6606 = binop6600 && binop6605;
    if (binop6599) {
    double binop6607 = pos + 3.0000000000;
        cases6592 = binop6607;
    } else if (binop6606) {
    double binop6608 = pos + 2.0000000000;
        cases6592 = binop6608;
    } else if (1.0000000000) {
    double binop6609 = src_len + 1.0000000000;
        cases6592 = binop6609;
    } else { cases6592 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6574] = 0.0000000000;
    tokens[(int)binop6570] = 0.0000000000;
    tokens[(int)binop6552] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6610 = 113.0000000000 - 1.0000000000;
    double binop6611 = binop6610 * 3.0000000000;
    double cases6612;
    double binop6613 = pos < src_len;
    double charat6614 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6615 = charat6614 >= 48.0000000000;
    double charat6616 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6617 = charat6616 <= 57.0000000000;
    double binop6618 = binop6615 && binop6617;
    double binop6619 = binop6613 && binop6618;
    double binop6620 = pos < src_len;
    double charat6621 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6622 = charat6621 == 43.0000000000;
    double binop6623 = binop6620 && binop6622;
    double binop6624 = pos < src_len;
    double charat6625 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6626 = charat6625 == 42.0000000000;
    double binop6627 = binop6624 && binop6626;
    if (binop6619) {
        cases6612 = TOK_NUMBER;
    } else if (binop6623) {
        cases6612 = TOK_PLUS;
    } else if (binop6627) {
        cases6612 = TOK_MUL;
    } else if (1.0000000000) {
        cases6612 = 0.0000000000;
    } else { cases6612 = 0.0; }
    double binop6628 = 113.0000000000 - 1.0000000000;
    double binop6629 = binop6628 * 0.0000000000;
    double cases6630;
    double binop6631 = pos < src_len;
    if (binop6631) {
        cases6630 = pos;
    } else if (1.0000000000) {
        cases6630 = 0.0000000000;
    } else { cases6630 = 0.0; }
    double binop6632 = 113.0000000000 - 1.0000000000;
    double binop6633 = binop6632 * 0.0000000000;
    double cases6634;
    double binop6635 = pos < src_len;
    double charat6636 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6637 = charat6636 >= 48.0000000000;
    double charat6638 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6639 = charat6638 <= 57.0000000000;
    double binop6640 = binop6637 && binop6639;
    double binop6641 = binop6635 && binop6640;
    double binop6642 = pos < src_len;
    double charat6643 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6644 = charat6643 == 43.0000000000;
    double charat6645 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6646 = charat6645 == 42.0000000000;
    double binop6647 = binop6644 || binop6646;
    double binop6648 = binop6642 && binop6647;
    if (binop6641) {
    double binop6649 = pos + 2.0000000000;
        cases6634 = binop6649;
    } else if (binop6648) {
    double binop6650 = pos + 1.0000000000;
        cases6634 = binop6650;
    } else if (1.0000000000) {
        cases6634 = 0.0000000000;
    } else { cases6634 = 0.0; }
    double cases6651;
    double binop6652 = pos < src_len;
    double charat6653 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6654 = charat6653 >= 48.0000000000;
    double charat6655 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6656 = charat6655 <= 57.0000000000;
    double binop6657 = binop6654 && binop6656;
    double binop6658 = binop6652 && binop6657;
    double binop6659 = pos < src_len;
    double charat6660 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6661 = charat6660 == 43.0000000000;
    double charat6662 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6663 = charat6662 == 42.0000000000;
    double binop6664 = binop6661 || binop6663;
    double binop6665 = binop6659 && binop6664;
    if (binop6658) {
    double binop6666 = pos + 3.0000000000;
        cases6651 = binop6666;
    } else if (binop6665) {
    double binop6667 = pos + 2.0000000000;
        cases6651 = binop6667;
    } else if (1.0000000000) {
    double binop6668 = src_len + 1.0000000000;
        cases6651 = binop6668;
    } else { cases6651 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6633] = 0.0000000000;
    tokens[(int)binop6629] = 0.0000000000;
    tokens[(int)binop6611] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6669 = 114.0000000000 - 1.0000000000;
    double binop6670 = binop6669 * 3.0000000000;
    double cases6671;
    double binop6672 = pos < src_len;
    double charat6673 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6674 = charat6673 >= 48.0000000000;
    double charat6675 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6676 = charat6675 <= 57.0000000000;
    double binop6677 = binop6674 && binop6676;
    double binop6678 = binop6672 && binop6677;
    double binop6679 = pos < src_len;
    double charat6680 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6681 = charat6680 == 43.0000000000;
    double binop6682 = binop6679 && binop6681;
    double binop6683 = pos < src_len;
    double charat6684 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6685 = charat6684 == 42.0000000000;
    double binop6686 = binop6683 && binop6685;
    if (binop6678) {
        cases6671 = TOK_NUMBER;
    } else if (binop6682) {
        cases6671 = TOK_PLUS;
    } else if (binop6686) {
        cases6671 = TOK_MUL;
    } else if (1.0000000000) {
        cases6671 = 0.0000000000;
    } else { cases6671 = 0.0; }
    double binop6687 = 114.0000000000 - 1.0000000000;
    double binop6688 = binop6687 * 0.0000000000;
    double cases6689;
    double binop6690 = pos < src_len;
    if (binop6690) {
        cases6689 = pos;
    } else if (1.0000000000) {
        cases6689 = 0.0000000000;
    } else { cases6689 = 0.0; }
    double binop6691 = 114.0000000000 - 1.0000000000;
    double binop6692 = binop6691 * 0.0000000000;
    double cases6693;
    double binop6694 = pos < src_len;
    double charat6695 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6696 = charat6695 >= 48.0000000000;
    double charat6697 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6698 = charat6697 <= 57.0000000000;
    double binop6699 = binop6696 && binop6698;
    double binop6700 = binop6694 && binop6699;
    double binop6701 = pos < src_len;
    double charat6702 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6703 = charat6702 == 43.0000000000;
    double charat6704 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6705 = charat6704 == 42.0000000000;
    double binop6706 = binop6703 || binop6705;
    double binop6707 = binop6701 && binop6706;
    if (binop6700) {
    double binop6708 = pos + 2.0000000000;
        cases6693 = binop6708;
    } else if (binop6707) {
    double binop6709 = pos + 1.0000000000;
        cases6693 = binop6709;
    } else if (1.0000000000) {
        cases6693 = 0.0000000000;
    } else { cases6693 = 0.0; }
    double cases6710;
    double binop6711 = pos < src_len;
    double charat6712 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6713 = charat6712 >= 48.0000000000;
    double charat6714 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6715 = charat6714 <= 57.0000000000;
    double binop6716 = binop6713 && binop6715;
    double binop6717 = binop6711 && binop6716;
    double binop6718 = pos < src_len;
    double charat6719 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6720 = charat6719 == 43.0000000000;
    double charat6721 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6722 = charat6721 == 42.0000000000;
    double binop6723 = binop6720 || binop6722;
    double binop6724 = binop6718 && binop6723;
    if (binop6717) {
    double binop6725 = pos + 3.0000000000;
        cases6710 = binop6725;
    } else if (binop6724) {
    double binop6726 = pos + 2.0000000000;
        cases6710 = binop6726;
    } else if (1.0000000000) {
    double binop6727 = src_len + 1.0000000000;
        cases6710 = binop6727;
    } else { cases6710 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6692] = 0.0000000000;
    tokens[(int)binop6688] = 0.0000000000;
    tokens[(int)binop6670] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6728 = 115.0000000000 - 1.0000000000;
    double binop6729 = binop6728 * 3.0000000000;
    double cases6730;
    double binop6731 = pos < src_len;
    double charat6732 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6733 = charat6732 >= 48.0000000000;
    double charat6734 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6735 = charat6734 <= 57.0000000000;
    double binop6736 = binop6733 && binop6735;
    double binop6737 = binop6731 && binop6736;
    double binop6738 = pos < src_len;
    double charat6739 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6740 = charat6739 == 43.0000000000;
    double binop6741 = binop6738 && binop6740;
    double binop6742 = pos < src_len;
    double charat6743 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6744 = charat6743 == 42.0000000000;
    double binop6745 = binop6742 && binop6744;
    if (binop6737) {
        cases6730 = TOK_NUMBER;
    } else if (binop6741) {
        cases6730 = TOK_PLUS;
    } else if (binop6745) {
        cases6730 = TOK_MUL;
    } else if (1.0000000000) {
        cases6730 = 0.0000000000;
    } else { cases6730 = 0.0; }
    double binop6746 = 115.0000000000 - 1.0000000000;
    double binop6747 = binop6746 * 0.0000000000;
    double cases6748;
    double binop6749 = pos < src_len;
    if (binop6749) {
        cases6748 = pos;
    } else if (1.0000000000) {
        cases6748 = 0.0000000000;
    } else { cases6748 = 0.0; }
    double binop6750 = 115.0000000000 - 1.0000000000;
    double binop6751 = binop6750 * 0.0000000000;
    double cases6752;
    double binop6753 = pos < src_len;
    double charat6754 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6755 = charat6754 >= 48.0000000000;
    double charat6756 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6757 = charat6756 <= 57.0000000000;
    double binop6758 = binop6755 && binop6757;
    double binop6759 = binop6753 && binop6758;
    double binop6760 = pos < src_len;
    double charat6761 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6762 = charat6761 == 43.0000000000;
    double charat6763 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6764 = charat6763 == 42.0000000000;
    double binop6765 = binop6762 || binop6764;
    double binop6766 = binop6760 && binop6765;
    if (binop6759) {
    double binop6767 = pos + 2.0000000000;
        cases6752 = binop6767;
    } else if (binop6766) {
    double binop6768 = pos + 1.0000000000;
        cases6752 = binop6768;
    } else if (1.0000000000) {
        cases6752 = 0.0000000000;
    } else { cases6752 = 0.0; }
    double cases6769;
    double binop6770 = pos < src_len;
    double charat6771 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6772 = charat6771 >= 48.0000000000;
    double charat6773 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6774 = charat6773 <= 57.0000000000;
    double binop6775 = binop6772 && binop6774;
    double binop6776 = binop6770 && binop6775;
    double binop6777 = pos < src_len;
    double charat6778 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6779 = charat6778 == 43.0000000000;
    double charat6780 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6781 = charat6780 == 42.0000000000;
    double binop6782 = binop6779 || binop6781;
    double binop6783 = binop6777 && binop6782;
    if (binop6776) {
    double binop6784 = pos + 3.0000000000;
        cases6769 = binop6784;
    } else if (binop6783) {
    double binop6785 = pos + 2.0000000000;
        cases6769 = binop6785;
    } else if (1.0000000000) {
    double binop6786 = src_len + 1.0000000000;
        cases6769 = binop6786;
    } else { cases6769 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6751] = 0.0000000000;
    tokens[(int)binop6747] = 0.0000000000;
    tokens[(int)binop6729] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6787 = 116.0000000000 - 1.0000000000;
    double binop6788 = binop6787 * 3.0000000000;
    double cases6789;
    double binop6790 = pos < src_len;
    double charat6791 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6792 = charat6791 >= 48.0000000000;
    double charat6793 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6794 = charat6793 <= 57.0000000000;
    double binop6795 = binop6792 && binop6794;
    double binop6796 = binop6790 && binop6795;
    double binop6797 = pos < src_len;
    double charat6798 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6799 = charat6798 == 43.0000000000;
    double binop6800 = binop6797 && binop6799;
    double binop6801 = pos < src_len;
    double charat6802 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6803 = charat6802 == 42.0000000000;
    double binop6804 = binop6801 && binop6803;
    if (binop6796) {
        cases6789 = TOK_NUMBER;
    } else if (binop6800) {
        cases6789 = TOK_PLUS;
    } else if (binop6804) {
        cases6789 = TOK_MUL;
    } else if (1.0000000000) {
        cases6789 = 0.0000000000;
    } else { cases6789 = 0.0; }
    double binop6805 = 116.0000000000 - 1.0000000000;
    double binop6806 = binop6805 * 0.0000000000;
    double cases6807;
    double binop6808 = pos < src_len;
    if (binop6808) {
        cases6807 = pos;
    } else if (1.0000000000) {
        cases6807 = 0.0000000000;
    } else { cases6807 = 0.0; }
    double binop6809 = 116.0000000000 - 1.0000000000;
    double binop6810 = binop6809 * 0.0000000000;
    double cases6811;
    double binop6812 = pos < src_len;
    double charat6813 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6814 = charat6813 >= 48.0000000000;
    double charat6815 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6816 = charat6815 <= 57.0000000000;
    double binop6817 = binop6814 && binop6816;
    double binop6818 = binop6812 && binop6817;
    double binop6819 = pos < src_len;
    double charat6820 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6821 = charat6820 == 43.0000000000;
    double charat6822 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6823 = charat6822 == 42.0000000000;
    double binop6824 = binop6821 || binop6823;
    double binop6825 = binop6819 && binop6824;
    if (binop6818) {
    double binop6826 = pos + 2.0000000000;
        cases6811 = binop6826;
    } else if (binop6825) {
    double binop6827 = pos + 1.0000000000;
        cases6811 = binop6827;
    } else if (1.0000000000) {
        cases6811 = 0.0000000000;
    } else { cases6811 = 0.0; }
    double cases6828;
    double binop6829 = pos < src_len;
    double charat6830 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6831 = charat6830 >= 48.0000000000;
    double charat6832 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6833 = charat6832 <= 57.0000000000;
    double binop6834 = binop6831 && binop6833;
    double binop6835 = binop6829 && binop6834;
    double binop6836 = pos < src_len;
    double charat6837 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6838 = charat6837 == 43.0000000000;
    double charat6839 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6840 = charat6839 == 42.0000000000;
    double binop6841 = binop6838 || binop6840;
    double binop6842 = binop6836 && binop6841;
    if (binop6835) {
    double binop6843 = pos + 3.0000000000;
        cases6828 = binop6843;
    } else if (binop6842) {
    double binop6844 = pos + 2.0000000000;
        cases6828 = binop6844;
    } else if (1.0000000000) {
    double binop6845 = src_len + 1.0000000000;
        cases6828 = binop6845;
    } else { cases6828 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6810] = 0.0000000000;
    tokens[(int)binop6806] = 0.0000000000;
    tokens[(int)binop6788] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6846 = 117.0000000000 - 1.0000000000;
    double binop6847 = binop6846 * 3.0000000000;
    double cases6848;
    double binop6849 = pos < src_len;
    double charat6850 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6851 = charat6850 >= 48.0000000000;
    double charat6852 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6853 = charat6852 <= 57.0000000000;
    double binop6854 = binop6851 && binop6853;
    double binop6855 = binop6849 && binop6854;
    double binop6856 = pos < src_len;
    double charat6857 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6858 = charat6857 == 43.0000000000;
    double binop6859 = binop6856 && binop6858;
    double binop6860 = pos < src_len;
    double charat6861 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6862 = charat6861 == 42.0000000000;
    double binop6863 = binop6860 && binop6862;
    if (binop6855) {
        cases6848 = TOK_NUMBER;
    } else if (binop6859) {
        cases6848 = TOK_PLUS;
    } else if (binop6863) {
        cases6848 = TOK_MUL;
    } else if (1.0000000000) {
        cases6848 = 0.0000000000;
    } else { cases6848 = 0.0; }
    double binop6864 = 117.0000000000 - 1.0000000000;
    double binop6865 = binop6864 * 0.0000000000;
    double cases6866;
    double binop6867 = pos < src_len;
    if (binop6867) {
        cases6866 = pos;
    } else if (1.0000000000) {
        cases6866 = 0.0000000000;
    } else { cases6866 = 0.0; }
    double binop6868 = 117.0000000000 - 1.0000000000;
    double binop6869 = binop6868 * 0.0000000000;
    double cases6870;
    double binop6871 = pos < src_len;
    double charat6872 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6873 = charat6872 >= 48.0000000000;
    double charat6874 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6875 = charat6874 <= 57.0000000000;
    double binop6876 = binop6873 && binop6875;
    double binop6877 = binop6871 && binop6876;
    double binop6878 = pos < src_len;
    double charat6879 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6880 = charat6879 == 43.0000000000;
    double charat6881 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6882 = charat6881 == 42.0000000000;
    double binop6883 = binop6880 || binop6882;
    double binop6884 = binop6878 && binop6883;
    if (binop6877) {
    double binop6885 = pos + 2.0000000000;
        cases6870 = binop6885;
    } else if (binop6884) {
    double binop6886 = pos + 1.0000000000;
        cases6870 = binop6886;
    } else if (1.0000000000) {
        cases6870 = 0.0000000000;
    } else { cases6870 = 0.0; }
    double cases6887;
    double binop6888 = pos < src_len;
    double charat6889 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6890 = charat6889 >= 48.0000000000;
    double charat6891 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6892 = charat6891 <= 57.0000000000;
    double binop6893 = binop6890 && binop6892;
    double binop6894 = binop6888 && binop6893;
    double binop6895 = pos < src_len;
    double charat6896 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6897 = charat6896 == 43.0000000000;
    double charat6898 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6899 = charat6898 == 42.0000000000;
    double binop6900 = binop6897 || binop6899;
    double binop6901 = binop6895 && binop6900;
    if (binop6894) {
    double binop6902 = pos + 3.0000000000;
        cases6887 = binop6902;
    } else if (binop6901) {
    double binop6903 = pos + 2.0000000000;
        cases6887 = binop6903;
    } else if (1.0000000000) {
    double binop6904 = src_len + 1.0000000000;
        cases6887 = binop6904;
    } else { cases6887 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6869] = 0.0000000000;
    tokens[(int)binop6865] = 0.0000000000;
    tokens[(int)binop6847] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6905 = 118.0000000000 - 1.0000000000;
    double binop6906 = binop6905 * 3.0000000000;
    double cases6907;
    double binop6908 = pos < src_len;
    double charat6909 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6910 = charat6909 >= 48.0000000000;
    double charat6911 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6912 = charat6911 <= 57.0000000000;
    double binop6913 = binop6910 && binop6912;
    double binop6914 = binop6908 && binop6913;
    double binop6915 = pos < src_len;
    double charat6916 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6917 = charat6916 == 43.0000000000;
    double binop6918 = binop6915 && binop6917;
    double binop6919 = pos < src_len;
    double charat6920 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6921 = charat6920 == 42.0000000000;
    double binop6922 = binop6919 && binop6921;
    if (binop6914) {
        cases6907 = TOK_NUMBER;
    } else if (binop6918) {
        cases6907 = TOK_PLUS;
    } else if (binop6922) {
        cases6907 = TOK_MUL;
    } else if (1.0000000000) {
        cases6907 = 0.0000000000;
    } else { cases6907 = 0.0; }
    double binop6923 = 118.0000000000 - 1.0000000000;
    double binop6924 = binop6923 * 0.0000000000;
    double cases6925;
    double binop6926 = pos < src_len;
    if (binop6926) {
        cases6925 = pos;
    } else if (1.0000000000) {
        cases6925 = 0.0000000000;
    } else { cases6925 = 0.0; }
    double binop6927 = 118.0000000000 - 1.0000000000;
    double binop6928 = binop6927 * 0.0000000000;
    double cases6929;
    double binop6930 = pos < src_len;
    double charat6931 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6932 = charat6931 >= 48.0000000000;
    double charat6933 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6934 = charat6933 <= 57.0000000000;
    double binop6935 = binop6932 && binop6934;
    double binop6936 = binop6930 && binop6935;
    double binop6937 = pos < src_len;
    double charat6938 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6939 = charat6938 == 43.0000000000;
    double charat6940 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6941 = charat6940 == 42.0000000000;
    double binop6942 = binop6939 || binop6941;
    double binop6943 = binop6937 && binop6942;
    if (binop6936) {
    double binop6944 = pos + 2.0000000000;
        cases6929 = binop6944;
    } else if (binop6943) {
    double binop6945 = pos + 1.0000000000;
        cases6929 = binop6945;
    } else if (1.0000000000) {
        cases6929 = 0.0000000000;
    } else { cases6929 = 0.0; }
    double cases6946;
    double binop6947 = pos < src_len;
    double charat6948 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6949 = charat6948 >= 48.0000000000;
    double charat6950 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6951 = charat6950 <= 57.0000000000;
    double binop6952 = binop6949 && binop6951;
    double binop6953 = binop6947 && binop6952;
    double binop6954 = pos < src_len;
    double charat6955 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6956 = charat6955 == 43.0000000000;
    double charat6957 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6958 = charat6957 == 42.0000000000;
    double binop6959 = binop6956 || binop6958;
    double binop6960 = binop6954 && binop6959;
    if (binop6953) {
    double binop6961 = pos + 3.0000000000;
        cases6946 = binop6961;
    } else if (binop6960) {
    double binop6962 = pos + 2.0000000000;
        cases6946 = binop6962;
    } else if (1.0000000000) {
    double binop6963 = src_len + 1.0000000000;
        cases6946 = binop6963;
    } else { cases6946 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6928] = 0.0000000000;
    tokens[(int)binop6924] = 0.0000000000;
    tokens[(int)binop6906] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop6964 = 119.0000000000 - 1.0000000000;
    double binop6965 = binop6964 * 3.0000000000;
    double cases6966;
    double binop6967 = pos < src_len;
    double charat6968 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6969 = charat6968 >= 48.0000000000;
    double charat6970 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6971 = charat6970 <= 57.0000000000;
    double binop6972 = binop6969 && binop6971;
    double binop6973 = binop6967 && binop6972;
    double binop6974 = pos < src_len;
    double charat6975 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6976 = charat6975 == 43.0000000000;
    double binop6977 = binop6974 && binop6976;
    double binop6978 = pos < src_len;
    double charat6979 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6980 = charat6979 == 42.0000000000;
    double binop6981 = binop6978 && binop6980;
    if (binop6973) {
        cases6966 = TOK_NUMBER;
    } else if (binop6977) {
        cases6966 = TOK_PLUS;
    } else if (binop6981) {
        cases6966 = TOK_MUL;
    } else if (1.0000000000) {
        cases6966 = 0.0000000000;
    } else { cases6966 = 0.0; }
    double binop6982 = 119.0000000000 - 1.0000000000;
    double binop6983 = binop6982 * 0.0000000000;
    double cases6984;
    double binop6985 = pos < src_len;
    if (binop6985) {
        cases6984 = pos;
    } else if (1.0000000000) {
        cases6984 = 0.0000000000;
    } else { cases6984 = 0.0; }
    double binop6986 = 119.0000000000 - 1.0000000000;
    double binop6987 = binop6986 * 0.0000000000;
    double cases6988;
    double binop6989 = pos < src_len;
    double charat6990 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6991 = charat6990 >= 48.0000000000;
    double charat6992 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6993 = charat6992 <= 57.0000000000;
    double binop6994 = binop6991 && binop6993;
    double binop6995 = binop6989 && binop6994;
    double binop6996 = pos < src_len;
    double charat6997 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop6998 = charat6997 == 43.0000000000;
    double charat6999 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7000 = charat6999 == 42.0000000000;
    double binop7001 = binop6998 || binop7000;
    double binop7002 = binop6996 && binop7001;
    if (binop6995) {
    double binop7003 = pos + 2.0000000000;
        cases6988 = binop7003;
    } else if (binop7002) {
    double binop7004 = pos + 1.0000000000;
        cases6988 = binop7004;
    } else if (1.0000000000) {
        cases6988 = 0.0000000000;
    } else { cases6988 = 0.0; }
    double cases7005;
    double binop7006 = pos < src_len;
    double charat7007 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7008 = charat7007 >= 48.0000000000;
    double charat7009 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7010 = charat7009 <= 57.0000000000;
    double binop7011 = binop7008 && binop7010;
    double binop7012 = binop7006 && binop7011;
    double binop7013 = pos < src_len;
    double charat7014 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7015 = charat7014 == 43.0000000000;
    double charat7016 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7017 = charat7016 == 42.0000000000;
    double binop7018 = binop7015 || binop7017;
    double binop7019 = binop7013 && binop7018;
    if (binop7012) {
    double binop7020 = pos + 3.0000000000;
        cases7005 = binop7020;
    } else if (binop7019) {
    double binop7021 = pos + 2.0000000000;
        cases7005 = binop7021;
    } else if (1.0000000000) {
    double binop7022 = src_len + 1.0000000000;
        cases7005 = binop7022;
    } else { cases7005 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop6987] = 0.0000000000;
    tokens[(int)binop6983] = 0.0000000000;
    tokens[(int)binop6965] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7023 = 120.0000000000 - 1.0000000000;
    double binop7024 = binop7023 * 3.0000000000;
    double cases7025;
    double binop7026 = pos < src_len;
    double charat7027 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7028 = charat7027 >= 48.0000000000;
    double charat7029 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7030 = charat7029 <= 57.0000000000;
    double binop7031 = binop7028 && binop7030;
    double binop7032 = binop7026 && binop7031;
    double binop7033 = pos < src_len;
    double charat7034 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7035 = charat7034 == 43.0000000000;
    double binop7036 = binop7033 && binop7035;
    double binop7037 = pos < src_len;
    double charat7038 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7039 = charat7038 == 42.0000000000;
    double binop7040 = binop7037 && binop7039;
    if (binop7032) {
        cases7025 = TOK_NUMBER;
    } else if (binop7036) {
        cases7025 = TOK_PLUS;
    } else if (binop7040) {
        cases7025 = TOK_MUL;
    } else if (1.0000000000) {
        cases7025 = 0.0000000000;
    } else { cases7025 = 0.0; }
    double binop7041 = 120.0000000000 - 1.0000000000;
    double binop7042 = binop7041 * 0.0000000000;
    double cases7043;
    double binop7044 = pos < src_len;
    if (binop7044) {
        cases7043 = pos;
    } else if (1.0000000000) {
        cases7043 = 0.0000000000;
    } else { cases7043 = 0.0; }
    double binop7045 = 120.0000000000 - 1.0000000000;
    double binop7046 = binop7045 * 0.0000000000;
    double cases7047;
    double binop7048 = pos < src_len;
    double charat7049 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7050 = charat7049 >= 48.0000000000;
    double charat7051 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7052 = charat7051 <= 57.0000000000;
    double binop7053 = binop7050 && binop7052;
    double binop7054 = binop7048 && binop7053;
    double binop7055 = pos < src_len;
    double charat7056 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7057 = charat7056 == 43.0000000000;
    double charat7058 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7059 = charat7058 == 42.0000000000;
    double binop7060 = binop7057 || binop7059;
    double binop7061 = binop7055 && binop7060;
    if (binop7054) {
    double binop7062 = pos + 2.0000000000;
        cases7047 = binop7062;
    } else if (binop7061) {
    double binop7063 = pos + 1.0000000000;
        cases7047 = binop7063;
    } else if (1.0000000000) {
        cases7047 = 0.0000000000;
    } else { cases7047 = 0.0; }
    double cases7064;
    double binop7065 = pos < src_len;
    double charat7066 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7067 = charat7066 >= 48.0000000000;
    double charat7068 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7069 = charat7068 <= 57.0000000000;
    double binop7070 = binop7067 && binop7069;
    double binop7071 = binop7065 && binop7070;
    double binop7072 = pos < src_len;
    double charat7073 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7074 = charat7073 == 43.0000000000;
    double charat7075 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7076 = charat7075 == 42.0000000000;
    double binop7077 = binop7074 || binop7076;
    double binop7078 = binop7072 && binop7077;
    if (binop7071) {
    double binop7079 = pos + 3.0000000000;
        cases7064 = binop7079;
    } else if (binop7078) {
    double binop7080 = pos + 2.0000000000;
        cases7064 = binop7080;
    } else if (1.0000000000) {
    double binop7081 = src_len + 1.0000000000;
        cases7064 = binop7081;
    } else { cases7064 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7046] = 0.0000000000;
    tokens[(int)binop7042] = 0.0000000000;
    tokens[(int)binop7024] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7082 = 121.0000000000 - 1.0000000000;
    double binop7083 = binop7082 * 3.0000000000;
    double cases7084;
    double binop7085 = pos < src_len;
    double charat7086 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7087 = charat7086 >= 48.0000000000;
    double charat7088 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7089 = charat7088 <= 57.0000000000;
    double binop7090 = binop7087 && binop7089;
    double binop7091 = binop7085 && binop7090;
    double binop7092 = pos < src_len;
    double charat7093 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7094 = charat7093 == 43.0000000000;
    double binop7095 = binop7092 && binop7094;
    double binop7096 = pos < src_len;
    double charat7097 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7098 = charat7097 == 42.0000000000;
    double binop7099 = binop7096 && binop7098;
    if (binop7091) {
        cases7084 = TOK_NUMBER;
    } else if (binop7095) {
        cases7084 = TOK_PLUS;
    } else if (binop7099) {
        cases7084 = TOK_MUL;
    } else if (1.0000000000) {
        cases7084 = 0.0000000000;
    } else { cases7084 = 0.0; }
    double binop7100 = 121.0000000000 - 1.0000000000;
    double binop7101 = binop7100 * 0.0000000000;
    double cases7102;
    double binop7103 = pos < src_len;
    if (binop7103) {
        cases7102 = pos;
    } else if (1.0000000000) {
        cases7102 = 0.0000000000;
    } else { cases7102 = 0.0; }
    double binop7104 = 121.0000000000 - 1.0000000000;
    double binop7105 = binop7104 * 0.0000000000;
    double cases7106;
    double binop7107 = pos < src_len;
    double charat7108 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7109 = charat7108 >= 48.0000000000;
    double charat7110 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7111 = charat7110 <= 57.0000000000;
    double binop7112 = binop7109 && binop7111;
    double binop7113 = binop7107 && binop7112;
    double binop7114 = pos < src_len;
    double charat7115 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7116 = charat7115 == 43.0000000000;
    double charat7117 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7118 = charat7117 == 42.0000000000;
    double binop7119 = binop7116 || binop7118;
    double binop7120 = binop7114 && binop7119;
    if (binop7113) {
    double binop7121 = pos + 2.0000000000;
        cases7106 = binop7121;
    } else if (binop7120) {
    double binop7122 = pos + 1.0000000000;
        cases7106 = binop7122;
    } else if (1.0000000000) {
        cases7106 = 0.0000000000;
    } else { cases7106 = 0.0; }
    double cases7123;
    double binop7124 = pos < src_len;
    double charat7125 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7126 = charat7125 >= 48.0000000000;
    double charat7127 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7128 = charat7127 <= 57.0000000000;
    double binop7129 = binop7126 && binop7128;
    double binop7130 = binop7124 && binop7129;
    double binop7131 = pos < src_len;
    double charat7132 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7133 = charat7132 == 43.0000000000;
    double charat7134 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7135 = charat7134 == 42.0000000000;
    double binop7136 = binop7133 || binop7135;
    double binop7137 = binop7131 && binop7136;
    if (binop7130) {
    double binop7138 = pos + 3.0000000000;
        cases7123 = binop7138;
    } else if (binop7137) {
    double binop7139 = pos + 2.0000000000;
        cases7123 = binop7139;
    } else if (1.0000000000) {
    double binop7140 = src_len + 1.0000000000;
        cases7123 = binop7140;
    } else { cases7123 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7105] = 0.0000000000;
    tokens[(int)binop7101] = 0.0000000000;
    tokens[(int)binop7083] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7141 = 122.0000000000 - 1.0000000000;
    double binop7142 = binop7141 * 3.0000000000;
    double cases7143;
    double binop7144 = pos < src_len;
    double charat7145 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7146 = charat7145 >= 48.0000000000;
    double charat7147 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7148 = charat7147 <= 57.0000000000;
    double binop7149 = binop7146 && binop7148;
    double binop7150 = binop7144 && binop7149;
    double binop7151 = pos < src_len;
    double charat7152 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7153 = charat7152 == 43.0000000000;
    double binop7154 = binop7151 && binop7153;
    double binop7155 = pos < src_len;
    double charat7156 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7157 = charat7156 == 42.0000000000;
    double binop7158 = binop7155 && binop7157;
    if (binop7150) {
        cases7143 = TOK_NUMBER;
    } else if (binop7154) {
        cases7143 = TOK_PLUS;
    } else if (binop7158) {
        cases7143 = TOK_MUL;
    } else if (1.0000000000) {
        cases7143 = 0.0000000000;
    } else { cases7143 = 0.0; }
    double binop7159 = 122.0000000000 - 1.0000000000;
    double binop7160 = binop7159 * 0.0000000000;
    double cases7161;
    double binop7162 = pos < src_len;
    if (binop7162) {
        cases7161 = pos;
    } else if (1.0000000000) {
        cases7161 = 0.0000000000;
    } else { cases7161 = 0.0; }
    double binop7163 = 122.0000000000 - 1.0000000000;
    double binop7164 = binop7163 * 0.0000000000;
    double cases7165;
    double binop7166 = pos < src_len;
    double charat7167 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7168 = charat7167 >= 48.0000000000;
    double charat7169 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7170 = charat7169 <= 57.0000000000;
    double binop7171 = binop7168 && binop7170;
    double binop7172 = binop7166 && binop7171;
    double binop7173 = pos < src_len;
    double charat7174 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7175 = charat7174 == 43.0000000000;
    double charat7176 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7177 = charat7176 == 42.0000000000;
    double binop7178 = binop7175 || binop7177;
    double binop7179 = binop7173 && binop7178;
    if (binop7172) {
    double binop7180 = pos + 2.0000000000;
        cases7165 = binop7180;
    } else if (binop7179) {
    double binop7181 = pos + 1.0000000000;
        cases7165 = binop7181;
    } else if (1.0000000000) {
        cases7165 = 0.0000000000;
    } else { cases7165 = 0.0; }
    double cases7182;
    double binop7183 = pos < src_len;
    double charat7184 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7185 = charat7184 >= 48.0000000000;
    double charat7186 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7187 = charat7186 <= 57.0000000000;
    double binop7188 = binop7185 && binop7187;
    double binop7189 = binop7183 && binop7188;
    double binop7190 = pos < src_len;
    double charat7191 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7192 = charat7191 == 43.0000000000;
    double charat7193 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7194 = charat7193 == 42.0000000000;
    double binop7195 = binop7192 || binop7194;
    double binop7196 = binop7190 && binop7195;
    if (binop7189) {
    double binop7197 = pos + 3.0000000000;
        cases7182 = binop7197;
    } else if (binop7196) {
    double binop7198 = pos + 2.0000000000;
        cases7182 = binop7198;
    } else if (1.0000000000) {
    double binop7199 = src_len + 1.0000000000;
        cases7182 = binop7199;
    } else { cases7182 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7164] = 0.0000000000;
    tokens[(int)binop7160] = 0.0000000000;
    tokens[(int)binop7142] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7200 = 123.0000000000 - 1.0000000000;
    double binop7201 = binop7200 * 3.0000000000;
    double cases7202;
    double binop7203 = pos < src_len;
    double charat7204 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7205 = charat7204 >= 48.0000000000;
    double charat7206 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7207 = charat7206 <= 57.0000000000;
    double binop7208 = binop7205 && binop7207;
    double binop7209 = binop7203 && binop7208;
    double binop7210 = pos < src_len;
    double charat7211 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7212 = charat7211 == 43.0000000000;
    double binop7213 = binop7210 && binop7212;
    double binop7214 = pos < src_len;
    double charat7215 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7216 = charat7215 == 42.0000000000;
    double binop7217 = binop7214 && binop7216;
    if (binop7209) {
        cases7202 = TOK_NUMBER;
    } else if (binop7213) {
        cases7202 = TOK_PLUS;
    } else if (binop7217) {
        cases7202 = TOK_MUL;
    } else if (1.0000000000) {
        cases7202 = 0.0000000000;
    } else { cases7202 = 0.0; }
    double binop7218 = 123.0000000000 - 1.0000000000;
    double binop7219 = binop7218 * 0.0000000000;
    double cases7220;
    double binop7221 = pos < src_len;
    if (binop7221) {
        cases7220 = pos;
    } else if (1.0000000000) {
        cases7220 = 0.0000000000;
    } else { cases7220 = 0.0; }
    double binop7222 = 123.0000000000 - 1.0000000000;
    double binop7223 = binop7222 * 0.0000000000;
    double cases7224;
    double binop7225 = pos < src_len;
    double charat7226 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7227 = charat7226 >= 48.0000000000;
    double charat7228 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7229 = charat7228 <= 57.0000000000;
    double binop7230 = binop7227 && binop7229;
    double binop7231 = binop7225 && binop7230;
    double binop7232 = pos < src_len;
    double charat7233 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7234 = charat7233 == 43.0000000000;
    double charat7235 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7236 = charat7235 == 42.0000000000;
    double binop7237 = binop7234 || binop7236;
    double binop7238 = binop7232 && binop7237;
    if (binop7231) {
    double binop7239 = pos + 2.0000000000;
        cases7224 = binop7239;
    } else if (binop7238) {
    double binop7240 = pos + 1.0000000000;
        cases7224 = binop7240;
    } else if (1.0000000000) {
        cases7224 = 0.0000000000;
    } else { cases7224 = 0.0; }
    double cases7241;
    double binop7242 = pos < src_len;
    double charat7243 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7244 = charat7243 >= 48.0000000000;
    double charat7245 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7246 = charat7245 <= 57.0000000000;
    double binop7247 = binop7244 && binop7246;
    double binop7248 = binop7242 && binop7247;
    double binop7249 = pos < src_len;
    double charat7250 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7251 = charat7250 == 43.0000000000;
    double charat7252 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7253 = charat7252 == 42.0000000000;
    double binop7254 = binop7251 || binop7253;
    double binop7255 = binop7249 && binop7254;
    if (binop7248) {
    double binop7256 = pos + 3.0000000000;
        cases7241 = binop7256;
    } else if (binop7255) {
    double binop7257 = pos + 2.0000000000;
        cases7241 = binop7257;
    } else if (1.0000000000) {
    double binop7258 = src_len + 1.0000000000;
        cases7241 = binop7258;
    } else { cases7241 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7223] = 0.0000000000;
    tokens[(int)binop7219] = 0.0000000000;
    tokens[(int)binop7201] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7259 = 124.0000000000 - 1.0000000000;
    double binop7260 = binop7259 * 3.0000000000;
    double cases7261;
    double binop7262 = pos < src_len;
    double charat7263 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7264 = charat7263 >= 48.0000000000;
    double charat7265 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7266 = charat7265 <= 57.0000000000;
    double binop7267 = binop7264 && binop7266;
    double binop7268 = binop7262 && binop7267;
    double binop7269 = pos < src_len;
    double charat7270 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7271 = charat7270 == 43.0000000000;
    double binop7272 = binop7269 && binop7271;
    double binop7273 = pos < src_len;
    double charat7274 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7275 = charat7274 == 42.0000000000;
    double binop7276 = binop7273 && binop7275;
    if (binop7268) {
        cases7261 = TOK_NUMBER;
    } else if (binop7272) {
        cases7261 = TOK_PLUS;
    } else if (binop7276) {
        cases7261 = TOK_MUL;
    } else if (1.0000000000) {
        cases7261 = 0.0000000000;
    } else { cases7261 = 0.0; }
    double binop7277 = 124.0000000000 - 1.0000000000;
    double binop7278 = binop7277 * 0.0000000000;
    double cases7279;
    double binop7280 = pos < src_len;
    if (binop7280) {
        cases7279 = pos;
    } else if (1.0000000000) {
        cases7279 = 0.0000000000;
    } else { cases7279 = 0.0; }
    double binop7281 = 124.0000000000 - 1.0000000000;
    double binop7282 = binop7281 * 0.0000000000;
    double cases7283;
    double binop7284 = pos < src_len;
    double charat7285 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7286 = charat7285 >= 48.0000000000;
    double charat7287 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7288 = charat7287 <= 57.0000000000;
    double binop7289 = binop7286 && binop7288;
    double binop7290 = binop7284 && binop7289;
    double binop7291 = pos < src_len;
    double charat7292 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7293 = charat7292 == 43.0000000000;
    double charat7294 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7295 = charat7294 == 42.0000000000;
    double binop7296 = binop7293 || binop7295;
    double binop7297 = binop7291 && binop7296;
    if (binop7290) {
    double binop7298 = pos + 2.0000000000;
        cases7283 = binop7298;
    } else if (binop7297) {
    double binop7299 = pos + 1.0000000000;
        cases7283 = binop7299;
    } else if (1.0000000000) {
        cases7283 = 0.0000000000;
    } else { cases7283 = 0.0; }
    double cases7300;
    double binop7301 = pos < src_len;
    double charat7302 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7303 = charat7302 >= 48.0000000000;
    double charat7304 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7305 = charat7304 <= 57.0000000000;
    double binop7306 = binop7303 && binop7305;
    double binop7307 = binop7301 && binop7306;
    double binop7308 = pos < src_len;
    double charat7309 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7310 = charat7309 == 43.0000000000;
    double charat7311 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7312 = charat7311 == 42.0000000000;
    double binop7313 = binop7310 || binop7312;
    double binop7314 = binop7308 && binop7313;
    if (binop7307) {
    double binop7315 = pos + 3.0000000000;
        cases7300 = binop7315;
    } else if (binop7314) {
    double binop7316 = pos + 2.0000000000;
        cases7300 = binop7316;
    } else if (1.0000000000) {
    double binop7317 = src_len + 1.0000000000;
        cases7300 = binop7317;
    } else { cases7300 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7282] = 0.0000000000;
    tokens[(int)binop7278] = 0.0000000000;
    tokens[(int)binop7260] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7318 = 125.0000000000 - 1.0000000000;
    double binop7319 = binop7318 * 3.0000000000;
    double cases7320;
    double binop7321 = pos < src_len;
    double charat7322 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7323 = charat7322 >= 48.0000000000;
    double charat7324 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7325 = charat7324 <= 57.0000000000;
    double binop7326 = binop7323 && binop7325;
    double binop7327 = binop7321 && binop7326;
    double binop7328 = pos < src_len;
    double charat7329 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7330 = charat7329 == 43.0000000000;
    double binop7331 = binop7328 && binop7330;
    double binop7332 = pos < src_len;
    double charat7333 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7334 = charat7333 == 42.0000000000;
    double binop7335 = binop7332 && binop7334;
    if (binop7327) {
        cases7320 = TOK_NUMBER;
    } else if (binop7331) {
        cases7320 = TOK_PLUS;
    } else if (binop7335) {
        cases7320 = TOK_MUL;
    } else if (1.0000000000) {
        cases7320 = 0.0000000000;
    } else { cases7320 = 0.0; }
    double binop7336 = 125.0000000000 - 1.0000000000;
    double binop7337 = binop7336 * 0.0000000000;
    double cases7338;
    double binop7339 = pos < src_len;
    if (binop7339) {
        cases7338 = pos;
    } else if (1.0000000000) {
        cases7338 = 0.0000000000;
    } else { cases7338 = 0.0; }
    double binop7340 = 125.0000000000 - 1.0000000000;
    double binop7341 = binop7340 * 0.0000000000;
    double cases7342;
    double binop7343 = pos < src_len;
    double charat7344 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7345 = charat7344 >= 48.0000000000;
    double charat7346 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7347 = charat7346 <= 57.0000000000;
    double binop7348 = binop7345 && binop7347;
    double binop7349 = binop7343 && binop7348;
    double binop7350 = pos < src_len;
    double charat7351 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7352 = charat7351 == 43.0000000000;
    double charat7353 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7354 = charat7353 == 42.0000000000;
    double binop7355 = binop7352 || binop7354;
    double binop7356 = binop7350 && binop7355;
    if (binop7349) {
    double binop7357 = pos + 2.0000000000;
        cases7342 = binop7357;
    } else if (binop7356) {
    double binop7358 = pos + 1.0000000000;
        cases7342 = binop7358;
    } else if (1.0000000000) {
        cases7342 = 0.0000000000;
    } else { cases7342 = 0.0; }
    double cases7359;
    double binop7360 = pos < src_len;
    double charat7361 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7362 = charat7361 >= 48.0000000000;
    double charat7363 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7364 = charat7363 <= 57.0000000000;
    double binop7365 = binop7362 && binop7364;
    double binop7366 = binop7360 && binop7365;
    double binop7367 = pos < src_len;
    double charat7368 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7369 = charat7368 == 43.0000000000;
    double charat7370 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7371 = charat7370 == 42.0000000000;
    double binop7372 = binop7369 || binop7371;
    double binop7373 = binop7367 && binop7372;
    if (binop7366) {
    double binop7374 = pos + 3.0000000000;
        cases7359 = binop7374;
    } else if (binop7373) {
    double binop7375 = pos + 2.0000000000;
        cases7359 = binop7375;
    } else if (1.0000000000) {
    double binop7376 = src_len + 1.0000000000;
        cases7359 = binop7376;
    } else { cases7359 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7341] = 0.0000000000;
    tokens[(int)binop7337] = 0.0000000000;
    tokens[(int)binop7319] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7377 = 126.0000000000 - 1.0000000000;
    double binop7378 = binop7377 * 3.0000000000;
    double cases7379;
    double binop7380 = pos < src_len;
    double charat7381 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7382 = charat7381 >= 48.0000000000;
    double charat7383 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7384 = charat7383 <= 57.0000000000;
    double binop7385 = binop7382 && binop7384;
    double binop7386 = binop7380 && binop7385;
    double binop7387 = pos < src_len;
    double charat7388 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7389 = charat7388 == 43.0000000000;
    double binop7390 = binop7387 && binop7389;
    double binop7391 = pos < src_len;
    double charat7392 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7393 = charat7392 == 42.0000000000;
    double binop7394 = binop7391 && binop7393;
    if (binop7386) {
        cases7379 = TOK_NUMBER;
    } else if (binop7390) {
        cases7379 = TOK_PLUS;
    } else if (binop7394) {
        cases7379 = TOK_MUL;
    } else if (1.0000000000) {
        cases7379 = 0.0000000000;
    } else { cases7379 = 0.0; }
    double binop7395 = 126.0000000000 - 1.0000000000;
    double binop7396 = binop7395 * 0.0000000000;
    double cases7397;
    double binop7398 = pos < src_len;
    if (binop7398) {
        cases7397 = pos;
    } else if (1.0000000000) {
        cases7397 = 0.0000000000;
    } else { cases7397 = 0.0; }
    double binop7399 = 126.0000000000 - 1.0000000000;
    double binop7400 = binop7399 * 0.0000000000;
    double cases7401;
    double binop7402 = pos < src_len;
    double charat7403 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7404 = charat7403 >= 48.0000000000;
    double charat7405 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7406 = charat7405 <= 57.0000000000;
    double binop7407 = binop7404 && binop7406;
    double binop7408 = binop7402 && binop7407;
    double binop7409 = pos < src_len;
    double charat7410 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7411 = charat7410 == 43.0000000000;
    double charat7412 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7413 = charat7412 == 42.0000000000;
    double binop7414 = binop7411 || binop7413;
    double binop7415 = binop7409 && binop7414;
    if (binop7408) {
    double binop7416 = pos + 2.0000000000;
        cases7401 = binop7416;
    } else if (binop7415) {
    double binop7417 = pos + 1.0000000000;
        cases7401 = binop7417;
    } else if (1.0000000000) {
        cases7401 = 0.0000000000;
    } else { cases7401 = 0.0; }
    double cases7418;
    double binop7419 = pos < src_len;
    double charat7420 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7421 = charat7420 >= 48.0000000000;
    double charat7422 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7423 = charat7422 <= 57.0000000000;
    double binop7424 = binop7421 && binop7423;
    double binop7425 = binop7419 && binop7424;
    double binop7426 = pos < src_len;
    double charat7427 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7428 = charat7427 == 43.0000000000;
    double charat7429 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7430 = charat7429 == 42.0000000000;
    double binop7431 = binop7428 || binop7430;
    double binop7432 = binop7426 && binop7431;
    if (binop7425) {
    double binop7433 = pos + 3.0000000000;
        cases7418 = binop7433;
    } else if (binop7432) {
    double binop7434 = pos + 2.0000000000;
        cases7418 = binop7434;
    } else if (1.0000000000) {
    double binop7435 = src_len + 1.0000000000;
        cases7418 = binop7435;
    } else { cases7418 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7400] = 0.0000000000;
    tokens[(int)binop7396] = 0.0000000000;
    tokens[(int)binop7378] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7436 = 127.0000000000 - 1.0000000000;
    double binop7437 = binop7436 * 3.0000000000;
    double cases7438;
    double binop7439 = pos < src_len;
    double charat7440 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7441 = charat7440 >= 48.0000000000;
    double charat7442 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7443 = charat7442 <= 57.0000000000;
    double binop7444 = binop7441 && binop7443;
    double binop7445 = binop7439 && binop7444;
    double binop7446 = pos < src_len;
    double charat7447 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7448 = charat7447 == 43.0000000000;
    double binop7449 = binop7446 && binop7448;
    double binop7450 = pos < src_len;
    double charat7451 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7452 = charat7451 == 42.0000000000;
    double binop7453 = binop7450 && binop7452;
    if (binop7445) {
        cases7438 = TOK_NUMBER;
    } else if (binop7449) {
        cases7438 = TOK_PLUS;
    } else if (binop7453) {
        cases7438 = TOK_MUL;
    } else if (1.0000000000) {
        cases7438 = 0.0000000000;
    } else { cases7438 = 0.0; }
    double binop7454 = 127.0000000000 - 1.0000000000;
    double binop7455 = binop7454 * 0.0000000000;
    double cases7456;
    double binop7457 = pos < src_len;
    if (binop7457) {
        cases7456 = pos;
    } else if (1.0000000000) {
        cases7456 = 0.0000000000;
    } else { cases7456 = 0.0; }
    double binop7458 = 127.0000000000 - 1.0000000000;
    double binop7459 = binop7458 * 0.0000000000;
    double cases7460;
    double binop7461 = pos < src_len;
    double charat7462 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7463 = charat7462 >= 48.0000000000;
    double charat7464 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7465 = charat7464 <= 57.0000000000;
    double binop7466 = binop7463 && binop7465;
    double binop7467 = binop7461 && binop7466;
    double binop7468 = pos < src_len;
    double charat7469 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7470 = charat7469 == 43.0000000000;
    double charat7471 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7472 = charat7471 == 42.0000000000;
    double binop7473 = binop7470 || binop7472;
    double binop7474 = binop7468 && binop7473;
    if (binop7467) {
    double binop7475 = pos + 2.0000000000;
        cases7460 = binop7475;
    } else if (binop7474) {
    double binop7476 = pos + 1.0000000000;
        cases7460 = binop7476;
    } else if (1.0000000000) {
        cases7460 = 0.0000000000;
    } else { cases7460 = 0.0; }
    double cases7477;
    double binop7478 = pos < src_len;
    double charat7479 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7480 = charat7479 >= 48.0000000000;
    double charat7481 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7482 = charat7481 <= 57.0000000000;
    double binop7483 = binop7480 && binop7482;
    double binop7484 = binop7478 && binop7483;
    double binop7485 = pos < src_len;
    double charat7486 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7487 = charat7486 == 43.0000000000;
    double charat7488 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7489 = charat7488 == 42.0000000000;
    double binop7490 = binop7487 || binop7489;
    double binop7491 = binop7485 && binop7490;
    if (binop7484) {
    double binop7492 = pos + 3.0000000000;
        cases7477 = binop7492;
    } else if (binop7491) {
    double binop7493 = pos + 2.0000000000;
        cases7477 = binop7493;
    } else if (1.0000000000) {
    double binop7494 = src_len + 1.0000000000;
        cases7477 = binop7494;
    } else { cases7477 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7459] = 0.0000000000;
    tokens[(int)binop7455] = 0.0000000000;
    tokens[(int)binop7437] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7495 = 128.0000000000 - 1.0000000000;
    double binop7496 = binop7495 * 3.0000000000;
    double cases7497;
    double binop7498 = pos < src_len;
    double charat7499 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7500 = charat7499 >= 48.0000000000;
    double charat7501 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7502 = charat7501 <= 57.0000000000;
    double binop7503 = binop7500 && binop7502;
    double binop7504 = binop7498 && binop7503;
    double binop7505 = pos < src_len;
    double charat7506 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7507 = charat7506 == 43.0000000000;
    double binop7508 = binop7505 && binop7507;
    double binop7509 = pos < src_len;
    double charat7510 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7511 = charat7510 == 42.0000000000;
    double binop7512 = binop7509 && binop7511;
    if (binop7504) {
        cases7497 = TOK_NUMBER;
    } else if (binop7508) {
        cases7497 = TOK_PLUS;
    } else if (binop7512) {
        cases7497 = TOK_MUL;
    } else if (1.0000000000) {
        cases7497 = 0.0000000000;
    } else { cases7497 = 0.0; }
    double binop7513 = 128.0000000000 - 1.0000000000;
    double binop7514 = binop7513 * 0.0000000000;
    double cases7515;
    double binop7516 = pos < src_len;
    if (binop7516) {
        cases7515 = pos;
    } else if (1.0000000000) {
        cases7515 = 0.0000000000;
    } else { cases7515 = 0.0; }
    double binop7517 = 128.0000000000 - 1.0000000000;
    double binop7518 = binop7517 * 0.0000000000;
    double cases7519;
    double binop7520 = pos < src_len;
    double charat7521 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7522 = charat7521 >= 48.0000000000;
    double charat7523 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7524 = charat7523 <= 57.0000000000;
    double binop7525 = binop7522 && binop7524;
    double binop7526 = binop7520 && binop7525;
    double binop7527 = pos < src_len;
    double charat7528 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7529 = charat7528 == 43.0000000000;
    double charat7530 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7531 = charat7530 == 42.0000000000;
    double binop7532 = binop7529 || binop7531;
    double binop7533 = binop7527 && binop7532;
    if (binop7526) {
    double binop7534 = pos + 2.0000000000;
        cases7519 = binop7534;
    } else if (binop7533) {
    double binop7535 = pos + 1.0000000000;
        cases7519 = binop7535;
    } else if (1.0000000000) {
        cases7519 = 0.0000000000;
    } else { cases7519 = 0.0; }
    double cases7536;
    double binop7537 = pos < src_len;
    double charat7538 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7539 = charat7538 >= 48.0000000000;
    double charat7540 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7541 = charat7540 <= 57.0000000000;
    double binop7542 = binop7539 && binop7541;
    double binop7543 = binop7537 && binop7542;
    double binop7544 = pos < src_len;
    double charat7545 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7546 = charat7545 == 43.0000000000;
    double charat7547 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7548 = charat7547 == 42.0000000000;
    double binop7549 = binop7546 || binop7548;
    double binop7550 = binop7544 && binop7549;
    if (binop7543) {
    double binop7551 = pos + 3.0000000000;
        cases7536 = binop7551;
    } else if (binop7550) {
    double binop7552 = pos + 2.0000000000;
        cases7536 = binop7552;
    } else if (1.0000000000) {
    double binop7553 = src_len + 1.0000000000;
        cases7536 = binop7553;
    } else { cases7536 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7518] = 0.0000000000;
    tokens[(int)binop7514] = 0.0000000000;
    tokens[(int)binop7496] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7554 = 129.0000000000 - 1.0000000000;
    double binop7555 = binop7554 * 3.0000000000;
    double cases7556;
    double binop7557 = pos < src_len;
    double charat7558 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7559 = charat7558 >= 48.0000000000;
    double charat7560 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7561 = charat7560 <= 57.0000000000;
    double binop7562 = binop7559 && binop7561;
    double binop7563 = binop7557 && binop7562;
    double binop7564 = pos < src_len;
    double charat7565 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7566 = charat7565 == 43.0000000000;
    double binop7567 = binop7564 && binop7566;
    double binop7568 = pos < src_len;
    double charat7569 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7570 = charat7569 == 42.0000000000;
    double binop7571 = binop7568 && binop7570;
    if (binop7563) {
        cases7556 = TOK_NUMBER;
    } else if (binop7567) {
        cases7556 = TOK_PLUS;
    } else if (binop7571) {
        cases7556 = TOK_MUL;
    } else if (1.0000000000) {
        cases7556 = 0.0000000000;
    } else { cases7556 = 0.0; }
    double binop7572 = 129.0000000000 - 1.0000000000;
    double binop7573 = binop7572 * 0.0000000000;
    double cases7574;
    double binop7575 = pos < src_len;
    if (binop7575) {
        cases7574 = pos;
    } else if (1.0000000000) {
        cases7574 = 0.0000000000;
    } else { cases7574 = 0.0; }
    double binop7576 = 129.0000000000 - 1.0000000000;
    double binop7577 = binop7576 * 0.0000000000;
    double cases7578;
    double binop7579 = pos < src_len;
    double charat7580 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7581 = charat7580 >= 48.0000000000;
    double charat7582 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7583 = charat7582 <= 57.0000000000;
    double binop7584 = binop7581 && binop7583;
    double binop7585 = binop7579 && binop7584;
    double binop7586 = pos < src_len;
    double charat7587 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7588 = charat7587 == 43.0000000000;
    double charat7589 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7590 = charat7589 == 42.0000000000;
    double binop7591 = binop7588 || binop7590;
    double binop7592 = binop7586 && binop7591;
    if (binop7585) {
    double binop7593 = pos + 2.0000000000;
        cases7578 = binop7593;
    } else if (binop7592) {
    double binop7594 = pos + 1.0000000000;
        cases7578 = binop7594;
    } else if (1.0000000000) {
        cases7578 = 0.0000000000;
    } else { cases7578 = 0.0; }
    double cases7595;
    double binop7596 = pos < src_len;
    double charat7597 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7598 = charat7597 >= 48.0000000000;
    double charat7599 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7600 = charat7599 <= 57.0000000000;
    double binop7601 = binop7598 && binop7600;
    double binop7602 = binop7596 && binop7601;
    double binop7603 = pos < src_len;
    double charat7604 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7605 = charat7604 == 43.0000000000;
    double charat7606 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7607 = charat7606 == 42.0000000000;
    double binop7608 = binop7605 || binop7607;
    double binop7609 = binop7603 && binop7608;
    if (binop7602) {
    double binop7610 = pos + 3.0000000000;
        cases7595 = binop7610;
    } else if (binop7609) {
    double binop7611 = pos + 2.0000000000;
        cases7595 = binop7611;
    } else if (1.0000000000) {
    double binop7612 = src_len + 1.0000000000;
        cases7595 = binop7612;
    } else { cases7595 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7577] = 0.0000000000;
    tokens[(int)binop7573] = 0.0000000000;
    tokens[(int)binop7555] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7613 = 130.0000000000 - 1.0000000000;
    double binop7614 = binop7613 * 3.0000000000;
    double cases7615;
    double binop7616 = pos < src_len;
    double charat7617 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7618 = charat7617 >= 48.0000000000;
    double charat7619 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7620 = charat7619 <= 57.0000000000;
    double binop7621 = binop7618 && binop7620;
    double binop7622 = binop7616 && binop7621;
    double binop7623 = pos < src_len;
    double charat7624 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7625 = charat7624 == 43.0000000000;
    double binop7626 = binop7623 && binop7625;
    double binop7627 = pos < src_len;
    double charat7628 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7629 = charat7628 == 42.0000000000;
    double binop7630 = binop7627 && binop7629;
    if (binop7622) {
        cases7615 = TOK_NUMBER;
    } else if (binop7626) {
        cases7615 = TOK_PLUS;
    } else if (binop7630) {
        cases7615 = TOK_MUL;
    } else if (1.0000000000) {
        cases7615 = 0.0000000000;
    } else { cases7615 = 0.0; }
    double binop7631 = 130.0000000000 - 1.0000000000;
    double binop7632 = binop7631 * 0.0000000000;
    double cases7633;
    double binop7634 = pos < src_len;
    if (binop7634) {
        cases7633 = pos;
    } else if (1.0000000000) {
        cases7633 = 0.0000000000;
    } else { cases7633 = 0.0; }
    double binop7635 = 130.0000000000 - 1.0000000000;
    double binop7636 = binop7635 * 0.0000000000;
    double cases7637;
    double binop7638 = pos < src_len;
    double charat7639 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7640 = charat7639 >= 48.0000000000;
    double charat7641 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7642 = charat7641 <= 57.0000000000;
    double binop7643 = binop7640 && binop7642;
    double binop7644 = binop7638 && binop7643;
    double binop7645 = pos < src_len;
    double charat7646 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7647 = charat7646 == 43.0000000000;
    double charat7648 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7649 = charat7648 == 42.0000000000;
    double binop7650 = binop7647 || binop7649;
    double binop7651 = binop7645 && binop7650;
    if (binop7644) {
    double binop7652 = pos + 2.0000000000;
        cases7637 = binop7652;
    } else if (binop7651) {
    double binop7653 = pos + 1.0000000000;
        cases7637 = binop7653;
    } else if (1.0000000000) {
        cases7637 = 0.0000000000;
    } else { cases7637 = 0.0; }
    double cases7654;
    double binop7655 = pos < src_len;
    double charat7656 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7657 = charat7656 >= 48.0000000000;
    double charat7658 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7659 = charat7658 <= 57.0000000000;
    double binop7660 = binop7657 && binop7659;
    double binop7661 = binop7655 && binop7660;
    double binop7662 = pos < src_len;
    double charat7663 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7664 = charat7663 == 43.0000000000;
    double charat7665 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7666 = charat7665 == 42.0000000000;
    double binop7667 = binop7664 || binop7666;
    double binop7668 = binop7662 && binop7667;
    if (binop7661) {
    double binop7669 = pos + 3.0000000000;
        cases7654 = binop7669;
    } else if (binop7668) {
    double binop7670 = pos + 2.0000000000;
        cases7654 = binop7670;
    } else if (1.0000000000) {
    double binop7671 = src_len + 1.0000000000;
        cases7654 = binop7671;
    } else { cases7654 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7636] = 0.0000000000;
    tokens[(int)binop7632] = 0.0000000000;
    tokens[(int)binop7614] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7672 = 131.0000000000 - 1.0000000000;
    double binop7673 = binop7672 * 3.0000000000;
    double cases7674;
    double binop7675 = pos < src_len;
    double charat7676 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7677 = charat7676 >= 48.0000000000;
    double charat7678 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7679 = charat7678 <= 57.0000000000;
    double binop7680 = binop7677 && binop7679;
    double binop7681 = binop7675 && binop7680;
    double binop7682 = pos < src_len;
    double charat7683 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7684 = charat7683 == 43.0000000000;
    double binop7685 = binop7682 && binop7684;
    double binop7686 = pos < src_len;
    double charat7687 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7688 = charat7687 == 42.0000000000;
    double binop7689 = binop7686 && binop7688;
    if (binop7681) {
        cases7674 = TOK_NUMBER;
    } else if (binop7685) {
        cases7674 = TOK_PLUS;
    } else if (binop7689) {
        cases7674 = TOK_MUL;
    } else if (1.0000000000) {
        cases7674 = 0.0000000000;
    } else { cases7674 = 0.0; }
    double binop7690 = 131.0000000000 - 1.0000000000;
    double binop7691 = binop7690 * 0.0000000000;
    double cases7692;
    double binop7693 = pos < src_len;
    if (binop7693) {
        cases7692 = pos;
    } else if (1.0000000000) {
        cases7692 = 0.0000000000;
    } else { cases7692 = 0.0; }
    double binop7694 = 131.0000000000 - 1.0000000000;
    double binop7695 = binop7694 * 0.0000000000;
    double cases7696;
    double binop7697 = pos < src_len;
    double charat7698 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7699 = charat7698 >= 48.0000000000;
    double charat7700 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7701 = charat7700 <= 57.0000000000;
    double binop7702 = binop7699 && binop7701;
    double binop7703 = binop7697 && binop7702;
    double binop7704 = pos < src_len;
    double charat7705 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7706 = charat7705 == 43.0000000000;
    double charat7707 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7708 = charat7707 == 42.0000000000;
    double binop7709 = binop7706 || binop7708;
    double binop7710 = binop7704 && binop7709;
    if (binop7703) {
    double binop7711 = pos + 2.0000000000;
        cases7696 = binop7711;
    } else if (binop7710) {
    double binop7712 = pos + 1.0000000000;
        cases7696 = binop7712;
    } else if (1.0000000000) {
        cases7696 = 0.0000000000;
    } else { cases7696 = 0.0; }
    double cases7713;
    double binop7714 = pos < src_len;
    double charat7715 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7716 = charat7715 >= 48.0000000000;
    double charat7717 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7718 = charat7717 <= 57.0000000000;
    double binop7719 = binop7716 && binop7718;
    double binop7720 = binop7714 && binop7719;
    double binop7721 = pos < src_len;
    double charat7722 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7723 = charat7722 == 43.0000000000;
    double charat7724 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7725 = charat7724 == 42.0000000000;
    double binop7726 = binop7723 || binop7725;
    double binop7727 = binop7721 && binop7726;
    if (binop7720) {
    double binop7728 = pos + 3.0000000000;
        cases7713 = binop7728;
    } else if (binop7727) {
    double binop7729 = pos + 2.0000000000;
        cases7713 = binop7729;
    } else if (1.0000000000) {
    double binop7730 = src_len + 1.0000000000;
        cases7713 = binop7730;
    } else { cases7713 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7695] = 0.0000000000;
    tokens[(int)binop7691] = 0.0000000000;
    tokens[(int)binop7673] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7731 = 132.0000000000 - 1.0000000000;
    double binop7732 = binop7731 * 3.0000000000;
    double cases7733;
    double binop7734 = pos < src_len;
    double charat7735 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7736 = charat7735 >= 48.0000000000;
    double charat7737 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7738 = charat7737 <= 57.0000000000;
    double binop7739 = binop7736 && binop7738;
    double binop7740 = binop7734 && binop7739;
    double binop7741 = pos < src_len;
    double charat7742 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7743 = charat7742 == 43.0000000000;
    double binop7744 = binop7741 && binop7743;
    double binop7745 = pos < src_len;
    double charat7746 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7747 = charat7746 == 42.0000000000;
    double binop7748 = binop7745 && binop7747;
    if (binop7740) {
        cases7733 = TOK_NUMBER;
    } else if (binop7744) {
        cases7733 = TOK_PLUS;
    } else if (binop7748) {
        cases7733 = TOK_MUL;
    } else if (1.0000000000) {
        cases7733 = 0.0000000000;
    } else { cases7733 = 0.0; }
    double binop7749 = 132.0000000000 - 1.0000000000;
    double binop7750 = binop7749 * 0.0000000000;
    double cases7751;
    double binop7752 = pos < src_len;
    if (binop7752) {
        cases7751 = pos;
    } else if (1.0000000000) {
        cases7751 = 0.0000000000;
    } else { cases7751 = 0.0; }
    double binop7753 = 132.0000000000 - 1.0000000000;
    double binop7754 = binop7753 * 0.0000000000;
    double cases7755;
    double binop7756 = pos < src_len;
    double charat7757 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7758 = charat7757 >= 48.0000000000;
    double charat7759 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7760 = charat7759 <= 57.0000000000;
    double binop7761 = binop7758 && binop7760;
    double binop7762 = binop7756 && binop7761;
    double binop7763 = pos < src_len;
    double charat7764 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7765 = charat7764 == 43.0000000000;
    double charat7766 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7767 = charat7766 == 42.0000000000;
    double binop7768 = binop7765 || binop7767;
    double binop7769 = binop7763 && binop7768;
    if (binop7762) {
    double binop7770 = pos + 2.0000000000;
        cases7755 = binop7770;
    } else if (binop7769) {
    double binop7771 = pos + 1.0000000000;
        cases7755 = binop7771;
    } else if (1.0000000000) {
        cases7755 = 0.0000000000;
    } else { cases7755 = 0.0; }
    double cases7772;
    double binop7773 = pos < src_len;
    double charat7774 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7775 = charat7774 >= 48.0000000000;
    double charat7776 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7777 = charat7776 <= 57.0000000000;
    double binop7778 = binop7775 && binop7777;
    double binop7779 = binop7773 && binop7778;
    double binop7780 = pos < src_len;
    double charat7781 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7782 = charat7781 == 43.0000000000;
    double charat7783 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7784 = charat7783 == 42.0000000000;
    double binop7785 = binop7782 || binop7784;
    double binop7786 = binop7780 && binop7785;
    if (binop7779) {
    double binop7787 = pos + 3.0000000000;
        cases7772 = binop7787;
    } else if (binop7786) {
    double binop7788 = pos + 2.0000000000;
        cases7772 = binop7788;
    } else if (1.0000000000) {
    double binop7789 = src_len + 1.0000000000;
        cases7772 = binop7789;
    } else { cases7772 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7754] = 0.0000000000;
    tokens[(int)binop7750] = 0.0000000000;
    tokens[(int)binop7732] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7790 = 133.0000000000 - 1.0000000000;
    double binop7791 = binop7790 * 3.0000000000;
    double cases7792;
    double binop7793 = pos < src_len;
    double charat7794 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7795 = charat7794 >= 48.0000000000;
    double charat7796 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7797 = charat7796 <= 57.0000000000;
    double binop7798 = binop7795 && binop7797;
    double binop7799 = binop7793 && binop7798;
    double binop7800 = pos < src_len;
    double charat7801 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7802 = charat7801 == 43.0000000000;
    double binop7803 = binop7800 && binop7802;
    double binop7804 = pos < src_len;
    double charat7805 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7806 = charat7805 == 42.0000000000;
    double binop7807 = binop7804 && binop7806;
    if (binop7799) {
        cases7792 = TOK_NUMBER;
    } else if (binop7803) {
        cases7792 = TOK_PLUS;
    } else if (binop7807) {
        cases7792 = TOK_MUL;
    } else if (1.0000000000) {
        cases7792 = 0.0000000000;
    } else { cases7792 = 0.0; }
    double binop7808 = 133.0000000000 - 1.0000000000;
    double binop7809 = binop7808 * 0.0000000000;
    double cases7810;
    double binop7811 = pos < src_len;
    if (binop7811) {
        cases7810 = pos;
    } else if (1.0000000000) {
        cases7810 = 0.0000000000;
    } else { cases7810 = 0.0; }
    double binop7812 = 133.0000000000 - 1.0000000000;
    double binop7813 = binop7812 * 0.0000000000;
    double cases7814;
    double binop7815 = pos < src_len;
    double charat7816 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7817 = charat7816 >= 48.0000000000;
    double charat7818 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7819 = charat7818 <= 57.0000000000;
    double binop7820 = binop7817 && binop7819;
    double binop7821 = binop7815 && binop7820;
    double binop7822 = pos < src_len;
    double charat7823 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7824 = charat7823 == 43.0000000000;
    double charat7825 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7826 = charat7825 == 42.0000000000;
    double binop7827 = binop7824 || binop7826;
    double binop7828 = binop7822 && binop7827;
    if (binop7821) {
    double binop7829 = pos + 2.0000000000;
        cases7814 = binop7829;
    } else if (binop7828) {
    double binop7830 = pos + 1.0000000000;
        cases7814 = binop7830;
    } else if (1.0000000000) {
        cases7814 = 0.0000000000;
    } else { cases7814 = 0.0; }
    double cases7831;
    double binop7832 = pos < src_len;
    double charat7833 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7834 = charat7833 >= 48.0000000000;
    double charat7835 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7836 = charat7835 <= 57.0000000000;
    double binop7837 = binop7834 && binop7836;
    double binop7838 = binop7832 && binop7837;
    double binop7839 = pos < src_len;
    double charat7840 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7841 = charat7840 == 43.0000000000;
    double charat7842 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7843 = charat7842 == 42.0000000000;
    double binop7844 = binop7841 || binop7843;
    double binop7845 = binop7839 && binop7844;
    if (binop7838) {
    double binop7846 = pos + 3.0000000000;
        cases7831 = binop7846;
    } else if (binop7845) {
    double binop7847 = pos + 2.0000000000;
        cases7831 = binop7847;
    } else if (1.0000000000) {
    double binop7848 = src_len + 1.0000000000;
        cases7831 = binop7848;
    } else { cases7831 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7813] = 0.0000000000;
    tokens[(int)binop7809] = 0.0000000000;
    tokens[(int)binop7791] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7849 = 134.0000000000 - 1.0000000000;
    double binop7850 = binop7849 * 3.0000000000;
    double cases7851;
    double binop7852 = pos < src_len;
    double charat7853 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7854 = charat7853 >= 48.0000000000;
    double charat7855 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7856 = charat7855 <= 57.0000000000;
    double binop7857 = binop7854 && binop7856;
    double binop7858 = binop7852 && binop7857;
    double binop7859 = pos < src_len;
    double charat7860 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7861 = charat7860 == 43.0000000000;
    double binop7862 = binop7859 && binop7861;
    double binop7863 = pos < src_len;
    double charat7864 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7865 = charat7864 == 42.0000000000;
    double binop7866 = binop7863 && binop7865;
    if (binop7858) {
        cases7851 = TOK_NUMBER;
    } else if (binop7862) {
        cases7851 = TOK_PLUS;
    } else if (binop7866) {
        cases7851 = TOK_MUL;
    } else if (1.0000000000) {
        cases7851 = 0.0000000000;
    } else { cases7851 = 0.0; }
    double binop7867 = 134.0000000000 - 1.0000000000;
    double binop7868 = binop7867 * 0.0000000000;
    double cases7869;
    double binop7870 = pos < src_len;
    if (binop7870) {
        cases7869 = pos;
    } else if (1.0000000000) {
        cases7869 = 0.0000000000;
    } else { cases7869 = 0.0; }
    double binop7871 = 134.0000000000 - 1.0000000000;
    double binop7872 = binop7871 * 0.0000000000;
    double cases7873;
    double binop7874 = pos < src_len;
    double charat7875 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7876 = charat7875 >= 48.0000000000;
    double charat7877 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7878 = charat7877 <= 57.0000000000;
    double binop7879 = binop7876 && binop7878;
    double binop7880 = binop7874 && binop7879;
    double binop7881 = pos < src_len;
    double charat7882 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7883 = charat7882 == 43.0000000000;
    double charat7884 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7885 = charat7884 == 42.0000000000;
    double binop7886 = binop7883 || binop7885;
    double binop7887 = binop7881 && binop7886;
    if (binop7880) {
    double binop7888 = pos + 2.0000000000;
        cases7873 = binop7888;
    } else if (binop7887) {
    double binop7889 = pos + 1.0000000000;
        cases7873 = binop7889;
    } else if (1.0000000000) {
        cases7873 = 0.0000000000;
    } else { cases7873 = 0.0; }
    double cases7890;
    double binop7891 = pos < src_len;
    double charat7892 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7893 = charat7892 >= 48.0000000000;
    double charat7894 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7895 = charat7894 <= 57.0000000000;
    double binop7896 = binop7893 && binop7895;
    double binop7897 = binop7891 && binop7896;
    double binop7898 = pos < src_len;
    double charat7899 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7900 = charat7899 == 43.0000000000;
    double charat7901 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7902 = charat7901 == 42.0000000000;
    double binop7903 = binop7900 || binop7902;
    double binop7904 = binop7898 && binop7903;
    if (binop7897) {
    double binop7905 = pos + 3.0000000000;
        cases7890 = binop7905;
    } else if (binop7904) {
    double binop7906 = pos + 2.0000000000;
        cases7890 = binop7906;
    } else if (1.0000000000) {
    double binop7907 = src_len + 1.0000000000;
        cases7890 = binop7907;
    } else { cases7890 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7872] = 0.0000000000;
    tokens[(int)binop7868] = 0.0000000000;
    tokens[(int)binop7850] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7908 = 135.0000000000 - 1.0000000000;
    double binop7909 = binop7908 * 3.0000000000;
    double cases7910;
    double binop7911 = pos < src_len;
    double charat7912 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7913 = charat7912 >= 48.0000000000;
    double charat7914 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7915 = charat7914 <= 57.0000000000;
    double binop7916 = binop7913 && binop7915;
    double binop7917 = binop7911 && binop7916;
    double binop7918 = pos < src_len;
    double charat7919 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7920 = charat7919 == 43.0000000000;
    double binop7921 = binop7918 && binop7920;
    double binop7922 = pos < src_len;
    double charat7923 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7924 = charat7923 == 42.0000000000;
    double binop7925 = binop7922 && binop7924;
    if (binop7917) {
        cases7910 = TOK_NUMBER;
    } else if (binop7921) {
        cases7910 = TOK_PLUS;
    } else if (binop7925) {
        cases7910 = TOK_MUL;
    } else if (1.0000000000) {
        cases7910 = 0.0000000000;
    } else { cases7910 = 0.0; }
    double binop7926 = 135.0000000000 - 1.0000000000;
    double binop7927 = binop7926 * 0.0000000000;
    double cases7928;
    double binop7929 = pos < src_len;
    if (binop7929) {
        cases7928 = pos;
    } else if (1.0000000000) {
        cases7928 = 0.0000000000;
    } else { cases7928 = 0.0; }
    double binop7930 = 135.0000000000 - 1.0000000000;
    double binop7931 = binop7930 * 0.0000000000;
    double cases7932;
    double binop7933 = pos < src_len;
    double charat7934 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7935 = charat7934 >= 48.0000000000;
    double charat7936 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7937 = charat7936 <= 57.0000000000;
    double binop7938 = binop7935 && binop7937;
    double binop7939 = binop7933 && binop7938;
    double binop7940 = pos < src_len;
    double charat7941 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7942 = charat7941 == 43.0000000000;
    double charat7943 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7944 = charat7943 == 42.0000000000;
    double binop7945 = binop7942 || binop7944;
    double binop7946 = binop7940 && binop7945;
    if (binop7939) {
    double binop7947 = pos + 2.0000000000;
        cases7932 = binop7947;
    } else if (binop7946) {
    double binop7948 = pos + 1.0000000000;
        cases7932 = binop7948;
    } else if (1.0000000000) {
        cases7932 = 0.0000000000;
    } else { cases7932 = 0.0; }
    double cases7949;
    double binop7950 = pos < src_len;
    double charat7951 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7952 = charat7951 >= 48.0000000000;
    double charat7953 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7954 = charat7953 <= 57.0000000000;
    double binop7955 = binop7952 && binop7954;
    double binop7956 = binop7950 && binop7955;
    double binop7957 = pos < src_len;
    double charat7958 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7959 = charat7958 == 43.0000000000;
    double charat7960 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7961 = charat7960 == 42.0000000000;
    double binop7962 = binop7959 || binop7961;
    double binop7963 = binop7957 && binop7962;
    if (binop7956) {
    double binop7964 = pos + 3.0000000000;
        cases7949 = binop7964;
    } else if (binop7963) {
    double binop7965 = pos + 2.0000000000;
        cases7949 = binop7965;
    } else if (1.0000000000) {
    double binop7966 = src_len + 1.0000000000;
        cases7949 = binop7966;
    } else { cases7949 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7931] = 0.0000000000;
    tokens[(int)binop7927] = 0.0000000000;
    tokens[(int)binop7909] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop7967 = 136.0000000000 - 1.0000000000;
    double binop7968 = binop7967 * 3.0000000000;
    double cases7969;
    double binop7970 = pos < src_len;
    double charat7971 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7972 = charat7971 >= 48.0000000000;
    double charat7973 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7974 = charat7973 <= 57.0000000000;
    double binop7975 = binop7972 && binop7974;
    double binop7976 = binop7970 && binop7975;
    double binop7977 = pos < src_len;
    double charat7978 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7979 = charat7978 == 43.0000000000;
    double binop7980 = binop7977 && binop7979;
    double binop7981 = pos < src_len;
    double charat7982 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7983 = charat7982 == 42.0000000000;
    double binop7984 = binop7981 && binop7983;
    if (binop7976) {
        cases7969 = TOK_NUMBER;
    } else if (binop7980) {
        cases7969 = TOK_PLUS;
    } else if (binop7984) {
        cases7969 = TOK_MUL;
    } else if (1.0000000000) {
        cases7969 = 0.0000000000;
    } else { cases7969 = 0.0; }
    double binop7985 = 136.0000000000 - 1.0000000000;
    double binop7986 = binop7985 * 0.0000000000;
    double cases7987;
    double binop7988 = pos < src_len;
    if (binop7988) {
        cases7987 = pos;
    } else if (1.0000000000) {
        cases7987 = 0.0000000000;
    } else { cases7987 = 0.0; }
    double binop7989 = 136.0000000000 - 1.0000000000;
    double binop7990 = binop7989 * 0.0000000000;
    double cases7991;
    double binop7992 = pos < src_len;
    double charat7993 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7994 = charat7993 >= 48.0000000000;
    double charat7995 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop7996 = charat7995 <= 57.0000000000;
    double binop7997 = binop7994 && binop7996;
    double binop7998 = binop7992 && binop7997;
    double binop7999 = pos < src_len;
    double charat8000 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8001 = charat8000 == 43.0000000000;
    double charat8002 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8003 = charat8002 == 42.0000000000;
    double binop8004 = binop8001 || binop8003;
    double binop8005 = binop7999 && binop8004;
    if (binop7998) {
    double binop8006 = pos + 2.0000000000;
        cases7991 = binop8006;
    } else if (binop8005) {
    double binop8007 = pos + 1.0000000000;
        cases7991 = binop8007;
    } else if (1.0000000000) {
        cases7991 = 0.0000000000;
    } else { cases7991 = 0.0; }
    double cases8008;
    double binop8009 = pos < src_len;
    double charat8010 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8011 = charat8010 >= 48.0000000000;
    double charat8012 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8013 = charat8012 <= 57.0000000000;
    double binop8014 = binop8011 && binop8013;
    double binop8015 = binop8009 && binop8014;
    double binop8016 = pos < src_len;
    double charat8017 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8018 = charat8017 == 43.0000000000;
    double charat8019 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8020 = charat8019 == 42.0000000000;
    double binop8021 = binop8018 || binop8020;
    double binop8022 = binop8016 && binop8021;
    if (binop8015) {
    double binop8023 = pos + 3.0000000000;
        cases8008 = binop8023;
    } else if (binop8022) {
    double binop8024 = pos + 2.0000000000;
        cases8008 = binop8024;
    } else if (1.0000000000) {
    double binop8025 = src_len + 1.0000000000;
        cases8008 = binop8025;
    } else { cases8008 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop7990] = 0.0000000000;
    tokens[(int)binop7986] = 0.0000000000;
    tokens[(int)binop7968] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8026 = 137.0000000000 - 1.0000000000;
    double binop8027 = binop8026 * 3.0000000000;
    double cases8028;
    double binop8029 = pos < src_len;
    double charat8030 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8031 = charat8030 >= 48.0000000000;
    double charat8032 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8033 = charat8032 <= 57.0000000000;
    double binop8034 = binop8031 && binop8033;
    double binop8035 = binop8029 && binop8034;
    double binop8036 = pos < src_len;
    double charat8037 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8038 = charat8037 == 43.0000000000;
    double binop8039 = binop8036 && binop8038;
    double binop8040 = pos < src_len;
    double charat8041 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8042 = charat8041 == 42.0000000000;
    double binop8043 = binop8040 && binop8042;
    if (binop8035) {
        cases8028 = TOK_NUMBER;
    } else if (binop8039) {
        cases8028 = TOK_PLUS;
    } else if (binop8043) {
        cases8028 = TOK_MUL;
    } else if (1.0000000000) {
        cases8028 = 0.0000000000;
    } else { cases8028 = 0.0; }
    double binop8044 = 137.0000000000 - 1.0000000000;
    double binop8045 = binop8044 * 0.0000000000;
    double cases8046;
    double binop8047 = pos < src_len;
    if (binop8047) {
        cases8046 = pos;
    } else if (1.0000000000) {
        cases8046 = 0.0000000000;
    } else { cases8046 = 0.0; }
    double binop8048 = 137.0000000000 - 1.0000000000;
    double binop8049 = binop8048 * 0.0000000000;
    double cases8050;
    double binop8051 = pos < src_len;
    double charat8052 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8053 = charat8052 >= 48.0000000000;
    double charat8054 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8055 = charat8054 <= 57.0000000000;
    double binop8056 = binop8053 && binop8055;
    double binop8057 = binop8051 && binop8056;
    double binop8058 = pos < src_len;
    double charat8059 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8060 = charat8059 == 43.0000000000;
    double charat8061 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8062 = charat8061 == 42.0000000000;
    double binop8063 = binop8060 || binop8062;
    double binop8064 = binop8058 && binop8063;
    if (binop8057) {
    double binop8065 = pos + 2.0000000000;
        cases8050 = binop8065;
    } else if (binop8064) {
    double binop8066 = pos + 1.0000000000;
        cases8050 = binop8066;
    } else if (1.0000000000) {
        cases8050 = 0.0000000000;
    } else { cases8050 = 0.0; }
    double cases8067;
    double binop8068 = pos < src_len;
    double charat8069 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8070 = charat8069 >= 48.0000000000;
    double charat8071 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8072 = charat8071 <= 57.0000000000;
    double binop8073 = binop8070 && binop8072;
    double binop8074 = binop8068 && binop8073;
    double binop8075 = pos < src_len;
    double charat8076 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8077 = charat8076 == 43.0000000000;
    double charat8078 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8079 = charat8078 == 42.0000000000;
    double binop8080 = binop8077 || binop8079;
    double binop8081 = binop8075 && binop8080;
    if (binop8074) {
    double binop8082 = pos + 3.0000000000;
        cases8067 = binop8082;
    } else if (binop8081) {
    double binop8083 = pos + 2.0000000000;
        cases8067 = binop8083;
    } else if (1.0000000000) {
    double binop8084 = src_len + 1.0000000000;
        cases8067 = binop8084;
    } else { cases8067 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8049] = 0.0000000000;
    tokens[(int)binop8045] = 0.0000000000;
    tokens[(int)binop8027] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8085 = 138.0000000000 - 1.0000000000;
    double binop8086 = binop8085 * 3.0000000000;
    double cases8087;
    double binop8088 = pos < src_len;
    double charat8089 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8090 = charat8089 >= 48.0000000000;
    double charat8091 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8092 = charat8091 <= 57.0000000000;
    double binop8093 = binop8090 && binop8092;
    double binop8094 = binop8088 && binop8093;
    double binop8095 = pos < src_len;
    double charat8096 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8097 = charat8096 == 43.0000000000;
    double binop8098 = binop8095 && binop8097;
    double binop8099 = pos < src_len;
    double charat8100 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8101 = charat8100 == 42.0000000000;
    double binop8102 = binop8099 && binop8101;
    if (binop8094) {
        cases8087 = TOK_NUMBER;
    } else if (binop8098) {
        cases8087 = TOK_PLUS;
    } else if (binop8102) {
        cases8087 = TOK_MUL;
    } else if (1.0000000000) {
        cases8087 = 0.0000000000;
    } else { cases8087 = 0.0; }
    double binop8103 = 138.0000000000 - 1.0000000000;
    double binop8104 = binop8103 * 0.0000000000;
    double cases8105;
    double binop8106 = pos < src_len;
    if (binop8106) {
        cases8105 = pos;
    } else if (1.0000000000) {
        cases8105 = 0.0000000000;
    } else { cases8105 = 0.0; }
    double binop8107 = 138.0000000000 - 1.0000000000;
    double binop8108 = binop8107 * 0.0000000000;
    double cases8109;
    double binop8110 = pos < src_len;
    double charat8111 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8112 = charat8111 >= 48.0000000000;
    double charat8113 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8114 = charat8113 <= 57.0000000000;
    double binop8115 = binop8112 && binop8114;
    double binop8116 = binop8110 && binop8115;
    double binop8117 = pos < src_len;
    double charat8118 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8119 = charat8118 == 43.0000000000;
    double charat8120 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8121 = charat8120 == 42.0000000000;
    double binop8122 = binop8119 || binop8121;
    double binop8123 = binop8117 && binop8122;
    if (binop8116) {
    double binop8124 = pos + 2.0000000000;
        cases8109 = binop8124;
    } else if (binop8123) {
    double binop8125 = pos + 1.0000000000;
        cases8109 = binop8125;
    } else if (1.0000000000) {
        cases8109 = 0.0000000000;
    } else { cases8109 = 0.0; }
    double cases8126;
    double binop8127 = pos < src_len;
    double charat8128 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8129 = charat8128 >= 48.0000000000;
    double charat8130 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8131 = charat8130 <= 57.0000000000;
    double binop8132 = binop8129 && binop8131;
    double binop8133 = binop8127 && binop8132;
    double binop8134 = pos < src_len;
    double charat8135 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8136 = charat8135 == 43.0000000000;
    double charat8137 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8138 = charat8137 == 42.0000000000;
    double binop8139 = binop8136 || binop8138;
    double binop8140 = binop8134 && binop8139;
    if (binop8133) {
    double binop8141 = pos + 3.0000000000;
        cases8126 = binop8141;
    } else if (binop8140) {
    double binop8142 = pos + 2.0000000000;
        cases8126 = binop8142;
    } else if (1.0000000000) {
    double binop8143 = src_len + 1.0000000000;
        cases8126 = binop8143;
    } else { cases8126 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8108] = 0.0000000000;
    tokens[(int)binop8104] = 0.0000000000;
    tokens[(int)binop8086] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8144 = 139.0000000000 - 1.0000000000;
    double binop8145 = binop8144 * 3.0000000000;
    double cases8146;
    double binop8147 = pos < src_len;
    double charat8148 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8149 = charat8148 >= 48.0000000000;
    double charat8150 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8151 = charat8150 <= 57.0000000000;
    double binop8152 = binop8149 && binop8151;
    double binop8153 = binop8147 && binop8152;
    double binop8154 = pos < src_len;
    double charat8155 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8156 = charat8155 == 43.0000000000;
    double binop8157 = binop8154 && binop8156;
    double binop8158 = pos < src_len;
    double charat8159 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8160 = charat8159 == 42.0000000000;
    double binop8161 = binop8158 && binop8160;
    if (binop8153) {
        cases8146 = TOK_NUMBER;
    } else if (binop8157) {
        cases8146 = TOK_PLUS;
    } else if (binop8161) {
        cases8146 = TOK_MUL;
    } else if (1.0000000000) {
        cases8146 = 0.0000000000;
    } else { cases8146 = 0.0; }
    double binop8162 = 139.0000000000 - 1.0000000000;
    double binop8163 = binop8162 * 0.0000000000;
    double cases8164;
    double binop8165 = pos < src_len;
    if (binop8165) {
        cases8164 = pos;
    } else if (1.0000000000) {
        cases8164 = 0.0000000000;
    } else { cases8164 = 0.0; }
    double binop8166 = 139.0000000000 - 1.0000000000;
    double binop8167 = binop8166 * 0.0000000000;
    double cases8168;
    double binop8169 = pos < src_len;
    double charat8170 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8171 = charat8170 >= 48.0000000000;
    double charat8172 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8173 = charat8172 <= 57.0000000000;
    double binop8174 = binop8171 && binop8173;
    double binop8175 = binop8169 && binop8174;
    double binop8176 = pos < src_len;
    double charat8177 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8178 = charat8177 == 43.0000000000;
    double charat8179 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8180 = charat8179 == 42.0000000000;
    double binop8181 = binop8178 || binop8180;
    double binop8182 = binop8176 && binop8181;
    if (binop8175) {
    double binop8183 = pos + 2.0000000000;
        cases8168 = binop8183;
    } else if (binop8182) {
    double binop8184 = pos + 1.0000000000;
        cases8168 = binop8184;
    } else if (1.0000000000) {
        cases8168 = 0.0000000000;
    } else { cases8168 = 0.0; }
    double cases8185;
    double binop8186 = pos < src_len;
    double charat8187 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8188 = charat8187 >= 48.0000000000;
    double charat8189 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8190 = charat8189 <= 57.0000000000;
    double binop8191 = binop8188 && binop8190;
    double binop8192 = binop8186 && binop8191;
    double binop8193 = pos < src_len;
    double charat8194 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8195 = charat8194 == 43.0000000000;
    double charat8196 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8197 = charat8196 == 42.0000000000;
    double binop8198 = binop8195 || binop8197;
    double binop8199 = binop8193 && binop8198;
    if (binop8192) {
    double binop8200 = pos + 3.0000000000;
        cases8185 = binop8200;
    } else if (binop8199) {
    double binop8201 = pos + 2.0000000000;
        cases8185 = binop8201;
    } else if (1.0000000000) {
    double binop8202 = src_len + 1.0000000000;
        cases8185 = binop8202;
    } else { cases8185 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8167] = 0.0000000000;
    tokens[(int)binop8163] = 0.0000000000;
    tokens[(int)binop8145] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8203 = 140.0000000000 - 1.0000000000;
    double binop8204 = binop8203 * 3.0000000000;
    double cases8205;
    double binop8206 = pos < src_len;
    double charat8207 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8208 = charat8207 >= 48.0000000000;
    double charat8209 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8210 = charat8209 <= 57.0000000000;
    double binop8211 = binop8208 && binop8210;
    double binop8212 = binop8206 && binop8211;
    double binop8213 = pos < src_len;
    double charat8214 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8215 = charat8214 == 43.0000000000;
    double binop8216 = binop8213 && binop8215;
    double binop8217 = pos < src_len;
    double charat8218 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8219 = charat8218 == 42.0000000000;
    double binop8220 = binop8217 && binop8219;
    if (binop8212) {
        cases8205 = TOK_NUMBER;
    } else if (binop8216) {
        cases8205 = TOK_PLUS;
    } else if (binop8220) {
        cases8205 = TOK_MUL;
    } else if (1.0000000000) {
        cases8205 = 0.0000000000;
    } else { cases8205 = 0.0; }
    double binop8221 = 140.0000000000 - 1.0000000000;
    double binop8222 = binop8221 * 0.0000000000;
    double cases8223;
    double binop8224 = pos < src_len;
    if (binop8224) {
        cases8223 = pos;
    } else if (1.0000000000) {
        cases8223 = 0.0000000000;
    } else { cases8223 = 0.0; }
    double binop8225 = 140.0000000000 - 1.0000000000;
    double binop8226 = binop8225 * 0.0000000000;
    double cases8227;
    double binop8228 = pos < src_len;
    double charat8229 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8230 = charat8229 >= 48.0000000000;
    double charat8231 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8232 = charat8231 <= 57.0000000000;
    double binop8233 = binop8230 && binop8232;
    double binop8234 = binop8228 && binop8233;
    double binop8235 = pos < src_len;
    double charat8236 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8237 = charat8236 == 43.0000000000;
    double charat8238 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8239 = charat8238 == 42.0000000000;
    double binop8240 = binop8237 || binop8239;
    double binop8241 = binop8235 && binop8240;
    if (binop8234) {
    double binop8242 = pos + 2.0000000000;
        cases8227 = binop8242;
    } else if (binop8241) {
    double binop8243 = pos + 1.0000000000;
        cases8227 = binop8243;
    } else if (1.0000000000) {
        cases8227 = 0.0000000000;
    } else { cases8227 = 0.0; }
    double cases8244;
    double binop8245 = pos < src_len;
    double charat8246 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8247 = charat8246 >= 48.0000000000;
    double charat8248 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8249 = charat8248 <= 57.0000000000;
    double binop8250 = binop8247 && binop8249;
    double binop8251 = binop8245 && binop8250;
    double binop8252 = pos < src_len;
    double charat8253 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8254 = charat8253 == 43.0000000000;
    double charat8255 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8256 = charat8255 == 42.0000000000;
    double binop8257 = binop8254 || binop8256;
    double binop8258 = binop8252 && binop8257;
    if (binop8251) {
    double binop8259 = pos + 3.0000000000;
        cases8244 = binop8259;
    } else if (binop8258) {
    double binop8260 = pos + 2.0000000000;
        cases8244 = binop8260;
    } else if (1.0000000000) {
    double binop8261 = src_len + 1.0000000000;
        cases8244 = binop8261;
    } else { cases8244 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8226] = 0.0000000000;
    tokens[(int)binop8222] = 0.0000000000;
    tokens[(int)binop8204] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8262 = 141.0000000000 - 1.0000000000;
    double binop8263 = binop8262 * 3.0000000000;
    double cases8264;
    double binop8265 = pos < src_len;
    double charat8266 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8267 = charat8266 >= 48.0000000000;
    double charat8268 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8269 = charat8268 <= 57.0000000000;
    double binop8270 = binop8267 && binop8269;
    double binop8271 = binop8265 && binop8270;
    double binop8272 = pos < src_len;
    double charat8273 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8274 = charat8273 == 43.0000000000;
    double binop8275 = binop8272 && binop8274;
    double binop8276 = pos < src_len;
    double charat8277 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8278 = charat8277 == 42.0000000000;
    double binop8279 = binop8276 && binop8278;
    if (binop8271) {
        cases8264 = TOK_NUMBER;
    } else if (binop8275) {
        cases8264 = TOK_PLUS;
    } else if (binop8279) {
        cases8264 = TOK_MUL;
    } else if (1.0000000000) {
        cases8264 = 0.0000000000;
    } else { cases8264 = 0.0; }
    double binop8280 = 141.0000000000 - 1.0000000000;
    double binop8281 = binop8280 * 0.0000000000;
    double cases8282;
    double binop8283 = pos < src_len;
    if (binop8283) {
        cases8282 = pos;
    } else if (1.0000000000) {
        cases8282 = 0.0000000000;
    } else { cases8282 = 0.0; }
    double binop8284 = 141.0000000000 - 1.0000000000;
    double binop8285 = binop8284 * 0.0000000000;
    double cases8286;
    double binop8287 = pos < src_len;
    double charat8288 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8289 = charat8288 >= 48.0000000000;
    double charat8290 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8291 = charat8290 <= 57.0000000000;
    double binop8292 = binop8289 && binop8291;
    double binop8293 = binop8287 && binop8292;
    double binop8294 = pos < src_len;
    double charat8295 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8296 = charat8295 == 43.0000000000;
    double charat8297 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8298 = charat8297 == 42.0000000000;
    double binop8299 = binop8296 || binop8298;
    double binop8300 = binop8294 && binop8299;
    if (binop8293) {
    double binop8301 = pos + 2.0000000000;
        cases8286 = binop8301;
    } else if (binop8300) {
    double binop8302 = pos + 1.0000000000;
        cases8286 = binop8302;
    } else if (1.0000000000) {
        cases8286 = 0.0000000000;
    } else { cases8286 = 0.0; }
    double cases8303;
    double binop8304 = pos < src_len;
    double charat8305 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8306 = charat8305 >= 48.0000000000;
    double charat8307 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8308 = charat8307 <= 57.0000000000;
    double binop8309 = binop8306 && binop8308;
    double binop8310 = binop8304 && binop8309;
    double binop8311 = pos < src_len;
    double charat8312 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8313 = charat8312 == 43.0000000000;
    double charat8314 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8315 = charat8314 == 42.0000000000;
    double binop8316 = binop8313 || binop8315;
    double binop8317 = binop8311 && binop8316;
    if (binop8310) {
    double binop8318 = pos + 3.0000000000;
        cases8303 = binop8318;
    } else if (binop8317) {
    double binop8319 = pos + 2.0000000000;
        cases8303 = binop8319;
    } else if (1.0000000000) {
    double binop8320 = src_len + 1.0000000000;
        cases8303 = binop8320;
    } else { cases8303 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8285] = 0.0000000000;
    tokens[(int)binop8281] = 0.0000000000;
    tokens[(int)binop8263] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8321 = 142.0000000000 - 1.0000000000;
    double binop8322 = binop8321 * 3.0000000000;
    double cases8323;
    double binop8324 = pos < src_len;
    double charat8325 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8326 = charat8325 >= 48.0000000000;
    double charat8327 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8328 = charat8327 <= 57.0000000000;
    double binop8329 = binop8326 && binop8328;
    double binop8330 = binop8324 && binop8329;
    double binop8331 = pos < src_len;
    double charat8332 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8333 = charat8332 == 43.0000000000;
    double binop8334 = binop8331 && binop8333;
    double binop8335 = pos < src_len;
    double charat8336 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8337 = charat8336 == 42.0000000000;
    double binop8338 = binop8335 && binop8337;
    if (binop8330) {
        cases8323 = TOK_NUMBER;
    } else if (binop8334) {
        cases8323 = TOK_PLUS;
    } else if (binop8338) {
        cases8323 = TOK_MUL;
    } else if (1.0000000000) {
        cases8323 = 0.0000000000;
    } else { cases8323 = 0.0; }
    double binop8339 = 142.0000000000 - 1.0000000000;
    double binop8340 = binop8339 * 0.0000000000;
    double cases8341;
    double binop8342 = pos < src_len;
    if (binop8342) {
        cases8341 = pos;
    } else if (1.0000000000) {
        cases8341 = 0.0000000000;
    } else { cases8341 = 0.0; }
    double binop8343 = 142.0000000000 - 1.0000000000;
    double binop8344 = binop8343 * 0.0000000000;
    double cases8345;
    double binop8346 = pos < src_len;
    double charat8347 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8348 = charat8347 >= 48.0000000000;
    double charat8349 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8350 = charat8349 <= 57.0000000000;
    double binop8351 = binop8348 && binop8350;
    double binop8352 = binop8346 && binop8351;
    double binop8353 = pos < src_len;
    double charat8354 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8355 = charat8354 == 43.0000000000;
    double charat8356 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8357 = charat8356 == 42.0000000000;
    double binop8358 = binop8355 || binop8357;
    double binop8359 = binop8353 && binop8358;
    if (binop8352) {
    double binop8360 = pos + 2.0000000000;
        cases8345 = binop8360;
    } else if (binop8359) {
    double binop8361 = pos + 1.0000000000;
        cases8345 = binop8361;
    } else if (1.0000000000) {
        cases8345 = 0.0000000000;
    } else { cases8345 = 0.0; }
    double cases8362;
    double binop8363 = pos < src_len;
    double charat8364 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8365 = charat8364 >= 48.0000000000;
    double charat8366 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8367 = charat8366 <= 57.0000000000;
    double binop8368 = binop8365 && binop8367;
    double binop8369 = binop8363 && binop8368;
    double binop8370 = pos < src_len;
    double charat8371 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8372 = charat8371 == 43.0000000000;
    double charat8373 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8374 = charat8373 == 42.0000000000;
    double binop8375 = binop8372 || binop8374;
    double binop8376 = binop8370 && binop8375;
    if (binop8369) {
    double binop8377 = pos + 3.0000000000;
        cases8362 = binop8377;
    } else if (binop8376) {
    double binop8378 = pos + 2.0000000000;
        cases8362 = binop8378;
    } else if (1.0000000000) {
    double binop8379 = src_len + 1.0000000000;
        cases8362 = binop8379;
    } else { cases8362 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8344] = 0.0000000000;
    tokens[(int)binop8340] = 0.0000000000;
    tokens[(int)binop8322] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8380 = 143.0000000000 - 1.0000000000;
    double binop8381 = binop8380 * 3.0000000000;
    double cases8382;
    double binop8383 = pos < src_len;
    double charat8384 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8385 = charat8384 >= 48.0000000000;
    double charat8386 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8387 = charat8386 <= 57.0000000000;
    double binop8388 = binop8385 && binop8387;
    double binop8389 = binop8383 && binop8388;
    double binop8390 = pos < src_len;
    double charat8391 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8392 = charat8391 == 43.0000000000;
    double binop8393 = binop8390 && binop8392;
    double binop8394 = pos < src_len;
    double charat8395 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8396 = charat8395 == 42.0000000000;
    double binop8397 = binop8394 && binop8396;
    if (binop8389) {
        cases8382 = TOK_NUMBER;
    } else if (binop8393) {
        cases8382 = TOK_PLUS;
    } else if (binop8397) {
        cases8382 = TOK_MUL;
    } else if (1.0000000000) {
        cases8382 = 0.0000000000;
    } else { cases8382 = 0.0; }
    double binop8398 = 143.0000000000 - 1.0000000000;
    double binop8399 = binop8398 * 0.0000000000;
    double cases8400;
    double binop8401 = pos < src_len;
    if (binop8401) {
        cases8400 = pos;
    } else if (1.0000000000) {
        cases8400 = 0.0000000000;
    } else { cases8400 = 0.0; }
    double binop8402 = 143.0000000000 - 1.0000000000;
    double binop8403 = binop8402 * 0.0000000000;
    double cases8404;
    double binop8405 = pos < src_len;
    double charat8406 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8407 = charat8406 >= 48.0000000000;
    double charat8408 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8409 = charat8408 <= 57.0000000000;
    double binop8410 = binop8407 && binop8409;
    double binop8411 = binop8405 && binop8410;
    double binop8412 = pos < src_len;
    double charat8413 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8414 = charat8413 == 43.0000000000;
    double charat8415 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8416 = charat8415 == 42.0000000000;
    double binop8417 = binop8414 || binop8416;
    double binop8418 = binop8412 && binop8417;
    if (binop8411) {
    double binop8419 = pos + 2.0000000000;
        cases8404 = binop8419;
    } else if (binop8418) {
    double binop8420 = pos + 1.0000000000;
        cases8404 = binop8420;
    } else if (1.0000000000) {
        cases8404 = 0.0000000000;
    } else { cases8404 = 0.0; }
    double cases8421;
    double binop8422 = pos < src_len;
    double charat8423 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8424 = charat8423 >= 48.0000000000;
    double charat8425 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8426 = charat8425 <= 57.0000000000;
    double binop8427 = binop8424 && binop8426;
    double binop8428 = binop8422 && binop8427;
    double binop8429 = pos < src_len;
    double charat8430 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8431 = charat8430 == 43.0000000000;
    double charat8432 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8433 = charat8432 == 42.0000000000;
    double binop8434 = binop8431 || binop8433;
    double binop8435 = binop8429 && binop8434;
    if (binop8428) {
    double binop8436 = pos + 3.0000000000;
        cases8421 = binop8436;
    } else if (binop8435) {
    double binop8437 = pos + 2.0000000000;
        cases8421 = binop8437;
    } else if (1.0000000000) {
    double binop8438 = src_len + 1.0000000000;
        cases8421 = binop8438;
    } else { cases8421 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8403] = 0.0000000000;
    tokens[(int)binop8399] = 0.0000000000;
    tokens[(int)binop8381] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8439 = 144.0000000000 - 1.0000000000;
    double binop8440 = binop8439 * 3.0000000000;
    double cases8441;
    double binop8442 = pos < src_len;
    double charat8443 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8444 = charat8443 >= 48.0000000000;
    double charat8445 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8446 = charat8445 <= 57.0000000000;
    double binop8447 = binop8444 && binop8446;
    double binop8448 = binop8442 && binop8447;
    double binop8449 = pos < src_len;
    double charat8450 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8451 = charat8450 == 43.0000000000;
    double binop8452 = binop8449 && binop8451;
    double binop8453 = pos < src_len;
    double charat8454 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8455 = charat8454 == 42.0000000000;
    double binop8456 = binop8453 && binop8455;
    if (binop8448) {
        cases8441 = TOK_NUMBER;
    } else if (binop8452) {
        cases8441 = TOK_PLUS;
    } else if (binop8456) {
        cases8441 = TOK_MUL;
    } else if (1.0000000000) {
        cases8441 = 0.0000000000;
    } else { cases8441 = 0.0; }
    double binop8457 = 144.0000000000 - 1.0000000000;
    double binop8458 = binop8457 * 0.0000000000;
    double cases8459;
    double binop8460 = pos < src_len;
    if (binop8460) {
        cases8459 = pos;
    } else if (1.0000000000) {
        cases8459 = 0.0000000000;
    } else { cases8459 = 0.0; }
    double binop8461 = 144.0000000000 - 1.0000000000;
    double binop8462 = binop8461 * 0.0000000000;
    double cases8463;
    double binop8464 = pos < src_len;
    double charat8465 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8466 = charat8465 >= 48.0000000000;
    double charat8467 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8468 = charat8467 <= 57.0000000000;
    double binop8469 = binop8466 && binop8468;
    double binop8470 = binop8464 && binop8469;
    double binop8471 = pos < src_len;
    double charat8472 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8473 = charat8472 == 43.0000000000;
    double charat8474 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8475 = charat8474 == 42.0000000000;
    double binop8476 = binop8473 || binop8475;
    double binop8477 = binop8471 && binop8476;
    if (binop8470) {
    double binop8478 = pos + 2.0000000000;
        cases8463 = binop8478;
    } else if (binop8477) {
    double binop8479 = pos + 1.0000000000;
        cases8463 = binop8479;
    } else if (1.0000000000) {
        cases8463 = 0.0000000000;
    } else { cases8463 = 0.0; }
    double cases8480;
    double binop8481 = pos < src_len;
    double charat8482 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8483 = charat8482 >= 48.0000000000;
    double charat8484 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8485 = charat8484 <= 57.0000000000;
    double binop8486 = binop8483 && binop8485;
    double binop8487 = binop8481 && binop8486;
    double binop8488 = pos < src_len;
    double charat8489 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8490 = charat8489 == 43.0000000000;
    double charat8491 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8492 = charat8491 == 42.0000000000;
    double binop8493 = binop8490 || binop8492;
    double binop8494 = binop8488 && binop8493;
    if (binop8487) {
    double binop8495 = pos + 3.0000000000;
        cases8480 = binop8495;
    } else if (binop8494) {
    double binop8496 = pos + 2.0000000000;
        cases8480 = binop8496;
    } else if (1.0000000000) {
    double binop8497 = src_len + 1.0000000000;
        cases8480 = binop8497;
    } else { cases8480 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8462] = 0.0000000000;
    tokens[(int)binop8458] = 0.0000000000;
    tokens[(int)binop8440] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8498 = 145.0000000000 - 1.0000000000;
    double binop8499 = binop8498 * 3.0000000000;
    double cases8500;
    double binop8501 = pos < src_len;
    double charat8502 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8503 = charat8502 >= 48.0000000000;
    double charat8504 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8505 = charat8504 <= 57.0000000000;
    double binop8506 = binop8503 && binop8505;
    double binop8507 = binop8501 && binop8506;
    double binop8508 = pos < src_len;
    double charat8509 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8510 = charat8509 == 43.0000000000;
    double binop8511 = binop8508 && binop8510;
    double binop8512 = pos < src_len;
    double charat8513 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8514 = charat8513 == 42.0000000000;
    double binop8515 = binop8512 && binop8514;
    if (binop8507) {
        cases8500 = TOK_NUMBER;
    } else if (binop8511) {
        cases8500 = TOK_PLUS;
    } else if (binop8515) {
        cases8500 = TOK_MUL;
    } else if (1.0000000000) {
        cases8500 = 0.0000000000;
    } else { cases8500 = 0.0; }
    double binop8516 = 145.0000000000 - 1.0000000000;
    double binop8517 = binop8516 * 0.0000000000;
    double cases8518;
    double binop8519 = pos < src_len;
    if (binop8519) {
        cases8518 = pos;
    } else if (1.0000000000) {
        cases8518 = 0.0000000000;
    } else { cases8518 = 0.0; }
    double binop8520 = 145.0000000000 - 1.0000000000;
    double binop8521 = binop8520 * 0.0000000000;
    double cases8522;
    double binop8523 = pos < src_len;
    double charat8524 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8525 = charat8524 >= 48.0000000000;
    double charat8526 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8527 = charat8526 <= 57.0000000000;
    double binop8528 = binop8525 && binop8527;
    double binop8529 = binop8523 && binop8528;
    double binop8530 = pos < src_len;
    double charat8531 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8532 = charat8531 == 43.0000000000;
    double charat8533 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8534 = charat8533 == 42.0000000000;
    double binop8535 = binop8532 || binop8534;
    double binop8536 = binop8530 && binop8535;
    if (binop8529) {
    double binop8537 = pos + 2.0000000000;
        cases8522 = binop8537;
    } else if (binop8536) {
    double binop8538 = pos + 1.0000000000;
        cases8522 = binop8538;
    } else if (1.0000000000) {
        cases8522 = 0.0000000000;
    } else { cases8522 = 0.0; }
    double cases8539;
    double binop8540 = pos < src_len;
    double charat8541 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8542 = charat8541 >= 48.0000000000;
    double charat8543 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8544 = charat8543 <= 57.0000000000;
    double binop8545 = binop8542 && binop8544;
    double binop8546 = binop8540 && binop8545;
    double binop8547 = pos < src_len;
    double charat8548 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8549 = charat8548 == 43.0000000000;
    double charat8550 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8551 = charat8550 == 42.0000000000;
    double binop8552 = binop8549 || binop8551;
    double binop8553 = binop8547 && binop8552;
    if (binop8546) {
    double binop8554 = pos + 3.0000000000;
        cases8539 = binop8554;
    } else if (binop8553) {
    double binop8555 = pos + 2.0000000000;
        cases8539 = binop8555;
    } else if (1.0000000000) {
    double binop8556 = src_len + 1.0000000000;
        cases8539 = binop8556;
    } else { cases8539 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8521] = 0.0000000000;
    tokens[(int)binop8517] = 0.0000000000;
    tokens[(int)binop8499] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8557 = 146.0000000000 - 1.0000000000;
    double binop8558 = binop8557 * 3.0000000000;
    double cases8559;
    double binop8560 = pos < src_len;
    double charat8561 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8562 = charat8561 >= 48.0000000000;
    double charat8563 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8564 = charat8563 <= 57.0000000000;
    double binop8565 = binop8562 && binop8564;
    double binop8566 = binop8560 && binop8565;
    double binop8567 = pos < src_len;
    double charat8568 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8569 = charat8568 == 43.0000000000;
    double binop8570 = binop8567 && binop8569;
    double binop8571 = pos < src_len;
    double charat8572 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8573 = charat8572 == 42.0000000000;
    double binop8574 = binop8571 && binop8573;
    if (binop8566) {
        cases8559 = TOK_NUMBER;
    } else if (binop8570) {
        cases8559 = TOK_PLUS;
    } else if (binop8574) {
        cases8559 = TOK_MUL;
    } else if (1.0000000000) {
        cases8559 = 0.0000000000;
    } else { cases8559 = 0.0; }
    double binop8575 = 146.0000000000 - 1.0000000000;
    double binop8576 = binop8575 * 0.0000000000;
    double cases8577;
    double binop8578 = pos < src_len;
    if (binop8578) {
        cases8577 = pos;
    } else if (1.0000000000) {
        cases8577 = 0.0000000000;
    } else { cases8577 = 0.0; }
    double binop8579 = 146.0000000000 - 1.0000000000;
    double binop8580 = binop8579 * 0.0000000000;
    double cases8581;
    double binop8582 = pos < src_len;
    double charat8583 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8584 = charat8583 >= 48.0000000000;
    double charat8585 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8586 = charat8585 <= 57.0000000000;
    double binop8587 = binop8584 && binop8586;
    double binop8588 = binop8582 && binop8587;
    double binop8589 = pos < src_len;
    double charat8590 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8591 = charat8590 == 43.0000000000;
    double charat8592 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8593 = charat8592 == 42.0000000000;
    double binop8594 = binop8591 || binop8593;
    double binop8595 = binop8589 && binop8594;
    if (binop8588) {
    double binop8596 = pos + 2.0000000000;
        cases8581 = binop8596;
    } else if (binop8595) {
    double binop8597 = pos + 1.0000000000;
        cases8581 = binop8597;
    } else if (1.0000000000) {
        cases8581 = 0.0000000000;
    } else { cases8581 = 0.0; }
    double cases8598;
    double binop8599 = pos < src_len;
    double charat8600 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8601 = charat8600 >= 48.0000000000;
    double charat8602 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8603 = charat8602 <= 57.0000000000;
    double binop8604 = binop8601 && binop8603;
    double binop8605 = binop8599 && binop8604;
    double binop8606 = pos < src_len;
    double charat8607 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8608 = charat8607 == 43.0000000000;
    double charat8609 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8610 = charat8609 == 42.0000000000;
    double binop8611 = binop8608 || binop8610;
    double binop8612 = binop8606 && binop8611;
    if (binop8605) {
    double binop8613 = pos + 3.0000000000;
        cases8598 = binop8613;
    } else if (binop8612) {
    double binop8614 = pos + 2.0000000000;
        cases8598 = binop8614;
    } else if (1.0000000000) {
    double binop8615 = src_len + 1.0000000000;
        cases8598 = binop8615;
    } else { cases8598 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8580] = 0.0000000000;
    tokens[(int)binop8576] = 0.0000000000;
    tokens[(int)binop8558] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8616 = 147.0000000000 - 1.0000000000;
    double binop8617 = binop8616 * 3.0000000000;
    double cases8618;
    double binop8619 = pos < src_len;
    double charat8620 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8621 = charat8620 >= 48.0000000000;
    double charat8622 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8623 = charat8622 <= 57.0000000000;
    double binop8624 = binop8621 && binop8623;
    double binop8625 = binop8619 && binop8624;
    double binop8626 = pos < src_len;
    double charat8627 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8628 = charat8627 == 43.0000000000;
    double binop8629 = binop8626 && binop8628;
    double binop8630 = pos < src_len;
    double charat8631 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8632 = charat8631 == 42.0000000000;
    double binop8633 = binop8630 && binop8632;
    if (binop8625) {
        cases8618 = TOK_NUMBER;
    } else if (binop8629) {
        cases8618 = TOK_PLUS;
    } else if (binop8633) {
        cases8618 = TOK_MUL;
    } else if (1.0000000000) {
        cases8618 = 0.0000000000;
    } else { cases8618 = 0.0; }
    double binop8634 = 147.0000000000 - 1.0000000000;
    double binop8635 = binop8634 * 0.0000000000;
    double cases8636;
    double binop8637 = pos < src_len;
    if (binop8637) {
        cases8636 = pos;
    } else if (1.0000000000) {
        cases8636 = 0.0000000000;
    } else { cases8636 = 0.0; }
    double binop8638 = 147.0000000000 - 1.0000000000;
    double binop8639 = binop8638 * 0.0000000000;
    double cases8640;
    double binop8641 = pos < src_len;
    double charat8642 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8643 = charat8642 >= 48.0000000000;
    double charat8644 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8645 = charat8644 <= 57.0000000000;
    double binop8646 = binop8643 && binop8645;
    double binop8647 = binop8641 && binop8646;
    double binop8648 = pos < src_len;
    double charat8649 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8650 = charat8649 == 43.0000000000;
    double charat8651 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8652 = charat8651 == 42.0000000000;
    double binop8653 = binop8650 || binop8652;
    double binop8654 = binop8648 && binop8653;
    if (binop8647) {
    double binop8655 = pos + 2.0000000000;
        cases8640 = binop8655;
    } else if (binop8654) {
    double binop8656 = pos + 1.0000000000;
        cases8640 = binop8656;
    } else if (1.0000000000) {
        cases8640 = 0.0000000000;
    } else { cases8640 = 0.0; }
    double cases8657;
    double binop8658 = pos < src_len;
    double charat8659 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8660 = charat8659 >= 48.0000000000;
    double charat8661 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8662 = charat8661 <= 57.0000000000;
    double binop8663 = binop8660 && binop8662;
    double binop8664 = binop8658 && binop8663;
    double binop8665 = pos < src_len;
    double charat8666 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8667 = charat8666 == 43.0000000000;
    double charat8668 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8669 = charat8668 == 42.0000000000;
    double binop8670 = binop8667 || binop8669;
    double binop8671 = binop8665 && binop8670;
    if (binop8664) {
    double binop8672 = pos + 3.0000000000;
        cases8657 = binop8672;
    } else if (binop8671) {
    double binop8673 = pos + 2.0000000000;
        cases8657 = binop8673;
    } else if (1.0000000000) {
    double binop8674 = src_len + 1.0000000000;
        cases8657 = binop8674;
    } else { cases8657 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8639] = 0.0000000000;
    tokens[(int)binop8635] = 0.0000000000;
    tokens[(int)binop8617] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8675 = 148.0000000000 - 1.0000000000;
    double binop8676 = binop8675 * 3.0000000000;
    double cases8677;
    double binop8678 = pos < src_len;
    double charat8679 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8680 = charat8679 >= 48.0000000000;
    double charat8681 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8682 = charat8681 <= 57.0000000000;
    double binop8683 = binop8680 && binop8682;
    double binop8684 = binop8678 && binop8683;
    double binop8685 = pos < src_len;
    double charat8686 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8687 = charat8686 == 43.0000000000;
    double binop8688 = binop8685 && binop8687;
    double binop8689 = pos < src_len;
    double charat8690 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8691 = charat8690 == 42.0000000000;
    double binop8692 = binop8689 && binop8691;
    if (binop8684) {
        cases8677 = TOK_NUMBER;
    } else if (binop8688) {
        cases8677 = TOK_PLUS;
    } else if (binop8692) {
        cases8677 = TOK_MUL;
    } else if (1.0000000000) {
        cases8677 = 0.0000000000;
    } else { cases8677 = 0.0; }
    double binop8693 = 148.0000000000 - 1.0000000000;
    double binop8694 = binop8693 * 0.0000000000;
    double cases8695;
    double binop8696 = pos < src_len;
    if (binop8696) {
        cases8695 = pos;
    } else if (1.0000000000) {
        cases8695 = 0.0000000000;
    } else { cases8695 = 0.0; }
    double binop8697 = 148.0000000000 - 1.0000000000;
    double binop8698 = binop8697 * 0.0000000000;
    double cases8699;
    double binop8700 = pos < src_len;
    double charat8701 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8702 = charat8701 >= 48.0000000000;
    double charat8703 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8704 = charat8703 <= 57.0000000000;
    double binop8705 = binop8702 && binop8704;
    double binop8706 = binop8700 && binop8705;
    double binop8707 = pos < src_len;
    double charat8708 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8709 = charat8708 == 43.0000000000;
    double charat8710 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8711 = charat8710 == 42.0000000000;
    double binop8712 = binop8709 || binop8711;
    double binop8713 = binop8707 && binop8712;
    if (binop8706) {
    double binop8714 = pos + 2.0000000000;
        cases8699 = binop8714;
    } else if (binop8713) {
    double binop8715 = pos + 1.0000000000;
        cases8699 = binop8715;
    } else if (1.0000000000) {
        cases8699 = 0.0000000000;
    } else { cases8699 = 0.0; }
    double cases8716;
    double binop8717 = pos < src_len;
    double charat8718 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8719 = charat8718 >= 48.0000000000;
    double charat8720 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8721 = charat8720 <= 57.0000000000;
    double binop8722 = binop8719 && binop8721;
    double binop8723 = binop8717 && binop8722;
    double binop8724 = pos < src_len;
    double charat8725 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8726 = charat8725 == 43.0000000000;
    double charat8727 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8728 = charat8727 == 42.0000000000;
    double binop8729 = binop8726 || binop8728;
    double binop8730 = binop8724 && binop8729;
    if (binop8723) {
    double binop8731 = pos + 3.0000000000;
        cases8716 = binop8731;
    } else if (binop8730) {
    double binop8732 = pos + 2.0000000000;
        cases8716 = binop8732;
    } else if (1.0000000000) {
    double binop8733 = src_len + 1.0000000000;
        cases8716 = binop8733;
    } else { cases8716 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8698] = 0.0000000000;
    tokens[(int)binop8694] = 0.0000000000;
    tokens[(int)binop8676] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8734 = 149.0000000000 - 1.0000000000;
    double binop8735 = binop8734 * 3.0000000000;
    double cases8736;
    double binop8737 = pos < src_len;
    double charat8738 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8739 = charat8738 >= 48.0000000000;
    double charat8740 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8741 = charat8740 <= 57.0000000000;
    double binop8742 = binop8739 && binop8741;
    double binop8743 = binop8737 && binop8742;
    double binop8744 = pos < src_len;
    double charat8745 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8746 = charat8745 == 43.0000000000;
    double binop8747 = binop8744 && binop8746;
    double binop8748 = pos < src_len;
    double charat8749 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8750 = charat8749 == 42.0000000000;
    double binop8751 = binop8748 && binop8750;
    if (binop8743) {
        cases8736 = TOK_NUMBER;
    } else if (binop8747) {
        cases8736 = TOK_PLUS;
    } else if (binop8751) {
        cases8736 = TOK_MUL;
    } else if (1.0000000000) {
        cases8736 = 0.0000000000;
    } else { cases8736 = 0.0; }
    double binop8752 = 149.0000000000 - 1.0000000000;
    double binop8753 = binop8752 * 0.0000000000;
    double cases8754;
    double binop8755 = pos < src_len;
    if (binop8755) {
        cases8754 = pos;
    } else if (1.0000000000) {
        cases8754 = 0.0000000000;
    } else { cases8754 = 0.0; }
    double binop8756 = 149.0000000000 - 1.0000000000;
    double binop8757 = binop8756 * 0.0000000000;
    double cases8758;
    double binop8759 = pos < src_len;
    double charat8760 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8761 = charat8760 >= 48.0000000000;
    double charat8762 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8763 = charat8762 <= 57.0000000000;
    double binop8764 = binop8761 && binop8763;
    double binop8765 = binop8759 && binop8764;
    double binop8766 = pos < src_len;
    double charat8767 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8768 = charat8767 == 43.0000000000;
    double charat8769 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8770 = charat8769 == 42.0000000000;
    double binop8771 = binop8768 || binop8770;
    double binop8772 = binop8766 && binop8771;
    if (binop8765) {
    double binop8773 = pos + 2.0000000000;
        cases8758 = binop8773;
    } else if (binop8772) {
    double binop8774 = pos + 1.0000000000;
        cases8758 = binop8774;
    } else if (1.0000000000) {
        cases8758 = 0.0000000000;
    } else { cases8758 = 0.0; }
    double cases8775;
    double binop8776 = pos < src_len;
    double charat8777 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8778 = charat8777 >= 48.0000000000;
    double charat8779 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8780 = charat8779 <= 57.0000000000;
    double binop8781 = binop8778 && binop8780;
    double binop8782 = binop8776 && binop8781;
    double binop8783 = pos < src_len;
    double charat8784 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8785 = charat8784 == 43.0000000000;
    double charat8786 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8787 = charat8786 == 42.0000000000;
    double binop8788 = binop8785 || binop8787;
    double binop8789 = binop8783 && binop8788;
    if (binop8782) {
    double binop8790 = pos + 3.0000000000;
        cases8775 = binop8790;
    } else if (binop8789) {
    double binop8791 = pos + 2.0000000000;
        cases8775 = binop8791;
    } else if (1.0000000000) {
    double binop8792 = src_len + 1.0000000000;
        cases8775 = binop8792;
    } else { cases8775 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8757] = 0.0000000000;
    tokens[(int)binop8753] = 0.0000000000;
    tokens[(int)binop8735] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8793 = 150.0000000000 - 1.0000000000;
    double binop8794 = binop8793 * 3.0000000000;
    double cases8795;
    double binop8796 = pos < src_len;
    double charat8797 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8798 = charat8797 >= 48.0000000000;
    double charat8799 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8800 = charat8799 <= 57.0000000000;
    double binop8801 = binop8798 && binop8800;
    double binop8802 = binop8796 && binop8801;
    double binop8803 = pos < src_len;
    double charat8804 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8805 = charat8804 == 43.0000000000;
    double binop8806 = binop8803 && binop8805;
    double binop8807 = pos < src_len;
    double charat8808 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8809 = charat8808 == 42.0000000000;
    double binop8810 = binop8807 && binop8809;
    if (binop8802) {
        cases8795 = TOK_NUMBER;
    } else if (binop8806) {
        cases8795 = TOK_PLUS;
    } else if (binop8810) {
        cases8795 = TOK_MUL;
    } else if (1.0000000000) {
        cases8795 = 0.0000000000;
    } else { cases8795 = 0.0; }
    double binop8811 = 150.0000000000 - 1.0000000000;
    double binop8812 = binop8811 * 0.0000000000;
    double cases8813;
    double binop8814 = pos < src_len;
    if (binop8814) {
        cases8813 = pos;
    } else if (1.0000000000) {
        cases8813 = 0.0000000000;
    } else { cases8813 = 0.0; }
    double binop8815 = 150.0000000000 - 1.0000000000;
    double binop8816 = binop8815 * 0.0000000000;
    double cases8817;
    double binop8818 = pos < src_len;
    double charat8819 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8820 = charat8819 >= 48.0000000000;
    double charat8821 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8822 = charat8821 <= 57.0000000000;
    double binop8823 = binop8820 && binop8822;
    double binop8824 = binop8818 && binop8823;
    double binop8825 = pos < src_len;
    double charat8826 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8827 = charat8826 == 43.0000000000;
    double charat8828 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8829 = charat8828 == 42.0000000000;
    double binop8830 = binop8827 || binop8829;
    double binop8831 = binop8825 && binop8830;
    if (binop8824) {
    double binop8832 = pos + 2.0000000000;
        cases8817 = binop8832;
    } else if (binop8831) {
    double binop8833 = pos + 1.0000000000;
        cases8817 = binop8833;
    } else if (1.0000000000) {
        cases8817 = 0.0000000000;
    } else { cases8817 = 0.0; }
    double cases8834;
    double binop8835 = pos < src_len;
    double charat8836 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8837 = charat8836 >= 48.0000000000;
    double charat8838 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8839 = charat8838 <= 57.0000000000;
    double binop8840 = binop8837 && binop8839;
    double binop8841 = binop8835 && binop8840;
    double binop8842 = pos < src_len;
    double charat8843 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8844 = charat8843 == 43.0000000000;
    double charat8845 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8846 = charat8845 == 42.0000000000;
    double binop8847 = binop8844 || binop8846;
    double binop8848 = binop8842 && binop8847;
    if (binop8841) {
    double binop8849 = pos + 3.0000000000;
        cases8834 = binop8849;
    } else if (binop8848) {
    double binop8850 = pos + 2.0000000000;
        cases8834 = binop8850;
    } else if (1.0000000000) {
    double binop8851 = src_len + 1.0000000000;
        cases8834 = binop8851;
    } else { cases8834 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8816] = 0.0000000000;
    tokens[(int)binop8812] = 0.0000000000;
    tokens[(int)binop8794] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8852 = 151.0000000000 - 1.0000000000;
    double binop8853 = binop8852 * 3.0000000000;
    double cases8854;
    double binop8855 = pos < src_len;
    double charat8856 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8857 = charat8856 >= 48.0000000000;
    double charat8858 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8859 = charat8858 <= 57.0000000000;
    double binop8860 = binop8857 && binop8859;
    double binop8861 = binop8855 && binop8860;
    double binop8862 = pos < src_len;
    double charat8863 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8864 = charat8863 == 43.0000000000;
    double binop8865 = binop8862 && binop8864;
    double binop8866 = pos < src_len;
    double charat8867 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8868 = charat8867 == 42.0000000000;
    double binop8869 = binop8866 && binop8868;
    if (binop8861) {
        cases8854 = TOK_NUMBER;
    } else if (binop8865) {
        cases8854 = TOK_PLUS;
    } else if (binop8869) {
        cases8854 = TOK_MUL;
    } else if (1.0000000000) {
        cases8854 = 0.0000000000;
    } else { cases8854 = 0.0; }
    double binop8870 = 151.0000000000 - 1.0000000000;
    double binop8871 = binop8870 * 0.0000000000;
    double cases8872;
    double binop8873 = pos < src_len;
    if (binop8873) {
        cases8872 = pos;
    } else if (1.0000000000) {
        cases8872 = 0.0000000000;
    } else { cases8872 = 0.0; }
    double binop8874 = 151.0000000000 - 1.0000000000;
    double binop8875 = binop8874 * 0.0000000000;
    double cases8876;
    double binop8877 = pos < src_len;
    double charat8878 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8879 = charat8878 >= 48.0000000000;
    double charat8880 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8881 = charat8880 <= 57.0000000000;
    double binop8882 = binop8879 && binop8881;
    double binop8883 = binop8877 && binop8882;
    double binop8884 = pos < src_len;
    double charat8885 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8886 = charat8885 == 43.0000000000;
    double charat8887 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8888 = charat8887 == 42.0000000000;
    double binop8889 = binop8886 || binop8888;
    double binop8890 = binop8884 && binop8889;
    if (binop8883) {
    double binop8891 = pos + 2.0000000000;
        cases8876 = binop8891;
    } else if (binop8890) {
    double binop8892 = pos + 1.0000000000;
        cases8876 = binop8892;
    } else if (1.0000000000) {
        cases8876 = 0.0000000000;
    } else { cases8876 = 0.0; }
    double cases8893;
    double binop8894 = pos < src_len;
    double charat8895 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8896 = charat8895 >= 48.0000000000;
    double charat8897 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8898 = charat8897 <= 57.0000000000;
    double binop8899 = binop8896 && binop8898;
    double binop8900 = binop8894 && binop8899;
    double binop8901 = pos < src_len;
    double charat8902 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8903 = charat8902 == 43.0000000000;
    double charat8904 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8905 = charat8904 == 42.0000000000;
    double binop8906 = binop8903 || binop8905;
    double binop8907 = binop8901 && binop8906;
    if (binop8900) {
    double binop8908 = pos + 3.0000000000;
        cases8893 = binop8908;
    } else if (binop8907) {
    double binop8909 = pos + 2.0000000000;
        cases8893 = binop8909;
    } else if (1.0000000000) {
    double binop8910 = src_len + 1.0000000000;
        cases8893 = binop8910;
    } else { cases8893 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8875] = 0.0000000000;
    tokens[(int)binop8871] = 0.0000000000;
    tokens[(int)binop8853] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8911 = 152.0000000000 - 1.0000000000;
    double binop8912 = binop8911 * 3.0000000000;
    double cases8913;
    double binop8914 = pos < src_len;
    double charat8915 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8916 = charat8915 >= 48.0000000000;
    double charat8917 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8918 = charat8917 <= 57.0000000000;
    double binop8919 = binop8916 && binop8918;
    double binop8920 = binop8914 && binop8919;
    double binop8921 = pos < src_len;
    double charat8922 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8923 = charat8922 == 43.0000000000;
    double binop8924 = binop8921 && binop8923;
    double binop8925 = pos < src_len;
    double charat8926 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8927 = charat8926 == 42.0000000000;
    double binop8928 = binop8925 && binop8927;
    if (binop8920) {
        cases8913 = TOK_NUMBER;
    } else if (binop8924) {
        cases8913 = TOK_PLUS;
    } else if (binop8928) {
        cases8913 = TOK_MUL;
    } else if (1.0000000000) {
        cases8913 = 0.0000000000;
    } else { cases8913 = 0.0; }
    double binop8929 = 152.0000000000 - 1.0000000000;
    double binop8930 = binop8929 * 0.0000000000;
    double cases8931;
    double binop8932 = pos < src_len;
    if (binop8932) {
        cases8931 = pos;
    } else if (1.0000000000) {
        cases8931 = 0.0000000000;
    } else { cases8931 = 0.0; }
    double binop8933 = 152.0000000000 - 1.0000000000;
    double binop8934 = binop8933 * 0.0000000000;
    double cases8935;
    double binop8936 = pos < src_len;
    double charat8937 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8938 = charat8937 >= 48.0000000000;
    double charat8939 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8940 = charat8939 <= 57.0000000000;
    double binop8941 = binop8938 && binop8940;
    double binop8942 = binop8936 && binop8941;
    double binop8943 = pos < src_len;
    double charat8944 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8945 = charat8944 == 43.0000000000;
    double charat8946 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8947 = charat8946 == 42.0000000000;
    double binop8948 = binop8945 || binop8947;
    double binop8949 = binop8943 && binop8948;
    if (binop8942) {
    double binop8950 = pos + 2.0000000000;
        cases8935 = binop8950;
    } else if (binop8949) {
    double binop8951 = pos + 1.0000000000;
        cases8935 = binop8951;
    } else if (1.0000000000) {
        cases8935 = 0.0000000000;
    } else { cases8935 = 0.0; }
    double cases8952;
    double binop8953 = pos < src_len;
    double charat8954 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8955 = charat8954 >= 48.0000000000;
    double charat8956 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8957 = charat8956 <= 57.0000000000;
    double binop8958 = binop8955 && binop8957;
    double binop8959 = binop8953 && binop8958;
    double binop8960 = pos < src_len;
    double charat8961 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8962 = charat8961 == 43.0000000000;
    double charat8963 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8964 = charat8963 == 42.0000000000;
    double binop8965 = binop8962 || binop8964;
    double binop8966 = binop8960 && binop8965;
    if (binop8959) {
    double binop8967 = pos + 3.0000000000;
        cases8952 = binop8967;
    } else if (binop8966) {
    double binop8968 = pos + 2.0000000000;
        cases8952 = binop8968;
    } else if (1.0000000000) {
    double binop8969 = src_len + 1.0000000000;
        cases8952 = binop8969;
    } else { cases8952 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8934] = 0.0000000000;
    tokens[(int)binop8930] = 0.0000000000;
    tokens[(int)binop8912] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop8970 = 153.0000000000 - 1.0000000000;
    double binop8971 = binop8970 * 3.0000000000;
    double cases8972;
    double binop8973 = pos < src_len;
    double charat8974 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8975 = charat8974 >= 48.0000000000;
    double charat8976 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8977 = charat8976 <= 57.0000000000;
    double binop8978 = binop8975 && binop8977;
    double binop8979 = binop8973 && binop8978;
    double binop8980 = pos < src_len;
    double charat8981 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8982 = charat8981 == 43.0000000000;
    double binop8983 = binop8980 && binop8982;
    double binop8984 = pos < src_len;
    double charat8985 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8986 = charat8985 == 42.0000000000;
    double binop8987 = binop8984 && binop8986;
    if (binop8979) {
        cases8972 = TOK_NUMBER;
    } else if (binop8983) {
        cases8972 = TOK_PLUS;
    } else if (binop8987) {
        cases8972 = TOK_MUL;
    } else if (1.0000000000) {
        cases8972 = 0.0000000000;
    } else { cases8972 = 0.0; }
    double binop8988 = 153.0000000000 - 1.0000000000;
    double binop8989 = binop8988 * 0.0000000000;
    double cases8990;
    double binop8991 = pos < src_len;
    if (binop8991) {
        cases8990 = pos;
    } else if (1.0000000000) {
        cases8990 = 0.0000000000;
    } else { cases8990 = 0.0; }
    double binop8992 = 153.0000000000 - 1.0000000000;
    double binop8993 = binop8992 * 0.0000000000;
    double cases8994;
    double binop8995 = pos < src_len;
    double charat8996 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8997 = charat8996 >= 48.0000000000;
    double charat8998 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop8999 = charat8998 <= 57.0000000000;
    double binop9000 = binop8997 && binop8999;
    double binop9001 = binop8995 && binop9000;
    double binop9002 = pos < src_len;
    double charat9003 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9004 = charat9003 == 43.0000000000;
    double charat9005 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9006 = charat9005 == 42.0000000000;
    double binop9007 = binop9004 || binop9006;
    double binop9008 = binop9002 && binop9007;
    if (binop9001) {
    double binop9009 = pos + 2.0000000000;
        cases8994 = binop9009;
    } else if (binop9008) {
    double binop9010 = pos + 1.0000000000;
        cases8994 = binop9010;
    } else if (1.0000000000) {
        cases8994 = 0.0000000000;
    } else { cases8994 = 0.0; }
    double cases9011;
    double binop9012 = pos < src_len;
    double charat9013 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9014 = charat9013 >= 48.0000000000;
    double charat9015 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9016 = charat9015 <= 57.0000000000;
    double binop9017 = binop9014 && binop9016;
    double binop9018 = binop9012 && binop9017;
    double binop9019 = pos < src_len;
    double charat9020 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9021 = charat9020 == 43.0000000000;
    double charat9022 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9023 = charat9022 == 42.0000000000;
    double binop9024 = binop9021 || binop9023;
    double binop9025 = binop9019 && binop9024;
    if (binop9018) {
    double binop9026 = pos + 3.0000000000;
        cases9011 = binop9026;
    } else if (binop9025) {
    double binop9027 = pos + 2.0000000000;
        cases9011 = binop9027;
    } else if (1.0000000000) {
    double binop9028 = src_len + 1.0000000000;
        cases9011 = binop9028;
    } else { cases9011 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop8993] = 0.0000000000;
    tokens[(int)binop8989] = 0.0000000000;
    tokens[(int)binop8971] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9029 = 154.0000000000 - 1.0000000000;
    double binop9030 = binop9029 * 3.0000000000;
    double cases9031;
    double binop9032 = pos < src_len;
    double charat9033 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9034 = charat9033 >= 48.0000000000;
    double charat9035 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9036 = charat9035 <= 57.0000000000;
    double binop9037 = binop9034 && binop9036;
    double binop9038 = binop9032 && binop9037;
    double binop9039 = pos < src_len;
    double charat9040 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9041 = charat9040 == 43.0000000000;
    double binop9042 = binop9039 && binop9041;
    double binop9043 = pos < src_len;
    double charat9044 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9045 = charat9044 == 42.0000000000;
    double binop9046 = binop9043 && binop9045;
    if (binop9038) {
        cases9031 = TOK_NUMBER;
    } else if (binop9042) {
        cases9031 = TOK_PLUS;
    } else if (binop9046) {
        cases9031 = TOK_MUL;
    } else if (1.0000000000) {
        cases9031 = 0.0000000000;
    } else { cases9031 = 0.0; }
    double binop9047 = 154.0000000000 - 1.0000000000;
    double binop9048 = binop9047 * 0.0000000000;
    double cases9049;
    double binop9050 = pos < src_len;
    if (binop9050) {
        cases9049 = pos;
    } else if (1.0000000000) {
        cases9049 = 0.0000000000;
    } else { cases9049 = 0.0; }
    double binop9051 = 154.0000000000 - 1.0000000000;
    double binop9052 = binop9051 * 0.0000000000;
    double cases9053;
    double binop9054 = pos < src_len;
    double charat9055 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9056 = charat9055 >= 48.0000000000;
    double charat9057 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9058 = charat9057 <= 57.0000000000;
    double binop9059 = binop9056 && binop9058;
    double binop9060 = binop9054 && binop9059;
    double binop9061 = pos < src_len;
    double charat9062 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9063 = charat9062 == 43.0000000000;
    double charat9064 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9065 = charat9064 == 42.0000000000;
    double binop9066 = binop9063 || binop9065;
    double binop9067 = binop9061 && binop9066;
    if (binop9060) {
    double binop9068 = pos + 2.0000000000;
        cases9053 = binop9068;
    } else if (binop9067) {
    double binop9069 = pos + 1.0000000000;
        cases9053 = binop9069;
    } else if (1.0000000000) {
        cases9053 = 0.0000000000;
    } else { cases9053 = 0.0; }
    double cases9070;
    double binop9071 = pos < src_len;
    double charat9072 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9073 = charat9072 >= 48.0000000000;
    double charat9074 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9075 = charat9074 <= 57.0000000000;
    double binop9076 = binop9073 && binop9075;
    double binop9077 = binop9071 && binop9076;
    double binop9078 = pos < src_len;
    double charat9079 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9080 = charat9079 == 43.0000000000;
    double charat9081 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9082 = charat9081 == 42.0000000000;
    double binop9083 = binop9080 || binop9082;
    double binop9084 = binop9078 && binop9083;
    if (binop9077) {
    double binop9085 = pos + 3.0000000000;
        cases9070 = binop9085;
    } else if (binop9084) {
    double binop9086 = pos + 2.0000000000;
        cases9070 = binop9086;
    } else if (1.0000000000) {
    double binop9087 = src_len + 1.0000000000;
        cases9070 = binop9087;
    } else { cases9070 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9052] = 0.0000000000;
    tokens[(int)binop9048] = 0.0000000000;
    tokens[(int)binop9030] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9088 = 155.0000000000 - 1.0000000000;
    double binop9089 = binop9088 * 3.0000000000;
    double cases9090;
    double binop9091 = pos < src_len;
    double charat9092 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9093 = charat9092 >= 48.0000000000;
    double charat9094 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9095 = charat9094 <= 57.0000000000;
    double binop9096 = binop9093 && binop9095;
    double binop9097 = binop9091 && binop9096;
    double binop9098 = pos < src_len;
    double charat9099 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9100 = charat9099 == 43.0000000000;
    double binop9101 = binop9098 && binop9100;
    double binop9102 = pos < src_len;
    double charat9103 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9104 = charat9103 == 42.0000000000;
    double binop9105 = binop9102 && binop9104;
    if (binop9097) {
        cases9090 = TOK_NUMBER;
    } else if (binop9101) {
        cases9090 = TOK_PLUS;
    } else if (binop9105) {
        cases9090 = TOK_MUL;
    } else if (1.0000000000) {
        cases9090 = 0.0000000000;
    } else { cases9090 = 0.0; }
    double binop9106 = 155.0000000000 - 1.0000000000;
    double binop9107 = binop9106 * 0.0000000000;
    double cases9108;
    double binop9109 = pos < src_len;
    if (binop9109) {
        cases9108 = pos;
    } else if (1.0000000000) {
        cases9108 = 0.0000000000;
    } else { cases9108 = 0.0; }
    double binop9110 = 155.0000000000 - 1.0000000000;
    double binop9111 = binop9110 * 0.0000000000;
    double cases9112;
    double binop9113 = pos < src_len;
    double charat9114 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9115 = charat9114 >= 48.0000000000;
    double charat9116 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9117 = charat9116 <= 57.0000000000;
    double binop9118 = binop9115 && binop9117;
    double binop9119 = binop9113 && binop9118;
    double binop9120 = pos < src_len;
    double charat9121 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9122 = charat9121 == 43.0000000000;
    double charat9123 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9124 = charat9123 == 42.0000000000;
    double binop9125 = binop9122 || binop9124;
    double binop9126 = binop9120 && binop9125;
    if (binop9119) {
    double binop9127 = pos + 2.0000000000;
        cases9112 = binop9127;
    } else if (binop9126) {
    double binop9128 = pos + 1.0000000000;
        cases9112 = binop9128;
    } else if (1.0000000000) {
        cases9112 = 0.0000000000;
    } else { cases9112 = 0.0; }
    double cases9129;
    double binop9130 = pos < src_len;
    double charat9131 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9132 = charat9131 >= 48.0000000000;
    double charat9133 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9134 = charat9133 <= 57.0000000000;
    double binop9135 = binop9132 && binop9134;
    double binop9136 = binop9130 && binop9135;
    double binop9137 = pos < src_len;
    double charat9138 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9139 = charat9138 == 43.0000000000;
    double charat9140 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9141 = charat9140 == 42.0000000000;
    double binop9142 = binop9139 || binop9141;
    double binop9143 = binop9137 && binop9142;
    if (binop9136) {
    double binop9144 = pos + 3.0000000000;
        cases9129 = binop9144;
    } else if (binop9143) {
    double binop9145 = pos + 2.0000000000;
        cases9129 = binop9145;
    } else if (1.0000000000) {
    double binop9146 = src_len + 1.0000000000;
        cases9129 = binop9146;
    } else { cases9129 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9111] = 0.0000000000;
    tokens[(int)binop9107] = 0.0000000000;
    tokens[(int)binop9089] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9147 = 156.0000000000 - 1.0000000000;
    double binop9148 = binop9147 * 3.0000000000;
    double cases9149;
    double binop9150 = pos < src_len;
    double charat9151 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9152 = charat9151 >= 48.0000000000;
    double charat9153 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9154 = charat9153 <= 57.0000000000;
    double binop9155 = binop9152 && binop9154;
    double binop9156 = binop9150 && binop9155;
    double binop9157 = pos < src_len;
    double charat9158 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9159 = charat9158 == 43.0000000000;
    double binop9160 = binop9157 && binop9159;
    double binop9161 = pos < src_len;
    double charat9162 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9163 = charat9162 == 42.0000000000;
    double binop9164 = binop9161 && binop9163;
    if (binop9156) {
        cases9149 = TOK_NUMBER;
    } else if (binop9160) {
        cases9149 = TOK_PLUS;
    } else if (binop9164) {
        cases9149 = TOK_MUL;
    } else if (1.0000000000) {
        cases9149 = 0.0000000000;
    } else { cases9149 = 0.0; }
    double binop9165 = 156.0000000000 - 1.0000000000;
    double binop9166 = binop9165 * 0.0000000000;
    double cases9167;
    double binop9168 = pos < src_len;
    if (binop9168) {
        cases9167 = pos;
    } else if (1.0000000000) {
        cases9167 = 0.0000000000;
    } else { cases9167 = 0.0; }
    double binop9169 = 156.0000000000 - 1.0000000000;
    double binop9170 = binop9169 * 0.0000000000;
    double cases9171;
    double binop9172 = pos < src_len;
    double charat9173 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9174 = charat9173 >= 48.0000000000;
    double charat9175 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9176 = charat9175 <= 57.0000000000;
    double binop9177 = binop9174 && binop9176;
    double binop9178 = binop9172 && binop9177;
    double binop9179 = pos < src_len;
    double charat9180 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9181 = charat9180 == 43.0000000000;
    double charat9182 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9183 = charat9182 == 42.0000000000;
    double binop9184 = binop9181 || binop9183;
    double binop9185 = binop9179 && binop9184;
    if (binop9178) {
    double binop9186 = pos + 2.0000000000;
        cases9171 = binop9186;
    } else if (binop9185) {
    double binop9187 = pos + 1.0000000000;
        cases9171 = binop9187;
    } else if (1.0000000000) {
        cases9171 = 0.0000000000;
    } else { cases9171 = 0.0; }
    double cases9188;
    double binop9189 = pos < src_len;
    double charat9190 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9191 = charat9190 >= 48.0000000000;
    double charat9192 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9193 = charat9192 <= 57.0000000000;
    double binop9194 = binop9191 && binop9193;
    double binop9195 = binop9189 && binop9194;
    double binop9196 = pos < src_len;
    double charat9197 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9198 = charat9197 == 43.0000000000;
    double charat9199 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9200 = charat9199 == 42.0000000000;
    double binop9201 = binop9198 || binop9200;
    double binop9202 = binop9196 && binop9201;
    if (binop9195) {
    double binop9203 = pos + 3.0000000000;
        cases9188 = binop9203;
    } else if (binop9202) {
    double binop9204 = pos + 2.0000000000;
        cases9188 = binop9204;
    } else if (1.0000000000) {
    double binop9205 = src_len + 1.0000000000;
        cases9188 = binop9205;
    } else { cases9188 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9170] = 0.0000000000;
    tokens[(int)binop9166] = 0.0000000000;
    tokens[(int)binop9148] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9206 = 157.0000000000 - 1.0000000000;
    double binop9207 = binop9206 * 3.0000000000;
    double cases9208;
    double binop9209 = pos < src_len;
    double charat9210 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9211 = charat9210 >= 48.0000000000;
    double charat9212 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9213 = charat9212 <= 57.0000000000;
    double binop9214 = binop9211 && binop9213;
    double binop9215 = binop9209 && binop9214;
    double binop9216 = pos < src_len;
    double charat9217 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9218 = charat9217 == 43.0000000000;
    double binop9219 = binop9216 && binop9218;
    double binop9220 = pos < src_len;
    double charat9221 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9222 = charat9221 == 42.0000000000;
    double binop9223 = binop9220 && binop9222;
    if (binop9215) {
        cases9208 = TOK_NUMBER;
    } else if (binop9219) {
        cases9208 = TOK_PLUS;
    } else if (binop9223) {
        cases9208 = TOK_MUL;
    } else if (1.0000000000) {
        cases9208 = 0.0000000000;
    } else { cases9208 = 0.0; }
    double binop9224 = 157.0000000000 - 1.0000000000;
    double binop9225 = binop9224 * 0.0000000000;
    double cases9226;
    double binop9227 = pos < src_len;
    if (binop9227) {
        cases9226 = pos;
    } else if (1.0000000000) {
        cases9226 = 0.0000000000;
    } else { cases9226 = 0.0; }
    double binop9228 = 157.0000000000 - 1.0000000000;
    double binop9229 = binop9228 * 0.0000000000;
    double cases9230;
    double binop9231 = pos < src_len;
    double charat9232 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9233 = charat9232 >= 48.0000000000;
    double charat9234 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9235 = charat9234 <= 57.0000000000;
    double binop9236 = binop9233 && binop9235;
    double binop9237 = binop9231 && binop9236;
    double binop9238 = pos < src_len;
    double charat9239 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9240 = charat9239 == 43.0000000000;
    double charat9241 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9242 = charat9241 == 42.0000000000;
    double binop9243 = binop9240 || binop9242;
    double binop9244 = binop9238 && binop9243;
    if (binop9237) {
    double binop9245 = pos + 2.0000000000;
        cases9230 = binop9245;
    } else if (binop9244) {
    double binop9246 = pos + 1.0000000000;
        cases9230 = binop9246;
    } else if (1.0000000000) {
        cases9230 = 0.0000000000;
    } else { cases9230 = 0.0; }
    double cases9247;
    double binop9248 = pos < src_len;
    double charat9249 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9250 = charat9249 >= 48.0000000000;
    double charat9251 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9252 = charat9251 <= 57.0000000000;
    double binop9253 = binop9250 && binop9252;
    double binop9254 = binop9248 && binop9253;
    double binop9255 = pos < src_len;
    double charat9256 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9257 = charat9256 == 43.0000000000;
    double charat9258 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9259 = charat9258 == 42.0000000000;
    double binop9260 = binop9257 || binop9259;
    double binop9261 = binop9255 && binop9260;
    if (binop9254) {
    double binop9262 = pos + 3.0000000000;
        cases9247 = binop9262;
    } else if (binop9261) {
    double binop9263 = pos + 2.0000000000;
        cases9247 = binop9263;
    } else if (1.0000000000) {
    double binop9264 = src_len + 1.0000000000;
        cases9247 = binop9264;
    } else { cases9247 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9229] = 0.0000000000;
    tokens[(int)binop9225] = 0.0000000000;
    tokens[(int)binop9207] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9265 = 158.0000000000 - 1.0000000000;
    double binop9266 = binop9265 * 3.0000000000;
    double cases9267;
    double binop9268 = pos < src_len;
    double charat9269 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9270 = charat9269 >= 48.0000000000;
    double charat9271 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9272 = charat9271 <= 57.0000000000;
    double binop9273 = binop9270 && binop9272;
    double binop9274 = binop9268 && binop9273;
    double binop9275 = pos < src_len;
    double charat9276 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9277 = charat9276 == 43.0000000000;
    double binop9278 = binop9275 && binop9277;
    double binop9279 = pos < src_len;
    double charat9280 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9281 = charat9280 == 42.0000000000;
    double binop9282 = binop9279 && binop9281;
    if (binop9274) {
        cases9267 = TOK_NUMBER;
    } else if (binop9278) {
        cases9267 = TOK_PLUS;
    } else if (binop9282) {
        cases9267 = TOK_MUL;
    } else if (1.0000000000) {
        cases9267 = 0.0000000000;
    } else { cases9267 = 0.0; }
    double binop9283 = 158.0000000000 - 1.0000000000;
    double binop9284 = binop9283 * 0.0000000000;
    double cases9285;
    double binop9286 = pos < src_len;
    if (binop9286) {
        cases9285 = pos;
    } else if (1.0000000000) {
        cases9285 = 0.0000000000;
    } else { cases9285 = 0.0; }
    double binop9287 = 158.0000000000 - 1.0000000000;
    double binop9288 = binop9287 * 0.0000000000;
    double cases9289;
    double binop9290 = pos < src_len;
    double charat9291 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9292 = charat9291 >= 48.0000000000;
    double charat9293 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9294 = charat9293 <= 57.0000000000;
    double binop9295 = binop9292 && binop9294;
    double binop9296 = binop9290 && binop9295;
    double binop9297 = pos < src_len;
    double charat9298 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9299 = charat9298 == 43.0000000000;
    double charat9300 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9301 = charat9300 == 42.0000000000;
    double binop9302 = binop9299 || binop9301;
    double binop9303 = binop9297 && binop9302;
    if (binop9296) {
    double binop9304 = pos + 2.0000000000;
        cases9289 = binop9304;
    } else if (binop9303) {
    double binop9305 = pos + 1.0000000000;
        cases9289 = binop9305;
    } else if (1.0000000000) {
        cases9289 = 0.0000000000;
    } else { cases9289 = 0.0; }
    double cases9306;
    double binop9307 = pos < src_len;
    double charat9308 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9309 = charat9308 >= 48.0000000000;
    double charat9310 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9311 = charat9310 <= 57.0000000000;
    double binop9312 = binop9309 && binop9311;
    double binop9313 = binop9307 && binop9312;
    double binop9314 = pos < src_len;
    double charat9315 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9316 = charat9315 == 43.0000000000;
    double charat9317 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9318 = charat9317 == 42.0000000000;
    double binop9319 = binop9316 || binop9318;
    double binop9320 = binop9314 && binop9319;
    if (binop9313) {
    double binop9321 = pos + 3.0000000000;
        cases9306 = binop9321;
    } else if (binop9320) {
    double binop9322 = pos + 2.0000000000;
        cases9306 = binop9322;
    } else if (1.0000000000) {
    double binop9323 = src_len + 1.0000000000;
        cases9306 = binop9323;
    } else { cases9306 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9288] = 0.0000000000;
    tokens[(int)binop9284] = 0.0000000000;
    tokens[(int)binop9266] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9324 = 159.0000000000 - 1.0000000000;
    double binop9325 = binop9324 * 3.0000000000;
    double cases9326;
    double binop9327 = pos < src_len;
    double charat9328 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9329 = charat9328 >= 48.0000000000;
    double charat9330 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9331 = charat9330 <= 57.0000000000;
    double binop9332 = binop9329 && binop9331;
    double binop9333 = binop9327 && binop9332;
    double binop9334 = pos < src_len;
    double charat9335 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9336 = charat9335 == 43.0000000000;
    double binop9337 = binop9334 && binop9336;
    double binop9338 = pos < src_len;
    double charat9339 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9340 = charat9339 == 42.0000000000;
    double binop9341 = binop9338 && binop9340;
    if (binop9333) {
        cases9326 = TOK_NUMBER;
    } else if (binop9337) {
        cases9326 = TOK_PLUS;
    } else if (binop9341) {
        cases9326 = TOK_MUL;
    } else if (1.0000000000) {
        cases9326 = 0.0000000000;
    } else { cases9326 = 0.0; }
    double binop9342 = 159.0000000000 - 1.0000000000;
    double binop9343 = binop9342 * 0.0000000000;
    double cases9344;
    double binop9345 = pos < src_len;
    if (binop9345) {
        cases9344 = pos;
    } else if (1.0000000000) {
        cases9344 = 0.0000000000;
    } else { cases9344 = 0.0; }
    double binop9346 = 159.0000000000 - 1.0000000000;
    double binop9347 = binop9346 * 0.0000000000;
    double cases9348;
    double binop9349 = pos < src_len;
    double charat9350 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9351 = charat9350 >= 48.0000000000;
    double charat9352 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9353 = charat9352 <= 57.0000000000;
    double binop9354 = binop9351 && binop9353;
    double binop9355 = binop9349 && binop9354;
    double binop9356 = pos < src_len;
    double charat9357 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9358 = charat9357 == 43.0000000000;
    double charat9359 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9360 = charat9359 == 42.0000000000;
    double binop9361 = binop9358 || binop9360;
    double binop9362 = binop9356 && binop9361;
    if (binop9355) {
    double binop9363 = pos + 2.0000000000;
        cases9348 = binop9363;
    } else if (binop9362) {
    double binop9364 = pos + 1.0000000000;
        cases9348 = binop9364;
    } else if (1.0000000000) {
        cases9348 = 0.0000000000;
    } else { cases9348 = 0.0; }
    double cases9365;
    double binop9366 = pos < src_len;
    double charat9367 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9368 = charat9367 >= 48.0000000000;
    double charat9369 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9370 = charat9369 <= 57.0000000000;
    double binop9371 = binop9368 && binop9370;
    double binop9372 = binop9366 && binop9371;
    double binop9373 = pos < src_len;
    double charat9374 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9375 = charat9374 == 43.0000000000;
    double charat9376 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9377 = charat9376 == 42.0000000000;
    double binop9378 = binop9375 || binop9377;
    double binop9379 = binop9373 && binop9378;
    if (binop9372) {
    double binop9380 = pos + 3.0000000000;
        cases9365 = binop9380;
    } else if (binop9379) {
    double binop9381 = pos + 2.0000000000;
        cases9365 = binop9381;
    } else if (1.0000000000) {
    double binop9382 = src_len + 1.0000000000;
        cases9365 = binop9382;
    } else { cases9365 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9347] = 0.0000000000;
    tokens[(int)binop9343] = 0.0000000000;
    tokens[(int)binop9325] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9383 = 160.0000000000 - 1.0000000000;
    double binop9384 = binop9383 * 3.0000000000;
    double cases9385;
    double binop9386 = pos < src_len;
    double charat9387 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9388 = charat9387 >= 48.0000000000;
    double charat9389 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9390 = charat9389 <= 57.0000000000;
    double binop9391 = binop9388 && binop9390;
    double binop9392 = binop9386 && binop9391;
    double binop9393 = pos < src_len;
    double charat9394 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9395 = charat9394 == 43.0000000000;
    double binop9396 = binop9393 && binop9395;
    double binop9397 = pos < src_len;
    double charat9398 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9399 = charat9398 == 42.0000000000;
    double binop9400 = binop9397 && binop9399;
    if (binop9392) {
        cases9385 = TOK_NUMBER;
    } else if (binop9396) {
        cases9385 = TOK_PLUS;
    } else if (binop9400) {
        cases9385 = TOK_MUL;
    } else if (1.0000000000) {
        cases9385 = 0.0000000000;
    } else { cases9385 = 0.0; }
    double binop9401 = 160.0000000000 - 1.0000000000;
    double binop9402 = binop9401 * 0.0000000000;
    double cases9403;
    double binop9404 = pos < src_len;
    if (binop9404) {
        cases9403 = pos;
    } else if (1.0000000000) {
        cases9403 = 0.0000000000;
    } else { cases9403 = 0.0; }
    double binop9405 = 160.0000000000 - 1.0000000000;
    double binop9406 = binop9405 * 0.0000000000;
    double cases9407;
    double binop9408 = pos < src_len;
    double charat9409 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9410 = charat9409 >= 48.0000000000;
    double charat9411 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9412 = charat9411 <= 57.0000000000;
    double binop9413 = binop9410 && binop9412;
    double binop9414 = binop9408 && binop9413;
    double binop9415 = pos < src_len;
    double charat9416 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9417 = charat9416 == 43.0000000000;
    double charat9418 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9419 = charat9418 == 42.0000000000;
    double binop9420 = binop9417 || binop9419;
    double binop9421 = binop9415 && binop9420;
    if (binop9414) {
    double binop9422 = pos + 2.0000000000;
        cases9407 = binop9422;
    } else if (binop9421) {
    double binop9423 = pos + 1.0000000000;
        cases9407 = binop9423;
    } else if (1.0000000000) {
        cases9407 = 0.0000000000;
    } else { cases9407 = 0.0; }
    double cases9424;
    double binop9425 = pos < src_len;
    double charat9426 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9427 = charat9426 >= 48.0000000000;
    double charat9428 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9429 = charat9428 <= 57.0000000000;
    double binop9430 = binop9427 && binop9429;
    double binop9431 = binop9425 && binop9430;
    double binop9432 = pos < src_len;
    double charat9433 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9434 = charat9433 == 43.0000000000;
    double charat9435 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9436 = charat9435 == 42.0000000000;
    double binop9437 = binop9434 || binop9436;
    double binop9438 = binop9432 && binop9437;
    if (binop9431) {
    double binop9439 = pos + 3.0000000000;
        cases9424 = binop9439;
    } else if (binop9438) {
    double binop9440 = pos + 2.0000000000;
        cases9424 = binop9440;
    } else if (1.0000000000) {
    double binop9441 = src_len + 1.0000000000;
        cases9424 = binop9441;
    } else { cases9424 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9406] = 0.0000000000;
    tokens[(int)binop9402] = 0.0000000000;
    tokens[(int)binop9384] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9442 = 161.0000000000 - 1.0000000000;
    double binop9443 = binop9442 * 3.0000000000;
    double cases9444;
    double binop9445 = pos < src_len;
    double charat9446 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9447 = charat9446 >= 48.0000000000;
    double charat9448 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9449 = charat9448 <= 57.0000000000;
    double binop9450 = binop9447 && binop9449;
    double binop9451 = binop9445 && binop9450;
    double binop9452 = pos < src_len;
    double charat9453 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9454 = charat9453 == 43.0000000000;
    double binop9455 = binop9452 && binop9454;
    double binop9456 = pos < src_len;
    double charat9457 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9458 = charat9457 == 42.0000000000;
    double binop9459 = binop9456 && binop9458;
    if (binop9451) {
        cases9444 = TOK_NUMBER;
    } else if (binop9455) {
        cases9444 = TOK_PLUS;
    } else if (binop9459) {
        cases9444 = TOK_MUL;
    } else if (1.0000000000) {
        cases9444 = 0.0000000000;
    } else { cases9444 = 0.0; }
    double binop9460 = 161.0000000000 - 1.0000000000;
    double binop9461 = binop9460 * 0.0000000000;
    double cases9462;
    double binop9463 = pos < src_len;
    if (binop9463) {
        cases9462 = pos;
    } else if (1.0000000000) {
        cases9462 = 0.0000000000;
    } else { cases9462 = 0.0; }
    double binop9464 = 161.0000000000 - 1.0000000000;
    double binop9465 = binop9464 * 0.0000000000;
    double cases9466;
    double binop9467 = pos < src_len;
    double charat9468 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9469 = charat9468 >= 48.0000000000;
    double charat9470 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9471 = charat9470 <= 57.0000000000;
    double binop9472 = binop9469 && binop9471;
    double binop9473 = binop9467 && binop9472;
    double binop9474 = pos < src_len;
    double charat9475 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9476 = charat9475 == 43.0000000000;
    double charat9477 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9478 = charat9477 == 42.0000000000;
    double binop9479 = binop9476 || binop9478;
    double binop9480 = binop9474 && binop9479;
    if (binop9473) {
    double binop9481 = pos + 2.0000000000;
        cases9466 = binop9481;
    } else if (binop9480) {
    double binop9482 = pos + 1.0000000000;
        cases9466 = binop9482;
    } else if (1.0000000000) {
        cases9466 = 0.0000000000;
    } else { cases9466 = 0.0; }
    double cases9483;
    double binop9484 = pos < src_len;
    double charat9485 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9486 = charat9485 >= 48.0000000000;
    double charat9487 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9488 = charat9487 <= 57.0000000000;
    double binop9489 = binop9486 && binop9488;
    double binop9490 = binop9484 && binop9489;
    double binop9491 = pos < src_len;
    double charat9492 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9493 = charat9492 == 43.0000000000;
    double charat9494 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9495 = charat9494 == 42.0000000000;
    double binop9496 = binop9493 || binop9495;
    double binop9497 = binop9491 && binop9496;
    if (binop9490) {
    double binop9498 = pos + 3.0000000000;
        cases9483 = binop9498;
    } else if (binop9497) {
    double binop9499 = pos + 2.0000000000;
        cases9483 = binop9499;
    } else if (1.0000000000) {
    double binop9500 = src_len + 1.0000000000;
        cases9483 = binop9500;
    } else { cases9483 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9465] = 0.0000000000;
    tokens[(int)binop9461] = 0.0000000000;
    tokens[(int)binop9443] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9501 = 162.0000000000 - 1.0000000000;
    double binop9502 = binop9501 * 3.0000000000;
    double cases9503;
    double binop9504 = pos < src_len;
    double charat9505 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9506 = charat9505 >= 48.0000000000;
    double charat9507 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9508 = charat9507 <= 57.0000000000;
    double binop9509 = binop9506 && binop9508;
    double binop9510 = binop9504 && binop9509;
    double binop9511 = pos < src_len;
    double charat9512 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9513 = charat9512 == 43.0000000000;
    double binop9514 = binop9511 && binop9513;
    double binop9515 = pos < src_len;
    double charat9516 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9517 = charat9516 == 42.0000000000;
    double binop9518 = binop9515 && binop9517;
    if (binop9510) {
        cases9503 = TOK_NUMBER;
    } else if (binop9514) {
        cases9503 = TOK_PLUS;
    } else if (binop9518) {
        cases9503 = TOK_MUL;
    } else if (1.0000000000) {
        cases9503 = 0.0000000000;
    } else { cases9503 = 0.0; }
    double binop9519 = 162.0000000000 - 1.0000000000;
    double binop9520 = binop9519 * 0.0000000000;
    double cases9521;
    double binop9522 = pos < src_len;
    if (binop9522) {
        cases9521 = pos;
    } else if (1.0000000000) {
        cases9521 = 0.0000000000;
    } else { cases9521 = 0.0; }
    double binop9523 = 162.0000000000 - 1.0000000000;
    double binop9524 = binop9523 * 0.0000000000;
    double cases9525;
    double binop9526 = pos < src_len;
    double charat9527 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9528 = charat9527 >= 48.0000000000;
    double charat9529 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9530 = charat9529 <= 57.0000000000;
    double binop9531 = binop9528 && binop9530;
    double binop9532 = binop9526 && binop9531;
    double binop9533 = pos < src_len;
    double charat9534 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9535 = charat9534 == 43.0000000000;
    double charat9536 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9537 = charat9536 == 42.0000000000;
    double binop9538 = binop9535 || binop9537;
    double binop9539 = binop9533 && binop9538;
    if (binop9532) {
    double binop9540 = pos + 2.0000000000;
        cases9525 = binop9540;
    } else if (binop9539) {
    double binop9541 = pos + 1.0000000000;
        cases9525 = binop9541;
    } else if (1.0000000000) {
        cases9525 = 0.0000000000;
    } else { cases9525 = 0.0; }
    double cases9542;
    double binop9543 = pos < src_len;
    double charat9544 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9545 = charat9544 >= 48.0000000000;
    double charat9546 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9547 = charat9546 <= 57.0000000000;
    double binop9548 = binop9545 && binop9547;
    double binop9549 = binop9543 && binop9548;
    double binop9550 = pos < src_len;
    double charat9551 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9552 = charat9551 == 43.0000000000;
    double charat9553 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9554 = charat9553 == 42.0000000000;
    double binop9555 = binop9552 || binop9554;
    double binop9556 = binop9550 && binop9555;
    if (binop9549) {
    double binop9557 = pos + 3.0000000000;
        cases9542 = binop9557;
    } else if (binop9556) {
    double binop9558 = pos + 2.0000000000;
        cases9542 = binop9558;
    } else if (1.0000000000) {
    double binop9559 = src_len + 1.0000000000;
        cases9542 = binop9559;
    } else { cases9542 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9524] = 0.0000000000;
    tokens[(int)binop9520] = 0.0000000000;
    tokens[(int)binop9502] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9560 = 163.0000000000 - 1.0000000000;
    double binop9561 = binop9560 * 3.0000000000;
    double cases9562;
    double binop9563 = pos < src_len;
    double charat9564 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9565 = charat9564 >= 48.0000000000;
    double charat9566 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9567 = charat9566 <= 57.0000000000;
    double binop9568 = binop9565 && binop9567;
    double binop9569 = binop9563 && binop9568;
    double binop9570 = pos < src_len;
    double charat9571 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9572 = charat9571 == 43.0000000000;
    double binop9573 = binop9570 && binop9572;
    double binop9574 = pos < src_len;
    double charat9575 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9576 = charat9575 == 42.0000000000;
    double binop9577 = binop9574 && binop9576;
    if (binop9569) {
        cases9562 = TOK_NUMBER;
    } else if (binop9573) {
        cases9562 = TOK_PLUS;
    } else if (binop9577) {
        cases9562 = TOK_MUL;
    } else if (1.0000000000) {
        cases9562 = 0.0000000000;
    } else { cases9562 = 0.0; }
    double binop9578 = 163.0000000000 - 1.0000000000;
    double binop9579 = binop9578 * 0.0000000000;
    double cases9580;
    double binop9581 = pos < src_len;
    if (binop9581) {
        cases9580 = pos;
    } else if (1.0000000000) {
        cases9580 = 0.0000000000;
    } else { cases9580 = 0.0; }
    double binop9582 = 163.0000000000 - 1.0000000000;
    double binop9583 = binop9582 * 0.0000000000;
    double cases9584;
    double binop9585 = pos < src_len;
    double charat9586 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9587 = charat9586 >= 48.0000000000;
    double charat9588 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9589 = charat9588 <= 57.0000000000;
    double binop9590 = binop9587 && binop9589;
    double binop9591 = binop9585 && binop9590;
    double binop9592 = pos < src_len;
    double charat9593 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9594 = charat9593 == 43.0000000000;
    double charat9595 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9596 = charat9595 == 42.0000000000;
    double binop9597 = binop9594 || binop9596;
    double binop9598 = binop9592 && binop9597;
    if (binop9591) {
    double binop9599 = pos + 2.0000000000;
        cases9584 = binop9599;
    } else if (binop9598) {
    double binop9600 = pos + 1.0000000000;
        cases9584 = binop9600;
    } else if (1.0000000000) {
        cases9584 = 0.0000000000;
    } else { cases9584 = 0.0; }
    double cases9601;
    double binop9602 = pos < src_len;
    double charat9603 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9604 = charat9603 >= 48.0000000000;
    double charat9605 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9606 = charat9605 <= 57.0000000000;
    double binop9607 = binop9604 && binop9606;
    double binop9608 = binop9602 && binop9607;
    double binop9609 = pos < src_len;
    double charat9610 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9611 = charat9610 == 43.0000000000;
    double charat9612 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9613 = charat9612 == 42.0000000000;
    double binop9614 = binop9611 || binop9613;
    double binop9615 = binop9609 && binop9614;
    if (binop9608) {
    double binop9616 = pos + 3.0000000000;
        cases9601 = binop9616;
    } else if (binop9615) {
    double binop9617 = pos + 2.0000000000;
        cases9601 = binop9617;
    } else if (1.0000000000) {
    double binop9618 = src_len + 1.0000000000;
        cases9601 = binop9618;
    } else { cases9601 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9583] = 0.0000000000;
    tokens[(int)binop9579] = 0.0000000000;
    tokens[(int)binop9561] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9619 = 164.0000000000 - 1.0000000000;
    double binop9620 = binop9619 * 3.0000000000;
    double cases9621;
    double binop9622 = pos < src_len;
    double charat9623 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9624 = charat9623 >= 48.0000000000;
    double charat9625 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9626 = charat9625 <= 57.0000000000;
    double binop9627 = binop9624 && binop9626;
    double binop9628 = binop9622 && binop9627;
    double binop9629 = pos < src_len;
    double charat9630 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9631 = charat9630 == 43.0000000000;
    double binop9632 = binop9629 && binop9631;
    double binop9633 = pos < src_len;
    double charat9634 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9635 = charat9634 == 42.0000000000;
    double binop9636 = binop9633 && binop9635;
    if (binop9628) {
        cases9621 = TOK_NUMBER;
    } else if (binop9632) {
        cases9621 = TOK_PLUS;
    } else if (binop9636) {
        cases9621 = TOK_MUL;
    } else if (1.0000000000) {
        cases9621 = 0.0000000000;
    } else { cases9621 = 0.0; }
    double binop9637 = 164.0000000000 - 1.0000000000;
    double binop9638 = binop9637 * 0.0000000000;
    double cases9639;
    double binop9640 = pos < src_len;
    if (binop9640) {
        cases9639 = pos;
    } else if (1.0000000000) {
        cases9639 = 0.0000000000;
    } else { cases9639 = 0.0; }
    double binop9641 = 164.0000000000 - 1.0000000000;
    double binop9642 = binop9641 * 0.0000000000;
    double cases9643;
    double binop9644 = pos < src_len;
    double charat9645 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9646 = charat9645 >= 48.0000000000;
    double charat9647 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9648 = charat9647 <= 57.0000000000;
    double binop9649 = binop9646 && binop9648;
    double binop9650 = binop9644 && binop9649;
    double binop9651 = pos < src_len;
    double charat9652 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9653 = charat9652 == 43.0000000000;
    double charat9654 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9655 = charat9654 == 42.0000000000;
    double binop9656 = binop9653 || binop9655;
    double binop9657 = binop9651 && binop9656;
    if (binop9650) {
    double binop9658 = pos + 2.0000000000;
        cases9643 = binop9658;
    } else if (binop9657) {
    double binop9659 = pos + 1.0000000000;
        cases9643 = binop9659;
    } else if (1.0000000000) {
        cases9643 = 0.0000000000;
    } else { cases9643 = 0.0; }
    double cases9660;
    double binop9661 = pos < src_len;
    double charat9662 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9663 = charat9662 >= 48.0000000000;
    double charat9664 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9665 = charat9664 <= 57.0000000000;
    double binop9666 = binop9663 && binop9665;
    double binop9667 = binop9661 && binop9666;
    double binop9668 = pos < src_len;
    double charat9669 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9670 = charat9669 == 43.0000000000;
    double charat9671 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9672 = charat9671 == 42.0000000000;
    double binop9673 = binop9670 || binop9672;
    double binop9674 = binop9668 && binop9673;
    if (binop9667) {
    double binop9675 = pos + 3.0000000000;
        cases9660 = binop9675;
    } else if (binop9674) {
    double binop9676 = pos + 2.0000000000;
        cases9660 = binop9676;
    } else if (1.0000000000) {
    double binop9677 = src_len + 1.0000000000;
        cases9660 = binop9677;
    } else { cases9660 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9642] = 0.0000000000;
    tokens[(int)binop9638] = 0.0000000000;
    tokens[(int)binop9620] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9678 = 165.0000000000 - 1.0000000000;
    double binop9679 = binop9678 * 3.0000000000;
    double cases9680;
    double binop9681 = pos < src_len;
    double charat9682 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9683 = charat9682 >= 48.0000000000;
    double charat9684 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9685 = charat9684 <= 57.0000000000;
    double binop9686 = binop9683 && binop9685;
    double binop9687 = binop9681 && binop9686;
    double binop9688 = pos < src_len;
    double charat9689 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9690 = charat9689 == 43.0000000000;
    double binop9691 = binop9688 && binop9690;
    double binop9692 = pos < src_len;
    double charat9693 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9694 = charat9693 == 42.0000000000;
    double binop9695 = binop9692 && binop9694;
    if (binop9687) {
        cases9680 = TOK_NUMBER;
    } else if (binop9691) {
        cases9680 = TOK_PLUS;
    } else if (binop9695) {
        cases9680 = TOK_MUL;
    } else if (1.0000000000) {
        cases9680 = 0.0000000000;
    } else { cases9680 = 0.0; }
    double binop9696 = 165.0000000000 - 1.0000000000;
    double binop9697 = binop9696 * 0.0000000000;
    double cases9698;
    double binop9699 = pos < src_len;
    if (binop9699) {
        cases9698 = pos;
    } else if (1.0000000000) {
        cases9698 = 0.0000000000;
    } else { cases9698 = 0.0; }
    double binop9700 = 165.0000000000 - 1.0000000000;
    double binop9701 = binop9700 * 0.0000000000;
    double cases9702;
    double binop9703 = pos < src_len;
    double charat9704 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9705 = charat9704 >= 48.0000000000;
    double charat9706 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9707 = charat9706 <= 57.0000000000;
    double binop9708 = binop9705 && binop9707;
    double binop9709 = binop9703 && binop9708;
    double binop9710 = pos < src_len;
    double charat9711 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9712 = charat9711 == 43.0000000000;
    double charat9713 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9714 = charat9713 == 42.0000000000;
    double binop9715 = binop9712 || binop9714;
    double binop9716 = binop9710 && binop9715;
    if (binop9709) {
    double binop9717 = pos + 2.0000000000;
        cases9702 = binop9717;
    } else if (binop9716) {
    double binop9718 = pos + 1.0000000000;
        cases9702 = binop9718;
    } else if (1.0000000000) {
        cases9702 = 0.0000000000;
    } else { cases9702 = 0.0; }
    double cases9719;
    double binop9720 = pos < src_len;
    double charat9721 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9722 = charat9721 >= 48.0000000000;
    double charat9723 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9724 = charat9723 <= 57.0000000000;
    double binop9725 = binop9722 && binop9724;
    double binop9726 = binop9720 && binop9725;
    double binop9727 = pos < src_len;
    double charat9728 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9729 = charat9728 == 43.0000000000;
    double charat9730 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9731 = charat9730 == 42.0000000000;
    double binop9732 = binop9729 || binop9731;
    double binop9733 = binop9727 && binop9732;
    if (binop9726) {
    double binop9734 = pos + 3.0000000000;
        cases9719 = binop9734;
    } else if (binop9733) {
    double binop9735 = pos + 2.0000000000;
        cases9719 = binop9735;
    } else if (1.0000000000) {
    double binop9736 = src_len + 1.0000000000;
        cases9719 = binop9736;
    } else { cases9719 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9701] = 0.0000000000;
    tokens[(int)binop9697] = 0.0000000000;
    tokens[(int)binop9679] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9737 = 166.0000000000 - 1.0000000000;
    double binop9738 = binop9737 * 3.0000000000;
    double cases9739;
    double binop9740 = pos < src_len;
    double charat9741 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9742 = charat9741 >= 48.0000000000;
    double charat9743 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9744 = charat9743 <= 57.0000000000;
    double binop9745 = binop9742 && binop9744;
    double binop9746 = binop9740 && binop9745;
    double binop9747 = pos < src_len;
    double charat9748 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9749 = charat9748 == 43.0000000000;
    double binop9750 = binop9747 && binop9749;
    double binop9751 = pos < src_len;
    double charat9752 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9753 = charat9752 == 42.0000000000;
    double binop9754 = binop9751 && binop9753;
    if (binop9746) {
        cases9739 = TOK_NUMBER;
    } else if (binop9750) {
        cases9739 = TOK_PLUS;
    } else if (binop9754) {
        cases9739 = TOK_MUL;
    } else if (1.0000000000) {
        cases9739 = 0.0000000000;
    } else { cases9739 = 0.0; }
    double binop9755 = 166.0000000000 - 1.0000000000;
    double binop9756 = binop9755 * 0.0000000000;
    double cases9757;
    double binop9758 = pos < src_len;
    if (binop9758) {
        cases9757 = pos;
    } else if (1.0000000000) {
        cases9757 = 0.0000000000;
    } else { cases9757 = 0.0; }
    double binop9759 = 166.0000000000 - 1.0000000000;
    double binop9760 = binop9759 * 0.0000000000;
    double cases9761;
    double binop9762 = pos < src_len;
    double charat9763 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9764 = charat9763 >= 48.0000000000;
    double charat9765 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9766 = charat9765 <= 57.0000000000;
    double binop9767 = binop9764 && binop9766;
    double binop9768 = binop9762 && binop9767;
    double binop9769 = pos < src_len;
    double charat9770 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9771 = charat9770 == 43.0000000000;
    double charat9772 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9773 = charat9772 == 42.0000000000;
    double binop9774 = binop9771 || binop9773;
    double binop9775 = binop9769 && binop9774;
    if (binop9768) {
    double binop9776 = pos + 2.0000000000;
        cases9761 = binop9776;
    } else if (binop9775) {
    double binop9777 = pos + 1.0000000000;
        cases9761 = binop9777;
    } else if (1.0000000000) {
        cases9761 = 0.0000000000;
    } else { cases9761 = 0.0; }
    double cases9778;
    double binop9779 = pos < src_len;
    double charat9780 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9781 = charat9780 >= 48.0000000000;
    double charat9782 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9783 = charat9782 <= 57.0000000000;
    double binop9784 = binop9781 && binop9783;
    double binop9785 = binop9779 && binop9784;
    double binop9786 = pos < src_len;
    double charat9787 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9788 = charat9787 == 43.0000000000;
    double charat9789 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9790 = charat9789 == 42.0000000000;
    double binop9791 = binop9788 || binop9790;
    double binop9792 = binop9786 && binop9791;
    if (binop9785) {
    double binop9793 = pos + 3.0000000000;
        cases9778 = binop9793;
    } else if (binop9792) {
    double binop9794 = pos + 2.0000000000;
        cases9778 = binop9794;
    } else if (1.0000000000) {
    double binop9795 = src_len + 1.0000000000;
        cases9778 = binop9795;
    } else { cases9778 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9760] = 0.0000000000;
    tokens[(int)binop9756] = 0.0000000000;
    tokens[(int)binop9738] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9796 = 167.0000000000 - 1.0000000000;
    double binop9797 = binop9796 * 3.0000000000;
    double cases9798;
    double binop9799 = pos < src_len;
    double charat9800 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9801 = charat9800 >= 48.0000000000;
    double charat9802 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9803 = charat9802 <= 57.0000000000;
    double binop9804 = binop9801 && binop9803;
    double binop9805 = binop9799 && binop9804;
    double binop9806 = pos < src_len;
    double charat9807 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9808 = charat9807 == 43.0000000000;
    double binop9809 = binop9806 && binop9808;
    double binop9810 = pos < src_len;
    double charat9811 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9812 = charat9811 == 42.0000000000;
    double binop9813 = binop9810 && binop9812;
    if (binop9805) {
        cases9798 = TOK_NUMBER;
    } else if (binop9809) {
        cases9798 = TOK_PLUS;
    } else if (binop9813) {
        cases9798 = TOK_MUL;
    } else if (1.0000000000) {
        cases9798 = 0.0000000000;
    } else { cases9798 = 0.0; }
    double binop9814 = 167.0000000000 - 1.0000000000;
    double binop9815 = binop9814 * 0.0000000000;
    double cases9816;
    double binop9817 = pos < src_len;
    if (binop9817) {
        cases9816 = pos;
    } else if (1.0000000000) {
        cases9816 = 0.0000000000;
    } else { cases9816 = 0.0; }
    double binop9818 = 167.0000000000 - 1.0000000000;
    double binop9819 = binop9818 * 0.0000000000;
    double cases9820;
    double binop9821 = pos < src_len;
    double charat9822 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9823 = charat9822 >= 48.0000000000;
    double charat9824 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9825 = charat9824 <= 57.0000000000;
    double binop9826 = binop9823 && binop9825;
    double binop9827 = binop9821 && binop9826;
    double binop9828 = pos < src_len;
    double charat9829 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9830 = charat9829 == 43.0000000000;
    double charat9831 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9832 = charat9831 == 42.0000000000;
    double binop9833 = binop9830 || binop9832;
    double binop9834 = binop9828 && binop9833;
    if (binop9827) {
    double binop9835 = pos + 2.0000000000;
        cases9820 = binop9835;
    } else if (binop9834) {
    double binop9836 = pos + 1.0000000000;
        cases9820 = binop9836;
    } else if (1.0000000000) {
        cases9820 = 0.0000000000;
    } else { cases9820 = 0.0; }
    double cases9837;
    double binop9838 = pos < src_len;
    double charat9839 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9840 = charat9839 >= 48.0000000000;
    double charat9841 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9842 = charat9841 <= 57.0000000000;
    double binop9843 = binop9840 && binop9842;
    double binop9844 = binop9838 && binop9843;
    double binop9845 = pos < src_len;
    double charat9846 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9847 = charat9846 == 43.0000000000;
    double charat9848 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9849 = charat9848 == 42.0000000000;
    double binop9850 = binop9847 || binop9849;
    double binop9851 = binop9845 && binop9850;
    if (binop9844) {
    double binop9852 = pos + 3.0000000000;
        cases9837 = binop9852;
    } else if (binop9851) {
    double binop9853 = pos + 2.0000000000;
        cases9837 = binop9853;
    } else if (1.0000000000) {
    double binop9854 = src_len + 1.0000000000;
        cases9837 = binop9854;
    } else { cases9837 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9819] = 0.0000000000;
    tokens[(int)binop9815] = 0.0000000000;
    tokens[(int)binop9797] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9855 = 168.0000000000 - 1.0000000000;
    double binop9856 = binop9855 * 3.0000000000;
    double cases9857;
    double binop9858 = pos < src_len;
    double charat9859 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9860 = charat9859 >= 48.0000000000;
    double charat9861 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9862 = charat9861 <= 57.0000000000;
    double binop9863 = binop9860 && binop9862;
    double binop9864 = binop9858 && binop9863;
    double binop9865 = pos < src_len;
    double charat9866 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9867 = charat9866 == 43.0000000000;
    double binop9868 = binop9865 && binop9867;
    double binop9869 = pos < src_len;
    double charat9870 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9871 = charat9870 == 42.0000000000;
    double binop9872 = binop9869 && binop9871;
    if (binop9864) {
        cases9857 = TOK_NUMBER;
    } else if (binop9868) {
        cases9857 = TOK_PLUS;
    } else if (binop9872) {
        cases9857 = TOK_MUL;
    } else if (1.0000000000) {
        cases9857 = 0.0000000000;
    } else { cases9857 = 0.0; }
    double binop9873 = 168.0000000000 - 1.0000000000;
    double binop9874 = binop9873 * 0.0000000000;
    double cases9875;
    double binop9876 = pos < src_len;
    if (binop9876) {
        cases9875 = pos;
    } else if (1.0000000000) {
        cases9875 = 0.0000000000;
    } else { cases9875 = 0.0; }
    double binop9877 = 168.0000000000 - 1.0000000000;
    double binop9878 = binop9877 * 0.0000000000;
    double cases9879;
    double binop9880 = pos < src_len;
    double charat9881 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9882 = charat9881 >= 48.0000000000;
    double charat9883 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9884 = charat9883 <= 57.0000000000;
    double binop9885 = binop9882 && binop9884;
    double binop9886 = binop9880 && binop9885;
    double binop9887 = pos < src_len;
    double charat9888 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9889 = charat9888 == 43.0000000000;
    double charat9890 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9891 = charat9890 == 42.0000000000;
    double binop9892 = binop9889 || binop9891;
    double binop9893 = binop9887 && binop9892;
    if (binop9886) {
    double binop9894 = pos + 2.0000000000;
        cases9879 = binop9894;
    } else if (binop9893) {
    double binop9895 = pos + 1.0000000000;
        cases9879 = binop9895;
    } else if (1.0000000000) {
        cases9879 = 0.0000000000;
    } else { cases9879 = 0.0; }
    double cases9896;
    double binop9897 = pos < src_len;
    double charat9898 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9899 = charat9898 >= 48.0000000000;
    double charat9900 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9901 = charat9900 <= 57.0000000000;
    double binop9902 = binop9899 && binop9901;
    double binop9903 = binop9897 && binop9902;
    double binop9904 = pos < src_len;
    double charat9905 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9906 = charat9905 == 43.0000000000;
    double charat9907 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9908 = charat9907 == 42.0000000000;
    double binop9909 = binop9906 || binop9908;
    double binop9910 = binop9904 && binop9909;
    if (binop9903) {
    double binop9911 = pos + 3.0000000000;
        cases9896 = binop9911;
    } else if (binop9910) {
    double binop9912 = pos + 2.0000000000;
        cases9896 = binop9912;
    } else if (1.0000000000) {
    double binop9913 = src_len + 1.0000000000;
        cases9896 = binop9913;
    } else { cases9896 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9878] = 0.0000000000;
    tokens[(int)binop9874] = 0.0000000000;
    tokens[(int)binop9856] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9914 = 169.0000000000 - 1.0000000000;
    double binop9915 = binop9914 * 3.0000000000;
    double cases9916;
    double binop9917 = pos < src_len;
    double charat9918 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9919 = charat9918 >= 48.0000000000;
    double charat9920 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9921 = charat9920 <= 57.0000000000;
    double binop9922 = binop9919 && binop9921;
    double binop9923 = binop9917 && binop9922;
    double binop9924 = pos < src_len;
    double charat9925 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9926 = charat9925 == 43.0000000000;
    double binop9927 = binop9924 && binop9926;
    double binop9928 = pos < src_len;
    double charat9929 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9930 = charat9929 == 42.0000000000;
    double binop9931 = binop9928 && binop9930;
    if (binop9923) {
        cases9916 = TOK_NUMBER;
    } else if (binop9927) {
        cases9916 = TOK_PLUS;
    } else if (binop9931) {
        cases9916 = TOK_MUL;
    } else if (1.0000000000) {
        cases9916 = 0.0000000000;
    } else { cases9916 = 0.0; }
    double binop9932 = 169.0000000000 - 1.0000000000;
    double binop9933 = binop9932 * 0.0000000000;
    double cases9934;
    double binop9935 = pos < src_len;
    if (binop9935) {
        cases9934 = pos;
    } else if (1.0000000000) {
        cases9934 = 0.0000000000;
    } else { cases9934 = 0.0; }
    double binop9936 = 169.0000000000 - 1.0000000000;
    double binop9937 = binop9936 * 0.0000000000;
    double cases9938;
    double binop9939 = pos < src_len;
    double charat9940 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9941 = charat9940 >= 48.0000000000;
    double charat9942 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9943 = charat9942 <= 57.0000000000;
    double binop9944 = binop9941 && binop9943;
    double binop9945 = binop9939 && binop9944;
    double binop9946 = pos < src_len;
    double charat9947 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9948 = charat9947 == 43.0000000000;
    double charat9949 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9950 = charat9949 == 42.0000000000;
    double binop9951 = binop9948 || binop9950;
    double binop9952 = binop9946 && binop9951;
    if (binop9945) {
    double binop9953 = pos + 2.0000000000;
        cases9938 = binop9953;
    } else if (binop9952) {
    double binop9954 = pos + 1.0000000000;
        cases9938 = binop9954;
    } else if (1.0000000000) {
        cases9938 = 0.0000000000;
    } else { cases9938 = 0.0; }
    double cases9955;
    double binop9956 = pos < src_len;
    double charat9957 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9958 = charat9957 >= 48.0000000000;
    double charat9959 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9960 = charat9959 <= 57.0000000000;
    double binop9961 = binop9958 && binop9960;
    double binop9962 = binop9956 && binop9961;
    double binop9963 = pos < src_len;
    double charat9964 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9965 = charat9964 == 43.0000000000;
    double charat9966 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9967 = charat9966 == 42.0000000000;
    double binop9968 = binop9965 || binop9967;
    double binop9969 = binop9963 && binop9968;
    if (binop9962) {
    double binop9970 = pos + 3.0000000000;
        cases9955 = binop9970;
    } else if (binop9969) {
    double binop9971 = pos + 2.0000000000;
        cases9955 = binop9971;
    } else if (1.0000000000) {
    double binop9972 = src_len + 1.0000000000;
        cases9955 = binop9972;
    } else { cases9955 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9937] = 0.0000000000;
    tokens[(int)binop9933] = 0.0000000000;
    tokens[(int)binop9915] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop9973 = 170.0000000000 - 1.0000000000;
    double binop9974 = binop9973 * 3.0000000000;
    double cases9975;
    double binop9976 = pos < src_len;
    double charat9977 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9978 = charat9977 >= 48.0000000000;
    double charat9979 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9980 = charat9979 <= 57.0000000000;
    double binop9981 = binop9978 && binop9980;
    double binop9982 = binop9976 && binop9981;
    double binop9983 = pos < src_len;
    double charat9984 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9985 = charat9984 == 43.0000000000;
    double binop9986 = binop9983 && binop9985;
    double binop9987 = pos < src_len;
    double charat9988 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop9989 = charat9988 == 42.0000000000;
    double binop9990 = binop9987 && binop9989;
    if (binop9982) {
        cases9975 = TOK_NUMBER;
    } else if (binop9986) {
        cases9975 = TOK_PLUS;
    } else if (binop9990) {
        cases9975 = TOK_MUL;
    } else if (1.0000000000) {
        cases9975 = 0.0000000000;
    } else { cases9975 = 0.0; }
    double binop9991 = 170.0000000000 - 1.0000000000;
    double binop9992 = binop9991 * 0.0000000000;
    double cases9993;
    double binop9994 = pos < src_len;
    if (binop9994) {
        cases9993 = pos;
    } else if (1.0000000000) {
        cases9993 = 0.0000000000;
    } else { cases9993 = 0.0; }
    double binop9995 = 170.0000000000 - 1.0000000000;
    double binop9996 = binop9995 * 0.0000000000;
    double cases9997;
    double binop9998 = pos < src_len;
    double charat9999 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10000 = charat9999 >= 48.0000000000;
    double charat10001 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10002 = charat10001 <= 57.0000000000;
    double binop10003 = binop10000 && binop10002;
    double binop10004 = binop9998 && binop10003;
    double binop10005 = pos < src_len;
    double charat10006 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10007 = charat10006 == 43.0000000000;
    double charat10008 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10009 = charat10008 == 42.0000000000;
    double binop10010 = binop10007 || binop10009;
    double binop10011 = binop10005 && binop10010;
    if (binop10004) {
    double binop10012 = pos + 2.0000000000;
        cases9997 = binop10012;
    } else if (binop10011) {
    double binop10013 = pos + 1.0000000000;
        cases9997 = binop10013;
    } else if (1.0000000000) {
        cases9997 = 0.0000000000;
    } else { cases9997 = 0.0; }
    double cases10014;
    double binop10015 = pos < src_len;
    double charat10016 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10017 = charat10016 >= 48.0000000000;
    double charat10018 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10019 = charat10018 <= 57.0000000000;
    double binop10020 = binop10017 && binop10019;
    double binop10021 = binop10015 && binop10020;
    double binop10022 = pos < src_len;
    double charat10023 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10024 = charat10023 == 43.0000000000;
    double charat10025 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10026 = charat10025 == 42.0000000000;
    double binop10027 = binop10024 || binop10026;
    double binop10028 = binop10022 && binop10027;
    if (binop10021) {
    double binop10029 = pos + 3.0000000000;
        cases10014 = binop10029;
    } else if (binop10028) {
    double binop10030 = pos + 2.0000000000;
        cases10014 = binop10030;
    } else if (1.0000000000) {
    double binop10031 = src_len + 1.0000000000;
        cases10014 = binop10031;
    } else { cases10014 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop9996] = 0.0000000000;
    tokens[(int)binop9992] = 0.0000000000;
    tokens[(int)binop9974] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10032 = 171.0000000000 - 1.0000000000;
    double binop10033 = binop10032 * 3.0000000000;
    double cases10034;
    double binop10035 = pos < src_len;
    double charat10036 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10037 = charat10036 >= 48.0000000000;
    double charat10038 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10039 = charat10038 <= 57.0000000000;
    double binop10040 = binop10037 && binop10039;
    double binop10041 = binop10035 && binop10040;
    double binop10042 = pos < src_len;
    double charat10043 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10044 = charat10043 == 43.0000000000;
    double binop10045 = binop10042 && binop10044;
    double binop10046 = pos < src_len;
    double charat10047 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10048 = charat10047 == 42.0000000000;
    double binop10049 = binop10046 && binop10048;
    if (binop10041) {
        cases10034 = TOK_NUMBER;
    } else if (binop10045) {
        cases10034 = TOK_PLUS;
    } else if (binop10049) {
        cases10034 = TOK_MUL;
    } else if (1.0000000000) {
        cases10034 = 0.0000000000;
    } else { cases10034 = 0.0; }
    double binop10050 = 171.0000000000 - 1.0000000000;
    double binop10051 = binop10050 * 0.0000000000;
    double cases10052;
    double binop10053 = pos < src_len;
    if (binop10053) {
        cases10052 = pos;
    } else if (1.0000000000) {
        cases10052 = 0.0000000000;
    } else { cases10052 = 0.0; }
    double binop10054 = 171.0000000000 - 1.0000000000;
    double binop10055 = binop10054 * 0.0000000000;
    double cases10056;
    double binop10057 = pos < src_len;
    double charat10058 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10059 = charat10058 >= 48.0000000000;
    double charat10060 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10061 = charat10060 <= 57.0000000000;
    double binop10062 = binop10059 && binop10061;
    double binop10063 = binop10057 && binop10062;
    double binop10064 = pos < src_len;
    double charat10065 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10066 = charat10065 == 43.0000000000;
    double charat10067 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10068 = charat10067 == 42.0000000000;
    double binop10069 = binop10066 || binop10068;
    double binop10070 = binop10064 && binop10069;
    if (binop10063) {
    double binop10071 = pos + 2.0000000000;
        cases10056 = binop10071;
    } else if (binop10070) {
    double binop10072 = pos + 1.0000000000;
        cases10056 = binop10072;
    } else if (1.0000000000) {
        cases10056 = 0.0000000000;
    } else { cases10056 = 0.0; }
    double cases10073;
    double binop10074 = pos < src_len;
    double charat10075 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10076 = charat10075 >= 48.0000000000;
    double charat10077 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10078 = charat10077 <= 57.0000000000;
    double binop10079 = binop10076 && binop10078;
    double binop10080 = binop10074 && binop10079;
    double binop10081 = pos < src_len;
    double charat10082 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10083 = charat10082 == 43.0000000000;
    double charat10084 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10085 = charat10084 == 42.0000000000;
    double binop10086 = binop10083 || binop10085;
    double binop10087 = binop10081 && binop10086;
    if (binop10080) {
    double binop10088 = pos + 3.0000000000;
        cases10073 = binop10088;
    } else if (binop10087) {
    double binop10089 = pos + 2.0000000000;
        cases10073 = binop10089;
    } else if (1.0000000000) {
    double binop10090 = src_len + 1.0000000000;
        cases10073 = binop10090;
    } else { cases10073 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10055] = 0.0000000000;
    tokens[(int)binop10051] = 0.0000000000;
    tokens[(int)binop10033] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10091 = 172.0000000000 - 1.0000000000;
    double binop10092 = binop10091 * 3.0000000000;
    double cases10093;
    double binop10094 = pos < src_len;
    double charat10095 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10096 = charat10095 >= 48.0000000000;
    double charat10097 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10098 = charat10097 <= 57.0000000000;
    double binop10099 = binop10096 && binop10098;
    double binop10100 = binop10094 && binop10099;
    double binop10101 = pos < src_len;
    double charat10102 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10103 = charat10102 == 43.0000000000;
    double binop10104 = binop10101 && binop10103;
    double binop10105 = pos < src_len;
    double charat10106 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10107 = charat10106 == 42.0000000000;
    double binop10108 = binop10105 && binop10107;
    if (binop10100) {
        cases10093 = TOK_NUMBER;
    } else if (binop10104) {
        cases10093 = TOK_PLUS;
    } else if (binop10108) {
        cases10093 = TOK_MUL;
    } else if (1.0000000000) {
        cases10093 = 0.0000000000;
    } else { cases10093 = 0.0; }
    double binop10109 = 172.0000000000 - 1.0000000000;
    double binop10110 = binop10109 * 0.0000000000;
    double cases10111;
    double binop10112 = pos < src_len;
    if (binop10112) {
        cases10111 = pos;
    } else if (1.0000000000) {
        cases10111 = 0.0000000000;
    } else { cases10111 = 0.0; }
    double binop10113 = 172.0000000000 - 1.0000000000;
    double binop10114 = binop10113 * 0.0000000000;
    double cases10115;
    double binop10116 = pos < src_len;
    double charat10117 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10118 = charat10117 >= 48.0000000000;
    double charat10119 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10120 = charat10119 <= 57.0000000000;
    double binop10121 = binop10118 && binop10120;
    double binop10122 = binop10116 && binop10121;
    double binop10123 = pos < src_len;
    double charat10124 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10125 = charat10124 == 43.0000000000;
    double charat10126 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10127 = charat10126 == 42.0000000000;
    double binop10128 = binop10125 || binop10127;
    double binop10129 = binop10123 && binop10128;
    if (binop10122) {
    double binop10130 = pos + 2.0000000000;
        cases10115 = binop10130;
    } else if (binop10129) {
    double binop10131 = pos + 1.0000000000;
        cases10115 = binop10131;
    } else if (1.0000000000) {
        cases10115 = 0.0000000000;
    } else { cases10115 = 0.0; }
    double cases10132;
    double binop10133 = pos < src_len;
    double charat10134 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10135 = charat10134 >= 48.0000000000;
    double charat10136 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10137 = charat10136 <= 57.0000000000;
    double binop10138 = binop10135 && binop10137;
    double binop10139 = binop10133 && binop10138;
    double binop10140 = pos < src_len;
    double charat10141 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10142 = charat10141 == 43.0000000000;
    double charat10143 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10144 = charat10143 == 42.0000000000;
    double binop10145 = binop10142 || binop10144;
    double binop10146 = binop10140 && binop10145;
    if (binop10139) {
    double binop10147 = pos + 3.0000000000;
        cases10132 = binop10147;
    } else if (binop10146) {
    double binop10148 = pos + 2.0000000000;
        cases10132 = binop10148;
    } else if (1.0000000000) {
    double binop10149 = src_len + 1.0000000000;
        cases10132 = binop10149;
    } else { cases10132 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10114] = 0.0000000000;
    tokens[(int)binop10110] = 0.0000000000;
    tokens[(int)binop10092] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10150 = 173.0000000000 - 1.0000000000;
    double binop10151 = binop10150 * 3.0000000000;
    double cases10152;
    double binop10153 = pos < src_len;
    double charat10154 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10155 = charat10154 >= 48.0000000000;
    double charat10156 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10157 = charat10156 <= 57.0000000000;
    double binop10158 = binop10155 && binop10157;
    double binop10159 = binop10153 && binop10158;
    double binop10160 = pos < src_len;
    double charat10161 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10162 = charat10161 == 43.0000000000;
    double binop10163 = binop10160 && binop10162;
    double binop10164 = pos < src_len;
    double charat10165 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10166 = charat10165 == 42.0000000000;
    double binop10167 = binop10164 && binop10166;
    if (binop10159) {
        cases10152 = TOK_NUMBER;
    } else if (binop10163) {
        cases10152 = TOK_PLUS;
    } else if (binop10167) {
        cases10152 = TOK_MUL;
    } else if (1.0000000000) {
        cases10152 = 0.0000000000;
    } else { cases10152 = 0.0; }
    double binop10168 = 173.0000000000 - 1.0000000000;
    double binop10169 = binop10168 * 0.0000000000;
    double cases10170;
    double binop10171 = pos < src_len;
    if (binop10171) {
        cases10170 = pos;
    } else if (1.0000000000) {
        cases10170 = 0.0000000000;
    } else { cases10170 = 0.0; }
    double binop10172 = 173.0000000000 - 1.0000000000;
    double binop10173 = binop10172 * 0.0000000000;
    double cases10174;
    double binop10175 = pos < src_len;
    double charat10176 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10177 = charat10176 >= 48.0000000000;
    double charat10178 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10179 = charat10178 <= 57.0000000000;
    double binop10180 = binop10177 && binop10179;
    double binop10181 = binop10175 && binop10180;
    double binop10182 = pos < src_len;
    double charat10183 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10184 = charat10183 == 43.0000000000;
    double charat10185 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10186 = charat10185 == 42.0000000000;
    double binop10187 = binop10184 || binop10186;
    double binop10188 = binop10182 && binop10187;
    if (binop10181) {
    double binop10189 = pos + 2.0000000000;
        cases10174 = binop10189;
    } else if (binop10188) {
    double binop10190 = pos + 1.0000000000;
        cases10174 = binop10190;
    } else if (1.0000000000) {
        cases10174 = 0.0000000000;
    } else { cases10174 = 0.0; }
    double cases10191;
    double binop10192 = pos < src_len;
    double charat10193 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10194 = charat10193 >= 48.0000000000;
    double charat10195 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10196 = charat10195 <= 57.0000000000;
    double binop10197 = binop10194 && binop10196;
    double binop10198 = binop10192 && binop10197;
    double binop10199 = pos < src_len;
    double charat10200 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10201 = charat10200 == 43.0000000000;
    double charat10202 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10203 = charat10202 == 42.0000000000;
    double binop10204 = binop10201 || binop10203;
    double binop10205 = binop10199 && binop10204;
    if (binop10198) {
    double binop10206 = pos + 3.0000000000;
        cases10191 = binop10206;
    } else if (binop10205) {
    double binop10207 = pos + 2.0000000000;
        cases10191 = binop10207;
    } else if (1.0000000000) {
    double binop10208 = src_len + 1.0000000000;
        cases10191 = binop10208;
    } else { cases10191 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10173] = 0.0000000000;
    tokens[(int)binop10169] = 0.0000000000;
    tokens[(int)binop10151] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10209 = 174.0000000000 - 1.0000000000;
    double binop10210 = binop10209 * 3.0000000000;
    double cases10211;
    double binop10212 = pos < src_len;
    double charat10213 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10214 = charat10213 >= 48.0000000000;
    double charat10215 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10216 = charat10215 <= 57.0000000000;
    double binop10217 = binop10214 && binop10216;
    double binop10218 = binop10212 && binop10217;
    double binop10219 = pos < src_len;
    double charat10220 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10221 = charat10220 == 43.0000000000;
    double binop10222 = binop10219 && binop10221;
    double binop10223 = pos < src_len;
    double charat10224 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10225 = charat10224 == 42.0000000000;
    double binop10226 = binop10223 && binop10225;
    if (binop10218) {
        cases10211 = TOK_NUMBER;
    } else if (binop10222) {
        cases10211 = TOK_PLUS;
    } else if (binop10226) {
        cases10211 = TOK_MUL;
    } else if (1.0000000000) {
        cases10211 = 0.0000000000;
    } else { cases10211 = 0.0; }
    double binop10227 = 174.0000000000 - 1.0000000000;
    double binop10228 = binop10227 * 0.0000000000;
    double cases10229;
    double binop10230 = pos < src_len;
    if (binop10230) {
        cases10229 = pos;
    } else if (1.0000000000) {
        cases10229 = 0.0000000000;
    } else { cases10229 = 0.0; }
    double binop10231 = 174.0000000000 - 1.0000000000;
    double binop10232 = binop10231 * 0.0000000000;
    double cases10233;
    double binop10234 = pos < src_len;
    double charat10235 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10236 = charat10235 >= 48.0000000000;
    double charat10237 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10238 = charat10237 <= 57.0000000000;
    double binop10239 = binop10236 && binop10238;
    double binop10240 = binop10234 && binop10239;
    double binop10241 = pos < src_len;
    double charat10242 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10243 = charat10242 == 43.0000000000;
    double charat10244 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10245 = charat10244 == 42.0000000000;
    double binop10246 = binop10243 || binop10245;
    double binop10247 = binop10241 && binop10246;
    if (binop10240) {
    double binop10248 = pos + 2.0000000000;
        cases10233 = binop10248;
    } else if (binop10247) {
    double binop10249 = pos + 1.0000000000;
        cases10233 = binop10249;
    } else if (1.0000000000) {
        cases10233 = 0.0000000000;
    } else { cases10233 = 0.0; }
    double cases10250;
    double binop10251 = pos < src_len;
    double charat10252 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10253 = charat10252 >= 48.0000000000;
    double charat10254 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10255 = charat10254 <= 57.0000000000;
    double binop10256 = binop10253 && binop10255;
    double binop10257 = binop10251 && binop10256;
    double binop10258 = pos < src_len;
    double charat10259 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10260 = charat10259 == 43.0000000000;
    double charat10261 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10262 = charat10261 == 42.0000000000;
    double binop10263 = binop10260 || binop10262;
    double binop10264 = binop10258 && binop10263;
    if (binop10257) {
    double binop10265 = pos + 3.0000000000;
        cases10250 = binop10265;
    } else if (binop10264) {
    double binop10266 = pos + 2.0000000000;
        cases10250 = binop10266;
    } else if (1.0000000000) {
    double binop10267 = src_len + 1.0000000000;
        cases10250 = binop10267;
    } else { cases10250 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10232] = 0.0000000000;
    tokens[(int)binop10228] = 0.0000000000;
    tokens[(int)binop10210] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10268 = 175.0000000000 - 1.0000000000;
    double binop10269 = binop10268 * 3.0000000000;
    double cases10270;
    double binop10271 = pos < src_len;
    double charat10272 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10273 = charat10272 >= 48.0000000000;
    double charat10274 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10275 = charat10274 <= 57.0000000000;
    double binop10276 = binop10273 && binop10275;
    double binop10277 = binop10271 && binop10276;
    double binop10278 = pos < src_len;
    double charat10279 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10280 = charat10279 == 43.0000000000;
    double binop10281 = binop10278 && binop10280;
    double binop10282 = pos < src_len;
    double charat10283 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10284 = charat10283 == 42.0000000000;
    double binop10285 = binop10282 && binop10284;
    if (binop10277) {
        cases10270 = TOK_NUMBER;
    } else if (binop10281) {
        cases10270 = TOK_PLUS;
    } else if (binop10285) {
        cases10270 = TOK_MUL;
    } else if (1.0000000000) {
        cases10270 = 0.0000000000;
    } else { cases10270 = 0.0; }
    double binop10286 = 175.0000000000 - 1.0000000000;
    double binop10287 = binop10286 * 0.0000000000;
    double cases10288;
    double binop10289 = pos < src_len;
    if (binop10289) {
        cases10288 = pos;
    } else if (1.0000000000) {
        cases10288 = 0.0000000000;
    } else { cases10288 = 0.0; }
    double binop10290 = 175.0000000000 - 1.0000000000;
    double binop10291 = binop10290 * 0.0000000000;
    double cases10292;
    double binop10293 = pos < src_len;
    double charat10294 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10295 = charat10294 >= 48.0000000000;
    double charat10296 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10297 = charat10296 <= 57.0000000000;
    double binop10298 = binop10295 && binop10297;
    double binop10299 = binop10293 && binop10298;
    double binop10300 = pos < src_len;
    double charat10301 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10302 = charat10301 == 43.0000000000;
    double charat10303 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10304 = charat10303 == 42.0000000000;
    double binop10305 = binop10302 || binop10304;
    double binop10306 = binop10300 && binop10305;
    if (binop10299) {
    double binop10307 = pos + 2.0000000000;
        cases10292 = binop10307;
    } else if (binop10306) {
    double binop10308 = pos + 1.0000000000;
        cases10292 = binop10308;
    } else if (1.0000000000) {
        cases10292 = 0.0000000000;
    } else { cases10292 = 0.0; }
    double cases10309;
    double binop10310 = pos < src_len;
    double charat10311 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10312 = charat10311 >= 48.0000000000;
    double charat10313 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10314 = charat10313 <= 57.0000000000;
    double binop10315 = binop10312 && binop10314;
    double binop10316 = binop10310 && binop10315;
    double binop10317 = pos < src_len;
    double charat10318 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10319 = charat10318 == 43.0000000000;
    double charat10320 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10321 = charat10320 == 42.0000000000;
    double binop10322 = binop10319 || binop10321;
    double binop10323 = binop10317 && binop10322;
    if (binop10316) {
    double binop10324 = pos + 3.0000000000;
        cases10309 = binop10324;
    } else if (binop10323) {
    double binop10325 = pos + 2.0000000000;
        cases10309 = binop10325;
    } else if (1.0000000000) {
    double binop10326 = src_len + 1.0000000000;
        cases10309 = binop10326;
    } else { cases10309 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10291] = 0.0000000000;
    tokens[(int)binop10287] = 0.0000000000;
    tokens[(int)binop10269] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10327 = 176.0000000000 - 1.0000000000;
    double binop10328 = binop10327 * 3.0000000000;
    double cases10329;
    double binop10330 = pos < src_len;
    double charat10331 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10332 = charat10331 >= 48.0000000000;
    double charat10333 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10334 = charat10333 <= 57.0000000000;
    double binop10335 = binop10332 && binop10334;
    double binop10336 = binop10330 && binop10335;
    double binop10337 = pos < src_len;
    double charat10338 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10339 = charat10338 == 43.0000000000;
    double binop10340 = binop10337 && binop10339;
    double binop10341 = pos < src_len;
    double charat10342 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10343 = charat10342 == 42.0000000000;
    double binop10344 = binop10341 && binop10343;
    if (binop10336) {
        cases10329 = TOK_NUMBER;
    } else if (binop10340) {
        cases10329 = TOK_PLUS;
    } else if (binop10344) {
        cases10329 = TOK_MUL;
    } else if (1.0000000000) {
        cases10329 = 0.0000000000;
    } else { cases10329 = 0.0; }
    double binop10345 = 176.0000000000 - 1.0000000000;
    double binop10346 = binop10345 * 0.0000000000;
    double cases10347;
    double binop10348 = pos < src_len;
    if (binop10348) {
        cases10347 = pos;
    } else if (1.0000000000) {
        cases10347 = 0.0000000000;
    } else { cases10347 = 0.0; }
    double binop10349 = 176.0000000000 - 1.0000000000;
    double binop10350 = binop10349 * 0.0000000000;
    double cases10351;
    double binop10352 = pos < src_len;
    double charat10353 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10354 = charat10353 >= 48.0000000000;
    double charat10355 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10356 = charat10355 <= 57.0000000000;
    double binop10357 = binop10354 && binop10356;
    double binop10358 = binop10352 && binop10357;
    double binop10359 = pos < src_len;
    double charat10360 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10361 = charat10360 == 43.0000000000;
    double charat10362 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10363 = charat10362 == 42.0000000000;
    double binop10364 = binop10361 || binop10363;
    double binop10365 = binop10359 && binop10364;
    if (binop10358) {
    double binop10366 = pos + 2.0000000000;
        cases10351 = binop10366;
    } else if (binop10365) {
    double binop10367 = pos + 1.0000000000;
        cases10351 = binop10367;
    } else if (1.0000000000) {
        cases10351 = 0.0000000000;
    } else { cases10351 = 0.0; }
    double cases10368;
    double binop10369 = pos < src_len;
    double charat10370 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10371 = charat10370 >= 48.0000000000;
    double charat10372 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10373 = charat10372 <= 57.0000000000;
    double binop10374 = binop10371 && binop10373;
    double binop10375 = binop10369 && binop10374;
    double binop10376 = pos < src_len;
    double charat10377 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10378 = charat10377 == 43.0000000000;
    double charat10379 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10380 = charat10379 == 42.0000000000;
    double binop10381 = binop10378 || binop10380;
    double binop10382 = binop10376 && binop10381;
    if (binop10375) {
    double binop10383 = pos + 3.0000000000;
        cases10368 = binop10383;
    } else if (binop10382) {
    double binop10384 = pos + 2.0000000000;
        cases10368 = binop10384;
    } else if (1.0000000000) {
    double binop10385 = src_len + 1.0000000000;
        cases10368 = binop10385;
    } else { cases10368 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10350] = 0.0000000000;
    tokens[(int)binop10346] = 0.0000000000;
    tokens[(int)binop10328] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10386 = 177.0000000000 - 1.0000000000;
    double binop10387 = binop10386 * 3.0000000000;
    double cases10388;
    double binop10389 = pos < src_len;
    double charat10390 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10391 = charat10390 >= 48.0000000000;
    double charat10392 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10393 = charat10392 <= 57.0000000000;
    double binop10394 = binop10391 && binop10393;
    double binop10395 = binop10389 && binop10394;
    double binop10396 = pos < src_len;
    double charat10397 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10398 = charat10397 == 43.0000000000;
    double binop10399 = binop10396 && binop10398;
    double binop10400 = pos < src_len;
    double charat10401 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10402 = charat10401 == 42.0000000000;
    double binop10403 = binop10400 && binop10402;
    if (binop10395) {
        cases10388 = TOK_NUMBER;
    } else if (binop10399) {
        cases10388 = TOK_PLUS;
    } else if (binop10403) {
        cases10388 = TOK_MUL;
    } else if (1.0000000000) {
        cases10388 = 0.0000000000;
    } else { cases10388 = 0.0; }
    double binop10404 = 177.0000000000 - 1.0000000000;
    double binop10405 = binop10404 * 0.0000000000;
    double cases10406;
    double binop10407 = pos < src_len;
    if (binop10407) {
        cases10406 = pos;
    } else if (1.0000000000) {
        cases10406 = 0.0000000000;
    } else { cases10406 = 0.0; }
    double binop10408 = 177.0000000000 - 1.0000000000;
    double binop10409 = binop10408 * 0.0000000000;
    double cases10410;
    double binop10411 = pos < src_len;
    double charat10412 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10413 = charat10412 >= 48.0000000000;
    double charat10414 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10415 = charat10414 <= 57.0000000000;
    double binop10416 = binop10413 && binop10415;
    double binop10417 = binop10411 && binop10416;
    double binop10418 = pos < src_len;
    double charat10419 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10420 = charat10419 == 43.0000000000;
    double charat10421 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10422 = charat10421 == 42.0000000000;
    double binop10423 = binop10420 || binop10422;
    double binop10424 = binop10418 && binop10423;
    if (binop10417) {
    double binop10425 = pos + 2.0000000000;
        cases10410 = binop10425;
    } else if (binop10424) {
    double binop10426 = pos + 1.0000000000;
        cases10410 = binop10426;
    } else if (1.0000000000) {
        cases10410 = 0.0000000000;
    } else { cases10410 = 0.0; }
    double cases10427;
    double binop10428 = pos < src_len;
    double charat10429 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10430 = charat10429 >= 48.0000000000;
    double charat10431 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10432 = charat10431 <= 57.0000000000;
    double binop10433 = binop10430 && binop10432;
    double binop10434 = binop10428 && binop10433;
    double binop10435 = pos < src_len;
    double charat10436 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10437 = charat10436 == 43.0000000000;
    double charat10438 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10439 = charat10438 == 42.0000000000;
    double binop10440 = binop10437 || binop10439;
    double binop10441 = binop10435 && binop10440;
    if (binop10434) {
    double binop10442 = pos + 3.0000000000;
        cases10427 = binop10442;
    } else if (binop10441) {
    double binop10443 = pos + 2.0000000000;
        cases10427 = binop10443;
    } else if (1.0000000000) {
    double binop10444 = src_len + 1.0000000000;
        cases10427 = binop10444;
    } else { cases10427 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10409] = 0.0000000000;
    tokens[(int)binop10405] = 0.0000000000;
    tokens[(int)binop10387] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10445 = 178.0000000000 - 1.0000000000;
    double binop10446 = binop10445 * 3.0000000000;
    double cases10447;
    double binop10448 = pos < src_len;
    double charat10449 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10450 = charat10449 >= 48.0000000000;
    double charat10451 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10452 = charat10451 <= 57.0000000000;
    double binop10453 = binop10450 && binop10452;
    double binop10454 = binop10448 && binop10453;
    double binop10455 = pos < src_len;
    double charat10456 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10457 = charat10456 == 43.0000000000;
    double binop10458 = binop10455 && binop10457;
    double binop10459 = pos < src_len;
    double charat10460 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10461 = charat10460 == 42.0000000000;
    double binop10462 = binop10459 && binop10461;
    if (binop10454) {
        cases10447 = TOK_NUMBER;
    } else if (binop10458) {
        cases10447 = TOK_PLUS;
    } else if (binop10462) {
        cases10447 = TOK_MUL;
    } else if (1.0000000000) {
        cases10447 = 0.0000000000;
    } else { cases10447 = 0.0; }
    double binop10463 = 178.0000000000 - 1.0000000000;
    double binop10464 = binop10463 * 0.0000000000;
    double cases10465;
    double binop10466 = pos < src_len;
    if (binop10466) {
        cases10465 = pos;
    } else if (1.0000000000) {
        cases10465 = 0.0000000000;
    } else { cases10465 = 0.0; }
    double binop10467 = 178.0000000000 - 1.0000000000;
    double binop10468 = binop10467 * 0.0000000000;
    double cases10469;
    double binop10470 = pos < src_len;
    double charat10471 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10472 = charat10471 >= 48.0000000000;
    double charat10473 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10474 = charat10473 <= 57.0000000000;
    double binop10475 = binop10472 && binop10474;
    double binop10476 = binop10470 && binop10475;
    double binop10477 = pos < src_len;
    double charat10478 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10479 = charat10478 == 43.0000000000;
    double charat10480 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10481 = charat10480 == 42.0000000000;
    double binop10482 = binop10479 || binop10481;
    double binop10483 = binop10477 && binop10482;
    if (binop10476) {
    double binop10484 = pos + 2.0000000000;
        cases10469 = binop10484;
    } else if (binop10483) {
    double binop10485 = pos + 1.0000000000;
        cases10469 = binop10485;
    } else if (1.0000000000) {
        cases10469 = 0.0000000000;
    } else { cases10469 = 0.0; }
    double cases10486;
    double binop10487 = pos < src_len;
    double charat10488 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10489 = charat10488 >= 48.0000000000;
    double charat10490 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10491 = charat10490 <= 57.0000000000;
    double binop10492 = binop10489 && binop10491;
    double binop10493 = binop10487 && binop10492;
    double binop10494 = pos < src_len;
    double charat10495 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10496 = charat10495 == 43.0000000000;
    double charat10497 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10498 = charat10497 == 42.0000000000;
    double binop10499 = binop10496 || binop10498;
    double binop10500 = binop10494 && binop10499;
    if (binop10493) {
    double binop10501 = pos + 3.0000000000;
        cases10486 = binop10501;
    } else if (binop10500) {
    double binop10502 = pos + 2.0000000000;
        cases10486 = binop10502;
    } else if (1.0000000000) {
    double binop10503 = src_len + 1.0000000000;
        cases10486 = binop10503;
    } else { cases10486 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10468] = 0.0000000000;
    tokens[(int)binop10464] = 0.0000000000;
    tokens[(int)binop10446] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10504 = 179.0000000000 - 1.0000000000;
    double binop10505 = binop10504 * 3.0000000000;
    double cases10506;
    double binop10507 = pos < src_len;
    double charat10508 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10509 = charat10508 >= 48.0000000000;
    double charat10510 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10511 = charat10510 <= 57.0000000000;
    double binop10512 = binop10509 && binop10511;
    double binop10513 = binop10507 && binop10512;
    double binop10514 = pos < src_len;
    double charat10515 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10516 = charat10515 == 43.0000000000;
    double binop10517 = binop10514 && binop10516;
    double binop10518 = pos < src_len;
    double charat10519 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10520 = charat10519 == 42.0000000000;
    double binop10521 = binop10518 && binop10520;
    if (binop10513) {
        cases10506 = TOK_NUMBER;
    } else if (binop10517) {
        cases10506 = TOK_PLUS;
    } else if (binop10521) {
        cases10506 = TOK_MUL;
    } else if (1.0000000000) {
        cases10506 = 0.0000000000;
    } else { cases10506 = 0.0; }
    double binop10522 = 179.0000000000 - 1.0000000000;
    double binop10523 = binop10522 * 0.0000000000;
    double cases10524;
    double binop10525 = pos < src_len;
    if (binop10525) {
        cases10524 = pos;
    } else if (1.0000000000) {
        cases10524 = 0.0000000000;
    } else { cases10524 = 0.0; }
    double binop10526 = 179.0000000000 - 1.0000000000;
    double binop10527 = binop10526 * 0.0000000000;
    double cases10528;
    double binop10529 = pos < src_len;
    double charat10530 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10531 = charat10530 >= 48.0000000000;
    double charat10532 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10533 = charat10532 <= 57.0000000000;
    double binop10534 = binop10531 && binop10533;
    double binop10535 = binop10529 && binop10534;
    double binop10536 = pos < src_len;
    double charat10537 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10538 = charat10537 == 43.0000000000;
    double charat10539 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10540 = charat10539 == 42.0000000000;
    double binop10541 = binop10538 || binop10540;
    double binop10542 = binop10536 && binop10541;
    if (binop10535) {
    double binop10543 = pos + 2.0000000000;
        cases10528 = binop10543;
    } else if (binop10542) {
    double binop10544 = pos + 1.0000000000;
        cases10528 = binop10544;
    } else if (1.0000000000) {
        cases10528 = 0.0000000000;
    } else { cases10528 = 0.0; }
    double cases10545;
    double binop10546 = pos < src_len;
    double charat10547 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10548 = charat10547 >= 48.0000000000;
    double charat10549 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10550 = charat10549 <= 57.0000000000;
    double binop10551 = binop10548 && binop10550;
    double binop10552 = binop10546 && binop10551;
    double binop10553 = pos < src_len;
    double charat10554 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10555 = charat10554 == 43.0000000000;
    double charat10556 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10557 = charat10556 == 42.0000000000;
    double binop10558 = binop10555 || binop10557;
    double binop10559 = binop10553 && binop10558;
    if (binop10552) {
    double binop10560 = pos + 3.0000000000;
        cases10545 = binop10560;
    } else if (binop10559) {
    double binop10561 = pos + 2.0000000000;
        cases10545 = binop10561;
    } else if (1.0000000000) {
    double binop10562 = src_len + 1.0000000000;
        cases10545 = binop10562;
    } else { cases10545 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10527] = 0.0000000000;
    tokens[(int)binop10523] = 0.0000000000;
    tokens[(int)binop10505] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10563 = 180.0000000000 - 1.0000000000;
    double binop10564 = binop10563 * 3.0000000000;
    double cases10565;
    double binop10566 = pos < src_len;
    double charat10567 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10568 = charat10567 >= 48.0000000000;
    double charat10569 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10570 = charat10569 <= 57.0000000000;
    double binop10571 = binop10568 && binop10570;
    double binop10572 = binop10566 && binop10571;
    double binop10573 = pos < src_len;
    double charat10574 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10575 = charat10574 == 43.0000000000;
    double binop10576 = binop10573 && binop10575;
    double binop10577 = pos < src_len;
    double charat10578 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10579 = charat10578 == 42.0000000000;
    double binop10580 = binop10577 && binop10579;
    if (binop10572) {
        cases10565 = TOK_NUMBER;
    } else if (binop10576) {
        cases10565 = TOK_PLUS;
    } else if (binop10580) {
        cases10565 = TOK_MUL;
    } else if (1.0000000000) {
        cases10565 = 0.0000000000;
    } else { cases10565 = 0.0; }
    double binop10581 = 180.0000000000 - 1.0000000000;
    double binop10582 = binop10581 * 0.0000000000;
    double cases10583;
    double binop10584 = pos < src_len;
    if (binop10584) {
        cases10583 = pos;
    } else if (1.0000000000) {
        cases10583 = 0.0000000000;
    } else { cases10583 = 0.0; }
    double binop10585 = 180.0000000000 - 1.0000000000;
    double binop10586 = binop10585 * 0.0000000000;
    double cases10587;
    double binop10588 = pos < src_len;
    double charat10589 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10590 = charat10589 >= 48.0000000000;
    double charat10591 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10592 = charat10591 <= 57.0000000000;
    double binop10593 = binop10590 && binop10592;
    double binop10594 = binop10588 && binop10593;
    double binop10595 = pos < src_len;
    double charat10596 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10597 = charat10596 == 43.0000000000;
    double charat10598 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10599 = charat10598 == 42.0000000000;
    double binop10600 = binop10597 || binop10599;
    double binop10601 = binop10595 && binop10600;
    if (binop10594) {
    double binop10602 = pos + 2.0000000000;
        cases10587 = binop10602;
    } else if (binop10601) {
    double binop10603 = pos + 1.0000000000;
        cases10587 = binop10603;
    } else if (1.0000000000) {
        cases10587 = 0.0000000000;
    } else { cases10587 = 0.0; }
    double cases10604;
    double binop10605 = pos < src_len;
    double charat10606 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10607 = charat10606 >= 48.0000000000;
    double charat10608 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10609 = charat10608 <= 57.0000000000;
    double binop10610 = binop10607 && binop10609;
    double binop10611 = binop10605 && binop10610;
    double binop10612 = pos < src_len;
    double charat10613 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10614 = charat10613 == 43.0000000000;
    double charat10615 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10616 = charat10615 == 42.0000000000;
    double binop10617 = binop10614 || binop10616;
    double binop10618 = binop10612 && binop10617;
    if (binop10611) {
    double binop10619 = pos + 3.0000000000;
        cases10604 = binop10619;
    } else if (binop10618) {
    double binop10620 = pos + 2.0000000000;
        cases10604 = binop10620;
    } else if (1.0000000000) {
    double binop10621 = src_len + 1.0000000000;
        cases10604 = binop10621;
    } else { cases10604 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10586] = 0.0000000000;
    tokens[(int)binop10582] = 0.0000000000;
    tokens[(int)binop10564] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10622 = 181.0000000000 - 1.0000000000;
    double binop10623 = binop10622 * 3.0000000000;
    double cases10624;
    double binop10625 = pos < src_len;
    double charat10626 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10627 = charat10626 >= 48.0000000000;
    double charat10628 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10629 = charat10628 <= 57.0000000000;
    double binop10630 = binop10627 && binop10629;
    double binop10631 = binop10625 && binop10630;
    double binop10632 = pos < src_len;
    double charat10633 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10634 = charat10633 == 43.0000000000;
    double binop10635 = binop10632 && binop10634;
    double binop10636 = pos < src_len;
    double charat10637 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10638 = charat10637 == 42.0000000000;
    double binop10639 = binop10636 && binop10638;
    if (binop10631) {
        cases10624 = TOK_NUMBER;
    } else if (binop10635) {
        cases10624 = TOK_PLUS;
    } else if (binop10639) {
        cases10624 = TOK_MUL;
    } else if (1.0000000000) {
        cases10624 = 0.0000000000;
    } else { cases10624 = 0.0; }
    double binop10640 = 181.0000000000 - 1.0000000000;
    double binop10641 = binop10640 * 0.0000000000;
    double cases10642;
    double binop10643 = pos < src_len;
    if (binop10643) {
        cases10642 = pos;
    } else if (1.0000000000) {
        cases10642 = 0.0000000000;
    } else { cases10642 = 0.0; }
    double binop10644 = 181.0000000000 - 1.0000000000;
    double binop10645 = binop10644 * 0.0000000000;
    double cases10646;
    double binop10647 = pos < src_len;
    double charat10648 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10649 = charat10648 >= 48.0000000000;
    double charat10650 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10651 = charat10650 <= 57.0000000000;
    double binop10652 = binop10649 && binop10651;
    double binop10653 = binop10647 && binop10652;
    double binop10654 = pos < src_len;
    double charat10655 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10656 = charat10655 == 43.0000000000;
    double charat10657 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10658 = charat10657 == 42.0000000000;
    double binop10659 = binop10656 || binop10658;
    double binop10660 = binop10654 && binop10659;
    if (binop10653) {
    double binop10661 = pos + 2.0000000000;
        cases10646 = binop10661;
    } else if (binop10660) {
    double binop10662 = pos + 1.0000000000;
        cases10646 = binop10662;
    } else if (1.0000000000) {
        cases10646 = 0.0000000000;
    } else { cases10646 = 0.0; }
    double cases10663;
    double binop10664 = pos < src_len;
    double charat10665 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10666 = charat10665 >= 48.0000000000;
    double charat10667 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10668 = charat10667 <= 57.0000000000;
    double binop10669 = binop10666 && binop10668;
    double binop10670 = binop10664 && binop10669;
    double binop10671 = pos < src_len;
    double charat10672 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10673 = charat10672 == 43.0000000000;
    double charat10674 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10675 = charat10674 == 42.0000000000;
    double binop10676 = binop10673 || binop10675;
    double binop10677 = binop10671 && binop10676;
    if (binop10670) {
    double binop10678 = pos + 3.0000000000;
        cases10663 = binop10678;
    } else if (binop10677) {
    double binop10679 = pos + 2.0000000000;
        cases10663 = binop10679;
    } else if (1.0000000000) {
    double binop10680 = src_len + 1.0000000000;
        cases10663 = binop10680;
    } else { cases10663 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10645] = 0.0000000000;
    tokens[(int)binop10641] = 0.0000000000;
    tokens[(int)binop10623] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10681 = 182.0000000000 - 1.0000000000;
    double binop10682 = binop10681 * 3.0000000000;
    double cases10683;
    double binop10684 = pos < src_len;
    double charat10685 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10686 = charat10685 >= 48.0000000000;
    double charat10687 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10688 = charat10687 <= 57.0000000000;
    double binop10689 = binop10686 && binop10688;
    double binop10690 = binop10684 && binop10689;
    double binop10691 = pos < src_len;
    double charat10692 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10693 = charat10692 == 43.0000000000;
    double binop10694 = binop10691 && binop10693;
    double binop10695 = pos < src_len;
    double charat10696 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10697 = charat10696 == 42.0000000000;
    double binop10698 = binop10695 && binop10697;
    if (binop10690) {
        cases10683 = TOK_NUMBER;
    } else if (binop10694) {
        cases10683 = TOK_PLUS;
    } else if (binop10698) {
        cases10683 = TOK_MUL;
    } else if (1.0000000000) {
        cases10683 = 0.0000000000;
    } else { cases10683 = 0.0; }
    double binop10699 = 182.0000000000 - 1.0000000000;
    double binop10700 = binop10699 * 0.0000000000;
    double cases10701;
    double binop10702 = pos < src_len;
    if (binop10702) {
        cases10701 = pos;
    } else if (1.0000000000) {
        cases10701 = 0.0000000000;
    } else { cases10701 = 0.0; }
    double binop10703 = 182.0000000000 - 1.0000000000;
    double binop10704 = binop10703 * 0.0000000000;
    double cases10705;
    double binop10706 = pos < src_len;
    double charat10707 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10708 = charat10707 >= 48.0000000000;
    double charat10709 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10710 = charat10709 <= 57.0000000000;
    double binop10711 = binop10708 && binop10710;
    double binop10712 = binop10706 && binop10711;
    double binop10713 = pos < src_len;
    double charat10714 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10715 = charat10714 == 43.0000000000;
    double charat10716 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10717 = charat10716 == 42.0000000000;
    double binop10718 = binop10715 || binop10717;
    double binop10719 = binop10713 && binop10718;
    if (binop10712) {
    double binop10720 = pos + 2.0000000000;
        cases10705 = binop10720;
    } else if (binop10719) {
    double binop10721 = pos + 1.0000000000;
        cases10705 = binop10721;
    } else if (1.0000000000) {
        cases10705 = 0.0000000000;
    } else { cases10705 = 0.0; }
    double cases10722;
    double binop10723 = pos < src_len;
    double charat10724 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10725 = charat10724 >= 48.0000000000;
    double charat10726 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10727 = charat10726 <= 57.0000000000;
    double binop10728 = binop10725 && binop10727;
    double binop10729 = binop10723 && binop10728;
    double binop10730 = pos < src_len;
    double charat10731 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10732 = charat10731 == 43.0000000000;
    double charat10733 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10734 = charat10733 == 42.0000000000;
    double binop10735 = binop10732 || binop10734;
    double binop10736 = binop10730 && binop10735;
    if (binop10729) {
    double binop10737 = pos + 3.0000000000;
        cases10722 = binop10737;
    } else if (binop10736) {
    double binop10738 = pos + 2.0000000000;
        cases10722 = binop10738;
    } else if (1.0000000000) {
    double binop10739 = src_len + 1.0000000000;
        cases10722 = binop10739;
    } else { cases10722 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10704] = 0.0000000000;
    tokens[(int)binop10700] = 0.0000000000;
    tokens[(int)binop10682] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10740 = 183.0000000000 - 1.0000000000;
    double binop10741 = binop10740 * 3.0000000000;
    double cases10742;
    double binop10743 = pos < src_len;
    double charat10744 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10745 = charat10744 >= 48.0000000000;
    double charat10746 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10747 = charat10746 <= 57.0000000000;
    double binop10748 = binop10745 && binop10747;
    double binop10749 = binop10743 && binop10748;
    double binop10750 = pos < src_len;
    double charat10751 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10752 = charat10751 == 43.0000000000;
    double binop10753 = binop10750 && binop10752;
    double binop10754 = pos < src_len;
    double charat10755 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10756 = charat10755 == 42.0000000000;
    double binop10757 = binop10754 && binop10756;
    if (binop10749) {
        cases10742 = TOK_NUMBER;
    } else if (binop10753) {
        cases10742 = TOK_PLUS;
    } else if (binop10757) {
        cases10742 = TOK_MUL;
    } else if (1.0000000000) {
        cases10742 = 0.0000000000;
    } else { cases10742 = 0.0; }
    double binop10758 = 183.0000000000 - 1.0000000000;
    double binop10759 = binop10758 * 0.0000000000;
    double cases10760;
    double binop10761 = pos < src_len;
    if (binop10761) {
        cases10760 = pos;
    } else if (1.0000000000) {
        cases10760 = 0.0000000000;
    } else { cases10760 = 0.0; }
    double binop10762 = 183.0000000000 - 1.0000000000;
    double binop10763 = binop10762 * 0.0000000000;
    double cases10764;
    double binop10765 = pos < src_len;
    double charat10766 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10767 = charat10766 >= 48.0000000000;
    double charat10768 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10769 = charat10768 <= 57.0000000000;
    double binop10770 = binop10767 && binop10769;
    double binop10771 = binop10765 && binop10770;
    double binop10772 = pos < src_len;
    double charat10773 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10774 = charat10773 == 43.0000000000;
    double charat10775 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10776 = charat10775 == 42.0000000000;
    double binop10777 = binop10774 || binop10776;
    double binop10778 = binop10772 && binop10777;
    if (binop10771) {
    double binop10779 = pos + 2.0000000000;
        cases10764 = binop10779;
    } else if (binop10778) {
    double binop10780 = pos + 1.0000000000;
        cases10764 = binop10780;
    } else if (1.0000000000) {
        cases10764 = 0.0000000000;
    } else { cases10764 = 0.0; }
    double cases10781;
    double binop10782 = pos < src_len;
    double charat10783 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10784 = charat10783 >= 48.0000000000;
    double charat10785 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10786 = charat10785 <= 57.0000000000;
    double binop10787 = binop10784 && binop10786;
    double binop10788 = binop10782 && binop10787;
    double binop10789 = pos < src_len;
    double charat10790 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10791 = charat10790 == 43.0000000000;
    double charat10792 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10793 = charat10792 == 42.0000000000;
    double binop10794 = binop10791 || binop10793;
    double binop10795 = binop10789 && binop10794;
    if (binop10788) {
    double binop10796 = pos + 3.0000000000;
        cases10781 = binop10796;
    } else if (binop10795) {
    double binop10797 = pos + 2.0000000000;
        cases10781 = binop10797;
    } else if (1.0000000000) {
    double binop10798 = src_len + 1.0000000000;
        cases10781 = binop10798;
    } else { cases10781 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10763] = 0.0000000000;
    tokens[(int)binop10759] = 0.0000000000;
    tokens[(int)binop10741] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10799 = 184.0000000000 - 1.0000000000;
    double binop10800 = binop10799 * 3.0000000000;
    double cases10801;
    double binop10802 = pos < src_len;
    double charat10803 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10804 = charat10803 >= 48.0000000000;
    double charat10805 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10806 = charat10805 <= 57.0000000000;
    double binop10807 = binop10804 && binop10806;
    double binop10808 = binop10802 && binop10807;
    double binop10809 = pos < src_len;
    double charat10810 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10811 = charat10810 == 43.0000000000;
    double binop10812 = binop10809 && binop10811;
    double binop10813 = pos < src_len;
    double charat10814 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10815 = charat10814 == 42.0000000000;
    double binop10816 = binop10813 && binop10815;
    if (binop10808) {
        cases10801 = TOK_NUMBER;
    } else if (binop10812) {
        cases10801 = TOK_PLUS;
    } else if (binop10816) {
        cases10801 = TOK_MUL;
    } else if (1.0000000000) {
        cases10801 = 0.0000000000;
    } else { cases10801 = 0.0; }
    double binop10817 = 184.0000000000 - 1.0000000000;
    double binop10818 = binop10817 * 0.0000000000;
    double cases10819;
    double binop10820 = pos < src_len;
    if (binop10820) {
        cases10819 = pos;
    } else if (1.0000000000) {
        cases10819 = 0.0000000000;
    } else { cases10819 = 0.0; }
    double binop10821 = 184.0000000000 - 1.0000000000;
    double binop10822 = binop10821 * 0.0000000000;
    double cases10823;
    double binop10824 = pos < src_len;
    double charat10825 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10826 = charat10825 >= 48.0000000000;
    double charat10827 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10828 = charat10827 <= 57.0000000000;
    double binop10829 = binop10826 && binop10828;
    double binop10830 = binop10824 && binop10829;
    double binop10831 = pos < src_len;
    double charat10832 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10833 = charat10832 == 43.0000000000;
    double charat10834 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10835 = charat10834 == 42.0000000000;
    double binop10836 = binop10833 || binop10835;
    double binop10837 = binop10831 && binop10836;
    if (binop10830) {
    double binop10838 = pos + 2.0000000000;
        cases10823 = binop10838;
    } else if (binop10837) {
    double binop10839 = pos + 1.0000000000;
        cases10823 = binop10839;
    } else if (1.0000000000) {
        cases10823 = 0.0000000000;
    } else { cases10823 = 0.0; }
    double cases10840;
    double binop10841 = pos < src_len;
    double charat10842 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10843 = charat10842 >= 48.0000000000;
    double charat10844 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10845 = charat10844 <= 57.0000000000;
    double binop10846 = binop10843 && binop10845;
    double binop10847 = binop10841 && binop10846;
    double binop10848 = pos < src_len;
    double charat10849 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10850 = charat10849 == 43.0000000000;
    double charat10851 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10852 = charat10851 == 42.0000000000;
    double binop10853 = binop10850 || binop10852;
    double binop10854 = binop10848 && binop10853;
    if (binop10847) {
    double binop10855 = pos + 3.0000000000;
        cases10840 = binop10855;
    } else if (binop10854) {
    double binop10856 = pos + 2.0000000000;
        cases10840 = binop10856;
    } else if (1.0000000000) {
    double binop10857 = src_len + 1.0000000000;
        cases10840 = binop10857;
    } else { cases10840 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10822] = 0.0000000000;
    tokens[(int)binop10818] = 0.0000000000;
    tokens[(int)binop10800] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10858 = 185.0000000000 - 1.0000000000;
    double binop10859 = binop10858 * 3.0000000000;
    double cases10860;
    double binop10861 = pos < src_len;
    double charat10862 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10863 = charat10862 >= 48.0000000000;
    double charat10864 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10865 = charat10864 <= 57.0000000000;
    double binop10866 = binop10863 && binop10865;
    double binop10867 = binop10861 && binop10866;
    double binop10868 = pos < src_len;
    double charat10869 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10870 = charat10869 == 43.0000000000;
    double binop10871 = binop10868 && binop10870;
    double binop10872 = pos < src_len;
    double charat10873 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10874 = charat10873 == 42.0000000000;
    double binop10875 = binop10872 && binop10874;
    if (binop10867) {
        cases10860 = TOK_NUMBER;
    } else if (binop10871) {
        cases10860 = TOK_PLUS;
    } else if (binop10875) {
        cases10860 = TOK_MUL;
    } else if (1.0000000000) {
        cases10860 = 0.0000000000;
    } else { cases10860 = 0.0; }
    double binop10876 = 185.0000000000 - 1.0000000000;
    double binop10877 = binop10876 * 0.0000000000;
    double cases10878;
    double binop10879 = pos < src_len;
    if (binop10879) {
        cases10878 = pos;
    } else if (1.0000000000) {
        cases10878 = 0.0000000000;
    } else { cases10878 = 0.0; }
    double binop10880 = 185.0000000000 - 1.0000000000;
    double binop10881 = binop10880 * 0.0000000000;
    double cases10882;
    double binop10883 = pos < src_len;
    double charat10884 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10885 = charat10884 >= 48.0000000000;
    double charat10886 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10887 = charat10886 <= 57.0000000000;
    double binop10888 = binop10885 && binop10887;
    double binop10889 = binop10883 && binop10888;
    double binop10890 = pos < src_len;
    double charat10891 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10892 = charat10891 == 43.0000000000;
    double charat10893 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10894 = charat10893 == 42.0000000000;
    double binop10895 = binop10892 || binop10894;
    double binop10896 = binop10890 && binop10895;
    if (binop10889) {
    double binop10897 = pos + 2.0000000000;
        cases10882 = binop10897;
    } else if (binop10896) {
    double binop10898 = pos + 1.0000000000;
        cases10882 = binop10898;
    } else if (1.0000000000) {
        cases10882 = 0.0000000000;
    } else { cases10882 = 0.0; }
    double cases10899;
    double binop10900 = pos < src_len;
    double charat10901 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10902 = charat10901 >= 48.0000000000;
    double charat10903 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10904 = charat10903 <= 57.0000000000;
    double binop10905 = binop10902 && binop10904;
    double binop10906 = binop10900 && binop10905;
    double binop10907 = pos < src_len;
    double charat10908 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10909 = charat10908 == 43.0000000000;
    double charat10910 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10911 = charat10910 == 42.0000000000;
    double binop10912 = binop10909 || binop10911;
    double binop10913 = binop10907 && binop10912;
    if (binop10906) {
    double binop10914 = pos + 3.0000000000;
        cases10899 = binop10914;
    } else if (binop10913) {
    double binop10915 = pos + 2.0000000000;
        cases10899 = binop10915;
    } else if (1.0000000000) {
    double binop10916 = src_len + 1.0000000000;
        cases10899 = binop10916;
    } else { cases10899 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10881] = 0.0000000000;
    tokens[(int)binop10877] = 0.0000000000;
    tokens[(int)binop10859] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10917 = 186.0000000000 - 1.0000000000;
    double binop10918 = binop10917 * 3.0000000000;
    double cases10919;
    double binop10920 = pos < src_len;
    double charat10921 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10922 = charat10921 >= 48.0000000000;
    double charat10923 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10924 = charat10923 <= 57.0000000000;
    double binop10925 = binop10922 && binop10924;
    double binop10926 = binop10920 && binop10925;
    double binop10927 = pos < src_len;
    double charat10928 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10929 = charat10928 == 43.0000000000;
    double binop10930 = binop10927 && binop10929;
    double binop10931 = pos < src_len;
    double charat10932 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10933 = charat10932 == 42.0000000000;
    double binop10934 = binop10931 && binop10933;
    if (binop10926) {
        cases10919 = TOK_NUMBER;
    } else if (binop10930) {
        cases10919 = TOK_PLUS;
    } else if (binop10934) {
        cases10919 = TOK_MUL;
    } else if (1.0000000000) {
        cases10919 = 0.0000000000;
    } else { cases10919 = 0.0; }
    double binop10935 = 186.0000000000 - 1.0000000000;
    double binop10936 = binop10935 * 0.0000000000;
    double cases10937;
    double binop10938 = pos < src_len;
    if (binop10938) {
        cases10937 = pos;
    } else if (1.0000000000) {
        cases10937 = 0.0000000000;
    } else { cases10937 = 0.0; }
    double binop10939 = 186.0000000000 - 1.0000000000;
    double binop10940 = binop10939 * 0.0000000000;
    double cases10941;
    double binop10942 = pos < src_len;
    double charat10943 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10944 = charat10943 >= 48.0000000000;
    double charat10945 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10946 = charat10945 <= 57.0000000000;
    double binop10947 = binop10944 && binop10946;
    double binop10948 = binop10942 && binop10947;
    double binop10949 = pos < src_len;
    double charat10950 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10951 = charat10950 == 43.0000000000;
    double charat10952 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10953 = charat10952 == 42.0000000000;
    double binop10954 = binop10951 || binop10953;
    double binop10955 = binop10949 && binop10954;
    if (binop10948) {
    double binop10956 = pos + 2.0000000000;
        cases10941 = binop10956;
    } else if (binop10955) {
    double binop10957 = pos + 1.0000000000;
        cases10941 = binop10957;
    } else if (1.0000000000) {
        cases10941 = 0.0000000000;
    } else { cases10941 = 0.0; }
    double cases10958;
    double binop10959 = pos < src_len;
    double charat10960 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10961 = charat10960 >= 48.0000000000;
    double charat10962 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10963 = charat10962 <= 57.0000000000;
    double binop10964 = binop10961 && binop10963;
    double binop10965 = binop10959 && binop10964;
    double binop10966 = pos < src_len;
    double charat10967 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10968 = charat10967 == 43.0000000000;
    double charat10969 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10970 = charat10969 == 42.0000000000;
    double binop10971 = binop10968 || binop10970;
    double binop10972 = binop10966 && binop10971;
    if (binop10965) {
    double binop10973 = pos + 3.0000000000;
        cases10958 = binop10973;
    } else if (binop10972) {
    double binop10974 = pos + 2.0000000000;
        cases10958 = binop10974;
    } else if (1.0000000000) {
    double binop10975 = src_len + 1.0000000000;
        cases10958 = binop10975;
    } else { cases10958 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10940] = 0.0000000000;
    tokens[(int)binop10936] = 0.0000000000;
    tokens[(int)binop10918] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop10976 = 187.0000000000 - 1.0000000000;
    double binop10977 = binop10976 * 3.0000000000;
    double cases10978;
    double binop10979 = pos < src_len;
    double charat10980 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10981 = charat10980 >= 48.0000000000;
    double charat10982 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10983 = charat10982 <= 57.0000000000;
    double binop10984 = binop10981 && binop10983;
    double binop10985 = binop10979 && binop10984;
    double binop10986 = pos < src_len;
    double charat10987 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10988 = charat10987 == 43.0000000000;
    double binop10989 = binop10986 && binop10988;
    double binop10990 = pos < src_len;
    double charat10991 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop10992 = charat10991 == 42.0000000000;
    double binop10993 = binop10990 && binop10992;
    if (binop10985) {
        cases10978 = TOK_NUMBER;
    } else if (binop10989) {
        cases10978 = TOK_PLUS;
    } else if (binop10993) {
        cases10978 = TOK_MUL;
    } else if (1.0000000000) {
        cases10978 = 0.0000000000;
    } else { cases10978 = 0.0; }
    double binop10994 = 187.0000000000 - 1.0000000000;
    double binop10995 = binop10994 * 0.0000000000;
    double cases10996;
    double binop10997 = pos < src_len;
    if (binop10997) {
        cases10996 = pos;
    } else if (1.0000000000) {
        cases10996 = 0.0000000000;
    } else { cases10996 = 0.0; }
    double binop10998 = 187.0000000000 - 1.0000000000;
    double binop10999 = binop10998 * 0.0000000000;
    double cases11000;
    double binop11001 = pos < src_len;
    double charat11002 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11003 = charat11002 >= 48.0000000000;
    double charat11004 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11005 = charat11004 <= 57.0000000000;
    double binop11006 = binop11003 && binop11005;
    double binop11007 = binop11001 && binop11006;
    double binop11008 = pos < src_len;
    double charat11009 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11010 = charat11009 == 43.0000000000;
    double charat11011 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11012 = charat11011 == 42.0000000000;
    double binop11013 = binop11010 || binop11012;
    double binop11014 = binop11008 && binop11013;
    if (binop11007) {
    double binop11015 = pos + 2.0000000000;
        cases11000 = binop11015;
    } else if (binop11014) {
    double binop11016 = pos + 1.0000000000;
        cases11000 = binop11016;
    } else if (1.0000000000) {
        cases11000 = 0.0000000000;
    } else { cases11000 = 0.0; }
    double cases11017;
    double binop11018 = pos < src_len;
    double charat11019 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11020 = charat11019 >= 48.0000000000;
    double charat11021 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11022 = charat11021 <= 57.0000000000;
    double binop11023 = binop11020 && binop11022;
    double binop11024 = binop11018 && binop11023;
    double binop11025 = pos < src_len;
    double charat11026 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11027 = charat11026 == 43.0000000000;
    double charat11028 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11029 = charat11028 == 42.0000000000;
    double binop11030 = binop11027 || binop11029;
    double binop11031 = binop11025 && binop11030;
    if (binop11024) {
    double binop11032 = pos + 3.0000000000;
        cases11017 = binop11032;
    } else if (binop11031) {
    double binop11033 = pos + 2.0000000000;
        cases11017 = binop11033;
    } else if (1.0000000000) {
    double binop11034 = src_len + 1.0000000000;
        cases11017 = binop11034;
    } else { cases11017 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop10999] = 0.0000000000;
    tokens[(int)binop10995] = 0.0000000000;
    tokens[(int)binop10977] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11035 = 188.0000000000 - 1.0000000000;
    double binop11036 = binop11035 * 3.0000000000;
    double cases11037;
    double binop11038 = pos < src_len;
    double charat11039 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11040 = charat11039 >= 48.0000000000;
    double charat11041 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11042 = charat11041 <= 57.0000000000;
    double binop11043 = binop11040 && binop11042;
    double binop11044 = binop11038 && binop11043;
    double binop11045 = pos < src_len;
    double charat11046 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11047 = charat11046 == 43.0000000000;
    double binop11048 = binop11045 && binop11047;
    double binop11049 = pos < src_len;
    double charat11050 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11051 = charat11050 == 42.0000000000;
    double binop11052 = binop11049 && binop11051;
    if (binop11044) {
        cases11037 = TOK_NUMBER;
    } else if (binop11048) {
        cases11037 = TOK_PLUS;
    } else if (binop11052) {
        cases11037 = TOK_MUL;
    } else if (1.0000000000) {
        cases11037 = 0.0000000000;
    } else { cases11037 = 0.0; }
    double binop11053 = 188.0000000000 - 1.0000000000;
    double binop11054 = binop11053 * 0.0000000000;
    double cases11055;
    double binop11056 = pos < src_len;
    if (binop11056) {
        cases11055 = pos;
    } else if (1.0000000000) {
        cases11055 = 0.0000000000;
    } else { cases11055 = 0.0; }
    double binop11057 = 188.0000000000 - 1.0000000000;
    double binop11058 = binop11057 * 0.0000000000;
    double cases11059;
    double binop11060 = pos < src_len;
    double charat11061 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11062 = charat11061 >= 48.0000000000;
    double charat11063 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11064 = charat11063 <= 57.0000000000;
    double binop11065 = binop11062 && binop11064;
    double binop11066 = binop11060 && binop11065;
    double binop11067 = pos < src_len;
    double charat11068 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11069 = charat11068 == 43.0000000000;
    double charat11070 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11071 = charat11070 == 42.0000000000;
    double binop11072 = binop11069 || binop11071;
    double binop11073 = binop11067 && binop11072;
    if (binop11066) {
    double binop11074 = pos + 2.0000000000;
        cases11059 = binop11074;
    } else if (binop11073) {
    double binop11075 = pos + 1.0000000000;
        cases11059 = binop11075;
    } else if (1.0000000000) {
        cases11059 = 0.0000000000;
    } else { cases11059 = 0.0; }
    double cases11076;
    double binop11077 = pos < src_len;
    double charat11078 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11079 = charat11078 >= 48.0000000000;
    double charat11080 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11081 = charat11080 <= 57.0000000000;
    double binop11082 = binop11079 && binop11081;
    double binop11083 = binop11077 && binop11082;
    double binop11084 = pos < src_len;
    double charat11085 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11086 = charat11085 == 43.0000000000;
    double charat11087 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11088 = charat11087 == 42.0000000000;
    double binop11089 = binop11086 || binop11088;
    double binop11090 = binop11084 && binop11089;
    if (binop11083) {
    double binop11091 = pos + 3.0000000000;
        cases11076 = binop11091;
    } else if (binop11090) {
    double binop11092 = pos + 2.0000000000;
        cases11076 = binop11092;
    } else if (1.0000000000) {
    double binop11093 = src_len + 1.0000000000;
        cases11076 = binop11093;
    } else { cases11076 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11058] = 0.0000000000;
    tokens[(int)binop11054] = 0.0000000000;
    tokens[(int)binop11036] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11094 = 189.0000000000 - 1.0000000000;
    double binop11095 = binop11094 * 3.0000000000;
    double cases11096;
    double binop11097 = pos < src_len;
    double charat11098 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11099 = charat11098 >= 48.0000000000;
    double charat11100 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11101 = charat11100 <= 57.0000000000;
    double binop11102 = binop11099 && binop11101;
    double binop11103 = binop11097 && binop11102;
    double binop11104 = pos < src_len;
    double charat11105 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11106 = charat11105 == 43.0000000000;
    double binop11107 = binop11104 && binop11106;
    double binop11108 = pos < src_len;
    double charat11109 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11110 = charat11109 == 42.0000000000;
    double binop11111 = binop11108 && binop11110;
    if (binop11103) {
        cases11096 = TOK_NUMBER;
    } else if (binop11107) {
        cases11096 = TOK_PLUS;
    } else if (binop11111) {
        cases11096 = TOK_MUL;
    } else if (1.0000000000) {
        cases11096 = 0.0000000000;
    } else { cases11096 = 0.0; }
    double binop11112 = 189.0000000000 - 1.0000000000;
    double binop11113 = binop11112 * 0.0000000000;
    double cases11114;
    double binop11115 = pos < src_len;
    if (binop11115) {
        cases11114 = pos;
    } else if (1.0000000000) {
        cases11114 = 0.0000000000;
    } else { cases11114 = 0.0; }
    double binop11116 = 189.0000000000 - 1.0000000000;
    double binop11117 = binop11116 * 0.0000000000;
    double cases11118;
    double binop11119 = pos < src_len;
    double charat11120 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11121 = charat11120 >= 48.0000000000;
    double charat11122 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11123 = charat11122 <= 57.0000000000;
    double binop11124 = binop11121 && binop11123;
    double binop11125 = binop11119 && binop11124;
    double binop11126 = pos < src_len;
    double charat11127 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11128 = charat11127 == 43.0000000000;
    double charat11129 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11130 = charat11129 == 42.0000000000;
    double binop11131 = binop11128 || binop11130;
    double binop11132 = binop11126 && binop11131;
    if (binop11125) {
    double binop11133 = pos + 2.0000000000;
        cases11118 = binop11133;
    } else if (binop11132) {
    double binop11134 = pos + 1.0000000000;
        cases11118 = binop11134;
    } else if (1.0000000000) {
        cases11118 = 0.0000000000;
    } else { cases11118 = 0.0; }
    double cases11135;
    double binop11136 = pos < src_len;
    double charat11137 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11138 = charat11137 >= 48.0000000000;
    double charat11139 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11140 = charat11139 <= 57.0000000000;
    double binop11141 = binop11138 && binop11140;
    double binop11142 = binop11136 && binop11141;
    double binop11143 = pos < src_len;
    double charat11144 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11145 = charat11144 == 43.0000000000;
    double charat11146 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11147 = charat11146 == 42.0000000000;
    double binop11148 = binop11145 || binop11147;
    double binop11149 = binop11143 && binop11148;
    if (binop11142) {
    double binop11150 = pos + 3.0000000000;
        cases11135 = binop11150;
    } else if (binop11149) {
    double binop11151 = pos + 2.0000000000;
        cases11135 = binop11151;
    } else if (1.0000000000) {
    double binop11152 = src_len + 1.0000000000;
        cases11135 = binop11152;
    } else { cases11135 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11117] = 0.0000000000;
    tokens[(int)binop11113] = 0.0000000000;
    tokens[(int)binop11095] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11153 = 190.0000000000 - 1.0000000000;
    double binop11154 = binop11153 * 3.0000000000;
    double cases11155;
    double binop11156 = pos < src_len;
    double charat11157 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11158 = charat11157 >= 48.0000000000;
    double charat11159 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11160 = charat11159 <= 57.0000000000;
    double binop11161 = binop11158 && binop11160;
    double binop11162 = binop11156 && binop11161;
    double binop11163 = pos < src_len;
    double charat11164 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11165 = charat11164 == 43.0000000000;
    double binop11166 = binop11163 && binop11165;
    double binop11167 = pos < src_len;
    double charat11168 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11169 = charat11168 == 42.0000000000;
    double binop11170 = binop11167 && binop11169;
    if (binop11162) {
        cases11155 = TOK_NUMBER;
    } else if (binop11166) {
        cases11155 = TOK_PLUS;
    } else if (binop11170) {
        cases11155 = TOK_MUL;
    } else if (1.0000000000) {
        cases11155 = 0.0000000000;
    } else { cases11155 = 0.0; }
    double binop11171 = 190.0000000000 - 1.0000000000;
    double binop11172 = binop11171 * 0.0000000000;
    double cases11173;
    double binop11174 = pos < src_len;
    if (binop11174) {
        cases11173 = pos;
    } else if (1.0000000000) {
        cases11173 = 0.0000000000;
    } else { cases11173 = 0.0; }
    double binop11175 = 190.0000000000 - 1.0000000000;
    double binop11176 = binop11175 * 0.0000000000;
    double cases11177;
    double binop11178 = pos < src_len;
    double charat11179 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11180 = charat11179 >= 48.0000000000;
    double charat11181 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11182 = charat11181 <= 57.0000000000;
    double binop11183 = binop11180 && binop11182;
    double binop11184 = binop11178 && binop11183;
    double binop11185 = pos < src_len;
    double charat11186 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11187 = charat11186 == 43.0000000000;
    double charat11188 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11189 = charat11188 == 42.0000000000;
    double binop11190 = binop11187 || binop11189;
    double binop11191 = binop11185 && binop11190;
    if (binop11184) {
    double binop11192 = pos + 2.0000000000;
        cases11177 = binop11192;
    } else if (binop11191) {
    double binop11193 = pos + 1.0000000000;
        cases11177 = binop11193;
    } else if (1.0000000000) {
        cases11177 = 0.0000000000;
    } else { cases11177 = 0.0; }
    double cases11194;
    double binop11195 = pos < src_len;
    double charat11196 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11197 = charat11196 >= 48.0000000000;
    double charat11198 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11199 = charat11198 <= 57.0000000000;
    double binop11200 = binop11197 && binop11199;
    double binop11201 = binop11195 && binop11200;
    double binop11202 = pos < src_len;
    double charat11203 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11204 = charat11203 == 43.0000000000;
    double charat11205 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11206 = charat11205 == 42.0000000000;
    double binop11207 = binop11204 || binop11206;
    double binop11208 = binop11202 && binop11207;
    if (binop11201) {
    double binop11209 = pos + 3.0000000000;
        cases11194 = binop11209;
    } else if (binop11208) {
    double binop11210 = pos + 2.0000000000;
        cases11194 = binop11210;
    } else if (1.0000000000) {
    double binop11211 = src_len + 1.0000000000;
        cases11194 = binop11211;
    } else { cases11194 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11176] = 0.0000000000;
    tokens[(int)binop11172] = 0.0000000000;
    tokens[(int)binop11154] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11212 = 191.0000000000 - 1.0000000000;
    double binop11213 = binop11212 * 3.0000000000;
    double cases11214;
    double binop11215 = pos < src_len;
    double charat11216 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11217 = charat11216 >= 48.0000000000;
    double charat11218 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11219 = charat11218 <= 57.0000000000;
    double binop11220 = binop11217 && binop11219;
    double binop11221 = binop11215 && binop11220;
    double binop11222 = pos < src_len;
    double charat11223 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11224 = charat11223 == 43.0000000000;
    double binop11225 = binop11222 && binop11224;
    double binop11226 = pos < src_len;
    double charat11227 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11228 = charat11227 == 42.0000000000;
    double binop11229 = binop11226 && binop11228;
    if (binop11221) {
        cases11214 = TOK_NUMBER;
    } else if (binop11225) {
        cases11214 = TOK_PLUS;
    } else if (binop11229) {
        cases11214 = TOK_MUL;
    } else if (1.0000000000) {
        cases11214 = 0.0000000000;
    } else { cases11214 = 0.0; }
    double binop11230 = 191.0000000000 - 1.0000000000;
    double binop11231 = binop11230 * 0.0000000000;
    double cases11232;
    double binop11233 = pos < src_len;
    if (binop11233) {
        cases11232 = pos;
    } else if (1.0000000000) {
        cases11232 = 0.0000000000;
    } else { cases11232 = 0.0; }
    double binop11234 = 191.0000000000 - 1.0000000000;
    double binop11235 = binop11234 * 0.0000000000;
    double cases11236;
    double binop11237 = pos < src_len;
    double charat11238 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11239 = charat11238 >= 48.0000000000;
    double charat11240 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11241 = charat11240 <= 57.0000000000;
    double binop11242 = binop11239 && binop11241;
    double binop11243 = binop11237 && binop11242;
    double binop11244 = pos < src_len;
    double charat11245 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11246 = charat11245 == 43.0000000000;
    double charat11247 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11248 = charat11247 == 42.0000000000;
    double binop11249 = binop11246 || binop11248;
    double binop11250 = binop11244 && binop11249;
    if (binop11243) {
    double binop11251 = pos + 2.0000000000;
        cases11236 = binop11251;
    } else if (binop11250) {
    double binop11252 = pos + 1.0000000000;
        cases11236 = binop11252;
    } else if (1.0000000000) {
        cases11236 = 0.0000000000;
    } else { cases11236 = 0.0; }
    double cases11253;
    double binop11254 = pos < src_len;
    double charat11255 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11256 = charat11255 >= 48.0000000000;
    double charat11257 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11258 = charat11257 <= 57.0000000000;
    double binop11259 = binop11256 && binop11258;
    double binop11260 = binop11254 && binop11259;
    double binop11261 = pos < src_len;
    double charat11262 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11263 = charat11262 == 43.0000000000;
    double charat11264 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11265 = charat11264 == 42.0000000000;
    double binop11266 = binop11263 || binop11265;
    double binop11267 = binop11261 && binop11266;
    if (binop11260) {
    double binop11268 = pos + 3.0000000000;
        cases11253 = binop11268;
    } else if (binop11267) {
    double binop11269 = pos + 2.0000000000;
        cases11253 = binop11269;
    } else if (1.0000000000) {
    double binop11270 = src_len + 1.0000000000;
        cases11253 = binop11270;
    } else { cases11253 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11235] = 0.0000000000;
    tokens[(int)binop11231] = 0.0000000000;
    tokens[(int)binop11213] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11271 = 192.0000000000 - 1.0000000000;
    double binop11272 = binop11271 * 3.0000000000;
    double cases11273;
    double binop11274 = pos < src_len;
    double charat11275 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11276 = charat11275 >= 48.0000000000;
    double charat11277 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11278 = charat11277 <= 57.0000000000;
    double binop11279 = binop11276 && binop11278;
    double binop11280 = binop11274 && binop11279;
    double binop11281 = pos < src_len;
    double charat11282 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11283 = charat11282 == 43.0000000000;
    double binop11284 = binop11281 && binop11283;
    double binop11285 = pos < src_len;
    double charat11286 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11287 = charat11286 == 42.0000000000;
    double binop11288 = binop11285 && binop11287;
    if (binop11280) {
        cases11273 = TOK_NUMBER;
    } else if (binop11284) {
        cases11273 = TOK_PLUS;
    } else if (binop11288) {
        cases11273 = TOK_MUL;
    } else if (1.0000000000) {
        cases11273 = 0.0000000000;
    } else { cases11273 = 0.0; }
    double binop11289 = 192.0000000000 - 1.0000000000;
    double binop11290 = binop11289 * 0.0000000000;
    double cases11291;
    double binop11292 = pos < src_len;
    if (binop11292) {
        cases11291 = pos;
    } else if (1.0000000000) {
        cases11291 = 0.0000000000;
    } else { cases11291 = 0.0; }
    double binop11293 = 192.0000000000 - 1.0000000000;
    double binop11294 = binop11293 * 0.0000000000;
    double cases11295;
    double binop11296 = pos < src_len;
    double charat11297 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11298 = charat11297 >= 48.0000000000;
    double charat11299 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11300 = charat11299 <= 57.0000000000;
    double binop11301 = binop11298 && binop11300;
    double binop11302 = binop11296 && binop11301;
    double binop11303 = pos < src_len;
    double charat11304 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11305 = charat11304 == 43.0000000000;
    double charat11306 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11307 = charat11306 == 42.0000000000;
    double binop11308 = binop11305 || binop11307;
    double binop11309 = binop11303 && binop11308;
    if (binop11302) {
    double binop11310 = pos + 2.0000000000;
        cases11295 = binop11310;
    } else if (binop11309) {
    double binop11311 = pos + 1.0000000000;
        cases11295 = binop11311;
    } else if (1.0000000000) {
        cases11295 = 0.0000000000;
    } else { cases11295 = 0.0; }
    double cases11312;
    double binop11313 = pos < src_len;
    double charat11314 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11315 = charat11314 >= 48.0000000000;
    double charat11316 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11317 = charat11316 <= 57.0000000000;
    double binop11318 = binop11315 && binop11317;
    double binop11319 = binop11313 && binop11318;
    double binop11320 = pos < src_len;
    double charat11321 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11322 = charat11321 == 43.0000000000;
    double charat11323 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11324 = charat11323 == 42.0000000000;
    double binop11325 = binop11322 || binop11324;
    double binop11326 = binop11320 && binop11325;
    if (binop11319) {
    double binop11327 = pos + 3.0000000000;
        cases11312 = binop11327;
    } else if (binop11326) {
    double binop11328 = pos + 2.0000000000;
        cases11312 = binop11328;
    } else if (1.0000000000) {
    double binop11329 = src_len + 1.0000000000;
        cases11312 = binop11329;
    } else { cases11312 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11294] = 0.0000000000;
    tokens[(int)binop11290] = 0.0000000000;
    tokens[(int)binop11272] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11330 = 193.0000000000 - 1.0000000000;
    double binop11331 = binop11330 * 3.0000000000;
    double cases11332;
    double binop11333 = pos < src_len;
    double charat11334 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11335 = charat11334 >= 48.0000000000;
    double charat11336 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11337 = charat11336 <= 57.0000000000;
    double binop11338 = binop11335 && binop11337;
    double binop11339 = binop11333 && binop11338;
    double binop11340 = pos < src_len;
    double charat11341 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11342 = charat11341 == 43.0000000000;
    double binop11343 = binop11340 && binop11342;
    double binop11344 = pos < src_len;
    double charat11345 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11346 = charat11345 == 42.0000000000;
    double binop11347 = binop11344 && binop11346;
    if (binop11339) {
        cases11332 = TOK_NUMBER;
    } else if (binop11343) {
        cases11332 = TOK_PLUS;
    } else if (binop11347) {
        cases11332 = TOK_MUL;
    } else if (1.0000000000) {
        cases11332 = 0.0000000000;
    } else { cases11332 = 0.0; }
    double binop11348 = 193.0000000000 - 1.0000000000;
    double binop11349 = binop11348 * 0.0000000000;
    double cases11350;
    double binop11351 = pos < src_len;
    if (binop11351) {
        cases11350 = pos;
    } else if (1.0000000000) {
        cases11350 = 0.0000000000;
    } else { cases11350 = 0.0; }
    double binop11352 = 193.0000000000 - 1.0000000000;
    double binop11353 = binop11352 * 0.0000000000;
    double cases11354;
    double binop11355 = pos < src_len;
    double charat11356 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11357 = charat11356 >= 48.0000000000;
    double charat11358 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11359 = charat11358 <= 57.0000000000;
    double binop11360 = binop11357 && binop11359;
    double binop11361 = binop11355 && binop11360;
    double binop11362 = pos < src_len;
    double charat11363 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11364 = charat11363 == 43.0000000000;
    double charat11365 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11366 = charat11365 == 42.0000000000;
    double binop11367 = binop11364 || binop11366;
    double binop11368 = binop11362 && binop11367;
    if (binop11361) {
    double binop11369 = pos + 2.0000000000;
        cases11354 = binop11369;
    } else if (binop11368) {
    double binop11370 = pos + 1.0000000000;
        cases11354 = binop11370;
    } else if (1.0000000000) {
        cases11354 = 0.0000000000;
    } else { cases11354 = 0.0; }
    double cases11371;
    double binop11372 = pos < src_len;
    double charat11373 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11374 = charat11373 >= 48.0000000000;
    double charat11375 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11376 = charat11375 <= 57.0000000000;
    double binop11377 = binop11374 && binop11376;
    double binop11378 = binop11372 && binop11377;
    double binop11379 = pos < src_len;
    double charat11380 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11381 = charat11380 == 43.0000000000;
    double charat11382 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11383 = charat11382 == 42.0000000000;
    double binop11384 = binop11381 || binop11383;
    double binop11385 = binop11379 && binop11384;
    if (binop11378) {
    double binop11386 = pos + 3.0000000000;
        cases11371 = binop11386;
    } else if (binop11385) {
    double binop11387 = pos + 2.0000000000;
        cases11371 = binop11387;
    } else if (1.0000000000) {
    double binop11388 = src_len + 1.0000000000;
        cases11371 = binop11388;
    } else { cases11371 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11353] = 0.0000000000;
    tokens[(int)binop11349] = 0.0000000000;
    tokens[(int)binop11331] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11389 = 194.0000000000 - 1.0000000000;
    double binop11390 = binop11389 * 3.0000000000;
    double cases11391;
    double binop11392 = pos < src_len;
    double charat11393 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11394 = charat11393 >= 48.0000000000;
    double charat11395 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11396 = charat11395 <= 57.0000000000;
    double binop11397 = binop11394 && binop11396;
    double binop11398 = binop11392 && binop11397;
    double binop11399 = pos < src_len;
    double charat11400 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11401 = charat11400 == 43.0000000000;
    double binop11402 = binop11399 && binop11401;
    double binop11403 = pos < src_len;
    double charat11404 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11405 = charat11404 == 42.0000000000;
    double binop11406 = binop11403 && binop11405;
    if (binop11398) {
        cases11391 = TOK_NUMBER;
    } else if (binop11402) {
        cases11391 = TOK_PLUS;
    } else if (binop11406) {
        cases11391 = TOK_MUL;
    } else if (1.0000000000) {
        cases11391 = 0.0000000000;
    } else { cases11391 = 0.0; }
    double binop11407 = 194.0000000000 - 1.0000000000;
    double binop11408 = binop11407 * 0.0000000000;
    double cases11409;
    double binop11410 = pos < src_len;
    if (binop11410) {
        cases11409 = pos;
    } else if (1.0000000000) {
        cases11409 = 0.0000000000;
    } else { cases11409 = 0.0; }
    double binop11411 = 194.0000000000 - 1.0000000000;
    double binop11412 = binop11411 * 0.0000000000;
    double cases11413;
    double binop11414 = pos < src_len;
    double charat11415 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11416 = charat11415 >= 48.0000000000;
    double charat11417 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11418 = charat11417 <= 57.0000000000;
    double binop11419 = binop11416 && binop11418;
    double binop11420 = binop11414 && binop11419;
    double binop11421 = pos < src_len;
    double charat11422 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11423 = charat11422 == 43.0000000000;
    double charat11424 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11425 = charat11424 == 42.0000000000;
    double binop11426 = binop11423 || binop11425;
    double binop11427 = binop11421 && binop11426;
    if (binop11420) {
    double binop11428 = pos + 2.0000000000;
        cases11413 = binop11428;
    } else if (binop11427) {
    double binop11429 = pos + 1.0000000000;
        cases11413 = binop11429;
    } else if (1.0000000000) {
        cases11413 = 0.0000000000;
    } else { cases11413 = 0.0; }
    double cases11430;
    double binop11431 = pos < src_len;
    double charat11432 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11433 = charat11432 >= 48.0000000000;
    double charat11434 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11435 = charat11434 <= 57.0000000000;
    double binop11436 = binop11433 && binop11435;
    double binop11437 = binop11431 && binop11436;
    double binop11438 = pos < src_len;
    double charat11439 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11440 = charat11439 == 43.0000000000;
    double charat11441 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11442 = charat11441 == 42.0000000000;
    double binop11443 = binop11440 || binop11442;
    double binop11444 = binop11438 && binop11443;
    if (binop11437) {
    double binop11445 = pos + 3.0000000000;
        cases11430 = binop11445;
    } else if (binop11444) {
    double binop11446 = pos + 2.0000000000;
        cases11430 = binop11446;
    } else if (1.0000000000) {
    double binop11447 = src_len + 1.0000000000;
        cases11430 = binop11447;
    } else { cases11430 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11412] = 0.0000000000;
    tokens[(int)binop11408] = 0.0000000000;
    tokens[(int)binop11390] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11448 = 195.0000000000 - 1.0000000000;
    double binop11449 = binop11448 * 3.0000000000;
    double cases11450;
    double binop11451 = pos < src_len;
    double charat11452 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11453 = charat11452 >= 48.0000000000;
    double charat11454 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11455 = charat11454 <= 57.0000000000;
    double binop11456 = binop11453 && binop11455;
    double binop11457 = binop11451 && binop11456;
    double binop11458 = pos < src_len;
    double charat11459 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11460 = charat11459 == 43.0000000000;
    double binop11461 = binop11458 && binop11460;
    double binop11462 = pos < src_len;
    double charat11463 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11464 = charat11463 == 42.0000000000;
    double binop11465 = binop11462 && binop11464;
    if (binop11457) {
        cases11450 = TOK_NUMBER;
    } else if (binop11461) {
        cases11450 = TOK_PLUS;
    } else if (binop11465) {
        cases11450 = TOK_MUL;
    } else if (1.0000000000) {
        cases11450 = 0.0000000000;
    } else { cases11450 = 0.0; }
    double binop11466 = 195.0000000000 - 1.0000000000;
    double binop11467 = binop11466 * 0.0000000000;
    double cases11468;
    double binop11469 = pos < src_len;
    if (binop11469) {
        cases11468 = pos;
    } else if (1.0000000000) {
        cases11468 = 0.0000000000;
    } else { cases11468 = 0.0; }
    double binop11470 = 195.0000000000 - 1.0000000000;
    double binop11471 = binop11470 * 0.0000000000;
    double cases11472;
    double binop11473 = pos < src_len;
    double charat11474 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11475 = charat11474 >= 48.0000000000;
    double charat11476 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11477 = charat11476 <= 57.0000000000;
    double binop11478 = binop11475 && binop11477;
    double binop11479 = binop11473 && binop11478;
    double binop11480 = pos < src_len;
    double charat11481 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11482 = charat11481 == 43.0000000000;
    double charat11483 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11484 = charat11483 == 42.0000000000;
    double binop11485 = binop11482 || binop11484;
    double binop11486 = binop11480 && binop11485;
    if (binop11479) {
    double binop11487 = pos + 2.0000000000;
        cases11472 = binop11487;
    } else if (binop11486) {
    double binop11488 = pos + 1.0000000000;
        cases11472 = binop11488;
    } else if (1.0000000000) {
        cases11472 = 0.0000000000;
    } else { cases11472 = 0.0; }
    double cases11489;
    double binop11490 = pos < src_len;
    double charat11491 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11492 = charat11491 >= 48.0000000000;
    double charat11493 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11494 = charat11493 <= 57.0000000000;
    double binop11495 = binop11492 && binop11494;
    double binop11496 = binop11490 && binop11495;
    double binop11497 = pos < src_len;
    double charat11498 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11499 = charat11498 == 43.0000000000;
    double charat11500 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11501 = charat11500 == 42.0000000000;
    double binop11502 = binop11499 || binop11501;
    double binop11503 = binop11497 && binop11502;
    if (binop11496) {
    double binop11504 = pos + 3.0000000000;
        cases11489 = binop11504;
    } else if (binop11503) {
    double binop11505 = pos + 2.0000000000;
        cases11489 = binop11505;
    } else if (1.0000000000) {
    double binop11506 = src_len + 1.0000000000;
        cases11489 = binop11506;
    } else { cases11489 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11471] = 0.0000000000;
    tokens[(int)binop11467] = 0.0000000000;
    tokens[(int)binop11449] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11507 = 196.0000000000 - 1.0000000000;
    double binop11508 = binop11507 * 3.0000000000;
    double cases11509;
    double binop11510 = pos < src_len;
    double charat11511 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11512 = charat11511 >= 48.0000000000;
    double charat11513 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11514 = charat11513 <= 57.0000000000;
    double binop11515 = binop11512 && binop11514;
    double binop11516 = binop11510 && binop11515;
    double binop11517 = pos < src_len;
    double charat11518 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11519 = charat11518 == 43.0000000000;
    double binop11520 = binop11517 && binop11519;
    double binop11521 = pos < src_len;
    double charat11522 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11523 = charat11522 == 42.0000000000;
    double binop11524 = binop11521 && binop11523;
    if (binop11516) {
        cases11509 = TOK_NUMBER;
    } else if (binop11520) {
        cases11509 = TOK_PLUS;
    } else if (binop11524) {
        cases11509 = TOK_MUL;
    } else if (1.0000000000) {
        cases11509 = 0.0000000000;
    } else { cases11509 = 0.0; }
    double binop11525 = 196.0000000000 - 1.0000000000;
    double binop11526 = binop11525 * 0.0000000000;
    double cases11527;
    double binop11528 = pos < src_len;
    if (binop11528) {
        cases11527 = pos;
    } else if (1.0000000000) {
        cases11527 = 0.0000000000;
    } else { cases11527 = 0.0; }
    double binop11529 = 196.0000000000 - 1.0000000000;
    double binop11530 = binop11529 * 0.0000000000;
    double cases11531;
    double binop11532 = pos < src_len;
    double charat11533 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11534 = charat11533 >= 48.0000000000;
    double charat11535 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11536 = charat11535 <= 57.0000000000;
    double binop11537 = binop11534 && binop11536;
    double binop11538 = binop11532 && binop11537;
    double binop11539 = pos < src_len;
    double charat11540 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11541 = charat11540 == 43.0000000000;
    double charat11542 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11543 = charat11542 == 42.0000000000;
    double binop11544 = binop11541 || binop11543;
    double binop11545 = binop11539 && binop11544;
    if (binop11538) {
    double binop11546 = pos + 2.0000000000;
        cases11531 = binop11546;
    } else if (binop11545) {
    double binop11547 = pos + 1.0000000000;
        cases11531 = binop11547;
    } else if (1.0000000000) {
        cases11531 = 0.0000000000;
    } else { cases11531 = 0.0; }
    double cases11548;
    double binop11549 = pos < src_len;
    double charat11550 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11551 = charat11550 >= 48.0000000000;
    double charat11552 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11553 = charat11552 <= 57.0000000000;
    double binop11554 = binop11551 && binop11553;
    double binop11555 = binop11549 && binop11554;
    double binop11556 = pos < src_len;
    double charat11557 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11558 = charat11557 == 43.0000000000;
    double charat11559 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11560 = charat11559 == 42.0000000000;
    double binop11561 = binop11558 || binop11560;
    double binop11562 = binop11556 && binop11561;
    if (binop11555) {
    double binop11563 = pos + 3.0000000000;
        cases11548 = binop11563;
    } else if (binop11562) {
    double binop11564 = pos + 2.0000000000;
        cases11548 = binop11564;
    } else if (1.0000000000) {
    double binop11565 = src_len + 1.0000000000;
        cases11548 = binop11565;
    } else { cases11548 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11530] = 0.0000000000;
    tokens[(int)binop11526] = 0.0000000000;
    tokens[(int)binop11508] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11566 = 197.0000000000 - 1.0000000000;
    double binop11567 = binop11566 * 3.0000000000;
    double cases11568;
    double binop11569 = pos < src_len;
    double charat11570 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11571 = charat11570 >= 48.0000000000;
    double charat11572 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11573 = charat11572 <= 57.0000000000;
    double binop11574 = binop11571 && binop11573;
    double binop11575 = binop11569 && binop11574;
    double binop11576 = pos < src_len;
    double charat11577 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11578 = charat11577 == 43.0000000000;
    double binop11579 = binop11576 && binop11578;
    double binop11580 = pos < src_len;
    double charat11581 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11582 = charat11581 == 42.0000000000;
    double binop11583 = binop11580 && binop11582;
    if (binop11575) {
        cases11568 = TOK_NUMBER;
    } else if (binop11579) {
        cases11568 = TOK_PLUS;
    } else if (binop11583) {
        cases11568 = TOK_MUL;
    } else if (1.0000000000) {
        cases11568 = 0.0000000000;
    } else { cases11568 = 0.0; }
    double binop11584 = 197.0000000000 - 1.0000000000;
    double binop11585 = binop11584 * 0.0000000000;
    double cases11586;
    double binop11587 = pos < src_len;
    if (binop11587) {
        cases11586 = pos;
    } else if (1.0000000000) {
        cases11586 = 0.0000000000;
    } else { cases11586 = 0.0; }
    double binop11588 = 197.0000000000 - 1.0000000000;
    double binop11589 = binop11588 * 0.0000000000;
    double cases11590;
    double binop11591 = pos < src_len;
    double charat11592 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11593 = charat11592 >= 48.0000000000;
    double charat11594 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11595 = charat11594 <= 57.0000000000;
    double binop11596 = binop11593 && binop11595;
    double binop11597 = binop11591 && binop11596;
    double binop11598 = pos < src_len;
    double charat11599 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11600 = charat11599 == 43.0000000000;
    double charat11601 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11602 = charat11601 == 42.0000000000;
    double binop11603 = binop11600 || binop11602;
    double binop11604 = binop11598 && binop11603;
    if (binop11597) {
    double binop11605 = pos + 2.0000000000;
        cases11590 = binop11605;
    } else if (binop11604) {
    double binop11606 = pos + 1.0000000000;
        cases11590 = binop11606;
    } else if (1.0000000000) {
        cases11590 = 0.0000000000;
    } else { cases11590 = 0.0; }
    double cases11607;
    double binop11608 = pos < src_len;
    double charat11609 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11610 = charat11609 >= 48.0000000000;
    double charat11611 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11612 = charat11611 <= 57.0000000000;
    double binop11613 = binop11610 && binop11612;
    double binop11614 = binop11608 && binop11613;
    double binop11615 = pos < src_len;
    double charat11616 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11617 = charat11616 == 43.0000000000;
    double charat11618 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11619 = charat11618 == 42.0000000000;
    double binop11620 = binop11617 || binop11619;
    double binop11621 = binop11615 && binop11620;
    if (binop11614) {
    double binop11622 = pos + 3.0000000000;
        cases11607 = binop11622;
    } else if (binop11621) {
    double binop11623 = pos + 2.0000000000;
        cases11607 = binop11623;
    } else if (1.0000000000) {
    double binop11624 = src_len + 1.0000000000;
        cases11607 = binop11624;
    } else { cases11607 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11589] = 0.0000000000;
    tokens[(int)binop11585] = 0.0000000000;
    tokens[(int)binop11567] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11625 = 198.0000000000 - 1.0000000000;
    double binop11626 = binop11625 * 3.0000000000;
    double cases11627;
    double binop11628 = pos < src_len;
    double charat11629 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11630 = charat11629 >= 48.0000000000;
    double charat11631 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11632 = charat11631 <= 57.0000000000;
    double binop11633 = binop11630 && binop11632;
    double binop11634 = binop11628 && binop11633;
    double binop11635 = pos < src_len;
    double charat11636 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11637 = charat11636 == 43.0000000000;
    double binop11638 = binop11635 && binop11637;
    double binop11639 = pos < src_len;
    double charat11640 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11641 = charat11640 == 42.0000000000;
    double binop11642 = binop11639 && binop11641;
    if (binop11634) {
        cases11627 = TOK_NUMBER;
    } else if (binop11638) {
        cases11627 = TOK_PLUS;
    } else if (binop11642) {
        cases11627 = TOK_MUL;
    } else if (1.0000000000) {
        cases11627 = 0.0000000000;
    } else { cases11627 = 0.0; }
    double binop11643 = 198.0000000000 - 1.0000000000;
    double binop11644 = binop11643 * 0.0000000000;
    double cases11645;
    double binop11646 = pos < src_len;
    if (binop11646) {
        cases11645 = pos;
    } else if (1.0000000000) {
        cases11645 = 0.0000000000;
    } else { cases11645 = 0.0; }
    double binop11647 = 198.0000000000 - 1.0000000000;
    double binop11648 = binop11647 * 0.0000000000;
    double cases11649;
    double binop11650 = pos < src_len;
    double charat11651 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11652 = charat11651 >= 48.0000000000;
    double charat11653 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11654 = charat11653 <= 57.0000000000;
    double binop11655 = binop11652 && binop11654;
    double binop11656 = binop11650 && binop11655;
    double binop11657 = pos < src_len;
    double charat11658 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11659 = charat11658 == 43.0000000000;
    double charat11660 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11661 = charat11660 == 42.0000000000;
    double binop11662 = binop11659 || binop11661;
    double binop11663 = binop11657 && binop11662;
    if (binop11656) {
    double binop11664 = pos + 2.0000000000;
        cases11649 = binop11664;
    } else if (binop11663) {
    double binop11665 = pos + 1.0000000000;
        cases11649 = binop11665;
    } else if (1.0000000000) {
        cases11649 = 0.0000000000;
    } else { cases11649 = 0.0; }
    double cases11666;
    double binop11667 = pos < src_len;
    double charat11668 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11669 = charat11668 >= 48.0000000000;
    double charat11670 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11671 = charat11670 <= 57.0000000000;
    double binop11672 = binop11669 && binop11671;
    double binop11673 = binop11667 && binop11672;
    double binop11674 = pos < src_len;
    double charat11675 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11676 = charat11675 == 43.0000000000;
    double charat11677 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11678 = charat11677 == 42.0000000000;
    double binop11679 = binop11676 || binop11678;
    double binop11680 = binop11674 && binop11679;
    if (binop11673) {
    double binop11681 = pos + 3.0000000000;
        cases11666 = binop11681;
    } else if (binop11680) {
    double binop11682 = pos + 2.0000000000;
        cases11666 = binop11682;
    } else if (1.0000000000) {
    double binop11683 = src_len + 1.0000000000;
        cases11666 = binop11683;
    } else { cases11666 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11648] = 0.0000000000;
    tokens[(int)binop11644] = 0.0000000000;
    tokens[(int)binop11626] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11684 = 199.0000000000 - 1.0000000000;
    double binop11685 = binop11684 * 3.0000000000;
    double cases11686;
    double binop11687 = pos < src_len;
    double charat11688 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11689 = charat11688 >= 48.0000000000;
    double charat11690 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11691 = charat11690 <= 57.0000000000;
    double binop11692 = binop11689 && binop11691;
    double binop11693 = binop11687 && binop11692;
    double binop11694 = pos < src_len;
    double charat11695 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11696 = charat11695 == 43.0000000000;
    double binop11697 = binop11694 && binop11696;
    double binop11698 = pos < src_len;
    double charat11699 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11700 = charat11699 == 42.0000000000;
    double binop11701 = binop11698 && binop11700;
    if (binop11693) {
        cases11686 = TOK_NUMBER;
    } else if (binop11697) {
        cases11686 = TOK_PLUS;
    } else if (binop11701) {
        cases11686 = TOK_MUL;
    } else if (1.0000000000) {
        cases11686 = 0.0000000000;
    } else { cases11686 = 0.0; }
    double binop11702 = 199.0000000000 - 1.0000000000;
    double binop11703 = binop11702 * 0.0000000000;
    double cases11704;
    double binop11705 = pos < src_len;
    if (binop11705) {
        cases11704 = pos;
    } else if (1.0000000000) {
        cases11704 = 0.0000000000;
    } else { cases11704 = 0.0; }
    double binop11706 = 199.0000000000 - 1.0000000000;
    double binop11707 = binop11706 * 0.0000000000;
    double cases11708;
    double binop11709 = pos < src_len;
    double charat11710 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11711 = charat11710 >= 48.0000000000;
    double charat11712 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11713 = charat11712 <= 57.0000000000;
    double binop11714 = binop11711 && binop11713;
    double binop11715 = binop11709 && binop11714;
    double binop11716 = pos < src_len;
    double charat11717 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11718 = charat11717 == 43.0000000000;
    double charat11719 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11720 = charat11719 == 42.0000000000;
    double binop11721 = binop11718 || binop11720;
    double binop11722 = binop11716 && binop11721;
    if (binop11715) {
    double binop11723 = pos + 2.0000000000;
        cases11708 = binop11723;
    } else if (binop11722) {
    double binop11724 = pos + 1.0000000000;
        cases11708 = binop11724;
    } else if (1.0000000000) {
        cases11708 = 0.0000000000;
    } else { cases11708 = 0.0; }
    double cases11725;
    double binop11726 = pos < src_len;
    double charat11727 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11728 = charat11727 >= 48.0000000000;
    double charat11729 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11730 = charat11729 <= 57.0000000000;
    double binop11731 = binop11728 && binop11730;
    double binop11732 = binop11726 && binop11731;
    double binop11733 = pos < src_len;
    double charat11734 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11735 = charat11734 == 43.0000000000;
    double charat11736 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11737 = charat11736 == 42.0000000000;
    double binop11738 = binop11735 || binop11737;
    double binop11739 = binop11733 && binop11738;
    if (binop11732) {
    double binop11740 = pos + 3.0000000000;
        cases11725 = binop11740;
    } else if (binop11739) {
    double binop11741 = pos + 2.0000000000;
        cases11725 = binop11741;
    } else if (1.0000000000) {
    double binop11742 = src_len + 1.0000000000;
        cases11725 = binop11742;
    } else { cases11725 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11707] = 0.0000000000;
    tokens[(int)binop11703] = 0.0000000000;
    tokens[(int)binop11685] = 0.0000000000;
    sum1 += 0.0000000000;
    double binop11743 = 200.0000000000 - 1.0000000000;
    double binop11744 = binop11743 * 3.0000000000;
    double cases11745;
    double binop11746 = pos < src_len;
    double charat11747 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11748 = charat11747 >= 48.0000000000;
    double charat11749 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11750 = charat11749 <= 57.0000000000;
    double binop11751 = binop11748 && binop11750;
    double binop11752 = binop11746 && binop11751;
    double binop11753 = pos < src_len;
    double charat11754 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11755 = charat11754 == 43.0000000000;
    double binop11756 = binop11753 && binop11755;
    double binop11757 = pos < src_len;
    double charat11758 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11759 = charat11758 == 42.0000000000;
    double binop11760 = binop11757 && binop11759;
    if (binop11752) {
        cases11745 = TOK_NUMBER;
    } else if (binop11756) {
        cases11745 = TOK_PLUS;
    } else if (binop11760) {
        cases11745 = TOK_MUL;
    } else if (1.0000000000) {
        cases11745 = 0.0000000000;
    } else { cases11745 = 0.0; }
    double binop11761 = 200.0000000000 - 1.0000000000;
    double binop11762 = binop11761 * 0.0000000000;
    double cases11763;
    double binop11764 = pos < src_len;
    if (binop11764) {
        cases11763 = pos;
    } else if (1.0000000000) {
        cases11763 = 0.0000000000;
    } else { cases11763 = 0.0; }
    double binop11765 = 200.0000000000 - 1.0000000000;
    double binop11766 = binop11765 * 0.0000000000;
    double cases11767;
    double binop11768 = pos < src_len;
    double charat11769 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11770 = charat11769 >= 48.0000000000;
    double charat11771 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11772 = charat11771 <= 57.0000000000;
    double binop11773 = binop11770 && binop11772;
    double binop11774 = binop11768 && binop11773;
    double binop11775 = pos < src_len;
    double charat11776 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11777 = charat11776 == 43.0000000000;
    double charat11778 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11779 = charat11778 == 42.0000000000;
    double binop11780 = binop11777 || binop11779;
    double binop11781 = binop11775 && binop11780;
    if (binop11774) {
    double binop11782 = pos + 2.0000000000;
        cases11767 = binop11782;
    } else if (binop11781) {
    double binop11783 = pos + 1.0000000000;
        cases11767 = binop11783;
    } else if (1.0000000000) {
        cases11767 = 0.0000000000;
    } else { cases11767 = 0.0; }
    double cases11784;
    double binop11785 = pos < src_len;
    double charat11786 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11787 = charat11786 >= 48.0000000000;
    double charat11788 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11789 = charat11788 <= 57.0000000000;
    double binop11790 = binop11787 && binop11789;
    double binop11791 = binop11785 && binop11790;
    double binop11792 = pos < src_len;
    double charat11793 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11794 = charat11793 == 43.0000000000;
    double charat11795 = (double)(unsigned char)"12 + 34 * 2"[(int)pos];
    double binop11796 = charat11795 == 42.0000000000;
    double binop11797 = binop11794 || binop11796;
    double binop11798 = binop11792 && binop11797;
    if (binop11791) {
    double binop11799 = pos + 3.0000000000;
        cases11784 = binop11799;
    } else if (binop11798) {
    double binop11800 = pos + 2.0000000000;
        cases11784 = binop11800;
    } else if (1.0000000000) {
    double binop11801 = src_len + 1.0000000000;
        cases11784 = binop11801;
    } else { cases11784 = 0.0; }
    pos = 0.0000000000;
    tokens[(int)binop11766] = 0.0000000000;
    tokens[(int)binop11762] = 0.0000000000;
    tokens[(int)binop11744] = 0.0000000000;
    sum1 += 0.0000000000;
    dummy = sum1;
    double arr11802 = tokens[(int)0.0000000000];
    printf("%f\n", arr11802);
    double arr11803 = tokens[(int)1.0000000000];
    printf("%f\n", arr11803);
    double arr11804 = tokens[(int)2.0000000000];
    printf("%f\n", arr11804);
    printf("result = %f\n", sum1);
    return 0;
}
