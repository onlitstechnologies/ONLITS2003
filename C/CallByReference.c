#include<stdio.h>

int add(int*, int*);

int main()
{
	int a, b, c;
	
	printf("Please enter a number: ");
	scanf("%d", &a);
	
	printf("Please enter another number: ");
	scanf("%d", &b);
	
	c = add(&a, &b);
	
	printf("The sum is %d.\n", c);
	
	return 0;
}

int add(int *p, int *q)
{
	int r;
	
	r = *p + *q;
	
	return r;
}
