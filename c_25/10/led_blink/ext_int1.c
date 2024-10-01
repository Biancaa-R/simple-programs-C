#include <reg51.h>

sbit SW = P1^7;
sbit LED = P1^0;
sbit WAVE = P2^5;

void timer0(void) interrupt 1 {
    WAVE = ~WAVE;  // Toggle P2.5
}

void main() {
    SW = 1;   // Set P1.7 as input
    LED = 0;  // Set P1.0 as output
    WAVE = 0; // Set P2.5 as output

    TMOD = 0x02;   // Timer 0 in mode 2 (8-bit auto-reload)
    TH0 = 0x19;    // Reload value for ~250us
	//Im setting for 23 A4
    IE = 0x82;     

    TR0 = 1;       

    while (1) {
        LED = SW;  // Continuously copy the value of P1.7 to P1.0
    }
}
