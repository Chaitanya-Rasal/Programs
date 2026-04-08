#include<stdio.h>
int main()
{
	int y;
	printf("ENTER YEAR :");
	scanf("%d",&y);
	if((y%4==0 && y%100!=0) || (y%400==0))
	printf("%d IS LEAP YEAR !!\n",y);
	else
	printf("%d IS NOT LEAP YEAR !!\n",y);

	return 1;
}
