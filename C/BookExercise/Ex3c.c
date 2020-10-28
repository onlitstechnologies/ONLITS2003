/*
	Let Us C:  Exercise 3(c)
*/

#include<stdio.h>

int main()
{
	int m, n, i, p=1;
	
	printf("Please enter a number: ");
	scanf("%d", &m);
	
	printf("Printf enter another number: ");
	scanf("%d", &n);
	
	for(for i=1; i<=n; i++)
	{
		p = p * m;
	}
	
	printf("%d raised to the power %d is %d.\n", m, n, p);
	
	return 0;
}
