#include <stdio.h>

// Recursive function to print binary
void dec_bin(int num) {
    if (num == 0) {
        return;
    }
    dec_bin(num / 2);
    printf("%d", num % 2);
}

int main() {
    int num;
    printf("Enter the decimal number input:\n");
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
    } else {
        dec_bin(num);
    }

    printf("\n");
    return 0;
}
