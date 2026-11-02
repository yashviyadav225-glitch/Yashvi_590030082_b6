#include <stdio.h>

extern int x;

void display();

int main()
{
    printf("Before modification:\n");
    display();

    x = 50;

    printf("After modification:\n");
    display();

    return 0;
}
