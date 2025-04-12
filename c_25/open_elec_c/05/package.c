/*2. A courier is delivering packages along a series of connected towns, and the number of
packages he delivers in each town follows a specific pattern:
● In the first town, he delivers 1 package.
● In the second town, he delivers 2 packages.
● Starting from the third town, the number of packages delivered in each town is the
sum of twice the packages delivered previous town and the packages delivered in the
town before that.
Write a recursive function to take the town number ‘n’ and return the number of packages
delivered in that town.
Test Case 1:
Input: n = 1
Expected Output: Packages delivered in town 1: 1
Test Case 2:
Input: n = 2
Expected Output: Packages delivered in town 2: 2*/

#include <stdio.h>

int package(int num){
    if (num==0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    if(num==2){
        return 2;
    }
    if(num>2){
        return package(num-1)*2+package(num-2)*2;
    }
}
int main()
{
    printf("Enter the value of number num\n");
    int num;
    scanf("%d",&num);
    num=package(num);
    printf("The packages delivered are %d\n",num);
}