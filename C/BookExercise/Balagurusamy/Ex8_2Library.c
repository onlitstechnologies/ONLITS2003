/*
	PROGRAMMING IN ANSI C
	EXERCISE 8.2 (WITH LIBRARY FUNCTION)
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char ans[20];
	for(i=1; i<=3; i++)
	{
		printf("Q. Who is the inventory of C?\n");
		printf("A. ");
	
		scanf("%[^\n]", ans);
		getchar();
		
		if(strcmp(ans,"Dennis Ritche") == 0 || strcmp(ans,"dennis ritche") == 0 || strcmp(ans,"DENNIS RITCHE") == 0)
		{
			printf("Good!\n");
			break;
		}
		else
		{
			if(i==3)
				printf("Your attempts are over. The correct answer is Dennis Ritche.\n");
			else
				printf("Try Again!\n");
		}
	}
	
	return 0;
}
