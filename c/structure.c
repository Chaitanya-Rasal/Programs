#include<stdio.h>
#include<string.h>

 typedef struct student{
	int rollno;
	char name[100];
	float cgpa;
}cr; // use of typedef keyword 

void display(struct student s1);  // structure to function 

void main()
{
//	int i;
//	cr bcs[10];
//	for(i=0;i<10;i++)
//	{
//		printf("Enter roll no : ");
//		scanf("%d",&bcs[i].rollno);
//		printf("Enter name : ");
//		fgets(bcs[i].name,100,stdin);
//		printf("\n");
//		printf("Enter cgpa : ");
//		scanf("%d",&bcs[i].cgpa);
//	
//	}
	
	
	struct student s1; //1st way to assign values
	s1.rollno=1;
	strcpy(s1.name,"chaitanya");
	s1.cgpa=8.6;
	
	struct student s2={2,"you",9.0}; //2nd way to assign values
	
	printf("rollno = %d\n",s1.rollno);
	printf("name = %s\n",s1.name);
	printf("cgpa = %f\n\n",s1.cgpa);
	
	printf("rollno = %d\n",s2.rollno);
	printf("name = %s\n",s2.name);
	printf("cgpa = %f\n\n",s2.cgpa);
	
	cr s3={84,"raj",9.8}; // typedef cr s3 ,insted of struct student s3
	printf("rollno = %d\n",s3.rollno);
	printf("name = %s\n",s3.name);
	printf("cgpa = %f\n\n",s3.cgpa);
	
	display(s1); // passing structure to function
}
void display(struct student s1)
{
	printf("rollno = %d\n",s1.rollno);
	printf("name = %s\n",s1.name);
	printf("cgpa = %f\n\n",s1.cgpa);
	
}
