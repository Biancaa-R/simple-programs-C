/*6. Take input of age of 3 people by user and determine oldest and youngest among them.*/

#include<stdio.h>
int main(){
    int age1,age2,age3;
    int max,min;
    printf("Enter the age of the first person");
    scanf("%d",&age1);
    printf("Enter the age of the second person");
    scanf("%d",&age2);
    printf("Enter the age of the third person");
    scanf("%d",&age3);    

    //assuming age 1 is max;
    max=age1;
    if (age2>age1){
        max=age2;
    }
    if (age3>max){
        max=age3;
    }
    //assuming age1 is min
    min=age1;
    if (age2<age1){
        min=age2;
    }
    if (age3<min){
        min=age3;
    }

    if (max==age1){
        printf("The first person is the oldest %d",age1);
    }
    if (max==age2){
        printf("The second person is the oldest %d",age2);
    }
    if (max==age3){
        printf("The third person is the oldest %d",age3);
    }   
    if (min==age1){
        printf("The first person is the youngest %d",age1);
    }
    if (min==age2){
        printf("The second person is the youngest %d",age2);
    }
    if (min==age3){
        printf("The third person is the youngest %d",age3);
    }

    return 0;

}
