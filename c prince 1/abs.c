/*7. Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1
*/
#include<stdio.h>
#include<math.h>

int main(){
    int num1;
    printf("Enter the input number");
    scanf("%d",&num1);
    num1=abs(num1);
    printf("The absolute value is %d",num1);
}