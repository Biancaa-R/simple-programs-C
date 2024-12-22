//Amstrong while:
#include<stdio.h>
#include<math.h>
int main(){
    int num1,len,num,rem,num2;
    int amstrong=0;
    printf("Enter the number");
    scanf("%d",&num1);
    num=num1;
    num2=num1;
    // to find the length of number:
    while(num1>0){
        len+=1;
        num1=num1/10;
    }
    printf("The length of the number is %d\n",len);
    //digits segregation
    int i=0;
    while(i<len){
        rem=num%10;
        amstrong+= pow(rem,len);
        num=num/10;
        i=++i;

    }
    printf("The amstrong value is %d\n",amstrong);
    if (num2==amstrong){
        printf("The given number is amstrong\n");
    }
    else{
        printf("The given number is not amstrong\n");
    }
}