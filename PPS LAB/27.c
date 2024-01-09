#include <stdio.h>

void getMatrix(int rows, int cols, int mat[rows][cols]) {

    printf("\nEnter matrix elements!\n");

    for (int i = 0; i < rows; i++) {
        printf("\nEntering Row %d:\n", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("Element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    } 
}

void printMatrix(int rows, int cols, int mat[rows][cols]) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int traceMat(int rows, int cols, int mat[rows][cols]) {

    if (rows != cols) {
        printf("Trace can only be calculted for Square matrices\n");
        return;
    }

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
    getMatrix(rows, cols, mat);

    printf("\nTrace of matrix: %d\n", traceMat(rows, cols, mat));

    return 0;
}