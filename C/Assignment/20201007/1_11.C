#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float D,x1,x2,y1,y2;
	clrscr();
	printf("ENTER CO-ORDINATES x1,x2,y1,y2=\n");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	D=sqrt((x1-x2)*(x1-x2 )+(y1-y2)*(y1-y2));
	printf("Reslt=%f",D);
	getch();
}