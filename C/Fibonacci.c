#include<stdio.h>
int main()
{
	int n, ft=0, st=1, nt, i;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n<=1)
	{
		printf("Invalid Input!\n");
	}
	else
	{
		printf("Fibonacci Series up %d terms is:\n",n);
		printf("%d, %d, ", ft, st);
		for(i=3; i<n; i++)
		{
			nt = ft + st;
			printf("%d, ", nt);
			ft = st;
			st = nt;
		}
		nt = ft + st;
		printf("%d.\n",nt);
	}
	return 0;
}
