#include<stdio.h>
int main()
{
	int age=19;
	int *ptr=&age;
	int **agee=&ptr;
	
	printf("%d\n",*(&age)); 
	printf("%d",**agee); 
	
	
	
	
	return 1;
}
