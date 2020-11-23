/*
	ANSI C: Exercise 8.7
*/

#include<stdio.h>

int main()
{
	char v_type[4][11], month[4][6];	//Two-dimensional array to represent table of strings
	float price[4];
	int i;
	
	for(i=0; i<4; i++)
	{
		printf("Enter Vehicle Type: ");
		scanf("%s", v_type[i]);
		printf("Enter Month of Sales: ");
		scanf("%s", month[i]);
		printf("Enter Price: ");
		scanf("%f", &price[i]);
	}
	
	
	printf("%-20s%-20s%-20s\n","Vehicle Type", "Month of Sales", "Price");
	
	for(i=0; i<4; i++)
	{
		printf("%-20s%-20s%-20.0f\n", v_type[i], month[i], price[i]);
	}
	
	return 0;
}
