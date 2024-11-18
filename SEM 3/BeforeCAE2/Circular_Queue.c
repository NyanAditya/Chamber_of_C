// A program to implement a circular queue using an array

#include <stdio.h>

#define SIZE 5

struct CircularQueue
{
    int items[SIZE];
    int front;
    int rear;
};

struct CircularQueue *createQueue()
{
    struct CircularQueue *q = (struct CircularQueue *)malloc(sizeof(struct CircularQueue));
    q->front = -1;
    q->rear = -1;
    return q;
}

void enqueue(struct CircularQueue *q, int value)
{
    if ((q->rear + 1) % SIZE == q->front)
    {
        printf("Queue is full\n");
        return;
    }
    if (q->front == -1)
    {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % SIZE;
    q->items[q->rear] = value;
}

int dequeue(struct CircularQueue *q)
{
    if (q->front == -1)
    {
        printf("Queue is empty\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % SIZE;
    }
    return value;
}

int main()
{
    struct CircularQueue *q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50); // Queue is full

    printf("%d dequeued from queue\n", dequeue(q));
    enqueue(q, 60);

    // Continue operations as needed
    return 0;
}