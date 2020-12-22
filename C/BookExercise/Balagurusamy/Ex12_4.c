/*
	ANSI C: Exercise 12.4
*/

#include<stdio.h>

int main()
{
	FILE *f1, *f2;
	char c;
	
	f1 = fopen("file1.001","a");
	f2 = fopen("file2.001","r");
	
	while((c=getc(f2)) != EOF)
	{
		putc(c, f1);
	}
	
	printf("Append completed!\n");
	
	fclose(f1);
	fclose(f2);
	
	return 0;
}
