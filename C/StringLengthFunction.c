/*
	PROGRAM TO FIND THE LENGTH OF A STRING CREATING A SEPARATE FUNCTION
*/

#include<stdio.h>
int str_len(const char*);

int main()
{
	char str[500];
	int i=0;
	
	printf("Please enter a string: ");
	scanf("%[^\n]", str);
	
	i = str_len(str);
	
	printf("The length of %s is %d.\n", str, i);
	
	return 0;
}

int str_len(const char *x)
{
	int i=0;
	
	while(*x != '\0')
	{
		i++;
		x++;
	}
	return i;
}

