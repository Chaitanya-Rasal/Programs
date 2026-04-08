#include<stdio.h>
int main()
{
	int a,b,i,cnt=0;
	printf("enter 1st number : ");
	scanf("%d",&a);
	printf("enter 2nd number : ");
	scanf("%d",&b);
	if(a>b)
	{
		for(i=b+1;i<a;i++)
		{
			printf("%d\n",i);
			cnt++;	
		}
	}
	else
	{
		for(i=a+1;i<b;i++)
		{
			printf("%d\n",i);
			cnt++;	
		}
		
	}
			printf("TOTAL NUMBERS :%d\n",cnt);
	return 1;
	
}
