#include <stdio.h>
#include <stdlib.h>

// Function prototypes for function pointer demo
void sayHello(void);
void sayGoodbye(void);

int main() {
    printf("=== POINTER BASICS ===\n");
    
    // Basic pointer declaration and initialization
    int number = 42;
    int *ptr = &number;  // Pointer to number
    
    printf("number = %d\n", number);
    printf("&number = %p\n", (void*)&number);
    printf("ptr = %p\n", (void*)ptr);
    printf("*ptr = %d\n\n", *ptr);
    
    // COMMON MISTAKE #1: Uninitialized pointer
    int *uninitPtr;  // Contains garbage address!
    // printf("*uninitPtr = %d\n", *uninitPtr);  // DANGEROUS - might crash program
    
    printf("=== POINTER OPERATIONS ===\n");
    // Changing value through pointer
    *ptr = 100;
    printf("After *ptr = 100, number = %d\n\n", number);
    
    // COMMON MISTAKE #2: NULL pointer dereference
    int *nullPtr = NULL;
    printf("nullPtr = %p\n", (void*)nullPtr);
    // printf("*nullPtr = %d\n", *nullPtr);  // CRASH! Segmentation fault
    
    printf("=== POINTER ARITHMETIC ===\n");
    int array[5] = {10, 20, 30, 40, 50};
    int *arrayPtr = array;  // Points to first element
    
    for (int i = 0; i < 5; i++) {
        printf("*(arrayPtr + %d) = %d\n", i, *(arrayPtr + i));
    }
    
    // COMMON MISTAKE #3: Out-of-bounds access
    // printf("*(arrayPtr + 10) = %d\n", *(arrayPtr + 10));  // Undefined behavior!
    
    printf("\n=== DYNAMIC MEMORY ===\n");
    // Allocate memory
    int *dynamicPtr = (int*)malloc(sizeof(int));
    if (dynamicPtr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    *dynamicPtr = 777;
    printf("*dynamicPtr = %d\n", *dynamicPtr);
    
    // COMMON MISTAKE #4: Memory leak
    // dynamicPtr = NULL;  // Lost reference without freeing!
    
    // Proper cleanup
    free(dynamicPtr);
    
    // COMMON MISTAKE #5: Dangling pointer
    // printf("After free, *dynamicPtr = %d\n", *dynamicPtr);  // Undefined behavior!
    dynamicPtr = NULL;  // Good practice
    
    printf("\n=== FUNCTION POINTERS ===\n");
    void (*funcPtr)(void);  // Function pointer declaration
    
    funcPtr = sayHello;
    funcPtr();  // Call function through pointer
    
    funcPtr = sayGoodbye;
    funcPtr();  // Call different function with same pointer
    
    return 0;
}

void sayHello(void) {
    printf("Hello from function pointer!\n");
}

void sayGoodbye(void) {
    printf("Goodbye from function pointer!\n");
}