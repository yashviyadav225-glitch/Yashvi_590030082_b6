#include <stdio.h>

long long fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0){
     n =- n; 
    printf("Factorial of %d = %lld\n", n, fact(n));
    return 0;}
else
{
    printf("%lld\n", fact(n));
}
return 0;
}