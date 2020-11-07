/*
	Let Us C: Ex 8c
	
	PROGRAM TO FIND THE SMALLEST NUMBER IN A ARRAY USING POINTER
*/

#include<stdio.h>

int smallest(int*);

int main()
{
	int nos[] = {45, 14, 5 ,66, 99};	//Array Initialization
	
	printf("The smallest integer is %d.\n", smallest(nos));
	return 0;
}

int smallest(int *p)
{

	int sm = *p, i;
	
	for(i=0; i<5; i++)
	{
		if(sm>*p)
		{
			sm = *p;
		}
		p++;
	}
	return sm;
}
