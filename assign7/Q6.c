#include <stdio.h>

int main()
{
    int n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int A[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Array before reversal: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        temp = A[i];
        A[i] = A[n - 1 - i];
        A[n - 1 - i] = temp;
    }

    printf("\nArray after reversal: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    return 0;
}