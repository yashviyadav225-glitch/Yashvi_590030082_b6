#include <stdio.h>

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    // Declare an array of function pointers
    int (*functions[3])(int) = {square, cube, factorial};

    // Test the functions
    int num = 5;
    for (int i = 0; i < 3; i++) {
        printf("Result %d: %d\n", i + 1, functions[i](num));
    }

    return 0;
}