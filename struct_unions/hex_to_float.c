#include <stdio.h>

int main() {
    unsigned int hex_value = 0x429BFFFF;  // Given hex value
    float *float_ptr = (float*)&hex_value;  // Interpret it as a float

    printf("Floating-point representation: %f\n", *float_ptr);

    return 0;
}
