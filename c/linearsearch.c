#include <stdio.h>
void linear(int a[], int n, int key)
{
    int i, f = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("key element is found at position %d\n", i + 1);
    }
    else
    {
        printf("key element is not found\n");
    }
}
void main()
{
    int a[100], i, n, key;
    printf("how many elements in your array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter element  : ");
        scanf("%d", &a[i]);
    }
    printf("\nenter key element : ");
    scanf("%d", &key);
    linear(a, n, key);
}