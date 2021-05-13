#include<iostream>
using namespace std;
int main()
{
	string name;
	cout<<"Enter you name: ";
	getline(cin, name);			//multiword string
	cout<<"Good Morning! "<<name<<endl;
	return 0;
}
