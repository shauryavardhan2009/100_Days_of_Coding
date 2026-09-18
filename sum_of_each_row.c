// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() {
    int matrix[10][10];
    int m, n, i, j;
    int rowSums[10] = {0}; // Initialize the array to store row sums

    printf("Enter dimensions of matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    // Print the sums of each row
    printf("Sum of each row:\n");
    for (i = 0; i < m; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
