/**
 * This program calculates the prime factors of a given number using recursion.
 * It takes an input number from the user and prints the prime factors of that number.
 */

#include <stdio.h>

void primeFactorization(int n, int divisor) {
    if (n <= 1) {
        return;
    }

    if (n % divisor == 0) {
        printf("%d ", divisor);
        primeFactorization(n / divisor, divisor);
    } else {
        primeFactorization(n, divisor + 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    primeFactorization(n, 2);

    return 0;
}
