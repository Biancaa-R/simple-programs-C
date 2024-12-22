// comparing 2 strings:

# include<stdio.h>
# include<string.h>
int main()
{
    char str1[50],str2[50];
    puts("Enter the first string");
    gets(str1);
    puts("Enter the second string");
    gets(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("The strings are equal");
    }
    else{
        printf("The strings are not equal");
    }
    return 0;
}