// A program to test pointers and memory allocation.

#include <stdio.h>

int main(){

    int a = 10;
    int *p = &a;

    int b = a;
    int *r = &b;

    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("p = %p\n", p);
    printf("&p = %p\n", &p);
    printf("*p = %d\n", *p);
    printf("\n");
    printf("b = %d\n", b);
    printf("&b = %p\n", &b);
    printf("r = %p\n", r);
    printf("&r = %p\n", &r);
    printf("*r = %d\n", *r);

    return 0;
}