#include<iostream>

using namespace std;

int main()
{
	int a, b, c;
	
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Enter another number: ";
	cin>>b;
	
	c = a + b;
	
	cout<<"The sum is "<<c<<"."<<endl;
	
	return 0;
}

/*
	printf is a predefined function that represents standard output stream.
	cout is a predefined object that represents standard output stream (screen).
	
	scanf is predefined function that represents standard input stream
	cin is predefined object that represents standard input stream (keyboard)
	
	Abstraction: Only reveal essential features and hide details
	
	In c++ meaning of a operator may be modified based on requirement
	and this is achieved through "Operator Overloading" (Polymorphism).
	
	<< (used in c as left shift operator)  -	Insertion/put to operator 
	>> (used in c as right shift operator) -	Extraction/get from operator
*/
