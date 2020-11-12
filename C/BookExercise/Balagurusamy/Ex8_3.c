/*
	PROGRAMMING IN ANSI C
	EXERCISE: 8.3
*/

#include<stdio.h>

int main()
{
	char str[20];
	int c, i, l;
	
	printf("Please enter a string: ");
	scanf("%s", str);
	
	printf("From which index characters has to be extracted: ");
	scanf("%d", &i);
	
	printf("How many characters has to be extracted: ");
	scanf("%d", &l);
	
	
	printf("The extracted characters are: ");
	for(c=i; c<i+l; c++)
	{
		printf("%c", str[c]);
	}
	
	printf("\n");
	
	return 0;
}
