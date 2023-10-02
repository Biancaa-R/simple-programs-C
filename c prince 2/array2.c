# include <stdio.h>
# include <stdlib.h>
int main(){
    int const num;
    printf("Enter the length of the array");
    scanf("%d",&num);
    //printf("%d",num);
    //int arr1 [num];
    int* arr1 = malloc(sizeof(int) * num);

    for (int i=0;i<num;i++){
        printf("Enter the %d th element ",i);
        scanf("%d",& arr1[i]);
    }

    //displaying the array;
    for(int i=0;i<num;i++){
        printf("The %d th element is %d \n",i,arr1[i]);
    }
    
}