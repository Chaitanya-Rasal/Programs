#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *left, *right;
} node;
node *create(node *, int);
void inorder(node *);
int l_level(node *, int);
void display(node *, int);
void main()
{
	node *root = NULL;
	int i, n, data, l, level;
	printf("How many node you want=");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter tree data=");
		scanf("%d", &data);
		root = create(root, data);
	}
	inorder(root);
	printf("Enter any level=");
	scanf("%d", &l);
	level = l_level(root, l);
	printf("number of node at %d level=%d", l, level);
	printf("Display levelwise=========\n\n");
	display(root, 0);
}
node *create(node *root, int data)
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
			root->right = create(root->right, data);
		}
		else
		{
			root->left = create(root->left, data);
		}
	}
	return (root);
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
int l_level(node *root, int l)
{
	if (root == NULL)
		return (0);
	if (l == 0)
		return (1);
	else
		return (l_level(root->right, l - 1) + l_level(root->left, l - 1));
}
void display(node *root, int l)
{
	int i;
	if (root != NULL)
	{
		display(root->right, l + 1);
		for (i = 0; i < l; i++)
		{
			printf("    ");
		}
		printf("%d", root->data);
		printf("\n");
		display(root->left, l + 1);
	}
}
