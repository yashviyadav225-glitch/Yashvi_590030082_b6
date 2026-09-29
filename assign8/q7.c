#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[50], lastName[50], fullName[100];

    printf("Enter first name: ");
    scanf("%49s", firstName);

    printf("Enter last name: ");
    scanf("%49s", lastName);

    /* Copy first name into full name */
    strcpy(fullName, firstName);

    /* Add a space */
    strcat(fullName, " ");

    /* Add last name */
    strcat(fullName, lastName);

    printf("Complete name: %s\n", fullName);

    return 0;
}