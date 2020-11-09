/*
	PROGRAM TO ACCEPT 5 CHARACTERS IN AN ARRAY AND DISPLAY THEM
*/

#include<stdio.h>

int main()
{
	int i;
	char ch[5];
	
	printf("Please enter 5 characters below:\n");
	
	for(i=0; i<5; i++)
	{
		scanf("%c", &ch[i]);
	}
	
	printf("The characters you entered are: ");
	
	for(i=0; i<5; i++)
	{
		printf("%c", ch[i]);
	}
	
	return 0;
}
