#include<stdio.h>

int main()
{
	int l, b, a, p;
	printf("Please enter length (in cms): ");
	scanf("%d", &l);
	printf("Please enter breadth (in cms): ");
	scanf("%d", &b);
	
	a = l * b;
	
	p = 2 * (l + b);
	
	printf("The area is %d sq. cms.\n", a);
	printf("The perimeter is %d cms.\n", p);
}
