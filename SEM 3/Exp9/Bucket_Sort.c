// Function to perform bucket sort
void bucketSort(float arr[], int size)
{
    // Create buckets
    int bucketCount = 10;             // Number of buckets
    float buckets[bucketCount][size]; // 2D array to hold buckets
    int bucketSizes[bucketCount];     // Array to hold the size of each bucket

    // Initialize bucket sizes to 0
    for (int i = 0; i < bucketCount; i++)
        bucketSizes[i] = 0;

    // Insert elements into buckets
    for (int i = 0; i < size; i++)
    {
        int bucketIndex = (int)(bucketCount * arr[i]);             // Determine bucket index
        buckets[bucketIndex][bucketSizes[bucketIndex]++] = arr[i]; // Place element in bucket
    }

    // Sort individual buckets
    for (int i = 0; i < bucketCount; i++)
    {
        if (bucketSizes[i] > 0)
        {
            // Sort the bucket (using insertion sort here)
            insertionSort(buckets[i], bucketSizes[i]);
        }
    }

    // Concatenate all buckets into the original array
    int index = 0;
    for (int i = 0; i < bucketCount; i++)
    {
        for (int j = 0; j < bucketSizes[i]; j++)
        {
            arr[index++] = buckets[i][j];
        }
    }
}
