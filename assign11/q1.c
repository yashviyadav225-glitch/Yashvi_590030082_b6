#include <stdio.h>

void display()
{
    auto int x = 25;
    printf("outside the inner block: %d\n", x);

    {
        auto int x = 10;
        printf("inside the inner block: %d\n", x);
    }
    printf("After the inner block: %d\n", x);
}
int main()
{
    display();
    return 0;
}