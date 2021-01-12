/*
	Fibonacci Series using loop
*/

#include<stdio.h>

int main()
{
	int n, ft=0, st=1, nt, i=1;
	
	printf("For how many terms you want to display fibonacci series: ");
	scanf("%d", &n);
	
	printf("Fibonacci series for %d terms is:\n", n);
	printf("%d %d ", ft, st);
	
	for(i=1; i<=n-2; i++)
	{
		nt = ft + st;
		
		printf("%d ", nt);
		
		ft = st;
		st = nt;	
	}
	
	printf("\n");
	return 0;
}
