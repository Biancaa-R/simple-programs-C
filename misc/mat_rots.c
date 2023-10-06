# include<stdio.h>
# include<stdlib.h>
int row,col;

void rotate(int row,int col,int matrice[]){
    //creating a duplicate:
    int *dup=malloc(sizeof(int)*row*col);
    for(int i=0;i<row*col;i++){
        dup[i]=matrice[i];
    }

    /*for(int x : int dup[]){
        printf("%d",x);
    }*/
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if (i==0){
                //if(i*col+j+1<=i*col+col-1){
                if(j+1<col){
                    matrice[(i*col+j+1)]=dup[i*col+j];
                }
            }
            if(j==col-1){
                //if ((i+1)*col+col-1<=i*col+row-1){
                if(i+1<row){
                    matrice[i*col+(col-1)]=dup[(i+1)*col+col-1];
                }
            }
            if (i==row-1){
                if(j!=0){
                    matrice[i*col+j]=dup[i*col+j-1];
                }
            }
            if(j==0){
                if(i-1>=0){
                    matrice[i*col+j]=dup[(i-1)*col+j];
                }
            }        
        }
    }
    //after rotation printing:
    for (int i=0;i<row;i++){
        printf("[");
        for(int j=0;j<col;j++){
            printf("%d",matrice[i*col+j]);
        }
        printf("]\n");
    }
}

int main(){
    
    printf("Enter the rows of the matrice");
    scanf("%d",&row);
    printf("Enter the columns of the matrice");
    scanf("%d",&col);
    //inputting the matrice

    int *matrice=malloc(sizeof(int)*row*col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the element [%d][%d]",i,j);
            scanf("%d",&matrice[i*col+j]);
        }
        printf("one row completed");
    }
    rotate(row,col,matrice);
}