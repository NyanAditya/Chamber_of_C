// Program to implement a circular queue using an array

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert(int val)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("\nQueue is full");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % MAX;
        queue[rear] = val;
    }
}

int delete ()
{
    int val = -1;
    if (front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        val = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % MAX;
        }
    }
    return val;
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue elements are:\n");
        for (i = front; i != rear; i = (i + 1) % MAX)
        {
            printf("%d ", queue[i]);
        }
        printf("%d", queue[i]);
    }
}

int main()
{
    int choice, val;

    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3. Display");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");
    
    while (1)
    {

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted: ");
            scanf("%d", &val);
            insert(val);
            break;
        case 2:
            val = delete ();
            if (val != -1)
            {
                printf("\nDeleted element is %d", val);
            }
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    }
    return 0;
}