#include <stdio.h>

int main() {
    register int integer = 10;
    float floatingPoint = 3.14;
    char character = 'A';
    char string[] = "Hello, World!";
    double doublePrecision = 1234.56789;
    long longInteger = 1234567890;
    unsigned int unsignedInteger = 4294967295;

    printf("Integer: %d\n", integer);
    printf("Floating Point: %f\n", floatingPoint);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);
    printf("Double Precision: %lf\n", doublePrecision);
    printf("Long Integer: %d\n", longInteger);
    printf("Unsigned Integer: %u\n", unsignedInteger);

    printf("\nInteger Address: %p\n", &integer);
    
    

    return 0;
}
