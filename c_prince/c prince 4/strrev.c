// string reversal:
# include<stdio.h>
# include<string.h>

int main()
{
    char ch1[20]="happylearning";
    char ch2[50];
    printf("The reverse of the string is %s\n",strrev(ch1));
    printf("Enter any string");
    gets(ch2);
    printf("The reverse string is %s",strrev(ch2));

}