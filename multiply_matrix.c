//Multiply two matrices
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q, i, j, k;

    printf("Enter dimensions of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter dimensions of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Incompatible matrix dimensions\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            c[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}                                                                                                                               