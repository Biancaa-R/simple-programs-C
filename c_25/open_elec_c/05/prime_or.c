//6. Write a program using recursion to identify whether a number is prime or composite
#include <stdio.h>
#include<stdbool.h>
bool prime_or_not(int num,int num2){
    if (num2==2){
        if(num%num2==0){
            return false;
        }
        else{
            return true;
        }
    }
    if (num%(num2)==0 && num!=num2){
        return false;
    }
    return (prime_or_not(num,num2-1));
}
int main()
{
    printf("Enter the number to check if prime or not\n");
    int num;
    scanf("%d",&num);
    bool value;
    value=prime_or_not(num,num);
    if(value==false){
        printf("The number is not prime\n");
    }
    else{
        printf("The number is prime\n");
    }
}