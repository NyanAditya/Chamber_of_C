// A program that finds the minimum and maximum element in an array using pointers.

#include <stdio.h>

int main(){

    int arr[]={9,5,3,-1,45,58,7,0,565};

    int *ptr=arr;

    int min=*ptr;
    int max=*ptr;

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size; i++){
        if(*(ptr+i) < min){
            min = *(ptr+i);
        }

        if(*(ptr+i) > max){
            max = *(ptr+i);
        }
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}