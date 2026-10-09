#include <stdio.h>

// Function to calculate total marks
int calculateTotal(int m1, int m2, int m3, int m4, int m5)
{
    return m1 + m2 + m3 + m4 + m5;
}

// Function to calculate percentage
float calculatePercentage(int total)
{
    return total / 5.0;
}

// Function to check whether student passed every subject
int checkPass(int m1, int m2, int m3, int m4, int m5)
{
    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40)
        return 0;
    else
        return 1;
}

// Function to determine grade
char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else
        return 'F';
}

int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = calculateTotal(m1, m2, m3, m4, m5);
    percentage = calculatePercentage(total);

    printf("\n--- Student Report ---\n");
    printf("Total Marks : %d / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);

    if (checkPass(m1, m2, m3, m4, m5))
    {
        grade = calculateGrade(percentage);

        printf("Result      : Pass\n");
        printf("Grade       : %c\n", grade);
    }
    else
    {
        printf("Result      : Fail\n");
        printf("Grade       : F\n");
    }

    return 0;
}