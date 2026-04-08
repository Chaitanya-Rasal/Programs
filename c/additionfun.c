// Write c program to accept two number from user pass it to Addition function as parameter and calculate sum of two number and display in main function.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int add(int a, int b)
{
    return a + b;
}
void main()
{
    int a, b;
    printf("ente a : ");
    scanf("%d", &a);
    printf("ente b : ");
    scanf("%d", &b);
    printf("addition is = %d ", add(a, b));
}