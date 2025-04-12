// Write a recursive function that prints numbers from n down to 0.
//3. Write a recursive function to calculate the sum of digits of a number
#include<stdio.h>
void summer(int num){
    if (num==0){
        return ;
    }
    printf("%d",num);
    summer(num-1);
}
int main()
{
    printf("Enter the number\n");
    int num=0;
    scanf("%d",&num);
    summer(num);
}