// A palindrome is a string that reads the same-forward and reverse. Example: “madam” is a
// Palindrome. Write a function which accepts a string and returns 1 if the string is a palindrome and
// 0 otherwise. Use this function in main.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int palindrome(char *);
void main()
{
    char *p;
    printf("enter string : ");
    scanf("%s", p);
    if (palindrome(p) == 1)
        printf("string is palindrome\n ");
    else
        printf("string is not palindrome\n");
}
int palindrome(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) != *(p + strlen(p) - i - 1))
        {
            return 0;
        }
    }
    return 1;
}