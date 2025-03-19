#include <stdio.h>
#include <stdlib.h>

int main() {
    // Basic pointer to pointer demonstration
    printf("===== Pointer to Pointer Basics =====\n");
    
    int x = 10;
    int *p = &x;         // Pointer to int
    int **pp = &p;       // Pointer to pointer to int
    
    printf("Value of x: %d\n", x);
    printf("Value of *p: %d\n", *p);
    printf("Value of **pp: %d\n", **pp);
    
    // Modifying values through different levels
    **pp = 20;
    printf("After **pp = 20, x = %d\n\n", x);
    
    // Common mistake 1: Not initializing pointers
    printf("===== Common Mistakes =====\n");
    int *uninitPtr;
    // printf("%d\n", *uninitPtr);  // MISTAKE: Dereferencing uninitialized pointer
    
    // Common mistake 2: Incorrect level of dereferencing
    int y = 30;
    int *q = &y;
    int **qq = &q;
    
    // printf("%d\n", qq);    // MISTAKE: Trying to print int value of address
    // printf("%d\n", *qq);   // MISTAKE: Trying to print int value of pointer
    printf("Correct: *qq is address %p\n", (void*)*qq);
    printf("Correct: **qq is value %d\n\n", **qq);
    
    // Pointer arithmetic with pointer to pointers
    printf("===== Pointer Arithmetic =====\n");
    int arr[3] = {100, 200, 300};
    int *ptrs[3];
    int **pptrs = ptrs;
    
    for(int i = 0; i < 3; i++) {
        ptrs[i] = &arr[i];
    }
    
    for(int i = 0; i < 3; i++) {
        printf("*pptrs[%d] = %d\n", i, *pptrs[i]);
    }
    
    // Common mistake 3: Memory management
    printf("\n===== Memory Management =====\n");
    int **matrix = (int**)malloc(3 * sizeof(int*));
    if (matrix == NULL) {
        return 1;
    }
    
    for(int i = 0; i < 3; i++) {
        matrix[i] = (int*)malloc(4 * sizeof(int));
        if (matrix[i] == NULL) {
            // MISTAKE: Not freeing previously allocated memory if malloc fails
            for(int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return 1;
        }
        
        for(int j = 0; j < 4; j++) {
            matrix[i][j] = i * 4 + j;
        }
    }
    
    printf("Matrix values:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Proper cleanup
    for(int i = 0; i < 3; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    return 0;
}