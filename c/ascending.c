#include<stdio.h>
int main()
{
	int a[20],i,j,n;
		printf("HOW MANY ELEMENT IN YOUR ARRAY :");
  		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("ENTER NUMBER a[%d]:",i);
			scanf("%d",&a[i]);		
		}	
		
	return 1;
}
