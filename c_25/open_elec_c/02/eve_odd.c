//odd or even
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int num;
    char buffer[30];
    printf("Enter the number as input\n");
    scanf("%d",&num);
    itoa(num,buffer,2);
    strrev(buffer);
    if (buffer[0]=='0'){
        printf("The given input number is even\n");
    }
    else if (buffer[0]=='1'){
        printf("The given input number is odd\n");
    }
}