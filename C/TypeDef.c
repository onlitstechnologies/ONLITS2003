#include<stdio.h>

int main()
{
	typedef int marks;
	 
	marks e, m, s, tm;
	
	printf("Enter the marks of English: ");
	scanf("%d", &e);
	
	printf("Enter the marks of Mathematics: ");
	scanf("%d", &m);
	
	printf("Enter the marks of Science: ");
	scanf("%d", &s);
	
	tm = e + m + s;
	
	printf("The total marks is %d.\n", tm);
	
	return 0;	
}

/*
	11 	- 	integer
	11	-	price, age, lane no, roll no etc.
*/
