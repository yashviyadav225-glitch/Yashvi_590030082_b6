#include <stdio.h>

// Function for addition
int add(int a, int b)
{
    return a + b;
}

// Function for subtraction
int subtract(int a, int b)
{
    return a - b;
}

// Function for multiplication
int multiply(int a, int b)
{
    return a * b;
}

// Function for division
void divide(int a, int b)
{
    if (b == 0)
        printf("Division by zero is not possible.\n");
    else
        printf("Division = %.2f\n", (float)a / b);
}

// Function for modulus
void modulus(int a, int b)
{
    if (b == 0)
        printf("Modulus by zero is not possible.\n");
    else
        printf("Modulus = %d\n", a % b);
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Addition = %d\n", add(a, b));
    printf("Subtraction = %d\n", subtract(a, b));
    printf("Multiplication = %d\n", multiply(a, b));

    divide(a, b);
    modulus(a, b);

    return 0;
}