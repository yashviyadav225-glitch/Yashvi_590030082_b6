#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int A[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Array before sorting: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    // Sorting in ascending order
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    printf("\nArray after sorting: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}