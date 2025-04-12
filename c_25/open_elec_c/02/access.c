/*2. Implement an access control system for a building where different levels of permissions are stored
in a single integer (bitwise flags).
For example:
 Bit 0: Access to main gate
 Bit 1: Access to cafeteria
Bit 2: Access to IT department
Bit 3: Access to the server room
bit 4: validity
Write a program to:
A. Grant a specific access based on user input
B. Check if a user has access to a certain facility. 
*/
#include <stdio.h>
int main()
{
    printf("Enter the facility level of the user\n");
    int num;
    int status;
    scanf("%d",&num);
    if (num==0){
        status=0b10000;
    }
    if (num==1){
        status=0b10010;
    }
    if (num==2){
        status=0b10100;
    }
    if (num==3){
        status=0b11000;
    }
    //checking of the status
    if (status==0b10000){
        printf("Access to main gate\n");
    }
    if (status==0b10010){
        printf("Access to cafeteria\n");
    }
    if (status==0b10100){
        printf("Access to IT department\n");
    }
    if (status==0b11000){
        printf("Access to server room\n");
    }
}