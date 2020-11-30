/*
	Balagurusamy Exercise 8.6
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100], str2[100], word[20], new[20];
	char *pos;
	int lennew;
	
	printf("Please enter a string: ");
	scanf("%[^\n]", str1);
	
	printf("Please enter a word to search: ");
	scanf("%s", word);
	
	printf("Please enter the new to replace %s: ", word);
	scanf("%s", new);
	
	pos = strstr(str1, word);
	
	//lennew = strlen(new);
	
	strncpy(str2, str1, 25);
	
	//printf("pos=%d\n", *pos);
	
	strcat(str2, "C");
	
	printf("str2 = %s\n", str2);
	
	
	return 0;
}
