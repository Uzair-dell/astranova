#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }


int main() {
    char three[512] = "3";
    char four[512] = "4";
    char two[512] = "2";
    char concat0[512] = {0};
    strcpy(concat0, "(");
    strcat(concat0, three);
    char concat1[512] = {0};
    strcpy(concat1, four);
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
    strcpy(concat4, two);
    strcat(concat4, ")");
    char concat5[512] = {0};
    strcpy(concat5, " * ");
    strcat(concat5, concat4);
    char expr[512] = {0};
    strcpy(expr, concat3);
    strcat(expr, concat5);
    char line1[512] = "#include <stdio.h>";
    char line2[512] = "int main() {";
    char concat6[512] = {0};
    strcpy(concat6, expr);
    strcat(concat6, ";");
    char line3[512] = {0};
    strcpy(line3, "    double x = ");
    strcat(line3, concat6);
    char line4[512] = "    printf(\"%f\\n\", x);";
    char line5[512] = "    return 0;";
    char line6[512] = "}";
    printf("%s\n", line1);
    printf("%s\n", line2);
    printf("%s\n", line3);
    printf("%s\n", line4);
    printf("%s\n", line5);
    printf("%s\n", line6);
    return 0;
}
