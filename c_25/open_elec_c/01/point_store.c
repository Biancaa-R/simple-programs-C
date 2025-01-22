#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS 50

int num = 0; // Total products in the inventory

struct store {
    int PID;
    char name[50];
    float price;
    int qty;
};

// Array of pointers to store
struct store* inventory[MAX_PRODUCTS];

void insert_into() {
    printf("Enter the number of products to add: ");
    int to_add;
    scanf("%d", &to_add);

    if (num + to_add <= MAX_PRODUCTS) {
        for (int i = 0; i < to_add; i++) {
            inventory[num] = (struct store*)malloc(sizeof(struct store));
            if (!inventory[num]) {
                printf("Memory allocation failed\n");
                return;
            }
            printf("Enter the product ID: ");
            scanf("%d", &inventory[num]->PID);
            printf("Enter the product name: ");
            scanf("%s", inventory[num]->name);
            printf("Enter the product price: ");
            scanf("%f", &inventory[num]->price);
            printf("Enter the product quantity: ");
            scanf("%d", &inventory[num]->qty);
            num++;
        }
    } else {
        printf("Cannot add more than %d products.\n", MAX_PRODUCTS);
    }
}

void search_product() {
    printf("Search by 1: Name, 2: PID: ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        char search_name[50];
        printf("Enter the product name: ");
        scanf("%s", search_name);

        for (int i = 0; i < num; i++) {
            if (strcmp(inventory[i]->name, search_name) == 0) {
                printf("Product found: ID: %d, Name: %s, Price: %.2f, Quantity: %d\n",
                       inventory[i]->PID, inventory[i]->name, inventory[i]->price, inventory[i]->qty);
                return;
            }
        }
    } else if (choice == 2) {
        int search_PID;
        printf("Enter the product ID: ");
        scanf("%d", &search_PID);

        for (int i = 0; i < num; i++) {
            if (inventory[i]->PID == search_PID) {
                printf("Product found: ID: %d, Name: %s, Price: %.2f, Quantity: %d\n",
                       inventory[i]->PID, inventory[i]->name, inventory[i]->price, inventory[i]->qty);
                return;
            }
        }
    }

    printf("Product not found.\n");
}

void purchase_product() {
    printf("Enter the product ID to purchase: ");
    int purchase_PID, purchase_qty;
    scanf("%d", &purchase_PID);
    printf("Enter the quantity to purchase: ");
    scanf("%d", &purchase_qty);

    for (int i = 0; i < num; i++) {
        if (inventory[i]->PID == purchase_PID) {
            if (inventory[i]->qty >= purchase_qty) {
                inventory[i]->qty -= purchase_qty;
                printf("Purchase successful. Total cost: %.2f\n", purchase_qty * inventory[i]->price);
            } else {
                printf("Insufficient stock. Available quantity: %d\n", inventory[i]->qty);
            }
            return;
        }
    }

    printf("Product not found.\n");
}

void restock() {
    printf("Enter the product ID to restock: ");
    int restock_PID, restock_qty;
    scanf("%d", &restock_PID);
    printf("Enter the quantity to add: ");
    scanf("%d", &restock_qty);

    for (int i = 0; i < num; i++) {
        if (inventory[i]->PID == restock_PID) {
            inventory[i]->qty += restock_qty;
            printf("Restock successful. New quantity: %d\n", inventory[i]->qty);
            return;
        }
    }

    printf("Product not found.\n");
}

void display() {
    printf("Inventory:\n");
    for (int i = 0; i < num; i++) {
        printf("ID: %d, Name: %s, Price: %.2f, Quantity: %d\n",
               inventory[i]->PID, inventory[i]->name, inventory[i]->price, inventory[i]->qty);
    }
}

void free_memory() {
    for (int i = 0; i < num; i++) {
        free(inventory[i]);
    }
}

int main() {
    printf("Menu-Driven Stock Inventory Program\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add products\n");
        printf("2. Search products\n");
        printf("3. Purchase products\n");
        printf("4. Restock products\n");
        printf("5. Display inventory\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert_into();
                break;
            case 2:
                search_product();
                break;
            case 3:
                purchase_product();
                break;
            case 4:
                restock();
                break;
            case 5:
                display();
                break;
            case 6:
                free_memory();
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
