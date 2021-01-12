#include<stdio.h>
#include<string.h>

int function1();
int function2();

int x, y, z;		//Global variables (Permanent Storage)

struct student		//Permanent Storage
{
	int roll;
	char name[20];	
};


int main()
{
	struct student s;
	
	register int a, b, i;		//Register
	
	a = 10;
	
	x = 70;
	
	s.roll = 20;
	strcpy(s.name, "Shiva Kashyap");
	
	for(i=1; i<=5; i++)
		function1();
	
	function2();
	
	
	printf("a = %d\n", a);
	
	printf("x = %d\n", x);
	
	printf("y = %d\n", y);
	
	printf("First position holder:\n");
	printf("Roll No: %d\n", s.roll);
	printf("Name: %s\n", s.name);
	
	return 0;
}


int function1()
{
	static int c=0, d;	//Permanent Storage Area
	
	c++;
	
	printf("c = %d\n", c);
	
	x = 100;
}

int function2()		//Hacker function
{
	struct student s;
	auto signed int e, f;		//local variable (stack)

	y = 200;
	
	s.roll = 21;
	strcpy(s.name, "Dwarika Nath");
}
