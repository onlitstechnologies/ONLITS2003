#include<stdio.h>

#define size 20

int main()
{
	int integer[size], i, j, t;
	printf("Please enter five integers below:\n");
	
	for(i=0;i<size;i++)
		scanf("%d",&integer[i]);
	
	for(i=0;i<size-1;i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(integer[i]>integer[j])
			{
				t = integer[i];
				integer[i] = integer[j];
				integer[j] = t;
			}
		}
	}
	
	printf("The sorted order is :\n");

	for(i=0;i<size;i++)
		printf("%d\n",integer[i]);
	return 0;
}

/*
	Scalable

*/
