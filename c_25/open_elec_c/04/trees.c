/*2. You are tasked with managing a garden that contains three types of trees. Each type of
tree has specific water requirements as follows:
Type 1 Trees: Each tree requires 30 liters of water per day
Type 2 Trees: Each tree requires 20 liters of water per day
Type 3 Trees: Each tree requires 50 liters of water per day
Define a function that takes the tree type and number of trees to be planted as input and
returns the amount of water required. Write a C program that performs the following:
1. Prompt the user to input the number of Type 1, Type 2, and Type 3 trees they have
planted in the garden.
2. Ask the user to input the total amount of water (in liters) available for the trees. 3.
Calculate the total water required to care for all the trees based on the number of each
type.
4. Check if the available water is sufficient to meet the needs of all the trees. 5. If not
sufficient, inform the user how much more water is needed to care for all the trees.
*/
#include<stdio.h>

int calculate_water(int type, int count) {
    if (type == 1) return count * 30;
    if (type == 2) return count * 20;
    if (type == 3) return count * 50;
    return 0;
}

int main() {
    int t1, t2, t3, available_water;
    printf("Enter number of Type 1, Type 2, and Type 3 trees: ");
    scanf("%d %d %d", &t1, &t2, &t3);
    printf("Enter available water in liters: ");
    scanf("%d", &available_water);
    int total_water = calculate_water(1, t1) + calculate_water(2, t2) + calculate_water(3, t3);
    if (available_water >= total_water)
        printf("Water is sufficient. Total required: %dL\n", total_water);
    else 
        printf("Insufficient water. Need %dL more.\n", total_water - available_water);
    return 0;
}
