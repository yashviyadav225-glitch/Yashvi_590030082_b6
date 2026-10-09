#include <stdio.h>
#include <limits.h>

int findValues(int arr[], int n, int *smallest, int *secondSmallest,
               int *greatest, int *secondGreatest)
{
    int i;

    if (n < 2)
        return 0;

    *smallest = INT_MAX;
    *secondSmallest = INT_MAX;
    *greatest = INT_MIN;
    *secondGreatest = INT_MIN;

    for (i = 0; i < n; i++)
    {
        // Find smallest and second-smallest
        if (arr[i] < *smallest)
        {
            *secondSmallest = *smallest;
            *smallest = arr[i];
        }
        else if (arr[i] > *smallest && arr[i] < *secondSmallest)
        {
            *secondSmallest = arr[i];
        }

        // Find greatest and second-greatest
        if (arr[i] > *greatest)
        {
            *secondGreatest = *greatest;
            *greatest = arr[i];
        }
        else if (arr[i] < *greatest && arr[i] > *secondGreatest)
        {
            *secondGreatest = arr[i];
        }
    }

    // Check whether at least two distinct values exist
    if (*secondSmallest == INT_MAX)
        return 0;

    return 1;
}

int main()
{
    int arr[100], n, i;
    int smallest, secondSmallest;
    int greatest, secondGreatest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (findValues(arr, n, &smallest, &secondSmallest,
                   &greatest, &secondGreatest))
    {
        printf("\nSmallest         = %d\n", smallest);
        printf("Second Smallest  = %d\n", secondSmallest);
        printf("Greatest         = %d\n", greatest);
        printf("Second Greatest  = %d\n", secondGreatest);
    }
    else
    {
        printf("\nFewer than two distinct values exist.\n");
    }

    return 0;
}