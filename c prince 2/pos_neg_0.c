/*Take 10 integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0*/
# include <stdio.h>
# include <stdlib.h>

int main(){
    int len;
    int pos=0,neg=0,zero=0,odd=0,eve=0;
    printf("Enter the length of the array");
    scanf("%d",& len);
    int* array1= malloc(sizeof(int)*len);

    for(int i=0;i<len;i++){
        printf("Enter the %d th element",i);
        scanf("%d",& array1[i]);
    }

    for(int i=0;i<len;i++){
        if(array1[i]>0){
            pos+=1;
        }
        if(array1[i]<0){
            neg+=1;
        }
        if(array1[i]==0){
            zero+=1;
        }
        if(array1[i]%2==0){
            eve+=1;
        }
        if(array1[i]%2 !=0){
            odd+=1;
        }
    }
    printf("The positive numbers are %d \n",pos);
    printf("The negative numbers are %d \n",neg);
    printf("The zeros number are %d \n",zero);
    printf("The even numbers are %d \n",eve);
    printf("The odd numbers are %d \n ",odd);
}