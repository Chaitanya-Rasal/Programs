#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} node;
node *root = NULL;
int data, n,no,lcnt=0,ncnt=0, i, se;
node *create();
node *insert(node *root,int data);
void inorder(node* root);
void preorder(node* root);
void postorder(node* root);
int leafnode(node *root);
int nonleaf(node* root);
void search(node *root, int data, int se);
void main()
{
    while (1)
    {
        int ch;
        printf("\t----Menu----");
        printf("\n\t1.create\n\t2.Insert\n\t3.search\n\t4.Inorder\n\t5.Exit\n\t6.Leaf node count\n\t7.Non leaf node count");
        printf("\nEnter your choise:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            printf("\nEnter the data:");
            insert(root,no);
        case 3:
            printf("\nEnter which element do you want to search:");
            scanf("%d", &se);
            search(root, data, se);
            break;
        case 4:
            inorder(root);
            break;
        case 5:
            exit(0);
            break;
        case 6:
              leafnode(root);
              printf("\nTotal Leaf node are:%d",lcnt);
              break;
        case 7:
              nonleaf(root);
              printf("\nCount of non leaf node:%d\n",ncnt);
            break;
        default:
            printf("Enter correct number...");
        }
    }
}
node *create()
{
    printf("\nHow many node do you want to insert:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter data:");
        scanf("%d",&data);
        root=insert(root,data);
    }
    return (root);
}
node* insert(node *root, int data)
{
    if (root == NULL)
    {
        root = (node *)malloc(sizeof(node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else
    {
        root->left = insert(root->left, data);
    }
}
void search(node *root, int data, int se)
{
    if (root==NULL)
    {
        printf("\nElement is not found\n");
    }
    else if (root->data == se)
    {
        printf("\nElement is found...\n");
    }
    else if (se > root->data)
    {
        search(root->right, data, se);
    }
    else
    {
        search(root->left, data, se);
    }
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}
int leafnode(node *root)
{
    if(root!=NULL)
    {
        if(root->left==NULL && root->right==NULL)
        {
            lcnt++;
        }
        leafnode(root->left);
        leafnode(root->right);
    }
    return lcnt;
}
int nonleaf(node* root)
{
    if(root!=NULL)
    {
        if (root->left!=NULL || root->right!=NULL)
        {
            ncnt++;
        }
        nonleaf(root->left);
        nonleaf(root->right);
    }
    return(ncnt);
}