/*
	PROGRAM TO ACCEPT AGE OF 5 STUDENT AND FIND THE AVERAGE AGE
*/
#include<stdio.h>

int main()
{
	int age[5], tot=0, avg, i;
	
	for(i=0; i<5; i++)
	{
		printf("Enter age %d: ", i+1);
		scanf("%d", &age[i]);
		
		tot = tot + age[i];
	}
	
	avg = tot/5;
	
	printf("The average of ");
	
	for(i=0; i<5; i++)
	{
		printf("%d, ",age[i]);
	}
	
	printf(" is %d.\n", avg);
	
	return 0;
}
