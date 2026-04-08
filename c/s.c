#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} node;
node *root = NULL;
node *create();
node *search(node *, int);
node *insert(node *, int);
void preorder(node *);
void inorder(node *);
void postorder(node *);
void main()
{
    int no, key, ch;
    int n, i, d;
label:
{
    do
    {
        printf("\n *********Menu");
        printf("\n1.create\n2.search\n3.insert\n4.preorder\n5.inorder\n6.postorder\n7.exit\n");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (root != NULL)
            {
                printf("Tree is already created.\n");
                goto label;
            }
            else
            {
                printf("how many nodes : ");
                scanf("%d", &n);
                printf("enter data \n");
                for (i = 0; i < n; i++)
                {
                    scanf("%d", &d);
                    root = create(root, d);
                }
            }
            break;
        case 2:
            printf("Enter search key elements:");
            scanf("%d", &key);
            if (search(root, key))
            {
                printf("\n elements is found");
            }
            else
            {
                printf("\n elements is  not found");
            }
            break;
        case 3:
            printf("Enter inserting elements:");
            scanf("%d", &no);
            root = insert(root, no);
            break;
        case 4:
            printf("\n preorder traversal\n");
            preorder(root);
            break;
        case 5:
            printf("\n inorder traversal\n");
            inorder(root);
            break;
        case 6:
            printf("\n postorder traversal\n");
            postorder(root);
            break;
        case 7:
            exit(1);
            break;
        default:
            printf("\n please enter valid choice");
        }
    } while (1);
}
}
node *create(node *root, int d)
{
    if (root == NULL)
    {
        root = (node *)malloc(sizeof(node));
        root->data = d;
        root->left = root->right = NULL;
    }
    else
    {
        if (root->data > d)
        {
            root->left = create(root->left, d);
        }
        else
        {
            root->right = create(root->right, d);
        }
    }
    return root;
}
node *search(node *root, int key)
{
    if (root == NULL)
        return NULL;
    else
    {
        if (root->data == key)
            return (root);
        else
        {
            if (key < root->data)
                search(root->left, key);
            else
                search(root->right, key);
        }
    }
}
node *insert(node *root, int data)
{
    if (root == NULL)
    {
        root = (node *)malloc(sizeof(node));
        root->data = data;
        root->left = root->right = NULL;
    }
    else
    {
        if (data > root->data)
        {
            root->right = insert(root->right, data);
        }
        else if (data < root->data)
        {
            root->left = insert(root->left, data);
        }
    }
    return (root);
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t\n", root->data);
        inorder(root->right);
    }
}
void preorder(node *root)
{
    if (root != NULL)
    {
        printf("%d\t\n", root->data);
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
        printf("%d\t\n", root->data);
    }
}
