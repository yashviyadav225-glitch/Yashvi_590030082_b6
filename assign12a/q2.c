#include <stdio.h>

struct Student
{
    int Roll_Number;
    char Name[20];
    float marks[3];
    char grade;
};
float average(struct Student s)
{
    float total = 0;

    for (int i = 0; i < 3; i++)
    {
        total += s.marks[i];
    }

    return total / 3;
}
int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student S[n];
    float avg[n];

    // Input details
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &S[i].Roll_Number);

        printf("Name: ");
        scanf("%s", S[i].Name);

        printf("Enter marks in three subjects: ");
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &S[i].marks[j]);
        }
    }

    // Calculate and display details
    for (int i = 0; i < n; i++)
    {
        float total = 0;

        for (int j = 0; j < 3; j++)
        {
            total += S[i].marks[j];
        }

        // Calling average function
        avg[i] = average(S[i]);

        char grade;

        if (avg[i] >= 80)
        {
            grade = 'A';
        }
        else if (avg[i] >= 60)
        {
            grade = 'B';
        }
        else
        {
            grade = 'C';
        }

        printf("\nDetails of student %d:\n", i + 1);
        printf("Roll Number: %d\n", S[i].Roll_Number);
        printf("Name: %s\n", S[i].Name);
        printf("Total Marks: %.2f\n", total);
        printf("Average Marks: %.2f\n", avg[i]);
        printf("Grade: %c\n", grade);
    }

    // Find highest average
    float highest = avg[0];

    for (int i = 1; i < n; i++)
    {
        if (avg[i] > highest)
        {
            highest = avg[i];
        }
    }

    // Display all students having highest average
    printf("\nStudent(s) with highest average:\n");

    for (int i = 0; i < n; i++)
    {
        if (avg[i] == highest)
        {
            printf("\nRoll Number: %d\n", S[i].Roll_Number);
            printf("Name: %s\n", S[i].Name);
            printf("Average: %.2f\n", avg[i]);
        }
    }

    return 0;
}