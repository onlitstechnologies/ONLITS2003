#include<stdio.h>

int main()
{
	int i, j, k;
	
	for(i=1; i<=5; i++)			//outer loop
	{
		for(j=0; j<=5-i; j++)		//inner loop
		{
			printf(" ");
		}
		
		for(k=1; k<=i; k++)		//inner loop
		{
			printf("%d ", k);
		}
		printf("\n");
	}
}

/*
	Nesting of Loop: Using one loop inside another
*/
