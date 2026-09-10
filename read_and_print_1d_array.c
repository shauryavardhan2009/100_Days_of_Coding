// Read and print elements of a one-dimensional array.
#include <stdio.h>

int main() {
    int arr[10], i, n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("The elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
