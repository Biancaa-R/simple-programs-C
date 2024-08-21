#include <stdio.h>

int main() {
    int a, b;
    float x, y;

    // Reading two integers
    scanf("%d %d", &a, &b);

    // Reading two floats
    scanf("%f %f", &x, &y);

    // Calculating and printing sum and difference of integers
    printf("%d %d\n", a + b, a - b);

    // Calculating and printing sum and difference of floats
    printf("%.1f %.1f\n", x + y, x - y);

    return 0;
}
