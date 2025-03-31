#include<stdio.h>
#include<string.h>
//void display_result(struct car* c1);
typedef struct car {
    char engine[50];
    char fuel_type[50];
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
}car;

void display_result( car* c1){
    printf("The car engine type is %s\n",c1->engine);
    printf("The car fuel capacity is %d\n",c1->fuel_tank_cap);
    printf("The car fuel type is %s\n",c1->fuel_type);
    printf("The seating capcity of the car is %d\n",c1->seating_cap);
    printf("The mileage of the car is %f\n",c1->city_mileage);
}
int main()
{
    car c1;
    //c1.engine="Electric";
    strcpy(c1.engine,"Electric");
    c1.fuel_tank_cap=40;
    //c1.fuel_type="petrol";
    strcpy(c1.fuel_type,"petrol");
    c1.seating_cap=6;
    c1.city_mileage=150;
    display_result(&c1);

    car c2 ={"combustion","disel",50,4,130};
    display_result(&c2);
}