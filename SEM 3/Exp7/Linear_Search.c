#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main()
{
    int arr[] = {4, 84, 23, 45, 67, 12, 98, 34, 56, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the element to search for (Linear Search): ");
    scanf("%d", &key);

    int index = linearSearch(arr, size, key);
    if (index != -1)
    {
        printf("Element %d found at index %d.\n", key, index);
    }
    else
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
