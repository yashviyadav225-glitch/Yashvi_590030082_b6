#include <stdio.h>
int main()
{
    int n;
    int A[n], Data, c=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Enter the data to search: ");
    scanf("%d", &Data);
    for (int i = 0; i < n; i++)
    {
        if (A[i] == Data)
        {
            printf("Element is found at %d\n", i+1);
            c++;
        }
    }
    return 0;
}