//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("Uppercase string: %s", str);
    return 0;
}
