#include<stdio.h>
#include<stdlib.h>
#define NUL 0

int main()
{
	int *p, *table;
	int size;
	
	printf("\nWhat is the size of table? ");
	scanf("%d", &size);
	
	printf("\n");

	/*---------- Memory allocation ---------*/
	
	if((table = malloc(size *sizeof(int))) == NUL)
	{
		printf("No space available \n");
		exit(1);
	}
	
	printf("\nAddress of the first byte is %p\n", table);
	/*-------Reading table values------------*/
	printf("\nInput table values\n");
	
	for(p=table; p<table + size; p++)
		scanf("%d",p);
	
	/*Printing table values in reverse order*/
	for(p=table + size -1; p>=table; p--)
		printf("%d is stored at address %p\n", *p, p);
}
