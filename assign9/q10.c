#include <stdio.h>

// Function to sort array in ascending order
void sortAscending(int *arr, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + i) > *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

// Function to sort array in descending order
void sortDescending(int *arr, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + i) < *(arr + j))
            {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

// Function to display array
void display(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    printf("\n");
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sortAscending(arr, n);

    printf("\nAscending order: ");
    display(arr, n);

    sortDescending(arr, n);

    printf("Descending order: ");
    display(arr, n);

    return 0;
}