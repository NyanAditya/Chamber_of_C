#include <stdio.h>

// Global variable with external linkage
int globalVariable = 10;

// Function with static variable
void functionWithStaticVariable() {
    static int staticVariable = 5;
    printf("Static variable: %d\n", staticVariable);
    staticVariable++;
}

int main() {
    // Automatic variable
    int automaticVariable = 20;

    // Register variable
    register int registerVariable = 30;

    // Print the values of different variables
    printf("Global variable: %d\n", globalVariable);
    printf("Automatic variable: %d\n", automaticVariable);
    printf("Register variable: %d\n", registerVariable);

    // Call the function multiple times
    functionWithStaticVariable();
    functionWithStaticVariable();
    functionWithStaticVariable();

    return 0;
}
