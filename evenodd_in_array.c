// count even and odd numbers in an array. 
#include <stdio.h>
int main() {
    int n, i;
    int even_count = 0, odd_count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Even elements: %d\n", even_count);
    printf("Odd elements: %d\n", odd_count);

    return 0;
}
