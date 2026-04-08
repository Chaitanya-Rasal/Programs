#include <stdio.h>
void insertion(int a[], int n)
{
    int i, j, key;
    for (i = 1; i <= n - 1; i++)
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
}
void print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void main()
{
    // 0  1   2  3   4
    // 12 |34 56 7   9  i=1,key=34,j=0
    // 12 34 |56 7   9  i=2,key=56,j=1
    // 12 34 56 |7   9  i=3,key=7,j=2

    int a[100], n, i;
    printf("How many elements in your array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter number : ");
        scanf("%d", &a[i]);
    }
    insertion(a, n);
    print(a, n);
}