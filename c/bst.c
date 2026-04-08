#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} node;
node *root = NULL;
node *create();
node *insert(node *, int data);
node *search(node *, int data);
void inorder(node *);
void preorder(node *);
void postorder(node *);
void main()
{
    int ch, key, data, qm;
q:
    while (1)
    {
        printf("menu\n");
        printf("1)create\n2)insert\n3search\n4)preorder\n5)inorder\n6)postorder\n7)exit\n");
        printf("enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (root != NULL)
            {
                printf("tree already created\n");
                goto q;
            }
            else
            {
                root = create();
            }
            break;
        case 2:
            printf("enter data : ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 3:
            printf("enter key element :");
            scanf("%d", &key);
            if (search(root, key))
            {
                printf("element found");
            }
            else
            {
                printf("element not found");
            }
            break;
        case 4:
            preorder(root);
            break;
        case 5:
            inorder(root);
            break;
        case 6:
            postorder(root);
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("invalid choice");
            break;
        }
    }
}
node *create()
{
    int n, data;
    printf("enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter data :");
        scanf("%d", &data);
        root = insert(root, data);
    }
    return root;
}
node *insert(node *root, int data)
{
    if (root == NULL)
    {
        root = (node *)malloc(sizeof(node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}
node *search(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (key == root->data)
    {
        return root;
    }
    else
    {
        if (key < root->data)
        {
            search(root->left, key);
        }
        else
        {
            search(root->right, key);
        }
    }
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}