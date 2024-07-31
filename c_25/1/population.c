# include <stdio.h>
# include<conio.h>
# include <stdlib.h>

int main()
{
    int num;
    printf("Enter the length of the array");
    scanf("%d",&num);
    float* arr1 = malloc(sizeof(float) * num);
    float sum,avg;
    for (int i=0;i<num;i++){
        printf("Enter the height of %d \t",i+1);
        scanf("%f",&arr1[i]);
        printf("\n");
        sum+=arr1[i];
    }

    avg=sum/num;
    for (int i=0;i<num;i++){
        if (arr1[i]>avg){
            printf("person %d is above the average height of %f \n ",i+1,avg);
        }
        else if (arr1[i]<avg){
            printf("person %d is below the average height of %f \n",i+1,avg);
        }
        else{
            printf("person %d has the average height of %f \n",i+1,avg);
        }
    }


}