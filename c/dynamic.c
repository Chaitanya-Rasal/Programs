#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*p,sum=0;
	printf("how many elements in your array : ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf(" enter element : ");
		scanf("%d",p);
		sum=sum+*p;
	}
	printf("sum : %d",sum);
	free(p);
	return 1;
}
