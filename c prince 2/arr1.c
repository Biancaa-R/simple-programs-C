// arrays 1 positionwise input;
# include <stdio.h>
int main(){
    int array1 [5];
    array1[0]=12;
    array1[1]=15;
    array1[2]=25;
    array1[3]=45;
    array1[4]=65;
    for(int i=0;i<5;i++){
        printf("%d \t",array1[i]);
    }
    printf("\n");

    //array 2 continuous input
    int array2[5]={1,2,3,4,5};
    for (int i=0;i<5;i++){
        printf("%d \t",array2[i]);
    }
    return 0;
}