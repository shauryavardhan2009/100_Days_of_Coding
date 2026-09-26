// Reverse a string
#include <stdio.h>
void reverseString(char *str) {
    char *start = str;
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--; // Move back to the last character

    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}