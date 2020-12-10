/*
	An Example on Files
*/

#include<stdio.h>

int main()
{
	FILE *fp;		//Declare a file pointer
	char ch;
	
	//-------- Writing string to file --------
	fp = fopen("String.001","r");		//Open file
	
	printf("The file contains:\n");
	
	while((ch=getc(fp))!= EOF)
	{
		putchar(ch); 
	}
	printf("\n");
	
	fclose(fp);			//Close file
	//--------------------------------------------
	
	return 0;
}
