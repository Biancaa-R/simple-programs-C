/*Implement a C program that performs basic operations on an array using pointers. The program should include the following functionalities. Ensure that the program provides a menu-driven interface, allowing the user to choose the operation they want to perform.  
a.	Display from left to right: Display the elements of the array in order.  
b.	Display from right to left: Display the array elements in reverse order. 
c.	Reverse the array elements in place using two pointer variables. 
*/
#include <stdio.h>
int main()
{
    int *ptr;
    printf("Enter the size of the array\n");
    int num;
    scanf("%d",&num);
    int *arr1 =(int*)malloc(num*sizeof(int));
    for(int i=0;i<num;i++){
        scanf("%d",&arr1[i]);
    }
    ptr=arr1;
    for(int* ptr=arr1;ptr<=&arr1[num-1];ptr++){
        printf("%d\t ",*ptr);
    }
    printf("\n");
    for(int* ptr=&arr1[num-1];ptr>=arr1;ptr--){
        printf("%d\t",*ptr);
    }
    int *ptr1;
    for(int i=0;i<num;i++){
        ptr= arr1[0+i];
        ptr1=arr1[num-1-i];
        int temp=*ptr;
        *ptr=*ptr1;
        *ptr1=temp;
        //value is exchanged
    }
}