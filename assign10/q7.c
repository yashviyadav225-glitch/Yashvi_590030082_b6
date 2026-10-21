#include <stdio.h>

int symmetric(int a[10][10], int n, int i, int j)
{
    if (i == n)
        return 1;

    if (j == n)
        return symmetric(a, n, i + 1, 0);

    if (a[i][j] != a[j][i])
        return 0;

    return symmetric(a, n, i, j + 1);
}

int main()
{
    int a[10][10];
    int n, i, j;

    printf("Enter the order of matrix: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (symmetric(a, n, 0, 0))
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}