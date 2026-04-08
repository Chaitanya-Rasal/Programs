// bubble sort , insertion sort, binary search , linear search
#include <stdio.h>
void print(int a[], int count)
{
    int i;
    printf("\n--------------------\n");
    for (i = 0; i < count; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n--------------------\n");
}
void linear(int a[], int count)
{
    int i, f = 0, key;
    printf("\nEnter Key Element for linear search : ");
    scanf("%d", &key);
    printf("------LINEAR SEARCH------");
    for (i = 0; i < count; i++)
    {
        if (a[i] == key)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("\nKey element is found at position : %d\n", i + 1);
    else
        printf("\nKey element is not found\n");
}
void binary(int l, int u, int count)
{
    int b[100], mid, key, f = 0, i;
    printf("\nEnter array element in ascending order\n");
    for (i = 0; i < count; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &b[i]);
    }
    printf("\nEnter Key Element for binary search : ");
    scanf("%d", &key);
    printf("------BINARY SEARCH------");
    while (u >= l)
    {
        mid = (u + l) / 2;
        if (key > b[mid])
        {
            l = mid + 1;
        }
        else if (key < b[mid])
        {
            u = mid - 1;
        }
        if (key == b[mid])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("\nKey element is found at position : %d\n", mid + 1);
    else
        printf("\nKey element is not found\n");
}
void bubble(int a[], int count)
{
    int i, j, s = 0, t;
    printf("\n------BOUBBLE SORT------");
    for (i = 0; 1 < count; i++)
    {
        s = 1;
        for (j = 0; j < count - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                s = 0;
            }
        }
        if (s == 1)
        {
            printf("\nTotal passes required =%d ", i);
            break;
        }
    }
    printf("\n SORTED ARRAY \n");
    print(a, count);
}
void insertion(int a[], int count)
{
    int i, j, key;
    printf("\n------INSERTION SORT------");
    for (i = 1; i <= count - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("\n SORTED ARRAY \n");
    print(a, count);
}

void main()
{
    int a[100], count, i;
    printf("How many elements in your array : ");
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }
    print(a, count);
    linear(a, count);
    binary(0, count - 1, count);
    bubble(a, count);
    insertion(a, count);
}