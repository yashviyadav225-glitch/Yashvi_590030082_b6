#include <stdio.h>

int main()
{
    int lower, upper, num, i;
    int isPrime, count = 0;

    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (num = lower; num <= upper; num++)
    {
        if (num < 2)
            continue;

        isPrime = 1;

        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", num);
            count++;
        }
    }

    printf("\nTotal number of prime numbers = %d\n", count);

    return 0;
}
