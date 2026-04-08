#include <stdio.h>
void bubble(int a[], int n)
{
    int i, j, t, s;
    for (i = 0; i < n - 1; i++)
    {
        s = 1;
        for (j = 0; j < n - i - 1; j++)
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
            printf("Total passes required %d\n", i);
            break;
        }
    }
    printf("sorted array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void main()
{
    int i, n, a[100];
    printf("how many elements in your array ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter number : ");
        scanf("%d", &a[i]);
    }
    bubble(a, n);
}