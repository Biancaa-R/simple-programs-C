#include <stdio.h>
int* findMid(int arr[],int len){
    int* x;
    x=arr;
    //it points to the first element
    if (len%2==0){
        *x= arr[(len+1)/2];
        return x;
    }
    else *x=arr[len/2];
    return x;
}

int main()
{
    int a[] ={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int *mid =findMid(a,n);
    printf("%d",*mid);
    return 0;
}