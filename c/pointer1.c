#include<stdio.h>
void pointer(int *,int *,int ,int );
int main()
{
	int a,b,sum,pro;
 	printf("enter a ");
 	scanf("%d",&a);
 	
 	printf("enter b ");
 	scanf("%d",&b);
 	pointer(&sum,&pro,a,b);
 	
 	printf("sum=%d\n pro=%d",sum,pro);
 	return 1;
	
}
void pointer(int *sum,int *pro,int a,int b)
{
	*sum=a+b;
	*pro=a*b;
	
}
