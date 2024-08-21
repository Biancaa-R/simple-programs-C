//•	Write a program that takes a series of numbers and counts the number of positive and negative values.
# include <stdio.h>
int main()
{
    int num;
    int pos=0,neg=0;
    printf("Enter the length of series");
    scanf("%d",&num);
    int* array1= malloc(sizeof(int)*num);
    for (int i=0;i<num;i++)
    {
        printf("Enter the %d term",i+1);
        scanf("%d",&array1[i]);
    }
    //after the array is created;
    for(int i=0;i<num;i++){
        if (array1[i]>0)
        {
            pos+=1;
        }
        else if(array1[i]<0){
            neg+=1;
        }
    }
    printf("There are %d positive numbers",pos);
    printf("There are %d negative numbers",neg);
}