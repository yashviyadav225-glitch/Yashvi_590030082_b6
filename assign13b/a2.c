#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *ptr = &matrix[0][0];
    int row_sum[3] = {0};
    int col_sum[3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            row_sum[i] += *(ptr + i * 3 + j);
            col_sum[j] += *(ptr + i * 3 + j);
        }
    }

    printf("Row sums:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }

    printf("Column sums:\n");
    for (int j = 0; j < 3; j++) {
        printf("Column %d: %d\n", j + 1, col_sum[j]);
    }

    return 0;
}