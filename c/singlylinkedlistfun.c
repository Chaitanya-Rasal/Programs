#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *head;
int choice;
void display();
void insert_begining();
void insert_middle();
void insert_last();
void delete_begining();
void delete_middle();
void delete_last();
void main()
{
    while (choice != 9)
    {
        printf("____MENU___\n");
        printf("1]display linkedlist\n2]insert begining\n3]insert middle\n4]insert last\n5]delete begining\n6]delete middle\n7]delete last\n8]exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            insert_begining();
            break;
        case 3:
            insert_middle();
            break;
        case 4:
            insert_last();
            break;
        case 5:
            delete_begining();
            break;
        case 6:
            delete_middle();
            break;
        case 7:
            delete_last();
            break;
        case 8:
            exit(0);
        default:
            printf("Plz enter valid case\n");
        }
    }
}
void display()
{
    node *p;
    p = head;
    while (p != NULL)
    {
        printf("->%d", p->data);
        p = p->next;
    }
    printf("->NULL\n\n");
}
void insert_begining()
{
    node *p;
    p = (node *)malloc(sizeof(node));
    printf("Enter data : ");
    scanf("%d", &p->data);
    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        p->next = head;
        head = p;
    }
    printf("------node inserted at begining-----\n\n");
}
void insert_middle()
{
    int i, pos;
    node *p, *q;
    q = head;
    printf("enter position : ");
    scanf("%d", &pos);
    p = (node *)malloc(sizeof(node));
    printf("Enter data : ");
    scanf("%d", &p->data);
    p->next = NULL;
    for (i = 1; i < pos - 1; i++)
    {
        q = q->next;
    }
    p->next = q->next;
    q->next = p;
    printf("------node inserted at given position-----\n\n");
}
void insert_last()
{
    node *p, *q;
    q = head;
    p = (node *)malloc(sizeof(node));
    printf("enter data : ");
    scanf("%d", &p->data);
    p->next = NULL;
    while (q->next != NULL)
    {
        q = q->next;
    }
    q->next = p;
    printf("------node inserted at last position-----\n\n");
}
void delete_begining()
{
    node *p;
    p = head->next;
    free(head);
    head = p;

    printf("------node deleted at 1st position-----\n\n");
}
void delete_middle()
{
    int i, pos;
    node *p, *q;
    q = head;
    printf("enter position : ");
    scanf("%d", &pos);
    for (i = 1; i < pos - 1; i++)
    {
        q = q->next;
    }
    p->next = q->next;
    q->next = p;
    printf("------node deleted at given position-----\n\n");
}
void delete_last()
{
    node *p, *q;
    p = head;
    while (p->next->next != NULL)
    {
        p = p->next;
    }
    p->next = q;
    free(q);
    p->next = NULL;
    printf("------node deleted at last position-----\n\n");
}