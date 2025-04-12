/*4. Design a water billing system for the Eureka Water Company. The company charges its customers
based on their water usage, following the following billing structure: Flat Rate (Category A): For water
usage up to and including 1000 cubic feet, a flat rate of Rs. 750/- is applied.
Tiered Rate (Category B): For water usage over 1000 cubic feet and up to and including 2000 cubic feet, a
rate of Rs. 5/- per cubic foot is applied.
Tiered Rate (Category C): For water usage over 2000 cubic feet and up to and including 3000 cubic feet, a
rate of Rs. 10/- per cubic foot is applied.
Flat Rate (Category D): For water usage over 3000 cubic feet, an additional flat rate of Rs. 4500/- is applied.
Develop an application that calculates the water bill for a customer based on their water usage in cubic feet.
The program should perform the following tasks:
1. Prompt the user to enter the cubic feet of water used by the customer.
2. Determine the appropriate billing category (A, B, C, or D) based on the water usage.
3. Calculate the water bill according to the applicable rate for the determined category.
4. Display the calculated water bill to the customer
*/
#include <stdio.h>
int main()
{
    printf("Enter the cubic feet of water used by the customer\n");
    float level;
    scanf("%f",&level);
    if (level<=1000){
        printf("Category A");
        printf("Amount to be payed : 750");
    }
    else if (level>1000 & level<=2000){
        printf("Category B");
        float extra;
        extra= level-1000;
        //printf("Category B");
        printf("Amount to be payed is %f",extra*5+750);
    }
    else if (level>2000 & level<=3000){
        printf("Category c");
        float extra;
        extra= level-1000;
        //printf("Category C");
        printf("Amount to be payed is %f",extra*10+750);
    }
    else{
        printf("Category D");
        printf("Amount payable is %f",4500+750);
    }
}