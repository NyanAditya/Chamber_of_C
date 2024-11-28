// Program to implement a graph using Linked List

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node *next;
};

struct node *graph[100];

void createGraph()
{
    int i, max_edges, origin, destin;

    printf("\nEnter the number of vertices: ");
    int n;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        graph[i] = NULL;
    }

    max_edges = n * (n - 1);

    for (i = 1; i <= max_edges; i++)
    {
        printf("\nEnter edge %d (-1 -1 to quit): ", i);
        scanf("%d %d", &origin, &destin);

        if ((origin == -1) && (destin == -1))
        {
            break;
        }

        if (origin >= n || destin >= n || origin < 0 || destin < 0)
        {
            printf("\nInvalid edge!\n");
            i--;
        }
        else
        {
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            newNode->vertex = destin;
            newNode->next = graph[origin];
            graph[origin] = newNode;
        }
    }
}

void display()
{
    int i;
    struct node *temp;
    for (i = 0; i < 100; i++)
    {
        temp = graph[i];
        printf("\nAdjacency list of vertex %d\n", i);
        while (temp != NULL)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main()
{
    createGraph();
    display();
    return 0;
}
