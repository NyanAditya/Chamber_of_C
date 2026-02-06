#include<stdio.h>

int main() {

    int x = 21;

    int *ptr = &x;

    printf("Value of x through ptr: %d", *ptr);

    return 0;
}