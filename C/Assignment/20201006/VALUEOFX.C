/*
	Balagurusamy
	Ex. 1.8: 
	Date: 06/10/2020
*/

#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>		//Not supported in standard c language
int main()
{
	int a,b,c,x;
	system("clear");				//system("cls")
	//clrscr();					//Not supported in standard c language
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of c: ");
	scanf("%d",&c);
	x=a/(b-c);
	printf("The value is x is %d.\n",x);
	getchar();					//dummy
	getc(stdin);
	//getch();					//Not supported in standard c language

	return 0;
}


/*
	1. Efficiency (Use less memory and in execute in less)
	2. Correctness (Program should do what it is intended to do)
	3. Robust (Program should work properly even in adverse situation)
	4. Readability (Program should be readable)
	5. Maintainability (Construct you program well by using standards)
	6. Portability (Should be able to work in multiple platforms)
*/
