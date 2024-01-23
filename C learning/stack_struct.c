// A program to implement stack using linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // Pointer to the next node
};

// Pointer to the top of the stack (initially NULL)
struct node *top = NULL; 

void push(int data)
{
    // Allocating memory for the new node and assigning it a pointer for the same memory location allocated
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = data;
    new_node->next = top;

    top = new_node;
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack underflow\n");
        return;
    }

    struct node *temp = top; // Storing the address of the top node in a temporary variable

    top = top->next; // Moving the top to the next node

    free(temp); // Freeing the memory allocated to the top node
}

void display()
{
    if (top == NULL)
    {
        printf("Stack underflow\n");
        return;
    }

    struct node *temp = top;

    while (temp != NULL)
    {
        printf("%d ", temp->data);

        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    int choice, data;

    while (1)
    {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d", &data);

            push(data);

            break;

        case 2:
            pop();

            break;

        case 3:
            display();

            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
