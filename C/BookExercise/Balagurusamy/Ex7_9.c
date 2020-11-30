#include<stdio.h>

void display(int n[]);
int sel_sort(int n[]);
int bub_sort(int n[]);

int main()
{
	int nos[] = {89,65,32,78,2,98,33,44,1,52};
	int i;
	
	printf("The unsorted array is:\n");
	display(nos);
	
	i = sel_sort(nos);
	
	printf("The sorted array is (Selection Sort - ASC - i=%d):\n",i);
	display(nos);
	
	i = bub_sort(nos);
	
	printf("The sorted array is (Bubble Sort - DSC - i=%d):\n", i);
	display(nos);
	
	return 0;
}

void display(int n[])
{
	/*Array display is achieved through traversal (visiting)*/
	
	int i;
	
	for(i=0; i<10; i++)
	{
		printf("%d\n", n[i]);
	}
}

void swap(int *a, int *b)
{
	int t;
	
	t = *a;
	*a = *b;
	*b = t;
}

int sel_sort(int n[])
{
	int i, j, l=0;
	for(i=0; i<9; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(n[i] > n[j])
			{
				swap(&n[i], &n[j]);
				l++;
			}
		}
	}
	return l;
}

int bub_sort(int n[])
{
	int i, j, l=0;
	for(i=0; i<9; i++)
	{
		for(j=0; j<9; j++)
		{
			if(n[j] < n[j+1])
			{
				swap(&n[j], &n[j+1]);
				l++;
			}
		}
	}
	return l;
}
