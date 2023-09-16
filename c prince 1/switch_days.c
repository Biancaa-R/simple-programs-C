//Switch case function:
#include<stdio.h>
int main(){
    int choice;
    printf("Enter the choice number 1-7");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("The day is sunday");
            break;
        case 2:
            printf("The day is monday");
              break;
        case 3:
            printf("The day is tuesday");
              break;
        case 4:
            printf("The day is wedesday");
            break;
        case 5:
            printf("The day is thursday");
            break;  
        case 6:
            printf("The day is friday");
            break;
        case 7:     
            printf("The day is saturday");
            break;

        default:
            printf("You have entered a default value");

    }
    return 0;
}