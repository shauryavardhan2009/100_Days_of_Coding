//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int matrix[10][10];
    int n, i, j;
    bool isDistinct = true;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if diagonal elements are distinct
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = false;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("The elements on the diagonal are distinct.\n");
    } else {
        printf("The elements on the diagonal are not distinct.\n");
    }

    return 0;
}
