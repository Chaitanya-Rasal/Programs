// Write a menu driven program to perform the following operations on strings using standard
// library functions:
//  Length Copy Concatenation Compare
//  Reverse Uppercase Lowercase Check case
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char c[10], r[10];
    int n, a;

    do
    {
        printf("\t---MENU---\n\t1.length\n\t2.copy\n\t3.concatination\n\t4.compare\n\t5.reverse\n\t6.exit\n");
        printf("enter your choice : ");
        scanf("%d", &n);
        fflush(stdin);
        switch (n)
        {
        case 1:
            printf("enter string : ");
            fgets(c, 100, stdin);
            a = strlen(c);
            printf("length = %d\n", a - 1);
            break;

        case 2:
            printf("enter string : ");
            fgets(c, 100, stdin);
            strcpy(r, c);
            printf("copid string = %s", r);

            break;
        case 3:
            printf("enter 1st string : ");
            fgets(c, 100, stdin);
            printf("enter 2nd string : ");
            fgets(r, 100, stdin);
            printf(" concatination = %s", strcat(c, r));
            break;

        case 4:
            printf("enter 1st string : ");
            fgets(c, 100, stdin);
            printf("enter 2nd string : ");
            fgets(r, 100, stdin);
            if (strcmp(c, r) == 0)
                printf("strings are same\n");
            else
                printf("strings are not same\n");
            break;

        case 5:
            printf("enter string : ");
            fgets(c, 100, stdin);
            printf("reverse =%s\n", strrev(c));
            break;

        case 6:
            exit(0);
            break;

        default:
            printf("enter valid case \n");
            break;
        }

    } while (n > 0);
}