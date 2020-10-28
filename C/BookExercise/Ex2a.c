
#include<stdio.h>

int main()
{
	int cp, sp, p, l;
	
	printf("Enter Cost Price: ");
	scanf("%d", &cp);
	
	printf("Enter Selling Price: ");
	scanf("%d", &sp);
	
	if(cp<sp)
	{
		p = sp - cp;
		printf("Profit = %d\n", p);
	}
	else if(sp<cp)
	{
		l = cp - sp;
		printf("Loss = %d\n", l);
	}
	else
	{
		printf("There is no profit or loss.\n");
	}
	
	return 0;
}
