#include <stdio.h>

int main()
{
    int n, i, j;
    int symmetric = 1, skewSymmetric = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int A[n][n];
    int transpose[n][n];

    // Input matrix row by row
    printf("\nEnter matrix elements row by row:\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter elements of row %d: ", i + 1);

        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Find transpose
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            transpose[i][j] = A[j][i];
        }
    }

    // Display original matrix
    printf("\nOriginal matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Display transpose
    printf("\nTranspose matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    // Check symmetric and skew-symmetric
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] != transpose[i][j])
            {
                symmetric = 0;
            }

            if (A[i][j] != -transpose[i][j])
            {
                skewSymmetric = 0;
            }
        }
    }

    // Display result
    if (symmetric == 1)
    {
        printf("\nThe matrix is symmetric.\n");
    }
    else if (skewSymmetric == 1)
    {
        printf("\nThe matrix is skew-symmetric.\n");
    }
    else
    {
        printf("\nThe matrix is neither symmetric nor skew-symmetric.\n");
    }

    return 0;
}