#include <stdio.h>
#include<limits.h>

int main()
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of short int: %zu bytes\n", sizeof(short int));

printf("\nRange of int:\n");
printf("Minimum int value = %d\n", INT_MIN);
printf("Maximum int value = %d\n", INT_MAX);

printf("\nRange of char:\n");
printf("Minimum char value = %d\n", CHAR_MIN);
printf("Maximum char value = %d\n", CHAR_MAX);
return 0;
}   