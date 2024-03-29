// Creation Date: 18-03-2021
// Author: Aditya Singh
// program to add & multiply two matrices of order m*n
#include <stdio.h>

void getMat(int rows, int cols, int mat[rows][cols]) {

    printf("\nEnter matrix elements!\n");

    for (int i = 0; i < rows; i++) {
        printf("\nEntering Row %d:\n", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("Element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    } 
}

void printMat(int rows, int cols, int mat[rows][cols]) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void addMat(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMat(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {

    if (rows != cols) {
        printf("Matrices cannot be multiplied!\n");
        return;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) { 
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {

    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int mat1[rows][cols], mat2[rows][cols], add[rows][cols], mul[rows][cols];

    printf("\nEnter Matrix 1:\n");
    getMat(rows, cols, mat1);

    printf("\nEnter Matrix 2:\n");
    getMat(rows, cols, mat2);
    
    printf("Addition of matrices:\n");
    addMat(rows, cols, mat1, mat2, add);
    printMat(rows, cols, add);

    printf("\nMultiplication of matrices:\n");
    multiplyMat(rows, cols, mat1, mat2, mul);
    printMat(rows, cols, mul);
    
    return 0;
}