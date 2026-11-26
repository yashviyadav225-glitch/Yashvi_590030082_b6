#include <stdio.h>

// Comparison function for ascending order
int ascending(int a, int b) {
    return a - b;
}

// Comparison function for descending order
int descending(int a, int b) {
    return b - a;
}

// Function to sort the array using a comparison function
void sortArray(int arr[], int size, int (*compare)(int, int)) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (compare(arr[j], arr[j + 1]) > 0) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort in ascending order
    sortArray(arr, size, ascending);
    printf("Array sorted in ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort in descending order
    sortArray(arr, size, descending);
    printf("Array sorted in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}