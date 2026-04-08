#include <stdio.h>
#include <stdlib.h>
float add(float n1, float n2)
{
    return n1 + n2;
}
float sub(float n1, float n2)
{
    return n1 - n2;
}
float division(float n1, float n2)
{
    return n1 / n2;
}
float mul(float n1, float n2)
{
    return n1 * n2;
}
float square(float n1)
{
    return n1 * n1;
}
#include <stdio.h>
void main()
{
    int ch;
    float n1, n2;
    do
    {
        printf("1.addition \n");
        printf("2.subtraction \n");
        printf("3.multiplication \n");
        printf("4.division \n");
        printf("5.square \n");
        printf("6.exit\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter 1st number : ");
            scanf("%f", &n1);
            printf("Enter 2nd number : ");
            scanf("%f", &n2);
            printf("addition is %.2f\n", add(n1, n2));
            break;
        case 2:
            printf("Enter 1st number : ");
            scanf("%f", &n1);
            printf("Enter 2nd number : ");
            scanf("%f", &n2);
            printf("subtraction is %.2f\n", sub(n1, n2));
            break;
        case 3:
            printf("Enter 1st number : ");
            scanf("%f", &n1);
            printf("Enter 2nd number : ");
            scanf("%f", &n2);
            printf("multiplication is %.2f\n", mul(n1, n2));
            break;
        case 4:
            printf("Enter 1st number : ");
            scanf("%f", &n1);
            printf("Enter 2nd number : ");
            scanf("%f", &n2);
            printf("division is %.2f\n", division(n1, n2));
            break;
        case 5:
            printf("Enter  number : ");
            scanf("%f", &n1);
            printf("square of %.2f is %.2f \n", n1, square(n1));
            break;
        case 6:

            exit(0);
            break;
        default:
            printf("Enter correct choice");
            break;
        }
    } while (1);
}