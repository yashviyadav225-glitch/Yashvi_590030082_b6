#include <stdio.h>

void update(int *p)
{
    *p = *p + 10;
}

int main()
{
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    int *p = &x;
    update(p);

    printf("Modified value = %d\n", x);

    return 0;
}