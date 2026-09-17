//Find the sum of all elements in a matrix.
#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}
