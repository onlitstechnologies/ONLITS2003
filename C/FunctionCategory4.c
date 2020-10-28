/*
	Functions with no arguments but return a value.
*/

int add();				//Function Declaration/Protype

#include<stdio.h>

int main()
{
	int a, b, c;
	
	c = add();				//Function Call
	
	printf("The sum is %d.\n", c);
	
	return 0;
}

int add()				//Function Definition
{
	int x, y, z;
	printf("Please enter a number: ");
	scanf("%d", &x);
	
	printf("Please enter another number: ");
	scanf("%d", &y);
	
	z = x + y;
	
	return z;
}
