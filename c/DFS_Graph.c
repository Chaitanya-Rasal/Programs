#include <stdio.h>
#include <stdlib.h>

int visited[100];
int a[100][100];

void initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
}

void DFS(int v, int n)
{
    visited[v] = 1;   // Mark V as visited
    printf("%d ", v); // Print V
    for (int i = 0; i < n; i++)
    {
        if (a[v][i] && !visited[i]) // If there is an edge from v to i and i is not visited
        {
            DFS(i, n); // Recursively call DFS
        }
    }
}

void main()
{
    int n;
    // Accept the adjacency matrix
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nEdge %d-%d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // printing the adjacency matrix
    printf("\nprinting the adjacency matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nDFS Traversal\n");
    DFS(0, n); // Start with vertex 0
}