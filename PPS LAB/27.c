// 27. Write a program to find the sum of diagonal elements of a matrix.
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

int traceMat(int rows, int cols, int mat[rows][cols]);

int main() {

    int rows, cols;

    printf("Enter rows of matrix: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);


    int mat[rows][cols];
    printf("\nEnter Matrix: \n");
    getMat(rows, cols, mat);

    printf("\nTrace of matrix: %d\n", traceMat(rows, cols, mat));

    return 0;
}

// here trace means sum of diagonal elements for even a non-square matrix
int traceMat(int rows, int cols, int mat[rows][cols]) {

    int trace = 0;

    for (int i = 0; i < rows; i++) {
        trace += mat[i][i];
    }

    return trace;

}