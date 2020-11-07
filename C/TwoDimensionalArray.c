/*
	PROGRAM TO DEMONSTRATE A TWO DIMENSIONAL ARRAY
*/
#include<stdio.h>

int main()
{
	int mat[3][3], i, j;
	
	printf("Please enter elements of a 3 X 3 matrix:\n");
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("The resultant matrix is:\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}


/*
	1366 X 768	-	Screen Resolution
	1920 X 1080 -   Full HD Resolution
*/
