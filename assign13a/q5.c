#include <stdio.h>

void remove_duplicates(int *arr, int n, int *result, int *new_size)
{
    int i, j, duplicate;

    *new_size = 0;

    for (i = 0; i < n; i++)
    {
        duplicate = 0;

        // Check if current element is already in result
        for (j = 0; j < *new_size; j++)
        {
            if (*(arr + i) == *(result + j))
            {
                duplicate = 1;
                break;
            }
        }

        // If not duplicate, add it to result
        if (duplicate == 0)
        {
            *(result + *new_size) = *(arr + i);
            (*new_size)++;
        }
    }
}

int main()
{
    int arr[100], result[100];
    int n, new_size, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    remove_duplicates(arr, n, result, &new_size);

    printf("Array after removing duplicates:\n");

    for (i = 0; i < new_size; i++)
    {
        printf("%d ", *(result + i));
    }

    return 0;
}