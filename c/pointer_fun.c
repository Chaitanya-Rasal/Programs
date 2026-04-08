#include<stdio.h>
int pointer(int *sum,int *avg,int *pro,int a,int b);

int main()
{
	int a=20,b=20;
	int sum,avg,pro;
	pointer(&sum,&avg,&pro,a,b);
	printf("sum= %d\navg= %d\npro= %d\n",sum,avg,pro);
	
	return 1;

}
int pointer(int *sum,int *avg,int *pro,int a,int b)
{
	*sum=a+b;
	*avg=(a+b)/2;
	*pro=a*b;
	
}


