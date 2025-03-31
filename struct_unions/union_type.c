#include <stdio.h>

union abc {
    float a;
    char b[4];
} var;

int main() {
    var.a = 77.6;
    printf("a = %f\n", var.a);
    
    // Printing memory representation of float in char array
    printf("b = %x %x %x %x\n", var.b[0], var.b[1], var.b[2], var.b[3]);

    return 0;
}
