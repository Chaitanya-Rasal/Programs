#include<stdio.h>
int main()
{
	int n,sum=0,s=0,a,b;
	printf("enter number :");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	b=sum;
	while(b>0)
	{
		s=s*10+b%10;
		b=b/10;
	}
	if(a==sum*s)
	printf("%d is magic nnumber \n",a);
	else
	printf("%d is not magic number \n",a);

	return 1;
}
