/*
	An Example on Files
*/

#include<stdio.h>

int main()
{
	FILE *fp;		//Declare a file pointer
	int i;
	
	//-------- Writing string to file --------
	fp = fopen("Integers.001","w");		//Open file
	
	printf("Please enter some positive integers below (- to end): ");
	
	do
	{
		scanf("%d",&i);
		putw(i,fp); 
	}
	while(i>=0);
	
	fclose(fp);			//Close file

	return 0;
}
