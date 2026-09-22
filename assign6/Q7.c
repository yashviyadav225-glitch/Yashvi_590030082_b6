#include <stdio.h>  

int main() 
{
    int decimal, binary = 0, place = 1;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &decimal);

    if (decimal <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (decimal > 0) {
        binary += (decimal % 2) * place;
        decimal /= 2;
        place *= 10;
    }

    printf("Binary equivalent: %d\n", binary);

    return 0;
}