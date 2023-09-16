//Factorial
#include<stdio.h>
int main(){
    int num,fact;
    fact=1;
    printf("Enter the number to find factorial");
    scanf("%d",&num);
    for (int i=num;i>1;i--){
        fact= fact*i;

    }
    printf("The factorial of %d is %d",num,fact);
    return 0;
}