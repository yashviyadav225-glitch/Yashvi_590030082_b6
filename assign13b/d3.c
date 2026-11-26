#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int code;
    char name[100];
    int quantity;
    float price;
};

int main() {
    struct Product *products[5]; // Array of structure pointers
    int numProducts = 5;

    // Allocate memory for each product and initialize details
    for (int i = 0; i < numProducts; i++) {
        products[i] = (struct Product *)malloc(sizeof(struct Product));
        if (products[i] == NULL) {
            printf("Memory allocation failed for product %d\n", i + 1);
            return 1;
        }
    }

    // Initialize product details
    products[0]->code = 1;
    strcpy(products[0]->name, "Laptop");
    products[0]->quantity = 10;
    products[0]->price = 1000.0;

    products[1]->code = 2;
    strcpy(products[1]->name, "Mouse");
    products[1]->quantity = 20;
    products[1]->price = 25.0;

    products[2]->code = 3;
    strcpy(products[2]->name, "Keyboard");
    products[2]->quantity = 15;
    products[2]->price = 75.0;

    products[3]->code = 4;
    strcpy(products[3]->name, "Monitor");
    products[3]->quantity = 5;
    products[3]->price = 300.0;

    products[4]->code = 5;
    strcpy(products[4]->name, "Headphones");
    products[4]->quantity = 25;
    products[4]->price = 100.0;

    // Display product details
    printf("Product Details:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("Product %d:\n", i + 1);
        printf("Code: %d\n", products[i]->code);
        printf("Name: %s\n", products[i]->name);
        printf("Quantity: %d\n", products[i]->quantity);
        printf("Price: %.2f\n", products[i]->price);
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < numProducts; i++) {
        free(products[i]);
    }

    return 0;
}