#include <stdio.h>
#include <stdlib.h>
//  Write a program which accepts a sentence from the user and alters it as follows:
// Every space is replaced by *, case of all alphabets is reversed, digits are replaced by ?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char *p;
    int n, i;
    printf("how many maximum characters in your sentence : ");
    scanf("%d", &n);
    p = (char *)malloc(n * sizeof(char));
    fflush(stdin);
    printf("enter sentense : ");
    fgets(p, n, stdin);
    for (i = 0; *(p + i) != '\0'; i++)
    {
        if (isupper(*(p + i)))
        {
            *(p + i) += 32;
        }

        else if (islower(*(p + i)))
        {
            *(p + i) -= 32;
        }
        else if (isspace(*(p + i)))
        {
            *(p + i) = '*';
        }
        else if (isdigit(*(p + i)))
        {
            *(p + i) = '?';
        }
    }
    printf("\n%s", p);
}
