// Program to implement a circular queue using a linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void insert(int val)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    if (front == NULL)
    {
        front = rear = newNode;
        rear->next = front;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
}

int delete ()
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
            rear->next = front;
        }
        free(temp);
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
        while (temp->next != front)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
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
            printf("\nDeleted element is: %d", delete ());
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

