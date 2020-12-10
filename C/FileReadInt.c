/*
	An Example on Files
*/

#include<stdio.h>

int main()
{
	FILE *fp;		//Declare a file pointer
	int i;
	
	//-------- Writing string to file --------
	fp = fopen("Integers.001","r");		//Open file
	
	printf("The file contains:\n");
	
	do
	{
		i = getw(fp);
		printf("%d\n", i);; 
	}
	while(i>=0);
	
	fclose(fp);			//Close file
	//--------------------------------------------
	
	return 0;
}
