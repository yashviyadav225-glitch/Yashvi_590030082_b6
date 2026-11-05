#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[20];
    int id;
    float salary;
    struct Date date_of_joining;
};

int main()
{
    struct Employee E[3];

    // Input details of 3 employees
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", E[i].name);

        printf("ID: ");
        scanf("%d", &E[i].id);

        printf("Salary: ");
        scanf("%f", &E[i].salary);

        printf("Date of Joining (day month year): ");
        scanf("%d %d %d",
              &E[i].date_of_joining.day,
              &E[i].date_of_joining.month,
              &E[i].date_of_joining.year);
    }

    // Display details of 3 employees
    for (int i = 0; i < 3; i++)
    {
        printf("\nDetails of employee %d:\n", i + 1);

        printf("Name: %s\n", E[i].name);
        printf("ID: %d\n", E[i].id);
        printf("Salary: %.2f\n", E[i].salary);

        printf("Date of Joining: %d/%d/%d\n",
               E[i].date_of_joining.day,
               E[i].date_of_joining.month,
               E[i].date_of_joining.year);
    }

    return 0;
}