#include <stdio.h>

struct DeviceStatus
{
    unsigned int power : 1;
    unsigned int mode : 2;
    unsigned int error : 1;
    unsigned int battery : 4;
};

int main()
{
    struct DeviceStatus d;
    int power, mode, error, battery;

    printf("Enter power (0 or 1): ");
    scanf("%d", &power);

    printf("Enter mode (0 to 3): ");
    scanf("%d", &mode);

    printf("Enter error (0 or 1): ");
    scanf("%d", &error);

    printf("Enter battery level (0 to 15): ");
    scanf("%d", &battery);

    if (power < 0 || power > 1)
    {
        printf("Invalid power value!\n");
        return 1;
    }

    if (mode < 0 || mode > 3)
    {
        printf("Invalid mode value!\n");
        return 1;
    }

    if (error < 0 || error > 1)
    {
        printf("Invalid error value!\n");
        return 1;
    }

    if (battery < 0 || battery > 15)
    {
        printf("Invalid battery value!\n");
        return 1;
    }

    d.power = power;
    d.mode = mode;
    d.error = error;
    d.battery = battery;

    printf("\n--- Device Status ---\n");
    printf("Power   : %u\n", d.power);
    printf("Mode    : %u\n", d.mode);
    printf("Error   : %u\n", d.error);
    printf("Battery : %u\n", d.battery);

    return 0;
}