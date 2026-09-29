#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Convert the string to lowercase */
    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);
    }

    printf("Character frequencies:\n");

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        /* Check if character has already appeared */
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                break;
            }
        }

        /* If already counted, skip it */
        if (j < i)
        {
            continue;
        }

        count = 0;

        /* Count frequency of current character */
        for (j = 0; str[j] != '\0' && str[j] != '\n'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}