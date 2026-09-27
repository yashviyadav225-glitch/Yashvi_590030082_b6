#include <stdio.h>

int main()
{
    int n, i, j;
    int mainSum = 0, secondarySum = 0;
    int upper = 1, lower = 1, diagonal = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    // Input matrix
    printf("\nEnter matrix elements row by row:\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter elements of row %d: ", i + 1);

        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Calculate diagonal sums
    for (i = 0; i < n; i++)
    {
        mainSum = mainSum + A[i][i];
        secondarySum = secondarySum + A[i][n - 1 - i];
    }

    // Check type of matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j && A[i][j] != 0)
            {
                upper = 0;
            }

            if (i < j && A[i][j] != 0)
            {
                lower = 0;
            }

            if (i != j && A[i][j] != 0)
            {
                diagonal = 0;
            }
        }
    }

    printf("\nSum of main diagonal elements = %d\n", mainSum);
    printf("Sum of secondary diagonal elements = %d\n", secondarySum);

    if (diagonal == 1)
    {
        printf("The matrix is a diagonal matrix.\n");
    }
    else if (upper == 1)
    {
        printf("The matrix is an upper triangular matrix.\n");
    }
    else if (lower == 1)
    {
        printf("The matrix is a lower triangular matrix.\n");
    }
    else
    {
        printf("The matrix is none of these.\n");
    }

    return 0;
}