#include<stdio.h>
int main()
{
	int a=20;
	int *p;
	p=&a;
	printf("a=%d\n",a);
	printf("address of a=%d\n",&a);	
	printf("address of *P=%d\n",&p);
	printf("p=%d",*p);	
	

}
