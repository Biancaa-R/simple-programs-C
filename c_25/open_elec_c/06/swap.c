//5. Program to swap the largest and the smallest element in the array.
#include<stdio.h>
int main()
{
    printf("Enter the size of the array");
    int num;
    scanf("%d",&num);
    int* arr1= (int*) malloc(sizeof(int)*num);
    for(int i=0;i<num;i++){
        printf("Enter the element\n");
        scanf("%d",&arr1[i]);
    }
    int *ptr1=arr1;
    int *ptr2=arr1;
    for(int i=0;i<num;i++){
        if(arr1[i]>*ptr1){
            ptr1=&arr1[i];
        }
        if(arr1[i]<*ptr2){
            ptr2=&arr1[i];
        }
    }
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    //values interchanged
}
