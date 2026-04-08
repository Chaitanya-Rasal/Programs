#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char *a;
    int n, i;
    printf("how many character in string : ");
    scanf("%d", &n);
    a = (char *)malloc(n * sizeof(char));
    printf("enter string > ");
    scanf("%s", a);
    printf("string %s\n", a);
    while (*a != '\0')
        a++;
    for (i = n; i >= 0; i--)
    {
        printf("%c", *a);
        a--;
    }
}