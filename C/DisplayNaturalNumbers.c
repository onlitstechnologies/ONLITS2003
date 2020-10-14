//WAP to display the first n natural numbers

#include<stdio.h>

int main()
{
	int i=1, n;
	
	printf("Please enter the value of n: ");
	scanf("%d", &n);
	
	printf("The natural numbers till %d are ", n);
	while(i<n)
	{
		printf("%d, ", i);
		i++;
	}
	
	printf("%d.\n",i);
	
	return 0;
}
