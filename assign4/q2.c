#include <stdio.h>

int main()
{
    int integer;
    float decimal;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a floating-point number: ");
    scanf("%f", &decimal);

    /* Implicit type conversion:
       The integer is automatically converted to float. */
    printf("\nImplicit Type Conversion:\n");
    printf("Addition       = %.2f\n", integer + decimal);
    printf("Subtraction    = %.2f\n", integer - decimal);
    printf("Multiplication = %.2f\n", integer * decimal);
    printf("Division       = %.2f\n", integer / decimal);

    /* Explicit type conversion:
       The floating-point number is manually converted to int. */
    printf("\nExplicit Type Conversion:\n");
    printf("Addition       = %d\n", integer + (int)decimal);
    printf("Subtraction    = %d\n", integer - (int)decimal);
    printf("Multiplication = %d\n", integer * (int)decimal);

    if ((int)decimal != 0)
    {
        printf("Division       = %d\n", integer / (int)decimal);
    }
    else
    {
        printf("Division is not possible because the converted value is zero.\n");
    }

    return 0;
}