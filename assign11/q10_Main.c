#include <stdio.h>

extern void deposit(float amount);
extern void withdraw(float amount);
extern void displayBalance();

int main()
{
    displayBalance();

    deposit(500);
    printf("After deposit:\n");
    displayBalance();

    withdraw(300);
    printf("After withdrawal:\n");
    displayBalance();

    return 0;
}