//ascending order:
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h> //it works only if we include this

int main(){
    int len,temp;
    bool swap;
    printf("Enter the length of the array");
    scanf("%d",& len);
    int* arr1= malloc(sizeof(int)*len);
    for(int i=0;i<len;i++){
        printf("enter the %d th element",i);
        scanf("%d",& arr1[i]);
    }
    //bubble sort
    for(int i=0;i<len;i++){
        swap=false;
        for(int j=0;j<len-i-1;j++){
            //same thing as asc just replace the greater than sign
            if (arr1[j]<arr1[j+1]){
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
                swap=true;
            }
        }if (swap=false){
            break;
        }
    }
    for(int i=0;i<len;i++){
        printf("%d \n",arr1[i]);
    }
}