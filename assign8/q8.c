#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Remove newline character */
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to search: ");
    scanf("%c", &ch);

    /* Find first occurrence of the character */
    ptr = strchr(str, ch);

    if (ptr != NULL)
    {
        printf("Character '%c' found at position %ld.\n",
               ch, ptr - str + 1);
    }
    else
    {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}