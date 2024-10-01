#include <reg51.h>

sbit buzzer = P2^0;  // Declare P1.7 as the buzzer pin
void delay (unsigned int);
void main(void)
{
    buzzer = 0;  // Set P1.7 to low (output low)
    
    while (1)
    {
        buzzer = 1;  // Set P1.7 high (turn on buzzer)
        // Delay function to keep the buzzer on for some time
        delay(500);  
        buzzer = 0;  // Set P1.7 low (turn off buzzer)
        // Delay function to keep the buzzer off for some time
        delay(500);
    }
}

void delay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 120; j++);  // Simple delay loop
}
