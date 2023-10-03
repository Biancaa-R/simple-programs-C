//displaying a 2 dimentional array;
#include <stdio.h>
#include<stdlib.h>

int main(){
    int row,col;
    printf("Enter the rows of the matrice");
    scanf("%d",&row);
    printf("Enter the columns of the matrice");
    scanf("%d",&col);
    //int* arr1=malloc(sizeof(int)*(row*col)); doesnt work
    int arr1[row][col];

//inputing the matrice:
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("Enter the element [%d][%d]",i,j);
        scanf("%d",&arr1[i][j]);
    }
}

for (int i=0;i<row;i++){
    printf("[");
    for(int j=0;j<col;j++){
        printf("%d",arr1[i][j]);
        if(j==col-1){
            //nothing
        }
        else{
            printf(",");
        }
    }
    printf("]\n");
}

}