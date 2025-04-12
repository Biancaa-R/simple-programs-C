/*1. Create a multi-functional budgeting tool that allows a user to input expenses in either
Indian Rupees (INR) or US Dollars (USD).
The tool should:
Allow the user to input multiple expenses, each tagged with either R(INR) or $(USD).
Define functions for currency conversion from INR to USD and vice-versa. Output the
total expenses in both INR and USD for final analysis using the conversion functions.
Exchange Rate:
1 USD = 83.0 INR
*/
#include<stdio.h>
#include<string.h>
int main()
{
    printf("Enter the number of expenses\n");
    int inp;
    float sumr=0,sumd=0;
    scanf("%d",&inp);
    char num[100];
    //scanf("%s",&num);
    for (int j=0;j<inp;j++){
        fgets(num, sizeof(num), stdin); // Read input with spaces
        int len = strlen(num);
        if (num[len-1]=='\n'){
            num[len-1]='\0';
            len--;
        }
        //now the actual deal
        if (num[len-1]=='R'){
            int value=1;
            int result;
            for(int i=0;i<len-3;i++){
                result+=value*num[(len-3)-i];
                value *=10;
            }
            sumr+=result;
            sumd += result/83;
        }
        if (num[len-1]=='D'){
            int value=1;
            int result;
            for(int i=0;i<len-3;i++){
                result+=value*num[(len-3)-i];
                value *=10;
            }
            sumd+=result;
            sumr += result*83;
        }
        //printf("%s",num[0]);
    }
    printf("The total value of cash is %f rupees and %f dolars",sumr,sumd);

}