#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int A[n];
    int sum = 0, i;
    float avg;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
        sum = sum + A[i];
    }
    avg = (float)sum / n;
    printf("%d, %.02f\n", sum, avg);
    return 0;
}