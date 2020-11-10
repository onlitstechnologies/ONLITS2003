/*
	Let Us C: Exercise 9D(c)
*/

#include<stdio.h>

int main()
{
	char str[20];
	int i=0;
	
	printf("Please enter a string: ");
	scanf("%[^\n]", str);
	
	while(str[i] != '\0')
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	
	printf("The resultant string is %s.\n", str);
	
	return 0;
}
