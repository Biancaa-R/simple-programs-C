#include<stdio.h>

int round_to_nearest_100(int num) {
    return ((num + 50) / 100) * 100;
}

int main() {
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
    } else {
        printf("Rounded to nearest 100: %d\n", round_to_nearest_100(num));
    }
    
    return 0;
}
