#include<stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    int *q = &arr[3]; // q points to 40

    printf("q - p = %d\n", q - p);
    
}