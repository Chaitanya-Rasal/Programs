#include <stdio.h>
void main()
{
    int a[20] = {1, 3, -4, -1, 0};
    int i, n;
    for (i = 0; i < sizeof(a); i++)
    {
        if (a[i] > 0)
        {
            printf("- 1 ");
        }
        else if (a[i] < 0)
        {
            a[i] = a[i] * a[i];
            printf("- %d ", a[i]);
        }
        else
        {
            break;
        }
    }
}
