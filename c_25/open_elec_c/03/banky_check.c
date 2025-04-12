/*3. FinServe Bank has a comprehensive loan approval system that evaluates loan applications based on
credit score, annual income, and existing loans. The bank uses the following criteria for approval.
Write a C program that takes the credit score, annual income, and existing loans as inputs. The
program should determine if the loan is approved based on the criteria and print the approval status.*/

#include<stdio.h>

void check_loan_approval(int credit_score, double annual_income, int existing_loans) {
    if (credit_score >= 700 && annual_income >= 50000 && existing_loans == 0) {
        printf("Loan Approved\n");
    } else if (credit_score >= 650 && annual_income >= 40000 && existing_loans <= 1) {
        printf("Loan Approved with Conditions\n");
    } else {
        printf("Loan Denied\n");
    }
}

int main() {
    int credit_score, existing_loans;
    double annual_income;
    
    printf("Enter Credit Score: ");
    scanf("%d", &credit_score);
    
    printf("Enter Annual Income: ");
    scanf("%lf", &annual_income);
    
    printf("Enter Number of Existing Loans: ");
    scanf("%d", &existing_loans);
    
    check_loan_approval(credit_score, annual_income, existing_loans);
    
    return 0;
}