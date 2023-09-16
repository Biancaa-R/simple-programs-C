// Fibonacci series:
#include<stdio.h>

int fib(int num){
    if(num<=1){
        printf("%d\n",num);
        return num;
    }
    else{
        printf("%d\n",(fib(num-1)+fib(num-2)));
        return fib(num-1)+fib(num-2);
        
    }
}

int main(){
    int num;
    printf("Enter the number to find fibonacci series sum");
    scanf("%d",&num);
    printf("%d\n",fib(num));

}