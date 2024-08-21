#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100], sen[100];

    //printf("Enter the input character: ");
    scanf(" %c", &ch); // Added space before %c to consume any leftover newline character

    //printf("Enter the string s: ");
    scanf(" %[^\n]%*c", s); // Use %[^\n]%*c to read a line of input including spaces

    //printf("Enter the string sen: ");
    scanf(" %[^\n]%*c", sen); // Same as above for the second string

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
