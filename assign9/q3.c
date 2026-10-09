#include <stdio.h>

// Function to find sum of digits
int sumDigits(int n)
{
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

// Function to count digits
int countDigits(int n)
{
    int count = 0;

    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}

// Function to reverse the integer
int reverseNumber(int n)
{
    int reverse = 0;

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }

    return reverse;
}

// Function to check palindrome
void checkPalindrome(int n)
{
    int original = n;

    if (n < 0)
    {
        printf("Palindrome    : No\n");
        return;
    }

    if (n == reverseNumber(n))
        printf("Palindrome    : Yes\n");
    else
        printf("Palindrome    : No\n");
}

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\n--- Number Report ---\n");
    printf("Sum of digits : %d\n", sumDigits(num));
    printf("Digit count   : %d\n", countDigits(num));
    printf("Reverse       : %d\n", reverseNumber(num));

    checkPalindrome(num);

    return 0;
}