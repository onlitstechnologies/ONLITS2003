#include<iostream>
using namespace std;
int main()
{
	unsigned int ft=0, st=1, nt, n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Fibonacci Series upto "<<n<<" terms is:"<<endl;
	cout<<ft<<", "<<st;
	for(int i=3; i<=5; i++)
	{
		nt = ft + st;
		cout<<", "<<nt;
		ft = st;
		st = nt;
	}
	cout<<"."<<endl;
	return 0;
}
