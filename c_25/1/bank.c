//•	Write a C Program to Display the ATM Transaction like balance checking, cash withdrawal and cash deposition. (Also include the option card declined when the user inputs wrong pin and also when the amount requested exceeds the balance)
# include <stdio.h>
# include<conio.h>

int num,pass;
int choice;
int perm;

struct bank{
    int acc_num;
    float balance;
    int password;

};

void create_acc(struct bank*b)
{
    printf("Enter the bank account number");
    scanf("%d",&b->acc_num);
    printf("Enter your password");
    scanf("%d",&b->password);
    printf("Enter the balance to credit");
    scanf("%f",&b->balance);
}
void modify_balance(struct bank *b,int num){
    b->balance=num;
}

void cash_withdraw(struct bank *b,int num){
    if (b->balance>num){
        printf("%f withdrawn successfully",num);
        b->balance=b->balance-num;
        printf("availabe balance: %f",b->balance);
    }
    else{
        printf("insufficient balance");
    }
}

void cash_deposit(struct bank  *b,int num){
    b->balance=b->balance+num;
    printf("balance updated successfully");
}

void view_balance(struct bank *b){
    printf("The balance in the account is %f",b->balance);
}

void check_identity(struct bank *b){
    printf("Enter your account number");
    scanf("%f",&num);
    if (num=b->acc_num){
        printf("Enter your password");
        scanf("%d",&pass);
        if (pass=b->password)
        {
            printf("Verified");
            perm=1;
        }
    else{
        printf("invalid data permission denied");
        perm=0;
    }
    }
}

int main(){
    printf("creating account");
    struct bank b1;
    create_acc(&b1);
    perm=0;
    check_identity(&b1);
    while(1){

        printf("Enter your option: 1.balance check 2.cash withdraw 3.update balance 4.cash deposit 5.quit");
        scanf("%d",&choice);
        switch (choice) {
            case (1):
                if (perm=1){
                    view_balance(&b1);
                }
                break;
            case(2):
            if (perm==1){
                printf("Enter the amount to withdraw");
                scanf("%d",&num);
                cash_withdraw(&b1,num);
                break;
            }
            case(3):
            if (perm==1){
                printf("Enter the amount to update");
                scanf("%d",&num);
                modify_balance(&b1,num);
                break;
            }
            case(4):
            if (perm==1){
                printf("Enter the amount to add");
                scanf("%d",&num);
                cash_deposit(&b1,num);
            }
            case(5):
                return 0;
                break;
        }
    }

}