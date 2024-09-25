#include <stdio.h>

void findMaxMin(int numbers[], int n, int *max, int *min) {
    *max = numbers[0];
    *min = numbers[0];
    
    for (int i = 1; i < n; i++) {
        if (numbers[i] > *max) {
            *max = numbers[i];
        }
        if (numbers[i] < *min) {
            *min = numbers[i];
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int numbers[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int max, min;
    findMaxMin(numbers, n, &max, &min);
    
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    return 0;
}
