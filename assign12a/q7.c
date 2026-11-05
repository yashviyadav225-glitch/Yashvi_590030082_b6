#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    int roll;
    char name[50];
    float cgpa;
    Date dob;
} Student;

// Function receiving structure pointer
void displayStudent(Student *s)
{
    printf("\nRoll Number: %d\n", s->roll);
    printf("Name: %s\n", s->name);
    printf("CGPA: %.2f\n", s->cgpa);
    printf("Date of Birth: %02d/%02d/%d\n",
           s->dob.day, s->dob.month, s->dob.year);

    if (s->cgpa >= 8.5)
        printf("Scholarship: Eligible\n");
    else
        printf("Scholarship: Not Eligible\n");
}

int main()
{
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student s[n];

    // Input student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter CGPA: ");
        scanf("%f", &s[i].cgpa);

        printf("Enter date of birth (DD MM YYYY): ");
        scanf("%d %d %d",
              &s[i].dob.day,
              &s[i].dob.month,
              &s[i].dob.year);
    }

    // Display student details
    printf("\n--- Student Details ---\n");

    for (i = 0; i < n; i++)
    {
        displayStudent(&s[i]);
    }

    return 0;
}