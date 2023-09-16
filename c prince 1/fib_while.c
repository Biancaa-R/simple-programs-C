//fibonacci while:
#include<stdio.h>
int main(){
    int num;
    int num1=1,num2=1,temp;
    printf("Enter the limit to find fibonacci series");
    scanf("%d",&num);
    int i=0;
    while(num>i){
        printf("%d\n",num1);
        temp=num1;
        num1=num2;
        num2=temp+num2;
        i=++i;
        
    }
}