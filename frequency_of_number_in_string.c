// Count frequency of a given character in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char target;
    int frequency = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count: ");
    scanf("%c", &target);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target) {
            frequency++;
        }
    }

    printf("Frequency of '%c': %d\n", target, frequency);

    return 0;
}
