
/* Accept n integers in array A. Pass this array and two counter variables to a function which
will set the first counter to the total number of even values in the array and the other to the total
number of odd values. Display these counts in main. (Hint: Pass the addresses of the counters to
the function)*/ 
#include<stdio.h>
void even_odd(int *,int *,int *,int);
int main()
{
	int a[100],c1=0,c2=0,n,i,*p;
	printf("how many number in your array : ");
	scanf("%d",&n);
	p=&a[0];
	for(i=0;i<n;i++)
	{
		printf("enter number : ");
		scanf("%d",p);
		p++;
	}
	p=&a[0];
		even_odd(p,&c1,&c2,n);
		
		printf("total no of even value in array : %d\n",c1);
		printf("total no of odd value in array : %d\n",c2);
	
	return 1;
}
void even_odd(int*p,int *c1,int *c2,int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		if(*p%2==0)
			*c1=*c1+1;
		else
			*c2=*c2+1;
		p++;
	}
	
	
}
