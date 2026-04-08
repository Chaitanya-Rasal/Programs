#include <stdio.h>
#include <math.h>
int main()
{
	int n, s = 0, a, cnt = 0, x;
x:
	printf("enter number :");
	scanf("%d", &n);
	a = n;
	do
	{
		cnt++;
		n = n / 10;
	} while (n > 0);
	n = a;
	while (n > 0)
	{

		s = s + pow(n % 10, cnt);
		n = n / 10;
	}
	if (a == s)
		printf("%d is amstrong number \n", a);
	else
		printf("%d is not amstrong number \n", a);
	printf("\nfor continue press 1\n");
	scanf("%d", &x);
	if (x == 1)
	{
		goto x;
	}
	else
	{
	}
	return 1;
}
