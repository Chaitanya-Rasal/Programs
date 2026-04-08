#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char a[10];
    printf("enter name : ");
    scanf("%s", &a);
    printf("name is : %s\n", a);
    for (int i = 0; i < sizeof(a); i++)
    {
        printf("%c\n", a[i]);
    }
    a[1] = 'H';
    printf("name is : %s\n", a);
}