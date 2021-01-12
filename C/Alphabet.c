#include<stdio.h>

int main()
{
	int noa;
	char ch='y';
		
	while(ch=='y')
	{
		printf("Q. How many letters are there in English Alphabet?\n");
		printf("A. ");
		scanf("%d", &noa);
	
		if(noa==26)
		{
			printf("You are genius!\n");
			break;
		}
		else
		{
			printf("Try again! (y/n): ");
			getchar();
			scanf("%c", &ch);
		}
	}	
	
	return 0;
}
