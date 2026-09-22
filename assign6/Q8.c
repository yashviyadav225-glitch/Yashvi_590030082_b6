#include <stdio.h> 
int main()
{
int n, i, j; 
double x, power, factorial, term; 
double sum = 0.0; 
printf("Enter the value of x: "); 
scanf("%lf", &x); 
printf("Enter the number of terms: "); 
    scanf("%d", &n); 
     if (n <= 0) 
    { 
    printf("Number of terms must be positive."); 
    } 
    else 
    { 
    for (i = 1; i <= n; i++) 
    { 
    power = 1.0;
    factorial = 1.0;
    for (j = 1; j <= i; j++) 
{
power = power * x; 
 }
 for (j = 1; j <= i; j++) 
{
factorial = factorial * j; 
} 
term = power / factorial; 
if (i % 2 == 0) 
sum = sum- term; 
else 
    sum = sum + term; 
} 
    printf("Sum of the series = %.4lf", sum); 
} 
    return 0; 
}