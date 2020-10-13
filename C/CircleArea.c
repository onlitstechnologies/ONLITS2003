#include<stdio.h>

#define PI 3.14


int main()
{
	//const float PI = 3.14;
	float r, a, c;
	printf("Please enter radius (in cms): ");
	scanf("%f", &r);
	
	a = PI * r * r;
	
	c = 2 * PI * r;
	
	printf("The area is %1.2f sq. cms.\n", a);
	printf("The circumference is %1.2f cms.\n", c);
	
	return 0;
}

// The statements starting with '#' are called
// pre-processor directives
