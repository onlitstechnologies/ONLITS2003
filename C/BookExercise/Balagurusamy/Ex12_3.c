/*
	ANSI C: Exercise 12.3
*/

#include<stdio.h>

int main()
{
	FILE *file1, *file2;
	char c;
	int flag = 0;
	
	file1 = fopen("file1.001","r");
	file2 = fopen("file2.001","r");
	
	while((c=getc(file1)) != EOF)
	{
		if(c!=getc(file2))
		{
			flag=1;
			break;
		}
	}
	
	fclose(file1);
	fclose(file2);
	
	printf("%d\n",flag);
	
	return 0;
}
