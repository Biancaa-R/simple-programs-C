#include <stdio.h>
#include <string.h>

#define MAX_BUSES 5
#define MAX_SEATS 40
#define MAX_BOOKINGS 50

// Structure to store Bus details
typedef struct {
    int bus_number;
    char source[20];
    char destination[20];
    char departure[10];
    char arrival[10];
    float price_per_km;
    int total_seats;
    int available_seats;
} Bus;

// Structure to store Passenger details
typedef struct {
    char name[30];
    int age;
    int seat_number;
    int bus_number;
    float ticket_cost;
} Booking;

// Global arrays for buses and bookings
Bus buses[MAX_BUSES] = {
    {101, "Chennai", "Bangalore", "06:00", "12:00", 2.5, MAX_SEATS, MAX_SEATS},
    {102, "Bangalore", "Hyderabad", "09:00", "18:00", 3.0, MAX_SEATS, MAX_SEATS},
    {103, "Hyderabad", "Pune", "07:00", "15:00", 2.8, MAX_SEATS, MAX_SEATS},
    {104, "Delhi", "Jaipur", "10:00", "14:00", 2.0, MAX_SEATS, MAX_SEATS},
    {105, "Mumbai", "Goa", "23:00", "07:00", 3.2, MAX_SEATS, MAX_SEATS}
};
Booking bookings[MAX_BOOKINGS];
int booking_count = 0;

// Function to display all buses
void display_buses() {
    printf("\nAvailable Buses:\n");
    printf("Bus No | Source     | Destination | Departure | Arrival  | Price/km | Seats Available\n");
    printf("-----------------------------------------------------------------------------\n");
    for (int i = 0; i < MAX_BUSES; i++) {
        printf("%6d | %-10s | %-11s | %-9s | %-7s | %.2f    | %2d\n",
               buses[i].bus_number, buses[i].source, buses[i].destination,
               buses[i].departure, buses[i].arrival, buses[i].price_per_km,
               buses[i].available_seats);
    }
}

// Function to book a ticket
void book_ticket() {
    int bus_number, seat_number;
    char name[30];
    int age;

    display_buses();
    printf("\nEnter Bus Number to book: ");
    scanf("%d", &bus_number);

    // Find the bus
    int bus_index = -1;
    for (int i = 0; i < MAX_BUSES; i++) {
        if (buses[i].bus_number == bus_number) {
            bus_index = i;
            break;
        }
    }
    if (bus_index == -1) {
        printf("Invalid Bus Number!\n");
        return;
    }
    if (buses[bus_index].available_seats == 0) {
        printf("Sorry, no seats available for this bus.\n");
        return;
    }

    // Enter passenger details
    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Passenger Age: ");
    scanf("%d", &age);

    // Assign seat
    seat_number = buses[bus_index].total_seats - buses[bus_index].available_seats + 1;
    buses[bus_index].available_seats--;

    // Calculate ticket cost (assuming 200 km distance)
    float ticket_cost = buses[bus_index].price_per_km * 200;

    // Store booking
    bookings[booking_count++] = (Booking){.bus_number = bus_number, .seat_number = seat_number, .age = age, .ticket_cost = ticket_cost};
    strcpy(bookings[booking_count - 1].name, name);

    printf("\nBooking Successful!\n");
    printf("Passenger: %s | Age: %d | Seat: %d | Bus: %d | Cost: ₹%.2f\n", name, age, seat_number, bus_number, ticket_cost);
}

// Function to view bookings
void view_bookings() {
    if (booking_count == 0) {
        printf("\nNo bookings found.\n");
        return;
    }

    printf("\nCurrent Bookings:\n");
    printf("Name           | Age | Seat No | Bus No | Ticket Cost\n");
    printf("-----------------------------------------------------\n");
    for (int i = 0; i < booking_count; i++) {
        printf("%-14s | %3d | %7d | %6d | ₹%.2f\n",
               bookings[i].name, bookings[i].age, bookings[i].seat_number,
               bookings[i].bus_number, bookings[i].ticket_cost);
    }
}

// Function to cancel a booking
void cancel_booking() {
    char name[30];
    printf("\nEnter Passenger Name to Cancel Booking: ");
    scanf(" %[^\n]", name);

    int found = -1;
    for (int i = 0; i < booking_count; i++) {
        if (strcmp(bookings[i].name, name) == 0) {
            found = i;
            break;
        }
    }
    if (found == -1) {
        printf("Booking not found!\n");
        return;
    }

    // Increase seat availability
    for (int i = 0; i < MAX_BUSES; i++) {
        if (buses[i].bus_number == bookings[found].bus_number) {
            buses[i].available_seats++;
            break;
        }
    }

    // Shift bookings array to remove the canceled booking
    for (int i = found; i < booking_count - 1; i++) {
        bookings[i] = bookings[i + 1];
    }
    booking_count--;

    printf("Booking canceled successfully.\n");
}

// Main menu function
void menu() {
    int choice;
    while (1) {
        printf("\n===== Bus Ticket Booking System =====\n");
        printf("1. View Buses\n");
        printf("2. Book Ticket\n");
        printf("3. View Bookings\n");
        printf("4. Cancel Booking\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: display_buses(); break;
            case 2: book_ticket(); break;
            case 3: view_bookings(); break;
            case 4: cancel_booking(); break;
            case 5: printf("Exiting...\n"); return;
            default: printf("Invalid choice! Please enter a valid option.\n");
        }
    }
}

int main() {
    menu();
    return 0;
} 