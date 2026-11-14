#include <stdio.h>
int main()
{
    int a = 20;
    int *p = &a;
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n",(void*) p);
    printf("Value stored in p = %p\n",(void*) p);
    printf("Value pointed to by p = %d\n", *p);
    return 0;
}