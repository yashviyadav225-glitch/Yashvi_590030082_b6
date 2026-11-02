#include <stdio.h>
int x = 25;
void display()
{
    int x = 10;
    printf("Local variable: %d\n", x);
}
int main()
{
    printf("Global variable: %d\n", x);
    display();
    printf("Global variable after function call: %d\n", x);
    return 0;
}
