/*
	Program to accept and display a string by storing string in a string class object. 
*/
#include<iostream>
using namespace std;
int main()
{
	string name;        //dynamic memory allocation
	cout<<"Enter your name: ";
	//cin>>name;		//single word string
	getline(cin, name);	//multi word string
	cout<<"Good morning! "<<name<<endl;

    cout<<"Size of name is "<<sizeof(name)<<endl;

	return 0;
}

/*
    When we use OOP then we call a function using
    an object
*/