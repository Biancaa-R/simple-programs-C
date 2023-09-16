//Fibonacci in do while:
#include<stdio.h>
int main(){
    int num;
    printf("Enter the limit to find fibonacci sequence");
    scanf("%d",&num);
    int num1=1,num2=1,temp;
    int i=0;
    do{
        printf("%d\n",num1);
        temp=num1;
        num1=num2;
        num2=num1+num2;
        i=++i;
    }
    while(i<num);
}