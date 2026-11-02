#include<stdio.h>
void fCallscount()
{
    static int count=0;
    count++;
    printf("Function called %d times\n",count);
}
int main()
{
    fCallscount();
    fCallscount();
    fCallscount();
    fCallscount();
    fCallscount();
    fCallscount();
    return 0;
}