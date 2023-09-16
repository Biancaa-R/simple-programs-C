//To find the factorial of a number;
#include<stdio.h>
int main(){
    int num1,fact=1;
    int temp;
    printf("Enter the number to find factorial");
    scanf("%d",&num1);
    temp=num1;
    while(num1>1){
        fact=fact*num1;
        num1=--num1;
    }
    printf("The factorial of %d is %d",temp,fact);
    return 0;
}