#include <stdio.h>
void Seperate_elements(int *arr, int n, int *even, int *even_count, int *odd, int *odd_count)
{
    int i;
    *even_count = 0;
    *odd_count = 0;
    for (i = 0; i < n; i++)
    {
        if ( *(arr + i) % 2 == 0)
        {
            *(even + *even_count) = *(arr + i);
            (*even_count)++;
        }
        else
        {
            *(odd + *odd_count) = *(arr + i);
            (*odd_count)++;
        }
    }
}
int main(void)
{
    int arr[100], even[100], odd[100];
    int n, even_count, odd_count;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Seperate_elements(arr, n, even, &even_count, odd, &odd_count);
    printf("Even elements: ");
    for (int i = 0; i < even_count; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements: ");
    for (int i = 0; i < odd_count; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}