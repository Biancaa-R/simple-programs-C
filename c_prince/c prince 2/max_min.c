# include <stdio.h>
# include<stdlib.h>
//largest and smallest element in an array:
int main(){
    int max;
    int min;
    int len;
    printf("Enter the length of the array");
    scanf("%d",&len);
    int* arr1 = malloc(sizeof(int)*len);
    for (int i=0;i<len;i++){
        printf("Enter the %d th element",i);
        scanf("%d",& arr1[i]);
    }
    //setting the first element as max
    max=arr1[0];
    for(int i=0;i<len;i++){
        if (arr1[i]>max){
            max=arr1[i];
        }
    }
    printf("The maximum value is %d \n",max);

    //setting the first element as min;
    min=arr1[0];
    for(int i=0;i<len;i++){
        if (arr1[i]<min){
            min=arr1[i];
        }
    }
    printf("The minimum value is %d \n",min);
}