//Exercise 2(d) - Let Us C

#include<stdio.h>

int main()
{
	int year, yd, nd, day, ld;
	
	printf("Enter a year: ");
	scanf("%d", &year);
	
	yd = year - 1900;
	
	ld = (yd-1)/4;
	
	nd = yd * 365 + ld;
	day = nd % 7;
	
	switch(day)
	{
		case 0:
			printf("Monday\n");
			break;
		case 1:
			printf("Tuesday\n");
			break;
		case 2:
			printf("Wednesday\n");
			break;
		case 3:
			printf("Thursday\n");
			break;
		case 4:
			printf("Friday\n");
			break;
		case 5:
			printf("Saturday\n");
			break;
		case 6:
			printf("Sunday\n");
			break;
		default:
			printf("Invalid input! valid input (1-7)\n");
	}
	
	return 0;
}
