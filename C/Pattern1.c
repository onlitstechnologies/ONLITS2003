#include<stdio.h>

int main()
{
	int i, j;
	
	for(i=1; i<=5; i++)			//outer loop
	{
		for(j=1; j<=5; j++)		//inner loop
		{
			printf("* ");
		}
		printf("\n");
	}
}

/*
	Nesting of Loop: Using one loop inside another
*/
