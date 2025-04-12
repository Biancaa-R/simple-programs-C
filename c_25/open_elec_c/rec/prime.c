#include <stdio.h>

// Recursive function to check if 'n' is prime
int isPrime(int n, int i) {
    // Base cases
    if (n <= 1) return 0;   // 0 and 1 are not prime
    if (i * i > n) return 1; // If 'i' exceeds sqrt(n), 'n' is prime
    if (n % i == 0) return 0; // If divisible, 'n' is not prime

    // Recursive check for next divisor
    return isPrime(n, i + 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num, 2))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
