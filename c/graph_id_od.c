#include <stdio.h>
void degree(int a[10][10], int, int);
void main()
{
    int i, j, n, a[10][10];
    printf("Enter Number Of Vertices : ");
    scanf("%d", &n);
    printf("Enter Adjacency Matrix\n ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Adjacency Matrix : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    for (j = 0; j < n; j++)
    {
        degree(a, j, n);
    }
}
void degree(int a[10][10], int j, int n)
{
    int i, id = 0, od = 0, td = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i][j] == 1)
            id++;
        if (a[j][i] == 1)
            od++;
    }
    printf("V%d\n", j);
    printf("Indegree=%d\tOutdegree=%d\n", id, od);
    td = id + od;
    printf("Total Degree=%d", td);
    printf("\n");
}