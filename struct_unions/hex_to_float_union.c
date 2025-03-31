#include <stdio.h>
#include <stdint.h>

union FloatConverter {
    uint32_t hexValue;
    float floatValue;
};

int main() {
    union FloatConverter converter;

    // Assign hex value (0x429B3333) 
    converter.hexValue = 0x429B3333;

    // Print the float representation
    printf("Hex: 0x%X\n", converter.hexValue);
    printf("Float: %f\n", converter.floatValue);

    return 0;
}
