/*1. A restaurant applies both a service tax and a service charge to a meal, but there’s a catch:
the service charge is only applied to the initial bill amount, whereas the service tax is
applied to the sum of the bill amount plus service charge.
Define a function calculateCharges that calculates and returns the service tax and service
charges by accepting the following arguments:
∙ bill_amount (float) - the original amount of the bill
∙ service_tax_percent (float) - the percentage of service tax
∙ service_charge_percent (float) - the percentage of service charge
In the main function, calculate the final bill amount as the sum of the original
bill_amount, service_tax, and service_charge, and print it.
*/
#include <stdio.h>
int main(){
    printf("Enter the price of the meal\n");
    float meal_cost;
    scanf("%f",&meal_cost);
    float service_tax_per;
    float service_charge_per;
    printf("Enter the service tax percent\n");
    scanf("%f",&service_tax_per);

}