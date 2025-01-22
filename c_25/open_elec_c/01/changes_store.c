/* 1. Add Products to Inventory:
• Each product has a unique ID, name, quantity, and price.
• Allow the user to input multiple products into the inventory.
2. Search for a Product:
• Allow the user to search for a product by its name or ID.
• Display the product details if found, or an appropriate message if not found.
3. Purchase a Product:
• Ask the user to enter the product ID and the desired quantity.
• If sufficient stock is available, deduct the purchased quantity from inventory
and calculate the total cost.
• If not enough stock, inform the user of the available quantity.
4. Restock a Product:
• Add more quantity to an existing product.
5. Display Inventory:
• List all products with their details, including ID, name, quantity, and price.
6. Exit:
• Exit the program gracefully.*/
#include <stdio.h>
#include <stdlib.h>
int num;
int already=0;
struct store{
    int PID;
    char name[50];
    float price;
    int qty;
};
//struct store* array1[50];
//struct store* array1= 50*malloc(sizeof(struct * store));

struct store* array1[50];
void insert_into(){
    printf("Enter the number of components");
    scanf("%d",&num);
    if (already+num<50){
        for (int i=0;i<num;i++){
            //struct store* s1;
            printf("Enter the product id of the product\n");
            scanf("%d",&array1[already].PID);
            printf("Enter the name of the product\n");
            scanf("%s",&array1[already].name);
            printf("Enter the price of the product\n");
            scanf("%f",&array1[already].price);
            printf("Enter the qty\n");
            scanf("%d",&array1[already].qty);
            //array1[already-1+i]=s1;
            already++;
        }
    }
    else{
        printf("Too many components ");
    }

}
void search_product(void){
    printf("Do you want to search by name or PID 1,2\n");
    int choice;
    char name[50];
    int PID;
    if(choice==1){
        printf("Enter the name of the product\n");
        scanf("%s",&name);
        int found=0;
        for (int i=0;i<already;i++){
            if (array1[i].name==name){
                printf("Product found\n");
                printf("The product ID of the product is %d\n",&array1[i]->PID);
                printf("The product name of the product is %d\n",&array1[i]->name);
                printf("The product quantity of the product is %d\n",&array1[i]->qty);
                printf("The product price of the product is %d",&array1[i]->price);
                found=1;
            }
            if (found==1){
                break;
            }
        }
    }
    if(choice==2){
        printf("Enter the PID of the product\n");
        scanf("%d",&PID);
        int found=0;
        for (int i=0;i<already;i++){
            if (array1[i]->PID==PID){
                printf("Product found\n");
                printf("The product ID of the product is %d\n",&array1[i]->PID);
                printf("The product name of the product is %d\n",&array1[i]->name);
                printf("The product quantity of the product is %d\n",&array1[i]->qty);
                printf("The product price of the product is %d",&array1[i]->price);
                found=1;
            }
            if (found==1){
                break;
            }
        }
    }

}
void purchase_product(void){
    int PID;
    int count;
    printf("Enter the product ID to purchase\n");
    printf("%d",&PID);
    printf("Enter the count of the product \n");
    scanf("%d",&count);
    int found=0;
    for (int i=0;i<already;i++){
        if (array1[i]->PID==PID){
            if(count >array1[i]->qty){
                printf("Only %d poducts are available sorry\n");
                printf("Purchasing %d products \n",array1[i]->qty);
                array1[i]->qty=0;
                double cost;
                cost = (array1[i]->qty)*(array1[i]->price);
                printf("The total price to pay is %f \n",cost);
            }
            else{
                printf("Purchased %f products successfully\n");
                array1[i]->qty -= count;
                double cost;
                cost = count*(array1[i]->price);
                printf("The total price to pay is %f \n",cost);
            }
            found=1;
        }
        //(found) ? break: print(" ")
        if(found==1){
            break;
        }
    }

}
void restock(void){
    int PID;
    int count;
    printf("Enter the product ID to restock\n");
    printf("%d",&PID);
    printf("Enter the count of the product \n");
    scanf("%d",&count);
    for (int i=0;i<already ;i++){
        if (array1[i]->PID==PID){
            array1[i]->qty=array1[i]->qty+count;
        }
    }
}
void display(void){
    printf("The entire inventory is \n");
    for(int i=0;i<already;i++){
        printf("The product ID of the product %d is %d",i+1,array1[i]->PID);
        printf("The product name of the product %d is %d",i+1,array1[i]->name);
        printf("The product qty of the product %d is %d",i+1,array1[i]->qty);
        printf("The product price of the product %d is %d",i+1,array1[i]->price);
    }
}
int main()
{
    struct store* array1 = malloc(50* sizeof(struct store));
    printf("Menu Driven program Stock inventory\n");
    printf("Enter 1 Add products \n");
    printf("Enter 2 search products \n");
    printf("Enter 3 purchase products \n");
    printf("Enter 4 restock products \n");
    printf("Enter 5 to display the inventory\n");
    printf("Enter 6 to quit\n");
    int choice;
    insert_into();
    //for adding initial set of products
    while(1){
        printf("Enter the choice value \n");
        scanf("%d",&choice);
        switch(choice){
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
                break;

        }
    }
}