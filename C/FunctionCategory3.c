/*
	Functions with arguments and one return value.
*/

int add(int x, int y);				//Function Declaration/Protype

#include<stdio.h>

int main()
{
	int a, b, c;
	
	printf("Please enter a number: ");
	scanf("%d", &a);
	
	printf("Please enter another number: ");
	scanf("%d", &b);
	
	
	c = add(a, b);				//Function Call
	
	printf("The sum is %d.\n", c);
	
	return 0;
}

int add(int x, int y)				//Function Definition
{
	int z;
	
	z = x + y;
	
	return z;
}
