/*
	PROGRAMMING IN ANSI C
	EXERCISE: 8.3
*/

#include<stdio.h>

char* substr(char*, int, int);

int main()
{
	char str[20];
	int i, l;
	
	printf("Please enter a string: ");
	scanf("%s", str);
	
	printf("From which index characters has to be extracted: ");
	scanf("%d", &i);
	
	printf("How many characters has to be extracted: ");
	scanf("%d", &l);
	
	
	printf("The extracted characters are: %s", substr(str, i, l));
	
	printf("\n");
	
	return 0;
}

char* substr(char *s, int i, int l)
{
	char sub[20];
	
	int j, c;
	
	char *p = sub;
	
	s = s + i;
	
	for(c=i, j=0; c<i+l; c++, j++, s++)
	{
		sub[j] = *s;
	}
	
	sub[j]='\0';
	
	return p;
}


