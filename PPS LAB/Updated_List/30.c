// A program to print the Fibonacci series and find the factorial of a number using recursion.

#include <stdio.h>

int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", fib(i));

    printf("\nFactorial of %d is %d\n", n, fact(n));

    return 0;
}