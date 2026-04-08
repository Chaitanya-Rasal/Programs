#include <stdio.h>
#include <string.h>
void main()
{
	char str1[100], str2[100];
	char *ch;
	ch = "rasal";
	printf("name= %s \n", ch);
	printf("Enter 1st string : ");
	fgets(str1, 100, stdin);
	printf("Enter 2nd string : ");
	fgets(str2, 100, stdin);
	// standard library functions
	strcat(str1, str2);
	printf("strcat= %s ", str2);
	// str1="chaitanya";    in character array we can't change value
	ch = "chaitanya"; // we cna change value of character pointer
	printf("name= %s ", ch);
}
