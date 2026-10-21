#include<stdio.h>
int binarySearch(int a[], int l, int r, int data)
{
    int mid;
    if (l > r)
    {
        return -1;
    }
    mid = (l + r) / 2;
    if ( a[mid] == data)
    {
        return mid;
    }
    else if (a[mid] > data)
    {
        return binarySearch(a, l, mid - 1, data);
    }
    else
    {
        return binarySearch(a, mid + 1, r, data);
    } 
}
int main()
{
    int a[100], n, data, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &data);
    result = binarySearch(a, 0, n - 1, data);
    if (result == -1)
    {
        printf("Element not found in the array.\n");
    }
    else
    {
        printf("Element found at index: %d\n", result);
    }
    return 0;
}