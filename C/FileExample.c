/*
	An Example on Files
*/

#include<stdio.h>

int main()
{
	FILE *fp;		//Declare a file pointer
	char ch;
	
	//-------- Writing string to file --------
	fp = fopen("String.001","w");		//Open file
	
	printf("Please enter a string to save: ");
	
	while((ch=getchar())!= '\n')
	{
		putc(ch,fp); 
	}
	
	fclose(fp);			//Close file
	//--------------------------------------------
	
	//----------- Reading string from file --------
	printf("The entered string is:\n");
	
	
	//----------------------------------------------
	return 0;
}
