// Function to perform counting sort
void countingSort(int arr[], int size)
{
    int output[size];
    int count[100] = {0}; // Assuming the range of input numbers is known (0-99)

    // Store the count of occurrences
    for (int i = 0; i < size; i++)
        count[arr[i]]++;

    // Build the output array
    for (int i = 0, j = 0; i < 100; i++)
    {
        while (count[i] > 0)
        {
            output[j++] = i;
            count[i]--;
        }
    }

    // Copy the output array to arr[]
    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}
