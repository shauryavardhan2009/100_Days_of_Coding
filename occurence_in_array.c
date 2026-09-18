//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int findMostFrequentDigit(int number) { 
    int digitCount[10] = {0}; // Array to count occurrences of each digit (0-9)

    // Count occurrences of each digit
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        digitCount[digit]++;     // Increment the count for this digit
        number /= 10;            // Remove the last digit
    }

    // Find the digit with the maximum count
    int maxCount = 0;
    int mostFrequentDigit = -1;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    return mostFrequentDigit; // Return the most frequent digit
}