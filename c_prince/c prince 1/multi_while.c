//Multiplication while:
#include<stdio.h>
int main(){
    int num,limit;
    printf("Enter the number to find table");
    scanf("%d",&num);
    printf("Enter the limit till which to find table");
    scanf("%d",&limit);
    int i=1;
    while(i<=limit){
        printf("%dx%d=%d\n",num,i,num*i);
        i=++i;
    }
    return 0;
}