//•	Write a C program using for loop to print all the numbers from m to n. Classify them as ODD and EVEN numbers. (Choose your own m and n)
#include <stdio.h>
#include <conio.h>

int main()
{
    int num1,num2;
    int temp;
    printf("Enter the first number");
    scanf("%d",&num1);
    printf("Enter the second number");
    scanf("%d",&num2);
    if (num1>num2){
        temp=num2;
        num2=num1;
        num1=temp;
    }
    for (int i=num1;i<=num2;i++){
        printf("The number is %d \t",i);
        if (i%2==0){
            printf("The number is even \n");
        }
        else{
            printf("The number is odd \n");
        }
    }
    getch();
}