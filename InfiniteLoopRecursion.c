#include<stdio.h>

void infinite();

int main()
{
	infinite();
	return 0;
}

void infinite()
{
	printf("Infinite loop!\n");
	infinite();						//Call to self
}
