#include<stdio.h>
#include<conio.h>
#include<math.h>
#define Pi 3.14159


void main()
{
	float r,x1,x2,y1,y2,A;
	clrscr();
	x1=0;
	x2=0;
	y1=4;
	y2=5;
	r=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	A=Pi*r*r;
	printf("Result=%f",A);
	getch();
}