#include <stdio.h>

union Number
{
    int i;
    float f;
};

int main()
{
    union Number num[3];

    // Store integer values
    printf("Enter three integer values: ");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &num[i].i);
    }

    // Display integer values
    printf("\nInteger values are:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", num[i].i);
    }

    // Overwrite second element with float
    printf("\n\nEnter a float value for second element: ");
    scanf("%f", &num[1].f);

    printf("Float value in second element = %.2f\n", num[1].f);

    return 0;
}