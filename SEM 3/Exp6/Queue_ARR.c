#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum size of the queue

// Queue structure using arrays
struct QueueArray
{
    int front, rear;
    int arr[MAX];
};

// Function to create a queue
struct QueueArray *createQueue()
{
    struct QueueArray *queue = (struct QueueArray *)malloc(sizeof(struct QueueArray));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Check if the queue is full
int isFull(struct QueueArray *queue)
{
    return queue->rear == MAX - 1;
}

// Check if the queue is empty
int isEmpty(struct QueueArray *queue)
{
    return queue->front == -1 || queue->front > queue->rear;
}

// Enqueue an element into the queue
void enqueue(struct QueueArray *queue, int value)
{
    if (isFull(queue))
    {
        printf("Queue overflow!\n");
        return;
    }
    if (isEmpty(queue))
    {
        queue->front = 0; // Initialize front if queue was empty
    }
    queue->arr[++queue->rear] = value;
    printf("%d enqueued to queue\n", value);
}

// Dequeue an element from the queue
int dequeue(struct QueueArray *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue underflow!\n");
        return -1;
    }
    return queue->arr[queue->front++];
}

// Peek at the front element of the queue
int peek(struct QueueArray *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->arr[queue->front];
}

// Display the queue
void display(struct QueueArray *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = queue->front; i <= queue->rear; i++)
    {
        printf("%d ", queue->arr[i]);
    }
    printf("\n");
}

int main()
{
    struct QueueArray *queue = createQueue();
    int choice, value;

    printf("\nQueue Operations (Array Implementation):\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. Exit\n");

    while (1)
    {

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to enqueue: ");
            scanf("%d", &value);
            enqueue(queue, value);
            printf("\n");
            break;
        case 2:
            value = dequeue(queue);
            if (value != -1)
                printf("Dequeued value: %d\n", value);

            printf("\n");
            break;
        case 3:
            value = peek(queue);
            if (value != -1)
                printf("Front value: %d\n", value);

            printf("\n");
            break;
        case 4:
            display(queue);
            printf("\n");
            break;
        case 5:
            free(queue);
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
