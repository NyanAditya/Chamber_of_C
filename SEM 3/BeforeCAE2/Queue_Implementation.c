#include <stdio.h>
#include <stdlib.h>

struct ListElement
{
    int data;
    struct ListElement *next;
};

struct Queue
{
    struct ListElement *front, *rear;
};

struct Queue *createQueue()
{
    struct Queue *q = malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

void enqueue(struct Queue *q, int value)
{
    struct ListElement *temp = malloc(sizeof(struct ListElement));
    temp->data = value;
    temp->next = NULL;
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

int dequeue(struct Queue *q)
{
    if (q->front == NULL)
        return -1; // Queue is empty
    struct ListElement *temp = q->front;
    int value = temp->data;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
    return value;
}

int main()
{
    struct Queue *q = createQueue();
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    printf("%d dequeued from queue\n", dequeue(q));
    printf("%d dequeued from queue\n", dequeue(q));

    return 0;
}