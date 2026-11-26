#include <stdio.h>
#include <string.h>

// Function to find the length of a string
int getStringLength(const char *str) {
    return strlen(str);
}

// Function to copy a string
void copyString(char *dest, const char *src) {
    strcpy(dest, src);
}

// Function to compare two strings
int compareStrings(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

int main() {
    // Declare function pointers for string operations
    int (*lengthPtr)(const char *) = getStringLength;
    void (*copyPtr)(char *, const char *) = copyString;
    int (*comparePtr)(const char *, const char *) = compareStrings;

    // Test the functions
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, C!";
    char dest[100];

    printf("Length of \"%s\": %d\n", str1, lengthPtr(str1));
    printf("Length of \"%s\": %d\n", str2, lengthPtr(str2));

    copyPtr(dest, str1);
    printf("Copied string: \"%s\"\n", dest);

    int result = comparePtr(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}