#include<stdio.h>
int main()
{
	int i,f=0,s=0,n=1,no;
	printf("enter number : ");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		printf("%d\t",f);
		f=s;
		s=n;
		n=f+s;
	}
	return 0;
	
}
