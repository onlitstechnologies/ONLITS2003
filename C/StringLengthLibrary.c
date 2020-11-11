/*
	PROGRAM TO FIND THE LENGTH OF A STRING USING LIBRARY FUNCTION strlen()
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	int i;
	
	printf("Please enter a string: ");
	scanf("%s", str);
	
	i = strlen(str);
	
	printf("The length of %s is %d.\n", str, i);
	
	return 0;
}

/*
	implicit (not clearly expressed) declaration of function strlen()
	explicit (clearly expressed)
*/
