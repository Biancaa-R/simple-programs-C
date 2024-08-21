#include <stdio.h>

#define swap(a, b) do { \
    (a) ^= (b); \
    (b) ^= (a); \
    (a) ^= (b); \
} while(0)

int main() {
    int num1, num2;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
