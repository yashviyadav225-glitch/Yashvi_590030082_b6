#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a pointer to a function that accepts two integers and returns an integer
    int (*ptr)(int, int) = add;

    // Call the function through the pointer
    int result = ptr(5, 3);
    printf("Sum: %d\n", result);

    return 0;
}