#include <stdio.h>

static float balance = 1000.0;

void deposit(float amount)
{
    balance = balance + amount;
}

void withdraw(float amount)
{
    if (amount <= balance)
        balance = balance - amount;
    else
        printf("Insufficient balance!\n");
}

void displayBalance()
{
    printf("Current balance = %.2f\n", balance);
}