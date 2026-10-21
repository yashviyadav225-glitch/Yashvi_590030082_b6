#include <stdio.h>
int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", Fibonacci(i));
    }
    return 0;
}