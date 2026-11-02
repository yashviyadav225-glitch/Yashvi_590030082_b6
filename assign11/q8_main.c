#include<stdio.h>
extern int x;
int main()
{
    printf("Number entered in other file: %d\n",x);
    return 0;
}