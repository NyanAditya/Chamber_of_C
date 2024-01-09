// 27. Write a program to find the trace of a matrix. (Trace of a matrix is the sum of all the elements of the main diagonal of the matrix).
// Author: Aditya Singh

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

int traceMat(int rows, int cols, int mat[rows][cols]) {

    int trace = 0;

    for (int i = 0; i < rows; i++) {
        trace += mat[i][i];
    }

    return trace;
}
int main() {

    int rows;
    printf("Enter order of matrix: ");
    scanf("%d", &rows);

    int cols = rows;

    int mat[rows][cols];
    printf("\nEnter Matrix: \n");
    getMat(rows, cols, mat);

    printf("\nTrace of matrix: %d\n", traceMat(rows, cols, mat));

    return 0;
}