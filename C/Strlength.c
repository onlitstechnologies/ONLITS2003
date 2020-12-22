/*
	String Length using command line argument
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
	int len=0;
	
	while(*argv[1] != '\0')
	{
		len++;
		argv[1]++;
	}
	
	printf("Length is %d.\n", len);
	
	return 0;
}
