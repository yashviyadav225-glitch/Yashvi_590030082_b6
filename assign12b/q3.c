#include <stdio.h>

enum Type
{
    INT_VALUE,
    FLOAT_VALUE,
    CHAR_VALUE
};

union Data
{
    int i;
    float f;
    char c;
};

struct Value
{
    enum Type tag;
    union Data data;
};

void printValue(struct Value v)
{
    switch (v.tag)
    {
        case INT_VALUE:
            printf("Integer value = %d\n", v.data.i);
            break;

        case FLOAT_VALUE:
            printf("Float value = %.2f\n", v.data.f);
            break;

        case CHAR_VALUE:
            printf("Character value = %c\n", v.data.c);
            break;

        default:
            printf("Invalid type\n");
    }
}

int main()
{
    struct Value v1, v2, v3;

    v1.tag = INT_VALUE;
    v1.data.i = 25;

    v2.tag = FLOAT_VALUE;
    v2.data.f = 12.5;

    v3.tag = CHAR_VALUE;
    v3.data.c = 'A';

    printValue(v1);
    printValue(v2);
    printValue(v3);

    return 0;
}