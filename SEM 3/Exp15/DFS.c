// Program to implement Depth First Search (DFS) algorithm

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];

int n;

int visited[MAX];

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
            adj[origin][destin] = 1;
        }
    }
}

void DFS(int v)
{
    int i;
    printf("%d ", v);
    visited[v] = 1;

    for (i = 0; i < n; i++)
    {
        if (adj[v][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int i, v;

    createGraph();

    for (i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    printf("\nEnter the starting vertex: ");
    scanf("%d", &v);

    DFS(v);

    return 0;
}
