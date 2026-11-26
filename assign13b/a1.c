#include <stdio.h>

int main() {
    int arr[] = {10, 5, 8, 20, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int largest = *ptr;
    int smallest = *ptr;

    for (int i = 1; i < size; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);

    return 0;
}