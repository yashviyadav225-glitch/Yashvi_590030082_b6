#include <stdio.h>

struct Employee{
    int id;
    char name[100];
    float salary;
};

int main() {
    struct Employee emp;
    struct Employee *ptr = &emp;

    printf("Enter employee ID: ");
    scanf("%d", &ptr->id);
    printf("Enter employee name: ");
    scanf("%s", ptr->name);
    printf("Enter employee salary: ");
    scanf("%f", &ptr->salary);

    // Modify the employee salary
    ptr->salary += 5000.0;

    printf("Modified employee details:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}