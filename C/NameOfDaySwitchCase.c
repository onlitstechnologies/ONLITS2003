/*
PROGRAM TO ACCEPT A NUMBER (1-7) AND DISPLAY THE DAY OF WEEK
CORRESPONDING TO THE NUMBER. (switch-case)
*/

#include<stdio.h>

int main()
{
	int n;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	switch(n)
	{
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Invalid input! valid input (1-7)\n");
	}
	return 0;
}
