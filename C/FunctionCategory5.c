/*
	Program to demostrate category 5 of function (Returning multiple vales)
	
*/
#include<stdio.h>

void divide(int*, int*, int*, int*);

int main()
{
	int dd, dv, q, r;
	
	printf("Please enter dividend: ");
	scanf("%d", &dd);
	
	printf("Please enter divisor: ");
	scanf("%d", &dv);
	
	divide(&dd, &dv, &q, &r);
	
	printf("The quotient is %d.\n", q);
	printf("The remainder is %d.\n", r);
	
	return 0;
}

void divide(int *dd, int *dv, int *q, int *r)
{
	*q = (*dd)/(*dv);
	*r = (*dd)%(*dv);
}
