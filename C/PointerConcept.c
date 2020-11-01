#include<stdio.h>

int main()
{
	int a=10;
	int *p;
	
	printf("The value of a is %d.\n", a);
	printf("The address of a is %p.\n", &a);
	p = &a;
	printf("The value of p is %p, which is the address of a.\n", p);
	printf("The address of p is %p.\n", &p);
	printf("The value a which is %d is displayed here using the indirection operation.\n", *p);
	return 0;
}

/*
	& - address of operator
*/
