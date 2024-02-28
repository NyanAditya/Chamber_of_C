#include <stdio.h>

void swap(int *a, int *b) {
    printf("%p %p\n", a, b); // 6422296 6422292 (addresses of num1 and num2)

    int *temp = a;
    a = b;
    b = temp;

    printf("%d %d\n", a, b); // 6422292 6422296 (addresses of num1 and num2)
}

int main() {
    int num1 = 5, num2 = 10;
    
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    
    swap(&num1, &num2);
    
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    
    return 0;
}
