#include <stdio.h>
#include <stdint.h>
#define X 5
//to define it as macro we define it in caps
#define MAX(y) X*y*y
int main()
{
    printf("%d",MAX(1+1));
    //op is 7 when  I give 1+1
    //different from run time assignment
}