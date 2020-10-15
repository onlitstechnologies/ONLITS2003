//Exercise 2.1

#include<stdio.h>

int main()
{
	int n;
	float i,sum=0.0F,t;

	printf("Enter value of n:\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		t=1/i;
		sum=sum+t;
	}
	printf("%f\n",sum);

	return 0;
}
