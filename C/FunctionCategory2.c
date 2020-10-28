/*
	Functions with arguments and no return value.
*/

void add(int x, int y);				//Function Declaration/Protype

#include<stdio.h>

int main()
{
	int a, b;
	
	printf("Please enter a number: ");
	scanf("%d", &a);
	
	printf("Please enter another number: ");
	scanf("%d", &b);
	
	
	add(a, b);				//Function Call
}

void add(int x, int y)				//Function Definition
{
	int z;
	
	z = x + y;
	
	printf("The sum is %d.\n", z);	
}
