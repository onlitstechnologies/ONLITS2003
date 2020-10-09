#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c,S,d;
printf("\n\tENTER THE THREE SIDES OF A TRIANGLE: ");
scanf("%f %f %f",&a,&b,&c);
S=(a+b+c)/2;
d=sqrt(S*(S-a)*(S-b)*(S-c));
printf("\n\tAREA of the triangle: %f",d);
getch();
}
