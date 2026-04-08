#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("HOW MANY ELEMENT IN YOUR ARRAY :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("ENTER NUMBER a[%d]:",i);
		scanf("%d",&a[i]);		
	}	
	printf("REVERSE\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);	
			
	}
	return 0;
	
}
