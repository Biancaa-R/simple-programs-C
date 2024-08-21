#include <ctype.h>
#include<stdio.h>

#define is_digit(c) ((c) >= '0' && (c) <= '9')

#define is_hex(c) (is_digit(c) || \
                   ((c) >= 'A' && (c) <= 'F') || \
                   ((c) >= 'a' && (c) <= 'f'))

int main() {
    char ch1 = '9';
    char ch2 = 'F';
    char ch3 = 'g';
    
    // Testing the macros
    if (is_hex(ch1))
        printf("%c is a hex digit.\n", ch1);
    else
        printf("%c is not a hex digit.\n", ch1);

    if (is_hex(ch2))
        printf("%c is a hex digit.\n", ch2);
    else
        printf("%c is not a hex digit.\n", ch2);

    if (is_hex(ch3))
        printf("%c is a hex digit.\n", ch3);
    else
        printf("%c is not a hex digit.\n", ch3);

    return 0;
}
