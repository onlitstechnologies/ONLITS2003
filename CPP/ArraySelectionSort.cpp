#include<iostream>
using namespace std;
#define SIZE 5
int main()
{
	int no[SIZE];
	cout<<"Enter "<<SIZE<<" numbers below:"<<endl; //cascading put to operator
	for(int i=0; i<SIZE; i++)	//Input
	{
		cin>>no[i];
	}
	
	for(int i=0; i<SIZE-1; i++)	//Sorting
	{
		for(int j=i+1; j<SIZE;j++)
		{
			if(no[i]>no[j])
			{
				int t = no[i];
				no[i] = no[j];
				no[j] = t;
			}
		}
	}
	
	cout<<"The sorted array is:"<<endl;
	
	for(int i=0; i<SIZE; i++)
	{
		cout<<no[i]<<endl;
	}
	return 0;
}
