#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    // control statement is use for control flow of execution
    // decision making- if ,if-else,else-if ,switch case
    // int a = 10, b = 10;
    // if (a == 10 && b == 10)
    // {
    //     printf("true");
    // }

    // even

    // if (a % 2 == 0)
    // {
    //     printf("even");
    // }
    // else
    // {
    //     printf("odd");
    // }

    // odd
    // if (a % 2 == 1)
    // {
    //     printf("odd");
    // }
    // else
    // {
    //     printf("even");
    // }

    // user

    // int n;
    // printf("enter age :");
    // scanf("%d", &n);
    // if (n >= 25)
    // {
    //     printf("applicable for fullstack...");
    // }
    // else
    // {
    //     printf("below 25");
    // }

    // // if else-if ladder
    // int a;
    // printf("enter age :");
    // scanf("%d", &a);
    // if (a >= 15 && a < 20)
    // {
    //     printf("you are eligible for Ssc");
    // }
    // else if (a >= 20 && a < 25)
    // {
    //     printf("you are eligible for Hsc");
    // }
    // else if (a >= 25 && a < 30)
    // {
    //     printf("you are eligible for graduation");
    // }
    // else if (a >= 30)
    // {
    //     printf("you are eligible for post graduation");
    // }
    // else
    // {
    //     printf("take admission in fortune cloud");
    // }

    // prime
    int n, i, f = 0;
    printf("enter number : ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
    {
        printf("prime number...");
    }
    else
    {
        printf("not prime number....");
    }
}