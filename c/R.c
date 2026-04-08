#include<stdio.h>
void interchange(int *a,int* b)
{
	int y;
	y=*a;
	*a=*b;
	*b=y;	
}
int main()
{
	int a,b;
	printf("enter a ");
	scanf("%d",&a);
	printf("enter b ");
	scanf("%d",&b);
	interchange(&a,&b);
	printf("after interchanging\n ");
	printf("a= %d \n",a);
	printf("b= %d\n",b);
	return 1;
}
