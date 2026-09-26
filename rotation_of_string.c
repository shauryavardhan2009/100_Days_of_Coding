// Check if one string is a rotation of another.
#include <stdio.h>
int isRotation(char *str1, char *str2) {
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) return 0;

    for (int i = 0; i < len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (str1[(i + j) % len1] != str2[j]) break;
        }
        if (j == len1) return 1;
    }
    return 0;
}