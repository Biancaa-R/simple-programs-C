//second largest number;
# include<stdio.h>
# include<stdlib.h>
//by removing the largest num

int main(){
    int len;
    printf("Enter the length of the array");
    scanf("%d",&len);
    int *array1=malloc(sizeof(int)*len);

    for(int i=0;i<len;i++){
        printf("Enter the %d th element",i);
        scanf("%d",&array1[i]);
    }
    int max= array1[0];
    int sec_max;
    //randomly allocating the first one
    for (int i=0;i<len;i++){
        if(max<array1[i]){
            sec_max=max;
            max=array1[i];
        
        }
    }
    printf("The second largest value is %d",sec_max);
}