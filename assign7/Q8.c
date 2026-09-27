#include <stdio.h>

int main()
{
    int n1, n2, i;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    int A[n1];

    for (i = 0; i < n1; i++)
    {
        printf("Enter element %d of first array: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    int B[n2];

    for (i = 0; i < n2; i++)
    {
        printf("Enter element %d of second array: ", i + 1);
        scanf("%d", &B[i]);
    }

    int C[n1 + n2];

    // Copy first array into third array
    for (i = 0; i < n1; i++)
    {
        C[i] = A[i];
    }

    // Copy second array into third array
    for (i = 0; i < n2; i++)
    {
        C[n1 + i] = B[i];
    }

    printf("Merged array: ");

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", C[i]);
    }

    printf("\n");

    return 0;
}