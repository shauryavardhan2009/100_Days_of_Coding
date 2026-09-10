// Find the sum of array elements .
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}

