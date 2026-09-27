#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }
    int position;
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &position);
    if (position < 1 || position > n)
    {
        printf("Invalid position!\n");
        return 1;
    }
    for (int i = position - 1; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }
    n--;
    printf("Updated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}