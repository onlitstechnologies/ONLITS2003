#include<stdio.h>

void primeno(int n);
int factors(int n);


int main()
{
	int n;
	
	printf("Please enter a number: ");	//Call
	scanf("%d", &n);					//Call

	primeno(n);		//Function call
	
	return 0;
}

//Function definitions

void primeno(int n)
{
	int f;
	
	if(n==1 || n==0)
	{
		printf("%d is niether prime not composite.\n", n);
	}
	else
	{
		if(n%2==0)
		{
			printf("%d is a composite number.\n", n);
		}
		else
		{
			f = factors(n);		//Function call
	
			if(f==2)
			{
				printf("%d is a prime number.\n", n);
			}
			else
			{
				printf("%d is a composite number.\n", n);
			}
		}
	}
}


int factors(int n)			//Function Header
{						//Function Body Starts
	int r, i, f=0;
	for(i=1; i<=n; i++)
	{
		r = n%i;
		if(r==0)
		{
			f++;
		}
	}
	return f;
}						//Function Body Ends



/*
	6%1=0, 6%2=0, 6%3=0, 6%4=2, 6%5=1, 6%6=0
	
*/
