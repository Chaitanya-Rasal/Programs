#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int n;
	char str[20],str2[20],str3[20];
	do{
	
	printf("menu\n");
	printf("1)length\n2)copy\n3)exit\n4)concatination\n");
	printf("enter your choice");
	scanf("%d",&n);
	fflush(stdin);
	switch(n)
	{
		case 1:
		printf("Enter string ");
		scanf("%s",&str);
		printf("length of string = %d\n",strlen(str));
		break;
		
		case 2:
		printf("Enter string ");
		scanf("%s",&str);
		strcpy(str2,str);
		printf("string = %s\n",str2);
		break;
		
		case 3:
		exit(0);
		
		case 4:
		printf("Enter string ");
		scanf("%s",&str);
		printf("Enter string ");
		scanf("%s",&str2);
		printf("%s ",strcat(str,str2));
		break;
		
		default:
			printf("enter valid case\n");
			break;
	}
}while(n>0);
	
	
}


