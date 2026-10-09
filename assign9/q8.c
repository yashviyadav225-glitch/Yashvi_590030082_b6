#include <stdio.h>

#define MAX 100

// Function to display the array
void display(int arr[], int size)
{
    int i;

    if (size == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element
void insert(int arr[], int *size, int element, int position)
{
    int i;

    if (*size >= MAX)
    {
        printf("Array is full.\n");
        return;
    }

    if (position < 1 || position > *size + 1)
    {
        printf("Invalid position.\n");
        return;
    }

    // Shift elements to the right
    for (i = *size; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;

    // Update array size using pointer
    (*size)++;

    printf("Element inserted successfully.\n");
}

// Function to delete an element
void deleteElement(int arr[], int *size, int position, int *deleted)
{
    int i;

    if (*size == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    if (position < 1 || position > *size)
    {
        printf("Invalid position.\n");
        return;
    }

    // Return deleted value through pointer
    *deleted = arr[position - 1];

    // Shift elements to the left
    for (i = position - 1; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Update array size
    (*size)--;

    printf("Deleted element = %d\n", *deleted);
}

int main()
{
    int arr[MAX];
    int size, i;
    int choice, element, position, deleted;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                display(arr, size);
                break;

            case 2:
                printf("Enter element to insert: ");
                scanf("%d", &element);

                printf("Enter position: ");
                scanf("%d", &position);

                insert(arr, &size, element, position);
                break;

            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &position);

                deleteElement(arr, &size, position, &deleted);
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}