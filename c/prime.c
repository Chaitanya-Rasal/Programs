#include <stdio.h>
int main()
{
    int i, j, f, n;
    printf("ENTER NUMBER : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        f = 0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            printf("%d is prime\n", i);
    }

    return 0;
}
