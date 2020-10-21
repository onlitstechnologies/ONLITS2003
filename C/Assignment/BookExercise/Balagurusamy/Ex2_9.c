/*Ex. 2.9: Program to illustrate the use of typedef keyword*/

/*Accept marks scored by a student in any three subjects and find his total marks obtained.*/


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
	
	printf("The total marks obtained is %d.", tm);
	
	return 0;
}