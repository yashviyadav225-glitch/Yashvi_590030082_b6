#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char *word;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    /* Remove newline character */
    sentence[strcspn(sentence, "\n")] = '\0';

    /* Get the first word */
    word = strtok(sentence, " ");

    printf("\nWords in the sentence:\n");

    while (word != NULL)
    {
        printf("%s\n", word);
        count++;

        /* Get the next word */
        word = strtok(NULL, " ");
    }

    printf("\nTotal number of words = %d\n", count);

    return 0;
}