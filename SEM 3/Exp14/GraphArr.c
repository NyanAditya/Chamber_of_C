// Programt to implement graph using array

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int graph[MAX][MAX];
int n;

void createGraph()
{
    int i, max_edges, origin, destin;

    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
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
            graph[origin][destin] = 1;
        }
    }
}

void display()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", graph[i][j]);
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
