#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*p,n,a[20];
	printf("how many elements in your array : ");
	scanf("%d",&n);
	p=&a[0];
	for(i=0;i<n;i++)
	{
		printf("Enter element  : " );
		scanf("%d",p);
		p++;
	}
	p=&a[n-1];
	printf("reverse array element \n" );
	for(i=n-1;i>=0;i--)
	{
		printf(" element  : %d\n",*p );
		p--;
	}
	
	
}
