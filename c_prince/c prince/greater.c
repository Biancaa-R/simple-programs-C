#include<stdio.h>
//two numbers
int main()
{
    int num1,num2,num3;
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);   
    if (num1>num2){
        printf("%d is the greater number\n",num1);}
    else if (num2>num1){
        printf("%d is the greater number\n",num2);
    }
    else{
        printf("Both the numbers are equal to %d\n",num1);
    }
     //three numbers
     //one lrg 2 equal,one small 2 eql all eql
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2); 
    printf("Enter the third number\n");
    scanf("%d",&num3);
    if (num1>num2 && num1>num3){
        printf("%d is the greatest number\n",num1);
        if (num2<num3){
            printf("%d is the least number\n",num2);
        }
        else{
            printf("%d is the least number\n",num3);
        }
        
    }
    else if (num2>num1 && num2>num3){
        printf("%d is the greatest number\n",num2);
        if (num1>num3){
            printf("%d is the least number\n",num3);}
        else{
            printf("%d is the least number\n",num1);
            //no.s equal nalum prachana illa
        }
        
    }
    else if(num3>num2 && num3>num1){
        printf("%d is the greatest number\n",num3);
        if (num2<num1){
            printf("%d is the least number\n",num2);
        }
        else{
            printf("%d is the least number\n",num1);
        }
    }
    else if (num1==num2&& num2==num1 && num1==num3){
        printf("all three numbers are equal to%d\n",num1);
    }
    //asuming num1 is lesser
    else if(num2==num3){
        printf("The greatest number is %d\n",num2);
        printf("The least number is %d\n",num1);
        
    }
    //asuming num2 is lesser
    else if(num1==num3){
        printf("The greatest number is %d\n",num1);
        printf("The least number is %d\n",num2);
        
    }
     //asuming num3 is lesser
    else if(num2==num1){
        printf("The greatest number is %d\n",num2);
        printf("The least number is %d\n",num3);
        
    }
    //not a necessity to have else...
}

