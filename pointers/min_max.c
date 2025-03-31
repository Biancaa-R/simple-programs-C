#include <stdio.h>
void minMax(int arr[],int len,int *min, int *max){
    *min=*max=arr[0];
    int i;
    for(i=0;i<len;i++){
        if (arr[i]>*max){
            *max=arr[i];
        }
        if(arr[i]<*min){
            *min=arr[i];
        }
    }
}
int main()
{
    int a[]={23,4,21,98,987,45,32,10,123,986,50,3};
    int min,max;
    int len= sizeof(a)/sizeof(a[0]);
    minMax(a,len,&min,&max);
    printf("Minimum vaue in the array is %d maximum value in the array is %d",min,max);
    return 0;
}