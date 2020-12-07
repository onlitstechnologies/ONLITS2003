/*
	Balagurusamy -  Exercise-10.1
*/

#include<stdio.h>

void input();		//Function Prototype
void display();
void update();

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
	printf("Time before incrementing by 1 second is:\n");
	display();
	update();
	printf("Time after incrementing by 1 second is:\n");	
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


void update()
{
	t.second++;
	
	if(t.second>=60)
	{
		t.second=0;
		t.minute++;
	}
	
	if(t.minute>=60)
	{
		t.minute=0;
		t.hour++;
	}
	
	if(t.hour>=24)
	{
		t.hour=0;
	}
}

