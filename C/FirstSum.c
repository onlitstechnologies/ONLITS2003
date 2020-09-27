/*
	Program to add two integers
	
	Developed as class work														on 27/09/2020			

*/

#include<stdio.h>

int main()				//Following ANSI/ISO standard 
{
	int a, b, c;
	
	printf("!------------------PROGRAM TO ADD TWO INTEGERS----------------!\n\n\n");
	
	printf("Please enter a number: ");
	scanf("%d",&a);
	printf("Please enter another number: ");
	scanf("%d",&b);
	
	c = a + b;
	
	printf("The sum is %d.\n",c);
	
	printf("Thank you for using my program...\n\n");
	
	return 0;
}

/*
	Abstraction: Hiding details
	
	String: a group of character
	
	%d acts as a placeholder and also does the job of data type conversion.
	
	Easy for users to use: User friendly
	
	Software should be sellable
	
	C is case sensitive
	
	ASCII values of A(65) and a(97).
*/
