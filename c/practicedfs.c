#include <stdio.h>
#include <stdlib.h>
int a[100][100];
int visited[100];
void initiallize(int n)
{
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
}
void dfs(int v, int n)
{
    visited[v] = 1;
    printf("%d", v);
    for (int i = 0; i < n; i++)
    {
        if (a[v][i] && !visited[i])
        {
            dfs(i, n);
        }
    }
}
void main()
{
    int n;
    printf("how many vertices : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("edge %d-%d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("adjacency matrix \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    initiallize(n);
    dfs(0, n);
}