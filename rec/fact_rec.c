#include<stdio.h>

int fact(int num){
    if (num==1){
        return num;
    }
    else{
        return (num* fact(num-1));
    }
}
int main(){
    int num,value;
    printf("Enter the number");
    scanf("%d",&num);
    value=(fact(num));
    printf("%d",value);

}