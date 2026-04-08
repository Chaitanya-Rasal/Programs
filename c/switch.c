#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,no,f,i,cnt,a,sum,r,rev,b;
	do 
	{

		printf("*****MENU*****\n");
		printf("1] PRIME\n2] AMSTRONG\n3] PERFECT NUMBER\n4] MAGIC\n5] EXIT");	
		printf("\nENTER YOUR CHOICE :");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("ENTER NUMBER :");
				scanf("%d",&no);
				f=0;
				for(i=2;i<no;i++)
				{
					if(no%i==0)
					f=1;
					break;	
				}	
				if(f==0)
				printf("%d IS PRIME\n\n",no);
				else 
				printf("%d IS NOT PRIME\n\n",no);
				break;
				
			case 2:
				cnt=0;
				sum=0;
				printf("ENTER NUMBER :");
				scanf("%d",&no);
				a=no;
				do{
					cnt++;
					no=no/10;
				}while(no>0);
				printf("TOTAL DIGITS :%d\n",cnt);
				no=a;
				while(no>0)
				{
					r=no%10;
					sum=sum+pow(r,cnt);
					no=no/10;
				}
				if(sum==a)
				printf("%d IS AMSTRONG NUMBER\n\n",a);
				else
				printf("%d IS NOT AMSTRONG NUMBER\n\n",a);	
				break;
			case 3:
				printf("ENTER NUMBER :");
				scanf("%d",&no);
				sum=0;
				a=no;
				for(i=1;i<no;i++)
				{
					if(no%i==0)
					{
						sum=sum+i;
					}
				}
					if(sum==a)
					printf("%d IS PERFECT NUMBER\n\n",a);
					else
					printf("%d IS NOT PERFECT NUMBER\n\n",a);
				
				break;
				
			case 4:
					printf("ENTER NUMBER :");
					scanf("%d",&no);
					rev=0;
					sum=0;
					a=no;
					while(no>0)
					{
						r=no%10;
						sum=sum+r;
						no=no/10;
					}
					n=sum;
				//	printf("%d\n\n",n);
					while(sum>0)
					{
						r=sum%10;
						rev=rev*10+r;
						sum=sum/10;
					}
					b=rev;
				//	printf("%d\n\n",rev);
					f=n*b;
					if(f==a)
					printf("%d IS MAGIC NUMBER\n\n",a);
					else
					printf("%d IS NOT MAGIC NUMBER\n\n",a);
					
				break;
						
			case 5:
				exit(0);	
			
					
			default:
				printf("INVALID CASE\n\n");
				break;
		}
	}while(n>0);
	return 0;
	
}
