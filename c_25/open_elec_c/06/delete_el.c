/*4. Write a program to delete an element from the array. Ask the user to enter the array and the
position of the element to be deleted.
Test case:
Enter number of elements in the array: 5
Input array: 10 20 30 40 50
Enter the position of the element you want to delete: 3
Output array: 10 20 30 50
*/
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
    int pos;
    printf("Enter the position  to delete the array elemnet\n");
    if (pos==num-1){
        arr1[pos]=0;
    }
    else{
        arr1[pos]=0;
        for(int i=pos;i<num;i++){
            arr1[i]=arr1[i+1];
        }
        arr1[num-1]=0;
    }
}