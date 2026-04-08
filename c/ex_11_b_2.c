/*2. Write a function which accepts a number and three flags as parameters. If the number is 
even, set the first flag to 1. If the number is prime, set the second flag to 1. If the number is 
divisible by 3 or 7, set the third flag to 1. In main, accept an integer and use this function to check 
if it is even, prime and divisible by 3 or 7. (Hint : pass the addresses of flags to the function)*/
#include<stdio.h>
void check(int *,int *,int *,int);
void main()
{
	int n,f1=0,f2=1,f3=0;
	printf("f1 : even\nf2 : prime\nf3 : divisible by 3&7\n ");
	printf("enter number : ");
	scanf("%d",&n);
	 check(&f1,&f2,&f3,n);
	printf("f1 :%d\nf2 :%d\nf3 :%d",f1,f2,f3);
	

} 
void check(int *f1,int *f2,int *f3,int n)
{
	int i;
	if(n%2==0)
	{
		*f1=1;
	}
	if(n%3==0 && n%7==0)
	{
		*f3=1;
	}
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		*f2=0;
	}
	
	
}
