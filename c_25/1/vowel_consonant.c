#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char char1;
    char char2;
    int num;

    // Taking a character as input
    printf("Do you want vowels /consonants? 1,2");
    scanf("%d",&num);
    getchar();
    if (num==1){
        printf("a e i o u \n");
    }
    else{
        printf("b c d f g h j k l m n p q r s t w x y z \n");
    }
    
    printf("Enter a character: ");
    //fgets(char1, sizeof(char1), stdin);
    scanf("%c",&char1);
    char2 = tolower(char1);
    switch (char2) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c ,%c is a vowel\n", char2, toupper(char2));
            break;
        default:
            // Check if the character is an alphabet
            if (isalpha(char2)) {
                printf("%c ,%c is a consonant\n", char2,toupper(char2));
            } else {
                printf("%c is not an alphabet\n", char2);
            }
            break;
    }

    return 0;
}
