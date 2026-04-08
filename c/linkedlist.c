#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *create(int n)
{
    node *head, *p;
    int i;
    head = (node *)malloc(sizeof(node));
    printf("enter data ");
    scanf("%d", &head->data);
    head->next = NULL;
    p = head;
    for (i = 1; i < n; i++)
    {
        p->next = (node *)malloc(sizeof(node));
        p = p->next;
        printf("enter data ");
        scanf("%d", &p->data);
        p->next = NULL;
    }
    return head;
}
void print(node *p)
{
    while (p != NULL)
    {
        printf("->%d", p->data);
        p = p->next;
    }
    printf("->NULL\n");
}
void main()
{
    int n;
    node *HEAD;
    printf("enter no.of node : ");
    scanf("%d", &n);
    HEAD = create(n);
    print(HEAD);
}