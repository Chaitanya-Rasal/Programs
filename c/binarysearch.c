#include <stdio.h>
void binary(int a[], int key, int lower, int upper)
{
    int mid, f = 0;
    while (upper >= lower)
    {
        mid = (upper + lower) / 2;
        if (key > a[mid])
        {
            lower = mid + 1;
        }
        else if (key < a[mid])
        {
            upper = mid - 1;
        }
        else if (key == a[mid])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("\nelement is found at position %d\n", mid + 1);
    }
    else
        printf("key element is not found\n");
}
void main()
{
    int a[100], i, n, key;
    printf("how many elements in your array : ");
    scanf("%d", &n);
    printf("\nEnter array element in ascending order\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &a[i]);
    }
    printf("\nEnter key element : ");
    scanf("%d", &key);
    binary(a, key, 0, n - 1);
}