/*1. A company managing its payroll system wants to ensure that the calculation of employee working days is
accurate across years. One critical factor in determining the number of days in a year is whether the year is a
leap year or not. Leap years occur every 4 years, adding an extra day to February (making it 29 days), and
thus affect the total number of days in a year (366 instead of 365). This extra day can influence salary
calculations, holiday accruals, and other date-based data points in the payroll system. The company needs a
tool that can take any year as input and determine whether that year is a leap year based on the following
rules:
● A year is a leap year if it is divisible by 4, but:
● If the year is also divisible by 100, it is not a leap year, unless:
● The year is divisible by 400, in which case it is a leap year.
Create a program that: Accepts a year as input, applies the above rules to determine if the year is a leap year
and outputs whether the given year is a leap year or not.*/
#include <stdio.h>
int main()
{
    printf("Enter the year input");
    int year;
    scanf("%d",&year);
    if (year%4==0){
        if(year %100==0){
            if (year%400==0){
                printf("The year is a leap year");
            }
            else{
                printf("The year is not a leap year");
            }
        }
        else{
            printf("The year is a leap year");
        }
    }
    else{
        printf("The year is not a leap year");
    }
}