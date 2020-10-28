#include<stdio.h>

int main()
{
	float bs, da, hra, gs;
	
	printf("Please enter your basic salary: ");
	scanf("%f", &bs);
	
	da = (bs * (40.0/100.0));
	hra = (bs * (20.0/100.0));
	gs = bs + da + hra;
	
	
	printf("Dearness Allowance: %1.2f\n", da);
	printf("House Rent Allowance: %1.2f\n", hra);
	printf("Gross Salary: %1.2f\n", gs);
	
	return 0;
}
