#include <stdio.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char *ptr1 = str1;
    char *ptr2 = str2;
    int result = 0;

    while (*ptr1 != '\0' && *ptr2 != '\0') {
        if (*ptr1 < *ptr2) {
            result = -1;
            break;
        } else if (*ptr1 > *ptr2) {
            result = 1;
            break;
        }
        ptr1++;
        ptr2++;
    }

    if (result == 0) {
        if (*ptr1 == '\0' && *ptr2 == '\0') {
            printf("Strings are equal.\n");
        } else if (*ptr1 == '\0') {
            printf("First string is shorter.\n");
        } else {
            printf("Second string is shorter.\n");
        }
    } else if (result == -1) {
        printf("First string is lexicographically smaller.\n");
    } else {
        printf("First string is lexicographically greater.\n");
    }

    return 0;
}