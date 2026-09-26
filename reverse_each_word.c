// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}