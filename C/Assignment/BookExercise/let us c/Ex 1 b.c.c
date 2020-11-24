#include<stdio.h>
#include<conio.h>
main();
{
	float dkm,dm,df,di,dc;
	clrscr();
	printf("Enter distance between two cities : ");
	scanf("%f",&dkm);
	dm=dkm*1000;
	df=dkm*3280.8399;
	di=dkm*39370.078;
	dc=dkm*100000;
	printf("\ndistance  in \nMeters = %f\nFeets = %f\nInches =%f\nCentimeters =%f",dm,df,di,dc);
	getch();
}
	