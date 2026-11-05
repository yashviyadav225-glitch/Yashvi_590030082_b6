#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[20];
    float marks[5];
    char grade;
};

// Passing structure by value
void displayStudent(struct Student s)
{
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Name: %s\n", s.name);

    printf("Marks: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f ", s.marks[i]);
    }

    printf("\nGrade: %c\n", s.grade);
}

// Passing structure by value
float totalMarks(struct Student s)
{
    float total = 0;

    for (int i = 0; i < 3; i++)
    {
        total = total + s.marks[i];
    }

    return total;
}

// Passing structure by reference
void updateGrade(struct Student *s, char newGrade)
{
    s->grade = newGrade;
}

int main()
{
    struct Student S;
    char newGrade;

    printf("Enter roll number: ");
    scanf("%d", &S.rollNumber);

    printf("Enter name: ");
    scanf("%s", S.name);

    printf("Enter marks in three subjects: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &S.marks[i]);
    }

    printf("Enter initial grade: ");
    scanf(" %c", &S.grade);

    // Structure passed by value
    displayStudent(S);

    printf("\nTotal Marks: %.2f\n", totalMarks(S));

    printf("\nEnter new grade: ");
    scanf(" %c", &newGrade);

    // Structure passed by reference
    updateGrade(&S, newGrade);

    printf("\nAfter updating grade:");
    displayStudent(S);

    return 0;
}