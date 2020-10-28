/*
	Function with no argument no return value.
*/

void add();				//Function Declaration/Protype

#include<stdio.h>

int main()
{
	add();				//Function Call
}

void add()				//Function Definition
{
	int a, b, c;
	
	printf("Please enter a number: ");
	scanf("%d", &a);
	
	printf("Please enter another number: ");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("The sum is %d.\n", c);	
}
