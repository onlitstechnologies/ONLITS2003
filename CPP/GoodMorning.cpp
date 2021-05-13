#include<iostream>
using namespace std;
int main()
{
	char name[30];
	cout<<"Enter you name: ";
	cin.getline(name, 30);			//multiword string char[]
	cout<<"Good Morning! "<<name<<endl;
	return 0;
}
