#include<stdio.h>
int main()
{
	int a,n,s=0;
	printf("enter number : ");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		s=s*10+n%10;
		n=n/10;
	}
	if(s==a)
	printf("%d is palindrome",a);
	else
	printf("%d is not palindrome",a);
	return 1;
	
}
