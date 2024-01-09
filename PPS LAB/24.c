// A program to implement linear search
// Author: Aditya Singh

#include <stdio.h>

int linearSearch(int arr[], int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == key)
        {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key;
    
    printf("Enter element to search: ");    
    scanf("%d", &key);

    int result = linearSearch(arr, len, key);

    if (result == -1)
    {
        printf("Element not found\n");
    }

    else
    {
        printf("Element found at index %d\n", result);
    }

    return 0;
}
