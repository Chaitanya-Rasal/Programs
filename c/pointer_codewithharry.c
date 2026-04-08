#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,11};
	printf("address of 1st element = %d\n",arr);
	printf("address of 1st element = %d\n",&arr[0]);
	printf("address of 2nd element = %d\n",arr+1);
	printf("address of 2nd element = %d\n",&arr[1]);
	
	printf("valude at address of 1st element = %d\n",*arr);
	printf("value at address of 1st element = %d\n",arr[0]);
	printf("value at address of 2nd element = %d\n",*(arr+1));
	printf("value at address of 2nd element = %d\n",arr[1]);
	
	
return 1;	
}
