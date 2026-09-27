// Print the initials of a name
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';
    
    // Print the first character of the name
    printf("Initial: %c\n", name[0]);
    
    return 0;
}