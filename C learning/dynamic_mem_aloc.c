#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dynamically allocate memory for an integer
    int* num = (int*) malloc(sizeof(int));
    if (num == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign a value to the allocated memory
    *num = 42;
    printf("The number is: %d\n", *num);

    // Free the allocated memory
    free(num);

    return 0;
}
