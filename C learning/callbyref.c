#include<stdio.h>

void swap(int* a, int* b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
    
}

int main() {
    int cv = 34;
    int bv = 91;

    printf("cv: %d, bv: %d\n", cv, bv);

    swap(&cv, &bv);

    printf("cv: %d, bv: %d", cv, bv);

    return 0;
}