#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fptr,*fptr1;
	char c;
	fptr=fopen("mr.txt","r");
	fptr1=fopen("kr.txt","w");
	c=fgetc(fptr);
	while(c!=EOF)
	{
		printf("%c",c);
		fprintf(fptr1,"%c",c);
		c=fgetc(fptr);
	
	}
	printf("file copid successfully \n");
	fclose(fptr);
	fclose(fptr1);
	
	
	
	
	
	
	
	
}
