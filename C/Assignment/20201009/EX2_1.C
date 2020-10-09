#include<stdio.h>
void main()
{
	int n;
	float i,sum,t;

	printf("enter value of n:\n");
	scanf("%d",&n);
	sum=0;

	for(i=1;i<=n;i++)
		{
		t=1/i;
		sum=sum+t;
}
	printf("%0.3f",sum);

}