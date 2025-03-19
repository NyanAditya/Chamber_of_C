#include<stdio.h>

int main(){

    int a = 10;
    int *p = &a; int *pL = a;
    int **q = &p; int **qL = p;

    printf("a = %d\n", a);
    printf("&a = %p\n", (void*)&a);
    
    printf("p = %p\n", (void*)p);
    printf("*p = %d\n", *p);
    printf("pL = %d\n", pL);
    printf("*pL = %d\n", *pL);


    printf("q = %p\n", (void*)q);
    printf("qL = %p\n", (void*)qL);
    printf("*q = %p\n", (void*)*q);
    printf("**q = %d\n", **q);
    return 0;
}