#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r1);

    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c1);

    printf("Enter number of rows of second matrix: ");
    scanf("%d", &r2);

    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c2);

    // Check if multiplication is possible
    if (c1 != r2)
    {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int A[r1][c1];
    int B[r2][c2];
    int Product[r1][c2];

    // Input first matrix
    printf("\nEnter elements of first matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("\nEnter elements of second matrix:\n");

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            Product[i][j] = 0;

            for (k = 0; k < c1; k++)
            {
                Product[i][j] = Product[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    // Display product matrix
    printf("\nProduct matrix:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", Product[i][j]);
        }

        printf("\n");
    }

    return 0;
}