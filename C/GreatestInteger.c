/*
	PROGRAM TO ACCEPT 5 INTEGERS AND FIND THE GREATEST ONE
*/

#include<stdio.h>

int main()
{
	int nos[5], g, i;
	
	printf("Please enter 5 integers below:\n");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &nos[i]);
		
		if(i==0)
		{
			g=nos[0];
		}
		else
		{
			if(g<nos[i])
			{
				g = nos[i];
			}
		}
	}
	
	
	printf("The greatest of ");
	
	for(i=0; i<5; i++)
	{
		printf("%d, ", nos[i]);
	}
	
	printf(" is %d.\n", g);
	
	return 0;
}
