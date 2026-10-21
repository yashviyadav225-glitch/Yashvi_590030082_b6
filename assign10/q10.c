#include <stdio.h>

void Hanoi(int n, char s, char a, char d)
{
    if (n == 1)
    {
        printf("Disk %d is moved from %c to %c\n", n, s, d);
        return;
    }

    Hanoi(n - 1, s, d, a);

    printf("Disk %d is moved from %c to %c\n", n, s, d);

    Hanoi(n - 1, a, s, d);
}

int main()
{
    int n;

    printf("Enter the number of discs: ");
    scanf("%d", &n);

    if (n > 0)
        Hanoi(n, 'S', 'A', 'D');

    return 0;
}