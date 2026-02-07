#include<stdio.h>

int main() {
    int (*ptr)[5];
    int arr[5] = {10, 20, 30, 40, 50};

    int *p_arr = arr;

    char *s = "Hello";

    printf("*s = %s\n", s);

    printf("Value of arr[0] through p_arr: %d\n", *p_arr);
    printf("Size of s = %d\n", sizeof(s));
    printf("Size of arr: %lu bytes\n", sizeof(arr));
    printf("Size of arr[0]: %lu bytes\n", sizeof(arr[0]));
    printf("Size of ptr: %lu bytes\n", sizeof(ptr));
    printf("Size of *ptr: %lu bytes\n", sizeof(*ptr));
}