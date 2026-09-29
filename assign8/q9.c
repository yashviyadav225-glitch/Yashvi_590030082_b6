#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200], word[50];
    char *ptr;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);

    /* Remove newline characters */
    sentence[strcspn(sentence, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    /* Search for the word */
    ptr = strstr(sentence, word);

    if (ptr != NULL)
    {
        printf("Word found at position %ld.\n", ptr - sentence + 1);
    }
    else
    {
        printf("Word not found in the sentence.\n");
    }

    return 0;
}