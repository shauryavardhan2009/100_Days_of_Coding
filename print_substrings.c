// Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    int len = strlen(str);
    int i, j;

    for (i = 0; i < len; i++) {
        for (j = i + 1; j <= len; j++) {
            printf("%.*s\n", j - i, str + i);
        }
    }

    return 0;
}