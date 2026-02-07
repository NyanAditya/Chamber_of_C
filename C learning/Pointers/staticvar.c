#include<stdio.h>

int fun(int n) {
    static int x = 0;
    if (n > 0) {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main() {
    int result = fun(3);
    printf("Result: %d\n", result);
    return 0;
}