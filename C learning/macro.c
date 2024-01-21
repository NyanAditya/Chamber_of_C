#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1 = 10;
    int num2 = 20;
    int maxNum = MAX(num1, num2);

    printf("The maximum number between %d and %d is %d\n", num1, num2, maxNum);

    return 0;
}
