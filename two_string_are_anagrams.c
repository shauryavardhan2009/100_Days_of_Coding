// Check if two strings are anagrams of each other.
#include <stdio.h>
int areAnagrams(char *str1, char *str2) {
    int count[256] = {0};
    int i;

    for (i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    if (str1[i] || str2[i]) {
        return 0; // Strings are of different lengths
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}