#include<stdio.h>

int main()
{
	int no, nno=0, d;
	
	printf("Please enter a five digit number: ");
	scanf("%d", &no);
	
	d = no%10;
	d++;
	no = no/10;
	nno = d + nno;
	
	d = no%10;
	d++;
	if(d==10)
		d=0;
	no = no/10;
	nno = (d * 10) + nno;
	
	d = no%10;
	d++;
	if(d==10)
		d=0;
	no = no/10;
	nno = (d * 100) + nno;
	
	d = no%10;
	d++;
	if(d==10)
		d=0;
	no = no/10;
	nno = (d * 1000) + nno;
	
	d = no%10;
	d++;
	if(d==10)
		d=0;
	no = no/10;
	nno = (d * 10000) + nno;
	
	printf("The nno is %d.\n",nno);
	
	return 0;
}
