#include<stdio.h>
#include<conio.h>
main()
{
	int bs;
	float a1,a2,gs;
	clrscr();
	printf("Enter ramesh`s basic salary : ");
	scanf("%d",&bs);
	a1=bs*0.4;
	a2=bs*0.2;
	gs=bs-a1-a2;
	printf("Gross salary of ramesh is %f",gs);
	getch();
}