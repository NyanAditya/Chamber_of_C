#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return(fibonacci(n-1) + fibonacci(n-2));
}

int main() {
    int n, i = 0;

    printf("Enter the number of terms\n");
    scanf("%d", &n);

    printf("Fibonacci series\n");

    for (int c = 1; c <= n; c++) {
        printf("%d\n", fibonacci(i));
        i++;
    }

    return 0;
}