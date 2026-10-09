#include <stdio.h>

// Function to count different types of characters
void countCharacters(char str[], int *vowels, int *consonants,
                     int *digits, int *spaces, int *special)
{
    int i = 0;
    char ch;

    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;
    *special = 0;

    while (str[i] != '\0')
    {
        ch = str[i];

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            (*vowels)++;
        }

        // Check for consonants
        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z'))
        {
            (*consonants)++;
        }

        // Check for digits
        else if (ch >= '0' && ch <= '9')
        {
            (*digits)++;
        }

        // Check for spaces
        else if (ch == ' ')
        {
            (*spaces)++;
        }

        // Everything else is a special character
        else
        {
            (*special)++;
        }

        i++;
    }
}

int main()
{
    char str[200];
    int vowels, consonants, digits, spaces, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCharacters(str, &vowels, &consonants,
                    &digits, &spaces, &special);

    printf("\n--- Character Report ---\n");
    printf("Vowels             = %d\n", vowels);
    printf("Consonants         = %d\n", consonants);
    printf("Digits             = %d\n", digits);
    printf("Spaces             = %d\n", spaces);
    printf("Special Characters = %d\n", special);

    return 0;
}