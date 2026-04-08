#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("how many number in your array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		
	}
	printf("****reverse order*****\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
		
	}
	
	
	return 0;
}
