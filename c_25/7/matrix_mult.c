#include <stdio.h>
#include <time.h>

#define N 3  // Example size for square matrix (can be modified)

void multiplyMatrices(int (*A)[N], int (*B)[N], int (*C)[N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;  // Initialize the element
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void multiplyMatricesOptimized(int (*A)[N], int (*B)[N], int (*C)[N]) {
    int *ptrA, *ptrB, *ptrC;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ptrC = &C[i][j];
            *ptrC = 0;  // Initialize the element
            for (int k = 0; k < N; k++) {
                ptrA = &A[i][k];
                ptrB = &B[k][j];
                *ptrC += (*ptrA) * (*ptrB);
            }
        }
    }
}

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[N][N], B[N][N], C[N][N];
    
    // Initialize matrices A and B with some values
    printf("Enter matrix A (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter matrix B (%dx%d):\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Timing the regular matrix multiplication
    clock_t start = clock();
    multiplyMatrices(A, B, C);
    clock_t end = clock();
    double timeSpent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Resultant matrix (Regular multiplication):\n");
    printMatrix(C);
    printf("Time taken (Regular multiplication): %f seconds\n", timeSpent);

    // Timing the optimized matrix multiplication
    start = clock();
    multiplyMatricesOptimized(A, B, C);
    end = clock();
    double optimizedTimeSpent = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Resultant matrix (Optimized multiplication):\n");
    printMatrix(C);
    printf("Time taken (Optimized multiplication): %f seconds\n", optimizedTimeSpent);

    // Compare time savings
    double timeSavings = timeSpent - optimizedTimeSpent;
    printf("Time saved by optimization: %f seconds\n", timeSavings);

    return 0;
}
