/*
	Algorithm 4.1: Traversing a Linear Array
*/

#include<stdio.h>

int main()
{
	int la[] = {23,45,8,100,6};
	int lb=0, ub=4, k;
	k = lb;
	printf("The elements of array are:\n");
	while(k<=ub)
	{
		printf("%d\n", la[k]);
		k++;
	}
	return 0;
}
