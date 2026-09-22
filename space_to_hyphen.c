// Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("String after replacing spaces with hyphens: %s", str);
    return 0;
}