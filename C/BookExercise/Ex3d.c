/*
	Let Us 'C': Exercise 3(d)
*/

#include<stdio.h>

int main()
{
	char i;
	
	printf("ASCII Value\tCharacter\n");
	for(i=0; i<=255; i++)
	{
		printf("%d\t\t%c\n", i, i);
	}
	
	return 0;
}

/*
	char and int are both integral types
	
	they differ in their size
	
	char is 8-bit	= 0 to 255
	int is 32-bit	= 0 to 4 billion
*/
