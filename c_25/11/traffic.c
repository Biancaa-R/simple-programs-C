#include <reg51.h>

// #define RED_LIGHT P1_0
// #define YELLOW_LIGHT P1_1
// #define GREEN_LIGHT P1_2

sbit RED_LIGHT P1^0;
sbit YELLOW_LIGHT P1^1;
sbit GREEN_DELAY p1^2;

// Time delays for lights in milliseconds
#define RED_DELAY 5000      // 5 seconds
#define YELLOW_DELAY 2000   // 2 seconds
#define GREEN_DELAY 5000    // 5 seconds

// Function prototypes
void Timer0_Init();
void delay_ms(unsigned int ms);

// Main function
void main() {
    // Initialize Timer 0
    Timer0_Init();

    // Infinite loop to cycle traffic lights
    while (1) {
        // Turn on RED light
        RED_LIGHT = 1;
        YELLOW_LIGHT = 0;
        GREEN_LIGHT = 0;
        delay_ms(RED_DELAY); // Wait for the RED_DELAY

        // Turn on GREEN light
        RED_LIGHT = 0;
        YELLOW_LIGHT = 0;
        GREEN_LIGHT = 1;
        delay_ms(GREEN_DELAY); // Wait for the GREEN_DELAY

        // Turn on YELLOW light
        RED_LIGHT = 0;
        YELLOW_LIGHT = 1;
        GREEN_LIGHT = 0;
        delay_ms(YELLOW_DELAY); // Wait for the YELLOW_DELAY
    }
}

// Timer 0 Initialization for SEOS
void Timer0_Init() {
    TMOD = 0x01; // Timer 0 in mode 1 (16-bit timer)
    TH0 = 0xFC;  // Load initial value for 1 ms delay
    TL0 = 0x66;  // Load initial value for 1 ms delay
    TR0 = 1;     // Start Timer 0
}

// Delay function (software-based using Timer 0)
void delay_ms(unsigned int ms) {
    unsigned int i;
    for (i = 0; i < ms; i++) {
        while (!TF0); // Wait until Timer 0 overflow
        TF0 = 0;      // Clear Timer 0 overflow flag
        TH0 = 0xFC;   // Reload initial value for 1 ms delay
        TL0 = 0x66;
        TR0 = 1;      // Start Timer 0
    }
}
