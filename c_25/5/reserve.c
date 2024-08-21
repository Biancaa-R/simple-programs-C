// •	Design an airline reservation data structure that contains the following data:
// o	Flight number
// o	Originating airport code (three characters)
// o	Destination airport code (three characters)
// o	Starting time
// o	Arrival time

# include <stdio.h>
# include<conio.h>

struct airline{
    int flight_num;
    char orig_code[3];
    char dest_code[3];
    float start_time;
    float arrival_time;
    int num_seats;
    int seats_taken;
};

void create_flight( struct airline* a){
    printf("Enter the flight number");
    scanf("%d",&a->flight_num);
    printf("Enter the original code");
    scanf("%c",a->orig_code);
    printf("enter thr destination code");
    scanf("%c",&a->dest_code);
    printf("Enter the start time");
    scanf("%f",&a->start_time);
    printf("Enter the arrival time");
    scanf("%f",&a->arrival_time);
    printf("Enter the number of available seats");
    scanf("%d",&a->num_seats);
}
void reserve_spot(struct airline* a){
    if (a->num_seats>a->seats_taken)
    {
        printf("There are seats available for boarding");
        a->seats_taken+=1;
    }
    else{
        printf("The flight is already full");
    }
}

void cancel_reserve(struct airline* a){
    if (a->seats_taken>0){
        a->seats_taken-=1;
        printf("The ticket is cancelled successfully");
    }
    else{
        printf("There were no seats booked in the first place");
    }
}
int main()
{
    struct airline a1;
    create_flight(&a1);
    while(1){
        int choice;
        printf("Enter choice 1. reserve 2. cancel 3.quit");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                reserve(&a1);
                break;
            case 2:
                cancel_reserve(&a1);
                break;
            default:
                return 0;
                break;

        }
    }

}

