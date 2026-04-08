#include<stdio.h>
void time(int*,int*,int a,int b);
int main()
{
	int a,b,sum,pro;
	printf("enter a & b : ");
	scanf("%d%d",&a,&b);
	time(&sum,&pro,a,b);
	printf("sum=%d\npro=%d",sum,pro);
	return 1;
}
void time(int*sum,int*pro,int a,int b)
{
	*sum=a+b;
	*pro=a*b;
}
