/*
	PROGRAM TO ACCEPT A CHARACTER AND DISPLAY IT
*/

#include<stdio.h>

int main()
{
	char ch;
	
	printf("Please enter a character: ");
	scanf("%c", &ch);
	
	printf("The character you entered is %c and its character code is %d.\n", ch, ch);
	
	return 0;
}

//ASCII: American Standard Code for Information Interchange. 256
//BCD
//EBCDIC
//Unicode
