//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int a[10][10], m, n, i, j;

    printf("Enter dimensions of matrix: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("%d ", a[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}