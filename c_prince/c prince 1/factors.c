//Factors of a number:
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=1;i<=(num);i++){
        if (num%i==0){
            printf("%d\n",i);}
    }
    return 0;
}