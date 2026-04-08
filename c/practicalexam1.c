#include<stdio.h>
void time(int*h ,int*m,int *s,int ss)
{
	int a,b,t;
	
	a=*h*3600;
	b=*m*60;
	t=*s+ss+a+b;
	*h=(t/3600);
	*m=(t-(*h*3600))/60;
	*s=(t-(*h*3600)-(*m*60));
	
	
}
int main()
{
	int h,s,ss,m,t; 
	
	printf("enter H:M:S");
	scanf("%d%d%d",&h,&m,&s);
	printf("Enter extra seconds");
	scanf("%d",&ss);
	time(&h,&m,&s,ss);
	printf("correct time =%d:%d:%d",h,m,s);
	return 1;
	
}
