#include<stdio.h>
int main()
{
	int i,j,r,c,a[20][20];
	printf("how many row in your matrix : ");
	scanf("%d",&r);
	printf("how many column in your matrix : ");
	scanf("%d",&c);

	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		printf("ENTER NUMBER : ");
	    scanf("%d",&a[i][j]);
			
		}
	}
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		printf("%d\t",a[i][j]);
	    		
		}
		printf("\n");
	}

	for(j=1;j<=c;j++)
	{
		for(i=r;i>=1;i--)

		{
			printf("%d",a[i][j]);
		}
	}
	return 1;
}
