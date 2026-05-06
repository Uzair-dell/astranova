#include <stdio.h>
#include <math.h>
#include <string.h>

void world_print(const char* msg) { printf("%s\n", msg); }


int main() {
    char hello[512] = "Hello, ";
    char world[512] = "world!";
    char greeting[512] = {0};
    strcpy(greeting, hello);
    strcat(greeting, world);
    printf("%s\n", greeting);
    return 0;
}
