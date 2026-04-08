#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int size, front, rear;
    int *arr;
} node;

void initialize(node *queue)
{
    queue->size = 100;
    queue->front = 0;
    queue->rear = 0;
    queue->arr = (int *)malloc(queue->size * sizeof(int));
}

int isempty(node *queue)
{
    if (queue->front == queue->rear)
        return 1;
    return 0;
}

int isfull(node *queue)
{
    if (queue->rear == queue->size - 1)
        return 1;
    return 0;
}

void enqueue(node *queue, int val)
{
    if (!isfull(queue))
    {
        queue->arr[queue->rear] = val;
        queue->rear++;
    }
    else
        printf("\nQueue Full!\n");
}

int dequeue(node *queue)
{
    int t;
    if (!isempty(queue))
    {
        t = queue->arr[queue->front];
        queue->front++;
        return t;
    }
    printf("\nQueue Empty!\n");
    return -1;
}

void BFS(node *queue, int a[10][10], int n)
{
    int v = 1, u;
    int visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    printf(" %d ", v);
    visited[v] = 1;
    enqueue(queue, v);
    while (!isempty(queue))
    {
        u = dequeue(queue);
        for (int i = 0; i < n; i++)
        {
            if (visited[i] == 0 && a[u][i] == 1)
            {
                printf(" %d ", i);
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }
}

void main()
{
    node queue;
    initialize(&queue);
    int n, a[10][10];
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
    printf("\nprinting the adjacency matrix :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nBFS Traversal\n");
    BFS(&queue, a, n);
}