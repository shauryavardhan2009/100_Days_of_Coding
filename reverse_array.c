// Reverse an array without taking extra space.
#include <stdio.h>
void reverse_array(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

