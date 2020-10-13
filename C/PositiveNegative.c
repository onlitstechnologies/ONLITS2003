#include<stdio.h>

int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	if(n<0)
	{
		printf("%d is negative.\n", n);
	}
	else
	{
		printf("%d is positive.\n", n);
	}

	return 0;
}
