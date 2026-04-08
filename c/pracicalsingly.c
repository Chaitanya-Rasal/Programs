#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;
void *create(int n)
{
    int i;
    node *head, *p;
    head = (node *)malloc(sizeof(node));
    printf("enter element : ");
    scanf("%d", &head->data);
    head->next = NULL;
    p = head;
    for (i = 1; i < n; i++)
    {
        p->next = (node *)malloc(sizeof(node));
        p = p->next;
        printf("enter element : ");
        scanf("%d", &p->data);
        p->next = NULL;
    }
    return head;
}
void display(node *p)
{
    while (p != NULL)
    {
        printf("->%d", p->data);
        p = p->next;
    }
    printf("->NULL");
}
void main()
{
    int n;
    node *HEAD;
    printf("how many nodes : ");
    scanf("%d", &n);
    HEAD = create(n);
    display(HEAD);
}