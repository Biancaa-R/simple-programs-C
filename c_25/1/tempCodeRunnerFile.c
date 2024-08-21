#include <stdio.h>
#include <ctype.h>

int main() {
    char char1;
    char char2;
    int num;

    // Taking input for whether the user wants vowels or consonants displayed
    printf("Do you want vowels or consonants? Enter 1 for vowels, 2 for consonants: ");
    scanf("%d", &num);
    getchar(); // To consume the newline character left in the buffer

    if (num == 1) {
        printf("Vowels: a e i o u \n");
    } else if (num == 2) {
        printf("Consonants: b c d f g h j k l m n p q r s t v w x y z \n");
    } else {
        printf("Invalid choice\n");
        return 1; // Exit the program if the input is invalid
    }

    // Taking a character as input
    printf("Enter a character: ");
    scanf("%c", &char1);

    // Converting the character to lowercase
    char2 = tolower(char1);

    // Classifying the character
    switch (char2) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c, %c is a vowel\n", char2, toupper(char2));
            break;
        default:
            // Check if the character is an alphabet
            if (isalpha(char2)) {
                printf("%c, %c is a consonant\n", char2, toupper(char2));
            } else {
                printf("%c is not an alphabet\n", char2);
            }
            break;
    }

    return 0;
}
