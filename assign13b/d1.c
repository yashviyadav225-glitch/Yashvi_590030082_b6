#include <stdio.h>

struct Student {
    int subject1;
    int subject2;
    int subject3;
};

int main() {
    struct Student student;
    struct Student *ptr = &student;

    printf("Enter marks for three subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &ptr->subject1);
    printf("Subject 2: ");
    scanf("%d", &ptr->subject2);
    printf("Subject 3: ");
    scanf("%d", &ptr->subject3);

    int total = ptr->subject1 + ptr->subject2 + ptr->subject3;
    float average = (float)total / 3.0;

    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}