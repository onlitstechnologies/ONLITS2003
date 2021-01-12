/*
	Generate Fibonacci Series using Recursion
*/

#include<stdio.h>

int fibonacci(int n);

int main()
{
	int n;
	printf("For how many terms fibonacci series is to be displayed: ");
	scanf("%d", &n);
	
	printf("%d %d ", 0 , 1);
	
	fibonacci(n-2);
	
	printf("\n");
	
	return 0;
}

int fibonacci(int n)
{
	static int ft=0, st =1, nt;
	
	if(n>0)
	{
		nt = ft + st;
		ft = st;
		st = nt;
		
		printf("%d ", nt);
		fibonacci(n-1);
	}

}

/*
	0 1 1 2 3 5
*/
