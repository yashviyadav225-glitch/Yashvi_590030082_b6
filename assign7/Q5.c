#include <stdio.h>
#include <limits.h>

int main()
{
    int n; 
    int A[n], i;
    int largest, secondLargest;
    int smallest, secondSmallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("At least 2 elements are required.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;
    smallest = INT_MAX;
    secondSmallest = INT_MAX;

    for (i = 0; i < n; i++)
    {
        if (A[i] > largest)
        {
            secondLargest = largest;
            largest = A[i];
        }
        else if (A[i] > secondLargest && A[i] != largest)
        {
            secondLargest = A[i];
        }

        if (A[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = A[i];
        }
        else if (A[i] < secondSmallest && A[i] != smallest)
        {
            secondSmallest = A[i];
        }
    }

    printf("\nLargest element = %d\n", largest);
    printf("Second largest element = %d\n", secondLargest);
    printf("Smallest element = %d\n", smallest);
    printf("Second smallest element = %d\n", secondSmallest);

    return 0;
}