#include<stdio.h>
int main()
{
	int x,y;
	printf("ENTER VALUE OF X : ");
	scanf("%d",&x);
	printf("ENTER VALUE OF Y : ");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("X = %d\n",x);
	printf("Y = %d\n",y);
	return 1;
	
}
