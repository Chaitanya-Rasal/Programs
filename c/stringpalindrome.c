
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int i, f = 0;
    char *p;
    printf("enter string : ");
    scanf("%s", p);
    for (i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) != *(p + strlen(p) - i - 1))
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("string is palindrome\n");
    else
        printf("string is not palindrome\n");
}