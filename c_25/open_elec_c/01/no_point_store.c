#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct store {
    int PID;
    char name[50];
    float price;
    int qty;
};

struct store* array1 = NULL;
int already = 0;

void insert_into() {
    int num;
    printf("Enter the number of products to add: ");
    scanf("%d", &num);

    if (already + num > 50) {
        printf("Too many products! Maximum capacity is 50.\n");
        return;
    }

    for (int i = 0; i < num; i++) {
        printf("Enter Product ID: ");
        scanf("%d", &array1[already].PID);
        printf("Enter Product Name: ");
        scanf("%s", array1[already].name);
        printf("Enter Product Price: ");
        scanf("%f", &array1[already].price);
        printf("Enter Product Quantity: ");
        scanf("%d", &array1[already].qty);
        already++;
    }
}

void search_product() {
    int choice;
    printf("Search by: 1 for Name, 2 for PID: ");
    scanf("%d", &choice);

    if (choice == 1) {
        char name[50];
        printf("Enter Product Name: ");
        scanf("%s", name);

        for (int i = 0; i < already; i++) {
            if (strcmp(array1[i].name, name) == 0) {
                printf("Product found:\n");
                printf("ID: %d, Name: %s, Price: %.2f, Quantity: %d\n", array1[i].PID, array1[i].name, array1[i].price, array1[i].qty);
                return;
            }
        }
    } else if (choice == 2) {
        int pid;
        printf("Enter Product ID: ");
        scanf("%d", &pid);

        for (int i = 0; i < already; i++) {
            if (array1[i].PID == pid) {
                printf("Product found:\n");
                printf("ID: %d, Name: %s, Price: %.2f, Quantity: %d\n", array1[i].PID, array1[i].name, array1[i].price, array1[i].qty);
                return;
            }
        }
    }
    printf("Product not found.\n");
}

void purchase_product() {
    int pid, qty;
    printf("Enter Product ID: ");
    scanf("%d", &pid);
    printf("Enter Quantity to Purchase: ");
    scanf("%d", &qty);

    for (int i = 0; i < already; i++) {
        if (array1[i].PID == pid) {
            if (array1[i].qty >= qty) {
                array1[i].qty -= qty;
                printf("Purchase successful! Total cost: %.2f\n", qty * array1[i].price);
            } else {
                printf("Not enough stock! Available: %d\n", array1[i].qty);
            }
            return;
        }
    }
    printf("Product not found.\n");
}

void restock() {
    int pid, qty;
    printf("Enter Product ID: ");
    scanf("%d", &pid);
    printf("Enter Quantity to Restock: ");
    scanf("%d", &qty);

    for (int i = 0; i < already; i++) {
        if (array1[i].PID == pid) {
            array1[i].qty += qty;
            printf("Restock successful! New Quantity: %d\n", array1[i].qty);
            return;
        }
    }
    printf("Product not found.\n");
}

void display() {
    printf("Inventory:\n");
    for (int i = 0; i < already; i++) {
        printf("ID: %d, Name: %s, Price: %.2f, Quantity: %d\n", array1[i].PID, array1[i].name, array1[i].price, array1[i].qty);
    }
}

int main() {
    array1 = (struct store*)malloc(50 * sizeof(struct store));
    int choice;

    while (1) {
        printf("Menu:\n");
        printf("1. Add Products\n");
        printf("2. Search Products\n");
        printf("3. Purchase Products\n");
        printf("4. Restock Products\n");
        printf("5. Display Inventory\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert_into(); break;
            case 2: search_product(); break;
            case 3: purchase_product(); break;
            case 4: restock(); break;
            case 5: display(); break;
            case 6: 
                free(array1);
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
