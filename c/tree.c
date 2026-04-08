#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} node;
node *create(node *, int);
void inorder(node *);
void main()
{
    int n, i, data;
    node *root = NULL;
    printf("Enter the number of elements to be inserted in the binary search tree : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter tree elements : ");
        scanf("%d", &data);
        root = create(root, data);
    }
    printf("Inorder traversal of the binary search tree is : \n");
    inorder(root);
}
node *create(node *root, int data)
{
    if (root == NULL)
    {
        root = (node *)malloc(sizeof(node));
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data > root->data)
    {
        root->right = create(root->right, data);
    }
    else if (data < root->data)
    {
        root->left = create(root->left, data);
    }
    return root;
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