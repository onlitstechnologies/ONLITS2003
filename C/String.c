/*
	PROGRAM TO ACCEPT A STRING DISPLAY IT
*/

#include<stdio.h>

int main()
{
	int i;
	char ch[30];
	
	printf("Please enter your name: ");
	
	scanf("%[^\n]", ch);
	//gets(ch);				Dangerous to use
		
	printf("Ok! your name is %s.\n", ch);
	
	printf("The content of array is: ");
	
	for(i=0; i<30; i++)		//Explanation of gabage value in char[]
	{
		printf("%c", ch[i]);
	}
	
	return 0;
}

/*
	For single word string we use %s.
	For multiword string we use %[^\n].
*/
