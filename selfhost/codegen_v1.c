#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }


int main() {
    printf("%s\n", "#include <stdio.h>");
    printf("%s\n", "int main() {");
    printf("%s\n", "    double x = (3+4)*2;");
    printf("%s\n", "    printf(\"%f\\n\", x);");
    printf("%s\n", "    return 0;");
    printf("%s\n", "}");
    return 0;
}
