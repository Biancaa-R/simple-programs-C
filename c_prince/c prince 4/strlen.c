//To find string length:
# include<stdio.h>
# include<string.h>

int main()
{
    char ch1[20]="happylearning";
    char ch2[50];
    printf("The length of the string is %d\n",strlen(ch1));
    printf("Enter any string");
    gets(ch2);
    printf("The length of the string is %d",strlen(ch2));
    return 0;
}