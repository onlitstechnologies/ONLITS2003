#include<stdio.h>
#include<string.h>

int main()
{
	char str1[] = "Bihar", str2[20];
	int l, d;
	
	l = strlen(str1);
	
	printf("The length of str1[] which contains %s is %d.\n", str1, l);
	
	
	strcpy(str2, str1);
	
	l = strlen(str2);
	
	printf("The length of str2[] which also contains %s is %d.\n", str2, l);
	
	d = strcmp(str1, str2);
	
	printf("The difference between str1 and str2 is %d.\n", d);
	
	strcat(str2, " Patna");

	l = strlen(str2);
		
	printf("The length of str2[] after contatenation which contains %s is %d.\n", str2, l);	
	
	d = strcmp(str1, str2);
	
	printf("And now the difference between str1 and str2 is %d.\n", d);
	
	return 0;
}
