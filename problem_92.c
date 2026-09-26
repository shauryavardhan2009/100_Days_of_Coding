// Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int freq[26] = {0};
    int first_repeating = -1;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            freq[index]++;
            if (freq[index] == 2) {
                first_repeating = index;
                break;
            }
        }
    }

    if (first_repeating != -1) {
        printf("First repeating lowercase alphabet: %c\n", first_repeating + 'a');
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
