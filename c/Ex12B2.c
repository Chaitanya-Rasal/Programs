// Write a program in C to reverse each word in a sentence
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char *p;
    int n, i, cnt = 0, j;
    printf("how many character in your sentense : ");
    scanf("%d", &n);
    fflush(stdin);
    p = (char *)malloc(n * sizeof(char));
    printf("enter string : ");
    fgets(p, n, stdin);
    // printf("%s", p);
    // while (*p != '\0')
    // {
    //     cnt++;
    //     p++;
    // }
    for (i = 0; *(p + i) != '\0'; i++)
    {
        cnt++;
        if (*(p + i) == ' ')
        {

            for (j = 0; *(p + j) != ' '; j++)
            {
                *(p + i) = *(p + cnt - i - 1);
                p++;
            }
        }
        cnt = 0;
    }
    printf("%s", p);
}