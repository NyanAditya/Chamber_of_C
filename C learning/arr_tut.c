#include <stdio.h>

int main() {
    
    int arr[]={9,5,3,-1,45,58,7,0,565};
    int list[7] = {1, 2, 3, 4, 5, 6, 7};
    int list2[8];




    printf("%d\n", arr[3]);
   
    printf("%d\n", *(arr+3));

        // Print the address of all elements of arr[]
        int size = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < size; i++) {
            printf("Address of arr[%d]: %d\n", i, &arr[i]);
        }

    return 0;
}