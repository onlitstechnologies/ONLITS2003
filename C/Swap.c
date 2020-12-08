/*
	Program to accept two integers in variables a, b and 
	swap (exchange) their contents.
*/

#include<stdio.h>

int main()
{
	int a=10, b=20, c;
	
	c = a;
	a = b;
	b = c;
	
	printf("The values of a and b after swapping are %d and %d, respectively.\n",a, b);
	
	return 0;
}
