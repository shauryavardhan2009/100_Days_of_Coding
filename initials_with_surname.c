// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = 0;

    // Find the position of the last space (surname)
    int len = strlen(name);
    int surname_start = len;
    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            surname_start = i + 1;
            break;
        }
    }

    // Print initials
    printf("Initials: ");
    for (int i = 0; i < surname_start; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c. ", name[i]);
        }
    }
    printf("\n");

    // Print surname
    printf("Surname: ");
    for (int i = surname_start; i < len; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}