#include <stdio.h>
int main() 
{
    int n, original, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while (n > 0) 
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed) 
    {
        printf("Palindrome\n");
    } 
    else 
    {
        printf("Not palindrome\n");
    }

    return 0;
}