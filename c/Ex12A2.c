// 2. Write a program that will accept a string and character to search. The program will
// call a function, which will search for the occurrence position of the character in the
// 148
// string and return its position. Function should return –1 if the character is not found in
// the string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fun(char *, char c);
int main()
{
    int n;
    char *s, c;
    printf("Enter string length :\n");
    scanf("%d", &n);
    s = (char *)malloc(n * sizeof(char));
    fflush(stdin);
    printf("Enter a string :\n");
    scanf("%s", s);
    fflush(stdin);
    printf("\nEnter a character to search in the string :\n");
    scanf("%c", &c);
    if (fun(s, c) >= 0)
        printf("\n%c found at index %d", c, fun(s, c));
    else
        printf("\n%c not found in string", c);
    return 0;
}
int fun(char *a, char c)
{
    int i;
    for (i = 0; *(a + i) != '\0'; i++)
    {
        if (*(a + i) == c)
        {
            return i;
        }
    }
    return -1;
}
