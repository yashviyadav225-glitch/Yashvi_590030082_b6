#include <stdio.h> 
#include <math.h> 
int main() 
{ 
int choice, n1, n2; 
menu:
printf("\n---Calculator Menu---\n"); 
printf("1. Addition\n"); 
printf("2. Subtraction\n"); 
 printf("3. Multiplication\n");
printf("4. Division\n"); 
printf("5. Modulus\n"); 
printf("6. Power\n"); 
printf("7. Exit\n"); 
 printf("Enter your choice: ");
scanf("%d", &choice);
if (choice >= 1 && choice <= 6)
{
printf("Enter two numbers: "); 
scanf("%d %d", &n1, &n2);
}
switch (choice) 
{ 
case 1: 
printf("Sum = %d\n", n1 + n2); 
break; 
case 2: 
printf("Difference = %d\n", n1- n2); 
break; 
case 3: 
printf("Product = %d\n", n1 * n2); 
break; 
case 4: 
if (n2 == 0) 
printf("Division by zero is not allowed.\n"); 
else 
printf("Quotient = %.2f\n", 
(float)n1 / n2); 
break;
case 5: 
if (n2 == 0) 
printf("Modulus by zero is not allowed.\n"); 
else 
printf("Remainder = %d\n", n1 % n2); 
break; 
case 6: 
printf("Power = %.2f\n", pow(n1, n2)); 
break; 
case 7: 
printf("Calculator closed.\n"); 
goto end; 
default: 
printf("Invalid choice. Try again.\n"); 
} 
goto menu; 
end:
return 0; 
}