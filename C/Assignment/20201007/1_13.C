#include<stdio.h>
#include<conio.h>
#include<math.h>
#define Pi 3.14159
void main()
{
	float D,r,x1,x2,y1,y2,A;
	clrscr();

	x1=2;
	x2=2;
	y1=5;
	y2=6;
	D=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	r=D/2;
	A=Pi*r*r;
	printf("Result=%f",A);
	getch();
}