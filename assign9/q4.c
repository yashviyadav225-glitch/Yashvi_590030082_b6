#include <stdio.h>

// Function to find GCD of two numbers
int gcdTwo(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

// Function to find GCD of three numbers
int gcdThree(int a, int b, int c)
{
    return gcdTwo(gcdTwo(a, b), c);
}

// Function to find LCM of two numbers
int lcmTwo(int a, int b)
{
    return (a * b) / gcdTwo(a, b);
}

// Function to find LCM of three numbers
int lcmThree(int a, int b, int c)
{
    return lcmTwo(lcmTwo(a, b), c);
}

int main()
{
    int a, b, c;

    printf("Enter three positive integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Please enter positive integers only.\n");
        return 0;
    }

    printf("\nGCD = %d\n", gcdThree(a, b, c));
    printf("LCM = %d\n", lcmThree(a, b, c));

    return 0;
}