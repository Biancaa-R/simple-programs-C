//average of elements in array
# include<stdio.h>
# include<stdlib.h>

int main(){
    int len;
    printf("Enter the size of the array");
    scanf("%d",& len);
    int *arr1 = malloc(sizeof(int)*len);
    for(int i=0;i<len;i++){
        printf("Enter the %d th element of the array",i);
        scanf("%d",&arr1[i]);
    }
    int sum;
    sum=0;
    for(int i=0;i<len;i++){
        sum+=arr1[i];
        printf("%d \t",sum);
    }
    float avg=0.0;
    //Incase directly declaring avg as float gives avg as 0;
    avg=((float)sum/len);
    //avg= (float) avg;
    printf("The average of elements is the array is %d",avg);
}