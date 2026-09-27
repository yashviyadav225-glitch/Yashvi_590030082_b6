#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j;

    printf("Enter number of rows of first matrix: ");
    scanf("%d", &r1);

    printf("Enter number of columns of first matrix: ");
    scanf("%d", &c1);

    printf("Enter number of rows of second matrix: ");
    scanf("%d", &r2);

    printf("Enter number of columns of second matrix: ");
    scanf("%d", &c2);

    // Check if matrices have the same order
    if (r1 != r2 || c1 != c2)
    {
        printf("Matrices have different orders. Addition is not possible.\n");
        return 0;
    }

    int A[r1][c1];
    int B[r2][c2];
    int Sum[r1][c1];

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

    // Calculate sum
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display resulting matrix
    printf("\nSum of the matrices:\n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", Sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}