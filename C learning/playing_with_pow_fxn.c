#include <stdio.h>
#include <math.h>

int main() {
    double base = 2.0;
    double exponent = 3.0;
    double result = pow(base, exponent);

    printf("The result of %.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, result);

    return 0;
}
