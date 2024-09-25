#include <stdio.h>

int sumArray(int *arr, int n) {
    int sum = 0;
    int *ptr = arr;  // Use pointer to traverse the array
    for (int i = 0; i < n; i++) {
        sum += *(ptr++);  // Increment pointer after accessing value
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sumArray(arr, n);
    printf("Sum of the array elements: %d\n", sum);
    
    return 0;
}
