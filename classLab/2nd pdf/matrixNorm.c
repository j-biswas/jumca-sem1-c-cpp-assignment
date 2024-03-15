#include <stdio.h>
#include <math.h>
double calculateMatrixNorm(int rows, int cols, int matrix[rows][cols]) {
    double norm = 0.0;

    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) 
            norm += matrix[i][j] * matrix[i][j];
        
    norm = sqrt(norm);
    return norm;
}

int main() {
    int rows = 3;
    int cols = 3;
    int matrix[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    double norm = calculateMatrixNorm(rows, cols, matrix);
    printf("Norm of matrix: %f\n", norm);

    return 0;
}
