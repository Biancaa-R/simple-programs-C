//Perfect number:
#include<stdio.h>
int main(){
    int num,perf=0;
    printf("Enter the number");
    scanf("%d",&num);
    for (int i=1;i<num/2+1;i++){
        if (num%i==0){
            printf("%d",i);}
            perf=perf+i;
    }
    if(num==perf){
        printf("The number is perfect %d",perf);
    }
    else{
        printf("The number is not perfect %d",perf);
    }
    return 0;
}