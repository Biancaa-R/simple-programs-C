//sum of n numbers:
//with arg with return
# include<math.h>
# include<stdio.h>
int summation(int x){
    int sum;
    if(x>0){
        for(int i=1;i<=x;i++){
            sum+=i;
        }
    return sum;
    }
    if(x<0){
        x=abs(x);
        for(int i=1;i<=x;i++){
            sum+=i;
    return -sum;
    }
}
}
int main(){
    int x;
    int value;
    printf("Enter the value of x");
    scanf("%d",&x);
    value=summation(x);
    printf("The sum is %d",value);
    return 0;
}