// Program to implement a double-ended queue using an array

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];

int front = -1, rear = -1;

void insertFront(int val)
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
            rear = 0;
        }
        else if (front == 0)
        {
            front = MAX - 1;
        }
        else
        {
            front = front - 1;
        }
        queue[front] = val;
    }
}

void insertRear(int val)
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
            rear = 0;
        }
        else if (rear == MAX - 1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
        }
        queue[rear] = val;
    }
}

int deleteFront()
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
            if (front == MAX - 1)
            {
                front = 0;
            }
            else
            {
                front = front + 1;
            }
        }
    }
    return val;
}

int deleteRear()
{
    int val = -1;
    if (front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        val = queue[rear];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (rear == 0)
            {
                rear = MAX - 1;
            }
            else
            {
                rear = rear - 1;
            }
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
        if (front <= rear)
        {
            for (i = front; i <= rear; i++)
            {
                printf("%d ", queue[i]);
            }
        }
        else
        {
            for (i = front; i < MAX; i++)
            {
                printf("%d ", queue[i]);
            }
            for (i = 0; i <= rear; i++)
            {
                printf("%d ", queue[i]);
            }
        }
    }
}

int main()
{
    int choice, val;

    printf("\n1. Insert at front");
    printf("\n2. Insert at rear");
    printf("\n3. Delete from front");
    printf("\n4. Delete from rear");
    printf("\n5. Display");
    printf("\n6. Exit");
    printf("\nEnter your choice: ");

    while (1)
    {

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to be inserted: ");
            scanf("%d", &val);
            insertFront(val);
            break;
        case 2:
            printf("\nEnter the value to be inserted: ");
            scanf("%d", &val);
            insertRear(val);
            break;
        case 3:
            val = deleteFront();
            if (val != -1)
            {
                printf("\nDeleted element is: %d", val);
            }
            break;
        case 4:
            val = deleteRear();
            if (val != -1)
            {
                printf("\nDeleted element is: %d", val);
            }
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    }
    return 0;
}

