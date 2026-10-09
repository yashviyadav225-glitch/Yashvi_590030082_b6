#include <stdio.h>

// Function to check even or odd
void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("Even/Odd       : Even\n");
    else
        printf("Even/Odd       : Odd\n");
}

// Function to check positive, negative or zero
void checkSign(int n)
{
    if (n > 0)
        printf("Sign           : Positive\n");
    else if (n < 0)
        printf("Sign           : Negative\n");
    else
        printf("Sign           : Zero\n");
}

// Function to check prime number
void checkPrime(int n)
{
    int i, count = 0;

    if (n <= 1)
    {
        printf("Prime          : No\n");
        return;
    }

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count == 2)
        printf("Prime          : Yes\n");
    else
        printf("Prime          : No\n");
}

// Function to check perfect number
void checkPerfect(int n)
{
    int i, sum = 0;

    if (n <= 0)
    {
        printf("Perfect Number : No\n");
        return;
    }

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }

    if (sum == n)
        printf("Perfect Number : Yes\n");
    else
        printf("Perfect Number : No\n");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n--- Classification Report ---\n");

    checkEvenOdd(num);
    checkSign(num);
    checkPrime(num);
    checkPerfect(num);

    return 0;
}