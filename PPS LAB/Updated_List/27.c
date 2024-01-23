// A program to search an element in the array using binary search.

#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int l = 0, r = size - 1, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (arr[mid] == key)
            return mid;

        else if (arr[mid] < key)
            l = mid + 1;

        else
            r = mid - 1;
    }
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}, key;

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    int size = sizeof(arr) / sizeof(arr[0]);

    int index = binarySearch(arr, size, key);

    if (index == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", index);

    return 0;
}