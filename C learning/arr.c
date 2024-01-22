#include <stdio.h>

int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("The value of *ptr is %u\n", ptr);
    printf("The value of arr is %u\n", arr);    
    printf("The value of arr[0] is %u\n", arr[0]);
    printf("The value of *arr is %u\n", *arr);
    printf("The value of arr + 3 is %u\n", arr + 3);
    
    // Print arr
    for (int i = 0; i < 5; i++) {
        // printf("arr[%d] = %d\n", i, i[arr]);
        printf("arr + i = %u\n", (arr + i));
    }

    return 0;
}
