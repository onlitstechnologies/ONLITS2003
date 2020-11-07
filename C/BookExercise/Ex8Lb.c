/*
	LET US C (EX 8Lb): Write a program to pick up the largest number from any 5 row
by 5 column matrix.
*/
#include<stdio.h>

int main()
{
	int mat[5][5], i, j, l;
	
	printf("Please enter elements of a 5 X 5 matrix:\n");
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			
			if(i==0 && j==0)
			{
				l = mat[0][0];
			}
			else
			{
				if(l<mat[i][j])
				{
					l = mat[i][j];
				}
			}
		}
	}
	
	printf("The resultant matrix is:\n");
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}
	printf("The largest element in the above matrix is %d.\n", l);

	return 0;
}


/*
	1366 X 768	-	Screen Resolution
	1920 X 1080 -   Full HD Resolution
*/
