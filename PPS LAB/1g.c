#include <stdio.h>

int main(){
    int a = 12;
    void *ptr = (int *) &a;
    printf("%d", *ptr);
    return 0;
}