/*1. You are tasked to convert a vehicle number into words. The vehicle number should be
provided as a positive integer by the user. Your program should extract each digit from
the vehicle number and print the English representation of each digit in words using a
recursive function.
Your program should adhere to the following guidelines:
1. The user will input the vehicle number as a positive integer.
2. It can accept zero but it should not accept leading number as zero.
3. Extract each digit from the vehicle number and convert it into words.
4. Print the English representation of each digit, separated by spaces.
Test cases:
Input: 1234
Output: one two three four*/
#include <stdio.h>

// Function to print digits in words
void numplatefunc(int num) {
    if (num == 0) {
        return;
    }

    numplatefunc(num / 10);  // Recursive call to process digits from left to right

    int digit = num % 10;
    switch (digit) {
        case 0: printf("zero "); break;
        case 1: printf("one "); break;
        case 2: printf("two "); break;
        case 3: printf("three "); break;
        case 4: printf("four "); break;
        case 5: printf("five "); break;
        case 6: printf("six "); break;
        case 7: printf("seven "); break;
        case 8: printf("eight "); break;
        case 9: printf("nine "); break;
    }
}

int main() {
    int num;
    printf("Enter the vehicle number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid input! Vehicle number must be a positive integer.\n");
        return 1;
    }

    if (num == 0) {
        printf("zero\n");
    } else {
        numplatefunc(num);
        printf("\n");
    }

    return 0;
}
