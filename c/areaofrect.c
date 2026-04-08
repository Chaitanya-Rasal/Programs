#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{

    float b, h, area;
    printf("enter breadth : ");
    scanf("%f", &b);
    printf("\nenter length : ");
    scanf("%f", &h);
    area = b * h;
    printf("area of triangle : %.2f", area);
}