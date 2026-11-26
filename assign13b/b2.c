#include <stdio.h>

int main() {
    char source[] = "Hello, World!";
    char destination[100];
    char *src = source;
    char *dst = destination;

    while (*src != '\0') {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0'; // Null-terminate the destination string

    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}