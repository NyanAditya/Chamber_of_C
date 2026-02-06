#include<stdio.h>

int main() {
    int (*ptr)[5];
    int arr[5] = {10, 20, 30, 40, 50};

    int *p_arr = arr;

    printf("Value of arr[0] through p_arr: %d\n", *p_arr);
    
    char str[5] = "Hello";
    char s[] = "Hello";

    printf("Value of str: %s\n", str);
    printf("Value of s: %s\n", s);

    printf("Value of str[5]: %c\n", str[4]);
    printf("Value of s[5]: %c\n", s[5]);

}