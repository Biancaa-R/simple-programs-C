/*2. Jamie, a senior web developer at WebForm Solutions, is tasked with enhancing their website’s form
validation system to better handle and analyze user inputs. Jamie needs to create a feature that
processes a single character input from the user and classifies it into one of several categories. The
feature should handle the following requirements:
Alphabet Check:
● If the character is an alphabet, identify if it is a vowel or consonant.
● Provide separate classifications for uppercase and lowercase vowels and consonants.
Numeric Check:
● Identify if the character is a numeric digit.
● Additionally, provide feedback on its range (e.g., high-value digit > 6). Special
Symbol Check:
● If the character is neither an alphabet nor a numeric digit, classify it as a special symbol.
*/
#include <stdio.h>

void classify_character(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { // Alphabet check
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Uppercase Vowel\n");
        } else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Lowercase Vowel\n");
        } else if (ch >= 'A' && ch <= 'Z') {
            printf("Uppercase Consonant\n");
        } else {
            printf("Lowercase Consonant\n");
        }
    } else if (ch >= '0' && ch <= '9') { // Numeric check
        if (ch > '6') {
            printf("High-value Digit (>6)\n");
        } else {
            printf("Low-value Digit (≤6)\n");
        }
    } else { // Special symbol
        printf("Special Symbol\n");
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    classify_character(ch);
    return 0;
}
