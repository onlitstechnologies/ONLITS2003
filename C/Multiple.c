#include<stdio.h>

int main()
{	
	int n, x, i, m;
	
	printf("Please enter the number: ");
	scanf("%d", &n);
	printf("Please enter the number of multiples to displayed: ");
	scanf("%d", &x);
	
	printf("The first %d multiples of %d are: ", x, n);
	
	for(i=1; i<x; i++)
	{
		m = n * i;
		printf("%d, ",m);
	}
	
	m = n * i;
	printf("and %d.\n",m);
	
	return 0;
}
