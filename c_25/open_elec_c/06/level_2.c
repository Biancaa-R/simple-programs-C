/*1. You are tasked with analysing the sales data for a store. The sales data is organized in a
2D array where:
∙ Each row represents the sales data for a particular day.
∙ Each column represents sales in a specific product category.
Write a C program that accepts a 2-D array of size RxC, where there are R days and C
product categories and calculates:
∙ The total sales for each day
∙ The total sales for each product category
(Bonus marks (+2) if you can display the output in a neat tabular format. Use your own
creativity)*/
#include <stdio.h> 
#include<stdlib.h>
int main()
{
    printf("Enter The total number of days\n");
    int num_days;
    scanf("%d",&num_days);
    int category;
    scanf("%d",&category);
    int * arr1=(int*)malloc(num_days*sizeof(int));
    int* arr2=(int*)malloc(category*sizeof(int));
    //int array1[] = malloc (sizeof(int)*num_days*category);
    int **arr = (int **)malloc(num_days * sizeof(int *));
    for (int i =0;i<num_days;i++){
        arr[i] =(int*)malloc (category* sizeof(int) );
    }
    int sum1,sum2=0;
    for (int i=0;i<num_days;i++){
        sum1=0;
        for(int j=0;j<category;j++){
            scanf("%d",&arr[i][j]);
            sum1+=arr[i][j];
        }
        arr1[i]=sum1;
        //sum1=0;
    }
    for (int j=0;j<category;j++){
        sum2=0;
        for(int i=0;i<num_days;i++){
            sum2+=arr[i][j];
        }
        arr2[j]=sum2;
        sum2=0;
    }
    for(int i=0;i<num_days;i++){
        printf("%d \t",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<category;i++){
        printf("%d \t",arr2[i]);
    }
}