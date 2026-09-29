#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i = 0, length = 0;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Find the length of the string */
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    /* Compare characters from both ends */
    while (i < length / 2)
    {
        if (tolower(str[i]) != tolower(str[length - i - 1]))
        {
            palindrome = 0;
            break;
        }

        i++;
    }

    if (palindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}