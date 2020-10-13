#include<stdio.h>

int main()
{
	int yr;
	printf("Enter a year: ");
	scanf("%d", &yr);
	
	if((yr%4==0 && yr%100!=0) || yr%400==0)
	{
		printf("%d is leap year.\n", yr);
	}
	else
	{
		printf("%d is common year.\n", yr);
	}

	return 0;
}
