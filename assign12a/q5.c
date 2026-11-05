#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks[3];
    char grade;
};

// Structure passed by value
void displayStudent(struct Student s)
{
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f %.2f %.2f\n",
           s.marks[0], s.marks[1], s.marks[2]);
    printf("Grade: %c\n", s.grade);
}

// Structure passed by value
float totalMarks(struct Student s)
{
    return s.marks[0] + s.marks[1] + s.marks[2];
}

// Structure passed by reference
void updateGrade(struct Student *s, char newGrade)
{
    s->grade = newGrade;
}

int main()
{
    struct Student s;
    char newGrade;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks in three subjects: ");
    scanf("%f %f %f",
          &s.marks[0], &s.marks[1], &s.marks[2]);

    printf("Enter grade: ");
    scanf(" %c", &s.grade);

    // Passing structure by value
    displayStudent(s);

    printf("\nTotal Marks = %.2f\n", totalMarks(s));

    printf("\nEnter new grade: ");
    scanf(" %c", &newGrade);

    // Passing structure by reference
    updateGrade(&s, newGrade);

    printf("\nAfter updating grade:");
    displayStudent(s);

    return 0;
}
