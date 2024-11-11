# Different Types of Parameters
def set_pin_value(pin, value):
    print(f"Setting pin {pin} to {value}")

set_pin_value(13, 1)

def configure_timer(timer=0, mode="normal"):
    print(f"Configuring Timer {timer} in {mode} mode")

configure_timer()
configure_timer(1, "PWM")

def control_led(red, green, blue):
    print(f"Red: {red}, Green: {green}, Blue: {blue}")

control_led(blue=255, red=128, green=64)

def log_sensor_readings(sensor_id, *readings):
    print(f"Sensor ID: {sensor_id}")
    for reading in readings:
        print(f"Reading: {reading}")

log_sensor_readings(101, 23.4, 25.6, 22.8)

# Returning Multiple Values
def get_sensor_status():
    temperature = 25.4
    humidity = 60
    status = "OK"
    return temperature, humidity, status

temp, hum, stat = get_sensor_status()
print(f"Temperature: {temp}°C, Humidity: {hum}%, Status: {stat}")

# Local and Global Variables
system_status = "Initializing"

def update_status():
    system_status = "Active"
    print(f"Inside function: {system_status}")

update_status()
print(f"Outside function: {system_status}")

# Lambda Function
adc_to_voltage = lambda adc_value: (adc_value / 1023.0) * 5.0

adc_value = 512
voltage = adc_to_voltage(adc_value)
print(f"ADC Value: {adc_value}, Voltage: {voltage:.2f}V")
