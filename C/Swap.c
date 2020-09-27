/*
	PROGRAM TO ACCEPT TWO INTEGER IS IN VARIABLE AND SWAP THEIR CONTENTS
*/

#include<stdio.h>

int main()
{
	int a, b, t;
	
	printf("Please enter the value of a: ");
	scanf("%d",&a);
	printf("Please enter the value of b: ");
	scanf("%d",&b);
	
	t = a;
	a = b;
	b = t;
	
	printf("The value of a and b after swapping are %d and %d, respectively.\n", a, b);
	
	return 0;
}
