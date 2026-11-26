#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *ptr = &matrix[0][0];

    int transpose[COLS][ROWS];
    int *tptr = &transpose[0][0];

    // Finding transpose
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            *(tptr + j * ROWS + i) = *(ptr + i * COLS + j);
        }
    }

    // Display original matrix
    printf("Original matrix:\n");

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", *(ptr + i * COLS + j));
        }
        printf("\n");
    }

    // Display transpose
    printf("Transpose of the matrix:\n");

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            printf("%d ", *(tptr + i * ROWS + j));
        }
        printf("\n");
    }

    return 0;
}