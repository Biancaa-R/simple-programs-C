//2. Take values of length and breadth of a rectangle from user and check if it is square or not.
#include<stdio.h>
int main(){
    float length,breath;
    printf("Enter the length of the rectangle");
    scanf("%f",&length);
    printf("Enter the breath of the rectangle");
    scanf("%f",&breath);
    if (length==breath){
        printf("As the length equals breath it is a square");
    }
    else{
        printf("It is not a square");
    }
    return 0;
}