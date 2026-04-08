#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *fptr;
	char string[100],c;
	scanf("%s",string);
	fptr=fopen(string,"r");
	if(fptr==NULL)
	{
		printf("%s file not exist ",string);
		exit(0);
	}
	else
	{
		c=fgetc(fptr);
		while(c!=EOF)
		{
			printf("%c",c);
			c=fgetc(fptr);
		}
		
	}
	fclose(fptr);	
}
