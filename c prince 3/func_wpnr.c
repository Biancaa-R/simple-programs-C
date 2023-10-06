//sum of n numbers:
//with arg without return
# include<math.h>
# include<stdio.h>
void summation(int x){
    int sum;
    if(x>0){
        for(int i=1;i<=x;i++){
            sum+=i;
        }
    printf("The sum is %d",sum);
    }
    if(x<0){
        x=abs(x);
        for(int i=1;i<=x;i++){
            sum+=i;
    printf("The sum is %d",(-sum));
    }
}
}
int main(){
    int x;
    printf("Enter the value of x");
    scanf("%d",&x);
    summation(x);
    return 0;
}