//10. Write a program to check whether a person is eligible for voting or not. (accept age from user)

#include<stdio.h>
int main(){
    int age;
    printf("Enter the age of the person");
    scanf("%d",&age);
    if (age>=18){
        printf("You are eligible to vote");
    }
    else{
        printf("You are not eligible to vote");
    }
    return 0;
}