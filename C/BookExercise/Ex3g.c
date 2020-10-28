/*
	Let Us C: Exercise 3(g)
*/

#include<stdio.h>

int main()
{
	int no, p=0, n=0, z=0;
	char ch='y';
	
	do
	{
		printf("Enter a number: ");
		scanf("%d", &no);
		getchar();			//To eat up the line feed
		
		if(no>0)
			p++;
		else if(no<0)
			n++;
		else
			z++;
			
		printf("Do you want to enter another number (y/n): ");
		scanf("%c", &ch);
	}
	while(ch=='y');
	
	printf("You entered %d positive numbers, %d negative numbers and %d zeros.\n", p, n, z);
	
	return 0;
}
