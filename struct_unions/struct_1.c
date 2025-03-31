#include <stdio.h>
/* 
 Structures are a user defined data type that can be used 
 to group elements of different types into a single type. */

struct
{
    char *engine;
    char *fuel_type;
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
} car1, car2;  // obs: the struct, car1 and car2 are in the global scope. 

int main(int argc, char const *argv[])
{
    car1.engine = "DDis 190 Massacration";
    car2.engine = "1.2 L Kappa Delta";
    printf("%s\n", car1.engine);
    printf("%s\n", car2.engine);

    return 0;
}