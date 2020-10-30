/*Ex_2.10: 	Program to illustrate the use of symbolic constants is a real-life application (using 
			area or circle program*/
			
#include<stdio.h>
#define PI 3.14				//Symbolic constant

int main()
{
	float r, a;
	
	printf("Please enter radius: ");
	scanf("%f", &r);
	
	a = PI * r * r;
	
	printf("The area is %1.2f.", a);
	
	return 0;
}