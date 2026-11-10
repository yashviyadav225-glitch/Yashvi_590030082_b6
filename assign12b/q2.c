#include<stdio.h>
enum Result
{
    Fail,
    Pass,
    Distinction
};
enum Result getResult(float Average)
{
    if(Average >= 75)
    return Distinction;
    else if(Average >= 40)
    return Pass;
    else
    return Fail;
}
int main()
{
    float Average;
    printf("Enter the average marks: ");
    scanf("%f", &Average);
    enum Result result = getResult(Average);
    switch(result)
    {
        case Fail:
            printf("Result: Fail\n");
            break;
        case Pass:
            printf("Result: Pass\n");
            break;
        case Distinction:
            printf("Result: Distinction\n");
            break;
        default:
            printf("Invalid result\n");
    }
    return 0;
}