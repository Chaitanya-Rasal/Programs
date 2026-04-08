#include<stdio.h>
int main()
{
	int n,sum=0,a;
	printf("enter number :");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{	
		sum=sum*10+n%10;
		n=n/10;
	}
	if(sum==a)
	printf("%d is palindrome \n",a);
	else
	printf("%d is not palindrome \n",a);
	
	return 1;
}
