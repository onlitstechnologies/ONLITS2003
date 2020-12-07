/*
	Balagurusamy -  Exercise-10.1
*/

#include<stdio.h>

struct time_struct
{
	int hour;
	int minute;
	int second;
};

int main()
{
	struct time_struct t;
	
	printf("Enter hour: ");
	scanf("%d", &t.hour);
	printf("Enter minute: ");
	scanf("%d", &t.minute);
	printf("Enter second: ");
	scanf("%d", &t.second);
	
	printf("The entered time is:\n");
	printf("%d:%d:%d\n",t.hour,t.minute,t.second);
	
	return 0;
}
