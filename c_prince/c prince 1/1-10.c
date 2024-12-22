#include<stdio.h>
int main(){
    int i,limit,x;
    //forw loop
    for(i=0;i<=10;i++){
        printf("%d\n",i);
    }
    
    //rev loop
    for (i=10;i>=1;i--){
        printf("%d\n",i);
    }
    //table
    printf("Enter the number to find table");
    scanf("%d",&x);
    printf("Enter till which number to print table");
    scanf("%d",& limit);
    for (i=1 ;i<=limit; i++){
        printf("%d x %d = %d \n",i,x,i*x);
    }

    //sum of n num
    int num,val;
    printf("Enter the number limit");
    scanf("%d",&num);
    val=((num)*(num+1))/2;
    printf("%d",val);
    return 0;
}