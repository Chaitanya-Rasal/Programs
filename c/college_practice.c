#include <stdio.h>
#include <math.h>
void natural()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
    }
}
void addNatural(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("addition of 1st %d natural number is %d", n, s);
}
void array()
{
    int i, n, avg;
    int s = 0;
    int a[19];
    printf("How many numbers : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        s += a[i];
    }
    printf("Sum= %d and avg= %d", s, s / n);
}
void cube()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\t", i * i * i);
    }
}
void table()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i * 15);
    }
}
void star()
{
    int i, j;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void num()
{
    int i, j;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
void printK()
{
}
void main()
{
    // natural();
    // addNatural(10);
    // array();
    // cube();
    // table();
    // star();
    // num();
}