#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main()
{
    int arr1[]={3,4};
    int arr2[]={1,2};
    memcpy(arr1,arr2,2*sizeof(int));
    //coppying the result to first array
    printf("%d %d",arr1[0],arr1[1]);
    return 0;
}