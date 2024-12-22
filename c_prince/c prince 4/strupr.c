// string upper

# include<stdio.h>
# include<string.h>

int main()
{
    char ch1[50];
    printf("Enter the  string");
    gets(ch1);
    
    printf("The uppercase string is %s",strupr(ch1));
    return 0;
}
