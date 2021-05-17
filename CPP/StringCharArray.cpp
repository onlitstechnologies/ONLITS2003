/*
	Program to accept and display a string by storing string in a char array. 
*/
#include<iostream>
using namespace std;
int main()
{
	char name[30];		//static memory allocation
	cout<<"Enter your name: ";
	//cin>>name;		//single word string
	cin.getline(name, 30);	//multi word string
	cout<<"Good morning! "<<name<<endl;

	cout<<"Size of name is "<<sizeof(name)<<endl;
	return 0;
}

/*
	cin is an object of istream class
	cout is an object of ostream class
*/
