#include<stdio.h>
int main()
{
	int a[4]={1,2,3,4},i,*p;
	for(i=0;i<4;i++)
	{
		p=&a[i];
		printf("address of a[%d]=%d\n",i,p);
		p++;
		
	}
	
	
	return 1;
}
