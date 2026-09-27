#include <stdio.h>

int main()
{
    int m, n, i, j;
    int rowSum, columnSum;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);

    int A[m][n];

    // Input matrix elements
    printf("\nEnter matrix elements:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Calculate sum of each row
    printf("\nSum of each row:\n");

    for (i = 0; i < m; i++)
    {
        rowSum = 0;

        for (j = 0; j < n; j++)
        {
            rowSum = rowSum + A[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    // Calculate sum of each column
    printf("\nSum of each column:\n");

    for (j = 0; j < n; j++)
    {
        columnSum = 0;

        for (i = 0; i < m; i++)
        {
            columnSum = columnSum + A[i][j];
        }

        printf("Sum of column %d = %d\n", j + 1, columnSum);
    }

    return 0;
}