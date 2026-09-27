#include <stdio.h>

int main()
{
    int n;
    int A[n], element, position, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Enter the new element: ");
    scanf("%d", &element);

    printf("Enter the position: ");
    scanf("%d", &position);

    if (position < 1 || position > n + 1)
    {
        printf("Invalid position");
        return 0;
    }

    for (i = n; i >= position; i--)
    {
        A[i] = A[i - 1];
    }

    A[position - 1] = element;
    n++;

    printf("Updated array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}