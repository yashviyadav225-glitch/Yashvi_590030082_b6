#include <stdio.h>

struct Student {
    int rollNumber;
    char name[20];
    float marks[3];
};

int main() {
    struct Student S;

    printf("Enter roll number: ");
    scanf("%d", &S.rollNumber);

    printf("Enter student name: ");
    scanf("%s", S.name);

    printf("Enter marks in three subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &S.marks[i]);
    }

    float total = 0;
    for (int i = 0; i < 3; i++) {
        total += S.marks[i];
    }

    float average = total / 3;

    char grade;
    if (average >= 80) {
        grade = 'A';
    } else if (average >= 60) {
        grade = 'B';
    } else {
        grade = 'C';
    }

    printf("Total marks: %.2f\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}