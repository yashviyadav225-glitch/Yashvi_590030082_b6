#include <stdio.h>

void reverse(int a[], int l, int r)
{
    int temp;

    if (l >= r)
    {
        return;
    }

    temp = a[l];
    a[l] = a[r];
    a[r] = temp;

    reverse(a, l + 1, r - 1);
}

int main()
{
    int a[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    reverse(a, 0, n - 1);

    printf("Reversed array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    return 0;
}