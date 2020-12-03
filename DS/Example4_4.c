/*
	S. Lipsutz - Example 4.4
*/

#include<stdio.h>

int sales300(int AUTO[]);
void print(int AUTO[]);


int main() //driver function
{
	int AUTO[53] = {233,126,396,400,236,299,301,388,500,121,245};	

	int num = sales300(AUTO);
	
	printf("There are %d years when sales of more than 300 units were recorded.\n", num);
	
	printf("The sales figures for the year 1932 to 1984 are:\n");
	print(AUTO);
}
int sales300(int AUTO[])
{
	int k, num=0;
	
	for(k=0; k<53; k++)
	{
		if(AUTO[k]>300)	//Traversing
		{
			num++;
		}
	} 
	
	return num;
}

void print(int AUTO[])
{
	int k;
	
	for(k=0; k<53; k++)
	{
		printf("%-5d%5d\n", k+1932, AUTO[k]);	//Traversing
	}	
}
