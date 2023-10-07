//string copy

# include<stdio.h>
# include<string.h>

int main()
{
    char ch1[50];
    char ch2[50];
    printf("Enter a string");
    gets(ch1);
    strcpy(ch2,ch1);
    printf("The string you entered is %s",ch2);
    return 0;
}