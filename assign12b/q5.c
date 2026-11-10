#include <stdio.h>

enum State
{
    IDLE,
    COIN_INSERTED,
    DISPENSE,
    OUT_OF_STOCK
};

enum State nextState(enum State state, int command, int stock)
{
    if (stock == 0)
        return OUT_OF_STOCK;

    switch (state)
    {
        case IDLE:
            if (command == 1)
                return COIN_INSERTED;
            else
            {
                printf("Invalid command! Insert coin first.\n");
                return IDLE;
            }

        case COIN_INSERTED:
            if (command == 2)
                return DISPENSE;
            else if (command == 3)
                return IDLE;
            else
            {
                printf("Invalid command!\n");
                return COIN_INSERTED;
            }

        case DISPENSE:
            return IDLE;

        case OUT_OF_STOCK:
            printf("Machine is out of stock.\n");
            return OUT_OF_STOCK;
    }

    return state;
}

void displayState(enum State state)
{
    switch (state)
    {
        case IDLE:
            printf("Current State: IDLE\n");
            break;

        case COIN_INSERTED:
            printf("Current State: COIN_INSERTED\n");
            break;

        case DISPENSE:
            printf("Current State: DISPENSE\n");
            break;

        case OUT_OF_STOCK:
            printf("Current State: OUT_OF_STOCK\n");
            break;
    }
}

int main()
{
    enum State state = IDLE;
    int command;
    int stock;

    printf("Enter initial stock: ");
    scanf("%d", &stock);

    while (1)
    {
        displayState(state);

        if (state == OUT_OF_STOCK)
            break;

        printf("\nCommands:\n");
        printf("1. Insert Coin\n");
        printf("2. Select Product\n");
        printf("3. Cancel\n");
        printf("4. Exit\n");

        printf("Enter command: ");
        scanf("%d", &command);

        if (command == 4)
            break;

        state = nextState(state, command, stock);

        if (state == DISPENSE)
        {
            printf("Product dispensed successfully.\n");
            stock--;

            state = nextState(state, command, stock);
        }

        printf("Stock remaining: %d\n\n", stock);
    }

    return 0;
}