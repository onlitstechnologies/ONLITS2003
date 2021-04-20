#include<iostream>
using namespace std;
int main()
{
	int n, fact=1, i;
	
	cout<<"Please enter a number: ";
	cin>>n;
	
	
	for(i=n; i>=1; i--)
	{
		fact = fact * i;
	}
	
	cout<<n<<"! is "<<fact<<endl;
	
	return 0;
}

/*
	printf was replaced cout (benefit)
	
	
*/
