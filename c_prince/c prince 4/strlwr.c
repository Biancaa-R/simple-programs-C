// string lower

# include<stdio.h>
# include<string.h>

int main()
{
    char ch1[50];
    char ch2[50];
    printf("Enter the  string");
    gets(ch1);
    strcpy(ch2,strlwr(ch1));
    // we cannot directly equate by = we use strcpy instead
    printf("The lowercase string is %s",ch2);
    return 0;
}
