//sum of n numbers:
//without arg with return
# include<math.h>
# include<stdio.h>
int summation(){
    int x,sum=0;
    printf("Enter the value of x");
    scanf("%d",&x);
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
    int value;
    value=summation();
    printf("The value of the sum is %d",value);
    return 0;
}