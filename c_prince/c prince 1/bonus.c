// 1.A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.

#include<stdio.h>
int main(){
    int bonus,sal,year;
    printf("Enter the salary of the employee");
    scanf("%d",&sal);
    printf("Enter the number of years of working of the employee");
    scanf("%d",&year);
    if (year>5){
        printf("You are eligible for bonus");
        bonus=sal*5/100;
        printf("The bonus is %d \n",bonus);
        printf("The total amount is %d",sal+bonus);
    }
    else{
        printf("You are not eligible for bonus");
        printf("The total count is",sal);
    }
}