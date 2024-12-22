//Sum of n numbers
#include<stdio.h>
int main(){
    int num,i,sum;
    printf("Enter the number");
    scanf("%d",&num);
    i=num;
    while(i>0){
        sum+=i;
        i=--i;
    }
    printf("The summation of the numbers is %d",sum);
    return 0;
}