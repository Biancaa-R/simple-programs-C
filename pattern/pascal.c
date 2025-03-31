#include<stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
    fact *= i;
    }
    return fact;
   }
   // Function to calculate combination (nCr)
   int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
   }
   int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    // Print Pascal's Triangle
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j <= i; j++) {
    printf("%d ", nCr(i, j));
    }
    printf("\n");
    }
    return 0;
   }
   