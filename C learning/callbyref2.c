#include<stdio.h>

void square(int num, int* result) {
    *result = num*num;
}

int main() {

    int a = 52;

    int r = 0;


    square(a, &r);

    printf("Number: %d, Square: %d", a, r);

    return 0;
}