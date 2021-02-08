#include<stdio.h>

int main()
{
	int n, fact=1, i;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	
	for(i=n; i>=1; i--)
	{
		fact = fact * i;
	}
	
	printf("%d! is %d.\n", n, fact);
	
	return 0;
}

/*
	5! = 5 X 4 X 3 x 2 x 1	=	120
	
	approx 4 billion int in the gcc. (correct upto 12!)
	for turbo c++ it is 32767	(8!)
	
*/
