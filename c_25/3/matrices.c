//•	Get two matrices of varying dimensions.  Check the dimensions satisfy the matrix multiplication criteria. Print the input matrices in matrix form. Implement a separate user defined function for multiplying matrices and this 
//function should have recursive call feature to get the results. Print the output matrix in matrix form

# include <stdio.h>
# include <conio.h>

int main()
{
    int row1;
    int col1;
    int row2;
    int col2;
    printf("Enter the num of rows of matrice 1 ");
    scanf("%d",&row1);
    printf("Enter the num of cols of matrice 1 ");
    scanf("%d",&col1);
    printf("Enter the num of rows of matrice 2 ");
    scanf("%d",&row2);
    printf("Enter the num of rows of matrice 2 ");
    scanf("%d",&col2);
     // Allocate memory for an array of pointers
    int **matrix1 = malloc(row1 * sizeof(int *));
    for (int i = 0; i < row1; i++) {
        // Allocate memory for each row
        matrix1[i] = malloc(col1 * sizeof(int));
    }
    //input the required values:
    for (int i=0;i<row1;i++){
        for (int j=0; j<col1;j++){
            printf("The %d value is ?", i+1);
            scanf("%d",&matrix1[i][j]);
    }
    }

    int **matrix2 = malloc(row2 * sizeof(int *));
    for (int i = 0; i < row2; i++) {
        // Allocate memory for each row
        matrix2[i] = malloc(col2 * sizeof(int));
    }
    //input the required values:
    for (int i=0;i<row2;i++){
        for (int j=0; j<col2;j++){
            printf("The %d value is ?", i+1);
            scanf("%d",&matrix2[i][j]);
    }
    }
    // Allocate memory for the result matrix
    int **result = malloc(row1 * sizeof(int *));
    for (int i = 0; i < row1; i++) {
        result[i] = malloc(col2 * sizeof(int));
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0; // Initialize the result matrix to 0
        }
    }


    for (int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++){
                result[i][j]+= matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    // Display matrix 1
    printf("\nMatrix 1:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }

    // Display matrix 2
    printf("\nMatrix 2:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }

    // Display the result matrix
    printf("\nResult Matrix \n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

}
