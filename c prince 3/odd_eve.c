// to check if odd or eve;
# include<stdio.h>

int odd_or_eve(int num){
    if(num%2==0){
        //it is even
        return 0;
    }
    if(num%2!=0){
        //it is odd
        return 1;
    }
}
int main(){
    int num;
    printf("Enter the number to check if odd/eve");
    scanf("%d",&num);
    int value;
    value=odd_or_eve(num);
    if (value==0){
        printf("The number %d is even",num);
    }
    if(value==1){
        printf("The number %d is odd",num);
    }
}