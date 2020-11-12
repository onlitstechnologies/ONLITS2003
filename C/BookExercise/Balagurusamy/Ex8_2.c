/*
	PROGRAMMING IN ANSI C
	EXERCISE 8.2 (WITHOUT LIBRARY FUNCTION)
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int i=0, c, d=0;
	char ans[20], cans[] = "Dennis Ritche";
	for(c=1; c<=3; c++)
	{
		printf("Q. Who is the inventory of C?\n");
		printf("A. ");
	
		scanf("%[^\n]", ans);
		getchar();
		
		while(ans[i] != '\0' || cans[i] != '\0')
		{
			if(ans[i] != cans[i])
			{
				d=1;
				break;
			}
			
			i++;
		}
		
		
		if(d == 0)
		{
			printf("Good!\n");
			break;
		}
		else
		{
			if(c==3)
				printf("Your attempts are over. The correct answer is Dennis Ritche.\n");
			else
				printf("Try Again!\n");
		}
	}
	
	return 0;
}
