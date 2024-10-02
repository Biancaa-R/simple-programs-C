#include <reg51.h>

sbit SW = P1^7;
sbit LED = P1^0;
sbit WAVE = P2^5;
sbit LED2=P1^1;
int count=1;

void ext_int (void) interrupt 0{
	LED2= ~LED2;
}
void timer0(void) interrupt 1 {
    count+=1;
		if(count%400==0)
			//100ms 
		{ WAVE = ~WAVE;  // Toggle P2.5
		}
}

void main() {
    SW = 1;   // Set P1.7 as input
    LED = 0;  // Set P1.0 as output
    WAVE = 0; // Set P2.5 as output
		LED2=0;

    TMOD = 0x02;   // Timer 0 in mode 2 (8-bit auto-reload)
    TH0 = 0x00;
	//Im setting for 23 A4
    IE = 0x83;     

    TR0 = 1;    
		IT0=1;

    while (1) {
        LED = SW;  // Continuously copy the value of P1.7 to P1.0
    }
		
		//INT0 (External Interrupt 0) is triggered by pin P3.2.
		//INT1 (External Interrupt 1) is triggered by pin P3.3.
		//TCON: TF1 TR1 TF0 TR0 IE1 IT1 IE0 IT0
		/*
		
	Interrupt Source	Vector Number	Priority	Address
	External Interrupt 0	0	Highest	0003H
	Timer 0 Overflow	1		000BH
	External Interrupt 1	2		0013H
	Timer 1 Overflow	3		001BH
	Serial Port (UART)	4	Lowest	0023H */

}
