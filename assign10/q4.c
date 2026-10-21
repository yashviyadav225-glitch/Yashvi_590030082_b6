#include <stdio.h>
#include <limits.h>
void secondlargest(int a[], int n, int i, int *sl, int *l)
{
    if (i == n)
    {
        return;
    }

    if (a[i] > *l)
    {
        *sl = *l;
        *l = a[i];
    }
    else if (a[i] > *sl && a[i] != *l)
    {
        *sl = a[i];
    }

    secondlargest(a, n, i + 1, sl, l);
}
int main()
{
    int a [100], n, i, l = INT_MIN, sl = INT_MIN;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    secondlargest(a, n, 0, &sl, &l);
    if (sl == INT_MIN)
    {
        printf("There are fewer than two distinct elements in the array.\n");
    }
    else
    {
        printf("The second-largest distinct element is: %d\n", sl);
    }
    return 0;
}