//3. Write a recursive function to calculate the sum of digits of a number
#include<stdio.h>
int summer(int num){
    if (num==0){
        return 0;
    }
    return (num%10 + summer(num/10));
}
int main()
{
    printf("Enter the number to find sum of digits\n");
    int num=0;
    scanf("%d",&num);
    num=summer(num);
    printf("The value of the new calculated sum is %d",num);
}