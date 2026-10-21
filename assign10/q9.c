#include <stdio.h>

int columnSum(int a[10][10], int rows, int row, int col)
{
    if (row == rows)
        return 0;

    return a[row][col] + columnSum(a, rows, row + 1, col);
}

int minColumn(int a[10][10], int rows, int cols, int col, int minCol)
{
    if (col == cols)
        return minCol;

    int currentSum = columnSum(a, rows, 0, col);
    int minSum = columnSum(a, rows, 0, minCol);

    if (currentSum < minSum)
        minCol = col;

    return minColumn(a, rows, cols, col + 1, minCol);
}

int main()
{
    int a[10][10];
    int rows, cols, i, j, column;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    column = minColumn(a, rows, cols, 1, 0);

    printf("Column having minimum sum = %d\n", column + 1);
    printf("Minimum sum = %d\n", columnSum(a, rows, 0, column));

    return 0;
}