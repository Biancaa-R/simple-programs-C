/*4. Write a recursive function to convert a decimal number to binary
Test cases:
Input: 7
Output :111
Input :10
Output :1010
*/
#include <stdio.h>
#include <string.h>

// Recursive helper to convert decimal to binary and store in string
void dec_to_bin_helper(int num, char *binary, int *index) {
    if (num == 0) return;

    dec_to_bin_helper(num / 2, binary, index);

    binary[(*index)++] = (num % 2) + '0';
}

// Main wrapper function
void dec_to_bin(int num, char *binary) {
    if (num == 0) {
        strcpy(binary, "0");
        return;
    }

    int index = 0;
    dec_to_bin_helper(num, binary, &index);
    binary[index] = '\0'; // Null-terminate the string
}

int main() {
    int num;
    char binary[100]; // buffer to store binary string

    printf("Enter the decimal number input:\n");
    scanf("%d", &num);

    dec_to_bin(num, binary);

    printf("Binary: %s\n", binary);

    return 0;
}
