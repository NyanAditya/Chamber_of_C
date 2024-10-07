// A program to implement a linked list in C

#include <stdio.h>

typedef struct Node sll_Node;

struct Node
{
    int data;
    struct Node *Next;
};

sll_Node *Head = NULL;

void insertHead(sll_Node *Node, int data)
{
    sll_Node *newNode = (sll_Node *)malloc(sizeof(sll_Node));

    newNode->data = data;
    newNode->Next = Head;

    Head = newNode;
}

void insertTail(sll_Node *Node, int data)
{
    sll_Node *newNode = (sll_Node *)malloc(sizeof(sll_Node));

    newNode->data = data;
    newNode->Next = NULL;

    sll_Node *temp = Head;

    while (temp->Next != NULL)
        temp = temp->Next;

    temp->Next = newNode;
}

void displayList()
{
    sll_Node *temp = Head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->Next;
    }
    printf("NULL\n");
}

int main()
{
    sll_Node NewList;

    printf("1. Insert at the beginning of the list\n");
    printf("2. Insert at the end of the list\n");
    printf("3. Display the list\n");

    int choice;
    int data;

    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d", &data);
            insertHead(&NewList, data);
            break;

        case 2:
            printf("Enter the data: ");
            scanf("%d", &data);
            insertTail(&NewList, data);
            break;

        case 3:
            displayList(&NewList);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }
}