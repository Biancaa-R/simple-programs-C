// Program to find vowels in the sentence:
# include<stdio.h>
# include<string.h>

int main()
{
    char ch1[50];
    char ch2[6]="aeiou";// if i mention size 5 it doesnt work, as there is no space to store null terminator \0
    //in case of 6 or more
    //added by C to mark the end of the string. So, it will be able to store the string "aeiou" plus the null terminator.
    printf("Enter the string to find vowels");
    //scanf("%s",&ch1);
    gets(ch1);
    //for(char i: ch1) range based for loops not supported in c
    for (int i=0;i<strlen(ch1);i++){
        for(int j=0;j<strlen(ch2);j++){
            //printf("%c",ch2[j]);
            if (ch1[i]==ch2[j]){
                printf("Found a vowel %c \n",ch2[j]);
                break;
            }
        }
    }
    return 0;
}