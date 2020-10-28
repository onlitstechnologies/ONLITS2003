#include<stdio.h>

int main()
{
	int no, d, sum=0;
	
	printf("Please enter a five digit number: ");
	scanf("%d", &no);
	
	d = no%10;
	no = no/10;
	sum = sum + d;
	
	d = no%10;
	no = no/10;
	sum = sum + d;
	
	d = no%10;
	no = no/10;
	sum = sum + d;
	
	d = no%10;
	no = no/10;
	sum = sum + d;
	
	d = no%10;
	no = no/10;
	sum = sum + d;
	
	printf("The sum is %d.\n",sum);
	
	return 0;
}
