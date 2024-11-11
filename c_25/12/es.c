#include <reg51.h>

sbit LED = P1^0;    // LED connected to pin P1.0
sbit SENSOR = P1^1; // Sensor input connected to pin P1.1

// Global variable
unsigned char system_status = 0;

// Function to set pin value
void set_pin_value(bit value) {
    LED = value; // Set LED based on the value
}

// Function to configure a timer (dummy setup)
void configure_timer() {
    // Timer setup with dummy values
    TMOD = 0x01; // Timer 0, Mode 1 (16-bit timer mode)
    TH0 = 0xFC;  // Load timer high byte (for delay simulation)
    TL0 = 0x66;  // Load timer low byte (for delay simulation)
    TR0 = 1;     // Start Timer 0
}

// Function to simulate controlling an RGB LED with dummy values
void control_led(unsigned char red, unsigned char green, unsigned char blue) {
    // Simulate setting RGB values (dummy behavior)
    // Example: Just toggle the LED to simulate control
    LED = ~LED; // Toggle LED for simulation
}

// Function to log sensor readings (using dummy values)
void log_sensor_readings(unsigned char sensor_id, unsigned int reading) {
    // Simulate logging sensor data (dummy behavior)
    // Example: Use LED toggle to indicate data logging
    LED = ~LED; // Toggle LED for simulation
}

// Function to return multiple values using pointers (dummy values)
void get_sensor_status(unsigned int *temperature, unsigned int *humidity) {
    *temperature = 25; // Dummy temperature value
    *humidity = 60;    // Dummy humidity value
}

// Function to demonstrate local and global variables
void update_status() {
    unsigned char local_status = 1; // Local variable
    system_status = local_status;   // Update global variable
}

// Function to simulate ADC value to voltage conversion (using dummy values)
float adc_to_voltage(unsigned int adc_value) {
    return (adc_value / 1023.0) * 5.0; // Dummy conversion
}

// Main function
void main() {
    unsigned int temp, hum;
    float voltage;
    unsigned int adc_value = 512; // Dummy ADC value

    // Set initial LED state
    set_pin_value(1); // Turn on LED
    configure_timer(); // Configure Timer 0 with dummy values

    // Simulate RGB LED control
    control_led(255, 128, 64);

    // Simulate logging sensor reading
    log_sensor_readings(101, 250);

    // Get dummy sensor status
    get_sensor_status(&temp, &hum);

    // Update system status
    update_status();

    // Calculate voltage from dummy ADC value
    voltage = adc_to_voltage(adc_value);

    while (1) {
        // Main loop - Keep the program running
        // Use LED toggle to show activity
        LED = ~LED; // Toggle LED in a loop for simulation
    }
}
