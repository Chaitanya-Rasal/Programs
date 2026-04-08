// a=1/2(b*h)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    float b, h, area;
    printf("enter breadth : ");
    scanf("%f", &b);
    printf("\nenter height : ");
    scanf("%f", &h);
    area = (b * h) / 2;
    printf("area of triangle : %.2f", area);
}