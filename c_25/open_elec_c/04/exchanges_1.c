#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EXCHANGE_RATE 83.0

float convert_to_float(char *num, int len) {
    char value_str[100];
    strncpy(value_str, num, len - 1); // Copy number part (excluding currency symbol)
    value_str[len - 1] = '\0'; // Terminate properly
    return atof(value_str); // Convert to float
}

int main() {
    int i;
    float sumr = 0, sumd = 0;

    printf("Enter the number of expenses: ");
    scanf("%d", &i);
    getchar(); // Consume newline left by scanf

    char num[100];
    for (int j = 0; j < i; j++) {
        printf("Enter expense %d (e.g., 100R or 10$): ", j + 1);
        fgets(num, sizeof(num), stdin);

        int len = strlen(num);
        if (num[len - 1] == '\n') {
            num[len - 1] = '\0'; // Remove newline
            len--;
        }

        if (len < 2) {
            printf("Invalid input, try again.\n");
            j--; // Retry this iteration
            continue;
        }

        float value = convert_to_float(num, len);
        
        if (num[len - 1] == 'R') {
            sumr += value;
            sumd += value / EXCHANGE_RATE;
        } else if (num[len - 1] == '$') {
            sumd += value;
            sumr += value * EXCHANGE_RATE;
        } else {
            printf("Invalid currency type, use 'R' for INR or '$' for USD.\n");
            j--; // Retry this iteration
        }
    }

    printf("\nTotal Expenses: %.2f INR and %.2f USD\n", sumr, sumd);
    return 0;
}
