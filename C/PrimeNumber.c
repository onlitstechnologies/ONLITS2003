#include<stdio.h>

int main()
{
	int n, r, i, f=0;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		r = n%i;
		if(r==0)
		{
			f++;
		}
	}
	
	if(f==2)
	{
		printf("%d is a prime number.\n", n);
	}
	else
	{
		printf("%d is a composite number.\n", n);
	}
	
	return 0;
}


/*
	6%1=0, 6%2=0, 6%3=0, 6%4=2, 6%5=1, 6%6=0
*/
