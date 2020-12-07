/*
	Balagurusamy -  Exercise-10.1
*/

#include<stdio.h>

void input();		//Function Prototype
void display();

struct time_struct
{
	int hour;
	int minute;
	int second;
}t;

//struct time_struct t;		//Global Declaration

int main()
{
	input();
	display();
	return 0;
}

void input()
{
	printf("Enter hour: ");
	scanf("%d", &t.hour);
	printf("Enter minute: ");
	scanf("%d", &t.minute);
	printf("Enter second: ");
	scanf("%d", &t.second);
}

void display()
{	
	printf("The entered time is:\n");
	printf("%d:%d:%d\n",t.hour,t.minute,t.second);
}
