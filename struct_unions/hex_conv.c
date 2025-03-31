#include <stdio.h>
#include <stdint.h>

union FloatBytes {
    float f;
    unsigned char bytes[4]; // Use unsigned to prevent sign extension
};

union FloatConverter {
    uint32_t hexValue;
    float floatValue;
};

int main() {
    union FloatBytes data;
    data.f = 77.6;  // Explicitly use 'f' to ensure correct float precision
    uint32_t hex_rep =0;  

    printf("Float value: %f\n", data.f);
    printf("Byte representation: ");

    for (int i = 0; i < 4; i++) {
        printf("%02X ", data.bytes[i]);  // Ensures proper hex representation
        hex_rep |= ((uint32_t)data.bytes[i] << (8 * i)); // Accumulate bytes into hex_rep
    }

    printf("\nHex: 0x%X\n", hex_rep);

    union FloatConverter converter;
    converter.hexValue = hex_rep;

    printf("Float: %f\n", converter.floatValue);

    char str[10];
    sprintf(str, "%.2f", converter.floatValue);  // Convert float to string with 2 decimal places
    printf("Float as string: %s\n", str);

    return 0;
}
