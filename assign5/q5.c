#include <stdio.h>
#include <stdlib.h>

int main() {
    float balance = 5000.0;
    float amount, rate, time, interest;
    int choice;

menu:
    printf("\n--- Banking System Menu ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Calculate Annual Simple Interest\n");
    printf("5. Exit\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Current Balance: $%.2f\n", balance);
            goto menu;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            if (amount > 0) {
                balance += amount;
                printf("Successfully deposited $%.2f. New Balance: $%.2f\n", amount, balance);
            } else {
                printf("Invalid deposit amount.\n");
            }
            goto menu;

        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount <= 0) {
                printf("Invalid withdrawal amount.\n");
            } else if (amount > balance) {
                printf("Insufficient balance! Current balance: $%.2f\n", balance);
            } else {
                balance -= amount;
                printf("Successfully withdrew $%.2f. Remaining Balance: $%.2f\n", amount, balance);
            }
            goto menu;

        case 4:
            printf("Enter annual interest rate (%%): ");
            scanf("%f", &rate);
            printf("Enter time period (in years): ");
            scanf("%f", &time);
            interest = (balance * rate * time) / 100.0;
            printf("Simple Interest on current balance ($%.2f) is: $%.2f\n", balance, interest);
            goto menu;

        case 5:
            printf("Thank you for using the banking system. Goodbye!\n");
            break;

        default:
            printf("Invalid choice! Please select an option between 1 and 5.\n");
            goto menu;
    }

    return 0;
}