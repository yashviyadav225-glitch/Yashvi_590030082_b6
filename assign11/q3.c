#include<stdio.h>
void compare()
{
    auto int a=0;
    static int b=0;
    a++;
    b++;
    printf("Automatic = %d, Static = %d\n",a,b);
}
int main()
{
    compare();
    compare();
    compare();
    return 0;
}