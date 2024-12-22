//Perfect no.
#include<stdio.h>
int main(){
    int num,perf=0;
    printf("Enter the number");
    scanf("%d",&num);
    int i=1;
    while(i<num){
           
        if(num%i==0){
            printf("%d",i);
            perf+=i;
        }
        i=++i;
    }
    if (num==perf){
        printf("The entered number %d is perfect number",perf);
    }
    else{
        printf("The number %d is not perfect %d",num,perf);
    }
}