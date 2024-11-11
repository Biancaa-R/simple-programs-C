#include <stdio.h>
#include <unistd.h>  // For sleep function


void redLight();
void yellowLight();
void greenLight();

int main() {
    while (1) {
        redLight();    
        yellowLight(); 
        greenLight();   
    }
    return 0;
}

// Function to simulate Red light
void redLight() {
    printf("RED light ON: STOP\n");
    sleep(5);  // Red light for 5 seconds
    printf("RED light OFF\n\n");
}

void yellowLight() {
    printf("YELLOW light ON: GET READY\n");
    sleep(2);  // Yellow light for 2 seconds
    printf("YELLOW light OFF\n\n");
}

// Function to simulate Green light
void greenLight() {
    printf("GREEN light ON: GO\n");
    sleep(5);  // Green light for 5 seconds
    printf("GREEN light OFF\n\n");
}
