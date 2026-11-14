#include <stdio.h>

void update_pointer(int **p, int *new_address)
{
    *p = new_address;
}

int main()
{
    int a = 10;
    int b = 20;

    int *ptr = &a;

    printf("Before updating pointer:\n");
    printf("Value pointed by ptr = %d\n", *ptr);

    update_pointer(&ptr, &b);

    printf("\nAfter updating pointer:\n");
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}