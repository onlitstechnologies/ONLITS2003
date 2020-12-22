/*
	String Length using command line argument
*/

#include<stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int len=0;
	char c;
	
	fp = fopen(argv[1],"r");
	
	while((c=getc(fp)) != EOF)
	{
		len++;
	}
	
	printf("Length of the file is %d bytes.\n", len);
	
	return 0;
}
