/*
	Algorithm 4.1': Traversing a Linear Array
*/

#include<stdio.h>

int main()
{
	int la[] = {23,45,8,100,6};
	int lb=0, ub=4, k;
	
	printf("The elements of array are:\n");
	for(k = lb; k<=ub; k++)
	{
		printf("%d\n", la[k]);
	}
	return 0;
}
