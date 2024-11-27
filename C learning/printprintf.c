// Program to print an expression in printf

#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    printf(printf("Hello, World!\n"));

    int a = printf("Hello, World!\n");
    printf("%d\n", a);

    char b = printf("Hello, World!\n");
    printf("%c\n", b);
    return 0;
}