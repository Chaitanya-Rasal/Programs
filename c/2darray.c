#include<stdio.h>
void accept(int r,int c,int a[][20])

{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		printf("ENTER NUMBER : ");
	    scanf("%d",&a[i][j]);
			
		}
	}
	
}
void display(int r,int c,int a[][20])
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		printf("%d\t",a[i][j]);
	    		
		}
		printf("\n");
	}
	
}
void add(int r,int c,int a[][20],int b[][20])
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		printf("%d\t",a[i][j]+b[i][j]);
	    		
		}
		printf("\n");
	}
	
}
void transpose(int r,int c,int a[][20],int t[][20])
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		t[j][i]=a[i][j];		
		}
	}
	printf("\n");
		for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		printf("%d\t",t[i][j]);
	    		
		}
		printf("\n");
	}

}

int main()
{
	int r,c,a[20][20],b[20][20],t[20][20],i,j;
	printf("how many row in your matrix : ");
	scanf("%d",&r);
	printf("how many column in your matrix : ");
	scanf("%d",&c);
	printf("\nENTER MATRIX A\n");
	accept(r,c,a);
	display(r,c,a);
	printf("\nENTER MATRIX B\n");
	accept(r,c,b);
	display(r,c,b);
	printf("\nADDITION OF TWO MATRIX\n");
	add(r,c,a,b);
	printf("\nTRANSPOSE OF MATRIX A\n");
	transpose(r,c,a,t);
	printf("\nTRANSPOSE OF MATRIX B\n");
	transpose(r,c,b,t);
	
	return 1;
}

