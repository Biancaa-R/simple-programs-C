#include <stdio.h>

int main() {
    const long BYTES_PER_SECOND = 960;

    long file_size_bytes;
    long time_seconds;
    double time_minutes, time_hours, time_days;
    
    // Input: File size in bytes
    printf("Enter the file size in bytes: ");
    scanf("%d", &file_size_bytes);
    
    // Process: Calculate time required in seconds
    time_seconds = file_size_bytes / BYTES_PER_SECOND;
    
    time_minutes = time_seconds / 60.0;
    time_hours = time_minutes / 60.0;
    time_days = time_hours / 24.0;
    
    printf("Time required to send the file:\n");
    printf("Seconds: %ld\n", time_seconds);
    printf("Minutes: %.2f\n", time_minutes);
    printf("Hours: %.2f\n", time_hours);
    printf("Days: %.2f\n", time_days);
    
    return 0;
}
