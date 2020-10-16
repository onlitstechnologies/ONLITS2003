#include<stdio.h>

int main()
{
	long n, fact=1, i;
	
	printf("Please enter a number: ");
	scanf("%ld", &n);
	
	i=n;
	
	while(i>1)
	{
		fact = fact * i;
		i=i-1;
	}
	
	printf("%ld! is %ld.\n", n, fact);
	
	return 0;
}

/*
	5! = 5 X 4 X 3 x 2 x 1	=	120
	
	approx 4 billion int in the gcc. (correct upto 12!)
	for turbo c++ it is 32767	(8!)
*/
