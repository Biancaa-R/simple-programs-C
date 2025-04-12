/*Program to input a two-digit octal number and convert it into decimal and vice-versa*/
# include <stdio.h>
#include <stdlib.h>
int main()
{
    int numberd;
    int numbero;
    printf("Enter the decimal number\n");
    scanf("%d",&numberd);
    printf("Enter the octal number\n");
    scanf("%o",&numbero);
    char buffer[30];
    itoa(numberd,buffer,8);
    printf("The octal value of the decimal number is %s\n",buffer);
    itoa(numbero,buffer,10);
    printf("The decimal value of the octal number is %s\n",buffer);

}