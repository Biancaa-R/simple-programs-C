//To find if a number is prime
#include<stdio.h>
int main(){
    int num1;
    printf("Enter the number");
    int count=0;
    scanf("%d",&num1);
    int i=2;
    while(i<num1/2+1){
        if (num1%i==0){
            printf("The factor is %d\n",i);
            count=1;
        }
        i=++i;
    }
    if (count==0){
        printf("The number %d is prime",num1);
    }
    else{
        printf("The number %d is composite",num1);
    }
}