#include<stdio.h>
int main()
{
	int n,i,j;
	printf("ENTER NUMBER : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t*****TABLE OF %d*****\n",i);
		for(j=1;j<=10;j++)
		{
			printf("\t\t%d\n\n",i*j);
		}
		
	}	
	return 0;
}
