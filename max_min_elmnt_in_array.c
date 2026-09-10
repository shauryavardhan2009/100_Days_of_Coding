// Find the maximum and minimum element in an array.
#include <stdio.h>
int find_max(int arr[], int n)
 {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}