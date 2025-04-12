#include<stdio.h>
void classify_character(char ch)
{if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
  {if(ch==65||ch==69||ch==73||ch==79||ch==85)
        printf("Uppercase Vowel\n");
  else if(ch==97||ch==101||ch==105||ch==111||ch==117)
        printf("Lowercase Vowel\n");
else if(ch>=65&&ch<=90)printf("Uppercase Consonant\n");
else printf("Lowercase Consonant\n");}
else if(ch>=48&&ch<=57){if(ch>'6')
        printf("High-value Digit (>6)\n");
        else printf("Low-value Digit (≤6)\n");}
else printf("Special Symbol\n");}
int main(){
char ch;
printf("Enter a character: ");
scanf(" %c",&ch);
classify_character(ch);
return 0;}
