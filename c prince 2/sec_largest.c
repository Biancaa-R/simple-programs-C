//second largest or n largest using bubble sort
# include<stdio.h>
# include<stdlib.h>
# include<stdbool.h>

int main(){
    int len;
    bool swap=true;
    printf("Enter the length of the array");
    scanf("%d",&len);
    int *arr1= malloc(sizeof(int)*len);

    for(int i=0;i<len;i++){
        printf("Enter the %d th element ",i);
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i<len;i++){
        swap=false;
        for(int j=0;j<len-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp= arr1[j+1];
                arr1[j+1]=arr1[j];
                arr1[j]=temp;
                swap=true;
            }
            
        }
        if(swap==false){
            break;
        }
    }

    //so the array is sorted now:
    int num;
    printf("Enter which largest term you want to find?");
    scanf("%d",&num);
    if (num>len){
        printf("Invalid response");
    }
    else{
        printf("The %d largest number is %d",num,arr1[num-1]);
    }
}