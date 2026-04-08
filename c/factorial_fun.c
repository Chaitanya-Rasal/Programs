#include<stdio.h>
int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
    return f;
}
int main()
{
	int n;
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	printf("%d",fact(n));
		return 0;
}
