#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }


int main() {
    char concat0[512] = {0};
    strcpy(concat0, "(");
    strcat(concat0, "3");
    char concat1[512] = {0};
    strcpy(concat1, "4");
    strcat(concat1, ")");
    char concat2[512] = {0};
    strcpy(concat2, " + ");
    strcat(concat2, concat1);
    char inner[512] = {0};
    strcpy(inner, concat0);
    strcat(inner, concat2);
    char concat3[512] = {0};
    strcpy(concat3, "(");
    strcat(concat3, inner);
    char concat4[512] = {0};
    strcpy(concat4, "2");
    strcat(concat4, ")");
    char concat5[512] = {0};
    strcpy(concat5, " * ");
    strcat(concat5, concat4);
    char expr[512] = {0};
    strcpy(expr, concat3);
    strcat(expr, concat5);
    char concat6[512] = {0};
    strcpy(concat6, expr);
    strcat(concat6, ";");
    char concat7[512] = {0};
    strcpy(concat7, "    double x = ");
    strcat(concat7, concat6);
    return 0;
}
