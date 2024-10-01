#include <reg51.h>

sbit sensor = P1^1;  // Sensor connected to P1.1
sbit buzzer = P2^0;  // Buzzer connected to P1.7

void delay(unsigned int);

void main(void)
{
    buzzer = 0;  // Initialize buzzer as off
    sensor = 1;  // Initialize sensor (assume active-low sensor)

    while (1)
    {
        // Check if the sensor is triggered (active-low logic)
        if (sensor == 0)  // If sensor is active
        {
            buzzer = 1;  // Turn on the buzzer
            delay(500);  // Keep the buzzer on for some time
            buzzer = 0;  // Turn off the buzzer
            delay(100);  // Debounce delay or delay before checking again
        }
    }
}

void delay(unsigned int time)
{
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 120; j++);  // Simple delay loop
}
