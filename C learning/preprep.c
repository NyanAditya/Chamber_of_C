#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

#define DEBUG 1

#ifndef MESSAGE
    #define MESSAGE "Hello, World!"
#endif

#ifdef DEBUG
    #define DEBUG_PRINT(msg) printf("DEBUG: %s\n", msg)
#else
    #define DEBUG_PRINT(msg)
#endif

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("The maximum of %d and %d is %d\n", num1, num2, MAX(num1, num2));
    printf("The square of %d is %d\n", num1, SQUARE(num1));

    DEBUG_PRINT("Debugging message");

    printf("%s\n", MESSAGE);

    return 0;
}
