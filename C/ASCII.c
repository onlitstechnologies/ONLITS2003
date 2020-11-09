/*
	DISPLAY CHARACTER USING THEIR ASCII VALUES
*/

#include<stdio.h>

int main()
{
	int i;
	printf("ASCII Character\n");
	printf("----------------\n");
	for(i=0; i<256; i++)
	{
		printf("%5d%10c\n", i, i);
	}
	printf("----------------\n");
	return 0;	
}
