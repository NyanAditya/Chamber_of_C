#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    // Case 1: Positive numbers
    int result1 = a % b;
    printf("Case 1: %d %% %d = %d\n", a, b, result1);

    // Case 2: Negative dividend
    int c = -10;
    int result2 = c % b;
    printf("Case 2: %d %% %d = %d\n", c, b, result2);

    // Case 3: Negative divisor
    int d = 10;
    int result3 = d % -b;
    printf("Case 3: %d %% %d = %d\n", d, -b, result3);

    // Case 4: Negative dividend and divisor
    int e = -10;
    int result4 = e % -b;
    printf("Case 4: %d %% %d = %d\n", e, -b, result4);

    return 0;
}
