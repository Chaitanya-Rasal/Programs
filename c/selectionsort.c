#include <stdio.h>
#include <stdlib.h>
void selection_sort(int a[], int n)
{
    int i, j, t, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        t = a[i];
        a[i] = a[min];
        a[min] = t;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void main()
{
    int a[50], n, i;
    printf("how many numbers in your array : ");
    scanf("%d", &n);
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    selection_sort(a, n);
}