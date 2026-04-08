#include<stdio.h>
int main()
{
	int s=0,n,i;
		printf("enter number :");
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				s=s+i;
			}
		}
		if(s==n)
		printf("%d is perfect number",n);
		else
		printf("%d is not perfect number",n);
	return 1;
}
