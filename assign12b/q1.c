#include <stdio.h>
enum Day 
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main()
{
    enum Day day;
    day = Wednesday;
    printf("The value of Wednesday is: %d\n", day);
    if (day == Wednesday) 
    {
        printf("It's Wednesday!\n");
    }
    return 0;
}
