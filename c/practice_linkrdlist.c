#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void *create(int n)
{
    node *head, *p;
    int i;
    head = (node *)malloc(sizeof(node));
    printf("enter data : ");
    scanf("%d", &head->data);
    head->next = NULL;
    p = head;
    for (i = 1; i < n; i++)
    {
        p->next = (node *)malloc(sizeof(node));
        p = p->next;
        printf("enter data : ");
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
    node *HEAD;
    int n;
    printf("enter no.of nodes : ");
    scanf("%d", &n);
    HEAD = create(n);
    display(HEAD);
}