#include<stdio.h>
#include<stdlib.h>
void fun(int*,int,int*,int *);
void main(){
	int a[20],ec=0,n,oc=0,*p,i;
	p=&a[0];
	printf("how many elements in your array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter number ");
		scanf("%d",p);
		p++;
	}
	fun(&a[0],n,&ec,&oc);
	
	printf("even count =%d \nodd count=%d",ec,oc);
	
}
void fun(int *a,int n,int*ec,int*oc)
{
	int i;
	for(i=0;i<n;i++)
	{	
		if(a[i]%2==0)
		*ec=*ec+1;
		else
		*oc=*oc+1;
	}
	
}
