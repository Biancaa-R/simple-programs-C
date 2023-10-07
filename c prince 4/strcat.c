# include<stdio.h>
# include<string.h>

int main()
{
    char ch1[50];
    char ch2[50];
    printf("Enter the first string");
    gets(ch1);
    printf("Enter the second string");
    gets(ch2);
    //char ch3[malloc(sizeof(chr)*len(ch1)*len(ch2))];
    //char ch3[50]= strcat(ch1,ch2);
    printf("The concatenated string is %s",strcat(ch1,ch2));
    return 0;
}