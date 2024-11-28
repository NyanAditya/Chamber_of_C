// Program to implement a double-ended queue using a linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void insertFront(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        newNode->next = front;
        front = newNode;
    }
}

void insertRear(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}

int deleteFront()
{
    int val = -1;
    if (front == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        struct node *temp = front;
        val = temp->data;
        if (front == rear)
        {
            front = rear = NULL;
        }
        else
        {
            front = front->next;
        }
        free(temp);
    }
    return val;
}

int deleteRear()
{
    int val = -1;
    if (front == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        struct node *temp = front;
        while (temp->next != rear)
        {
            temp = temp->next;
        }
        val = rear->data;
        rear = temp;
        rear->next = NULL;
    }
    return val;
}

void display()
{
    struct node *temp = front;
    if (front == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue elements are:\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
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
