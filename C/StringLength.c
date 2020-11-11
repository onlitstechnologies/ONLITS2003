/*
	PROGRAM TO FIND THE LENGTH OF A STRING WITHOUT LIBRARY FUNCTION
*/

#include<stdio.h>

int main()
{
	char str[20];
	int i=0;
	
	printf("Please enter a string: ");
	scanf("%s", str);
	
	while(str[i] != '\0')
	{
		i++;
	}
	
	printf("The length of %s is %d.\n", str, i);
	
	return 0;
}
