//Program to find the whether the number is prime or not using function

#include<stdio.h>
#include<math.h>

int prime_or_comp(int num){
    num=abs(num);
    for(int i=2;i<num;i++){
        if (num%i==0){
            return (0);
        }
    }
    return(1);

}
int main(){
    int num;
    printf("Enter the number to check if prime or not");
    scanf("%d",&num);
    int value;
    value=prime_or_comp(num);
    if(value==0){
        printf("The given number %d is composite",num);
    }
    else{
        printf("The given number %d is prime",num);
    }

}