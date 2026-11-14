#include <stdio.h>
void show(int *p)
{ 
    printf("Address = %p, Value = %d\n", (void*)p, *p); 
}
int main(void)
{
    int a[]= {11, 12, 13, 14, 15, 16};
    int *p = &a[3];
    show(p);
    p++;
    show(p);
    p--; 
    show(p);
    p = p + 2;
    show(p);
    p = p - 1;
    show(p);
    return 0;
}