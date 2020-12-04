/*
	An Example on Structure in C (Time)
*/

#include<stdio.h>

struct time
{
	int hh;
	int mm;
	int ss;
};

int main()
{
	struct time t1;
	
	printf("Please enter time (hh:mm:ss): ");
	scanf("%d:%d:%d",&t1.hh,&t1.mm,&t1.ss);
	
	printf("The time you entered is %d:%d:%d.\n",t1.hh,t1.mm,t1.ss);
	
	return 0;
}
