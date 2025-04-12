/*. Emily has taken a loan from a bank to buy a new car. The loan has a fixed annual interest rate, and Emily
wants to calculate her monthly payment to better plan her finances. To determine the monthly payment,
she needs to consider the total loan amount, the annual interest rate, and the number of years over which
she will repay the loan. Emily needs to calculate the monthly payment using the formula for a fixed*/
//monthly =p*r*(1+r)^n/(1+r)^n-1
#include <stdio.h>
#include<math.h>
int main()
{
    printf("Enter the principal ammount");
    float principal;
    scanf("%f",&principal);
    printf("Enter the rate of interest\n");
    float rate;
    scanf("%f",&rate);
    printf("Enter the number of years\n");
    int years;
    scanf("%d",&years);
    float monthly = (principal*rate* pow((1+rate),years));
    monthly=monthly/ (pow((1+rate),years)-1);
    printf("The  monthly installments is %f\n ",monthly);
}