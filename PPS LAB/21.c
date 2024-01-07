#include <stdio.h>

#define SIZE 5

int main() {
    int array1[SIZE], array2[SIZE], sum[SIZE];
    
    printf("Enter elements of array1:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &array1[i]);
    }
    
    printf("Enter elements of array2:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &array2[i]);
    }
    
    for (int i = 0; i < SIZE; i++) {
        sum[i] = array1[i] + array2[i];
    }
    
    printf("Sum of corresponding elements:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", sum[i]);
    }
    
    return 0;
}
